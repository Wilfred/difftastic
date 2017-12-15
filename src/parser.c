#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 216
#define SYMBOL_COUNT 168
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
  anon_sym_deriving = 14,
  anon_sym_newtype = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_BANG = 19,
  anon_sym_type = 20,
  sym_variable_identifier = 21,
  sym_constructor_identifier = 22,
  sym_module_identifier = 23,
  anon_sym_case = 24,
  anon_sym_class = 25,
  anon_sym_default = 26,
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
  sym_import = 127,
  sym_import_specification = 128,
  sym__top_level_declaration = 129,
  sym_algebraic_datatype = 130,
  sym_constructors = 131,
  sym_constructor = 132,
  sym_deriving = 133,
  sym_newtype = 134,
  sym_new_constructor = 135,
  sym_fields = 136,
  sym_field = 137,
  sym_strict = 138,
  sym_type_synonym = 139,
  sym__literal = 140,
  sym__identifier = 141,
  sym_simple_type = 142,
  sym_reserved_identifier = 143,
  sym_integer = 144,
  sym_char = 145,
  sym_string = 146,
  sym__gap = 147,
  sym__graphic = 148,
  sym__small = 149,
  sym__large = 150,
  sym__symbol = 151,
  sym__special = 152,
  sym__escape = 153,
  sym__char_escape = 154,
  sym__ascii = 155,
  sym__cntrl = 156,
  aux_sym_program_repeat1 = 157,
  aux_sym_module_exports_repeat1 = 158,
  aux_sym_export_repeat1 = 159,
  aux_sym_import_specification_repeat1 = 160,
  aux_sym_constructors_repeat1 = 161,
  aux_sym_fields_repeat1 = 162,
  aux_sym_field_repeat1 = 163,
  aux_sym_type_synonym_repeat1 = 164,
  aux_sym_string_repeat1 = 165,
  aux_sym__escape_repeat1 = 166,
  aux_sym__escape_repeat2 = 167,
  alias_sym_module_body = 168,
  alias_sym_type_constructor = 169,
  alias_sym_type_variable = 170,
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
  [anon_sym_deriving] = "deriving",
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
  [sym_import] = "import",
  [sym_import_specification] = "import_specification",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_constructors] = "constructors",
  [sym_constructor] = "constructor",
  [sym_deriving] = "deriving",
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
  [anon_sym_deriving] = {
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
  [sym_import] = {
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
  [sym_deriving] = {
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
        ADVANCE(264);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
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
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
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
        ADVANCE(201);
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
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      if (lookahead == 's')
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
      if (lookahead == 'e')
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
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(208);
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
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
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'm')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
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
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
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
    case 220:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(226);
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
      if (lookahead == 'i')
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
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
    case 225:
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
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(227);
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
      if (lookahead == 'a')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
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
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 't')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
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
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(238);
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
      if (lookahead == 'l')
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
      if (lookahead == 'e')
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
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
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
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
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
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(251);
      if (lookahead == 'y')
        ADVANCE(254);
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
      if (lookahead == 'e')
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
      if (lookahead == 'n')
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
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
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
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(260);
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
      if (lookahead == 'e')
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
    case 262:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(262);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(262);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(263);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(264);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 265:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'O')
        ADVANCE(267);
      if (lookahead == 'X')
        ADVANCE(269);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == 'o')
        ADVANCE(267);
      if (lookahead == 'x')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(268);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(270);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        SKIP(165);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(275);
      if (lookahead == 'l')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(286);
      if (lookahead == 'o')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'u')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'o')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'g')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'p')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'o')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'r')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 's')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'x')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(315);
      if (lookahead == 'r')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'c')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'o')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'u')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'w')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 't')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'y')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'p')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'h')
        ADVANCE(342);
      if (lookahead == 'y')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'p')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'h')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'r')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(353);
      if (lookahead == '.')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(354);
      if (lookahead == '.')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(364);
      if (lookahead == 'w')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(357);
      if (lookahead == 'w')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(364);
      if (lookahead == 'w')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 364:
      if (lookahead == 'n')
        SKIP(355);
      END_STATE();
    case 365:
      if (lookahead == 'h')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'e')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'r')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'e')
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(382);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(383);
      if (lookahead == 'q')
        ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(370);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 371:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(371);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(372);
      if (lookahead == 'q')
        ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
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
    case 382:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(382);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(383);
      if (lookahead == 'q')
        ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(370);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 383:
      if (lookahead == 'n')
        SKIP(370);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'u')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '.')
        ADVANCE(398);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(399);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(394);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(395);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(396);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '.')
        ADVANCE(398);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(399);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 398:
      if (lookahead == '.')
        ADVANCE(104);
      END_STATE();
    case 399:
      if (lookahead == 'n')
        SKIP(393);
      END_STATE();
    case 400:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(403);
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
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 401:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(401);
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
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(402);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(403);
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
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 404:
      if (lookahead == 'n')
        SKIP(400);
      END_STATE();
    case 405:
      if (lookahead == '\t')
        SKIP(405);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 406:
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(410);
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
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(410);
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
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      if (lookahead == '\t')
        SKIP(405);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 418:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(421);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(424);
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
        ADVANCE(411);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(421);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(424);
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
        ADVANCE(411);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      if (lookahead == '\t')
        ADVANCE(421);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(424);
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
        ADVANCE(411);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(421);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(424);
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
        ADVANCE(411);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 426:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(437);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(438);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'a')
        ADVANCE(439);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'h')
        ADVANCE(441);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 427:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(427);
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
        ADVANCE(428);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
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
    case 431:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
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
    case 437:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(437);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(438);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'a')
        ADVANCE(439);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'h')
        ADVANCE(441);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 438:
      if (lookahead == 'n')
        SKIP(426);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 's')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'd')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'g')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 447:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(448);
      if (lookahead == '\r')
        ADVANCE(458);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(459);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(447);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 448:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(448);
      if (lookahead == '\r')
        ADVANCE(448);
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
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(450);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(448);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 449:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(448);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(451);
      if (lookahead == 'o')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'r')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
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
    case 458:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(448);
      if (lookahead == '\r')
        ADVANCE(458);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(459);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(447);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 459:
      if (lookahead == 'n')
        SKIP(447);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(461);
      if (lookahead == 'o')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'f')
        ADVANCE(287);
      if (lookahead == 'r')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'v')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'i')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(273);
      if (lookahead == 'g')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      END_STATE();
    case 468:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == 'A')
        ADVANCE(522);
      if (lookahead == 'B')
        ADVANCE(525);
      if (lookahead == 'C')
        ADVANCE(529);
      if (lookahead == 'D')
        ADVANCE(533);
      if (lookahead == 'E')
        ADVANCE(543);
      if (lookahead == 'F')
        ADVANCE(554);
      if (lookahead == 'G')
        ADVANCE(557);
      if (lookahead == 'H')
        ADVANCE(558);
      if (lookahead == 'L')
        ADVANCE(559);
      if (lookahead == 'N')
        ADVANCE(560);
      if (lookahead == 'O')
        ADVANCE(561);
      if (lookahead == 'R')
        ADVANCE(562);
      if (lookahead == 'S')
        ADVANCE(563);
      if (lookahead == 'U')
        ADVANCE(564);
      if (lookahead == 'V')
        ADVANCE(565);
      if (lookahead == 'X')
        ADVANCE(566);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(468);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(417);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(469);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == 'A')
        ADVANCE(470);
      if (lookahead == 'B')
        ADVANCE(473);
      if (lookahead == 'C')
        ADVANCE(477);
      if (lookahead == 'D')
        ADVANCE(481);
      if (lookahead == 'E')
        ADVANCE(491);
      if (lookahead == 'F')
        ADVANCE(502);
      if (lookahead == 'G')
        ADVANCE(505);
      if (lookahead == 'H')
        ADVANCE(506);
      if (lookahead == 'L')
        ADVANCE(507);
      if (lookahead == 'N')
        ADVANCE(508);
      if (lookahead == 'O')
        ADVANCE(509);
      if (lookahead == 'R')
        ADVANCE(510);
      if (lookahead == 'S')
        ADVANCE(511);
      if (lookahead == 'U')
        ADVANCE(512);
      if (lookahead == 'V')
        ADVANCE(513);
      if (lookahead == 'X')
        ADVANCE(514);
      if (lookahead == '\\')
        ADVANCE(515);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'b')
        ADVANCE(517);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(519);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(472);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(474);
      if (lookahead == 'S')
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(475);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(478);
      if (lookahead == 'R')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(479);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(482);
      if (lookahead == 'E')
        ADVANCE(487);
      if (lookahead == 'L')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(483);
      if (lookahead == '2')
        ADVANCE(484);
      if (lookahead == '3')
        ADVANCE(485);
      if (lookahead == '4')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(488);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(492);
      if (lookahead == 'N')
        ADVANCE(493);
      if (lookahead == 'O')
        ADVANCE(495);
      if (lookahead == 'S')
        ADVANCE(497);
      if (lookahead == 'T')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(500);
      if (lookahead == 'X')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(503);
      if (lookahead == 'S')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
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
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(469);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == 'A')
        ADVANCE(522);
      if (lookahead == 'B')
        ADVANCE(525);
      if (lookahead == 'C')
        ADVANCE(529);
      if (lookahead == 'D')
        ADVANCE(533);
      if (lookahead == 'E')
        ADVANCE(543);
      if (lookahead == 'F')
        ADVANCE(554);
      if (lookahead == 'G')
        ADVANCE(557);
      if (lookahead == 'H')
        ADVANCE(558);
      if (lookahead == 'L')
        ADVANCE(559);
      if (lookahead == 'N')
        ADVANCE(560);
      if (lookahead == 'O')
        ADVANCE(561);
      if (lookahead == 'R')
        ADVANCE(562);
      if (lookahead == 'S')
        ADVANCE(563);
      if (lookahead == 'U')
        ADVANCE(564);
      if (lookahead == 'V')
        ADVANCE(565);
      if (lookahead == 'X')
        ADVANCE(566);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(468);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(417);
      END_STATE();
    case 522:
      if (lookahead == 'C')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 'K')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 525:
      if (lookahead == 'E')
        ADVANCE(526);
      if (lookahead == 'S')
        ADVANCE(528);
      END_STATE();
    case 526:
      if (lookahead == 'L')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 529:
      if (lookahead == 'A')
        ADVANCE(530);
      if (lookahead == 'R')
        ADVANCE(532);
      END_STATE();
    case 530:
      if (lookahead == 'N')
        ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 533:
      if (lookahead == 'C')
        ADVANCE(534);
      if (lookahead == 'E')
        ADVANCE(539);
      if (lookahead == 'L')
        ADVANCE(541);
      END_STATE();
    case 534:
      if (lookahead == '1')
        ADVANCE(535);
      if (lookahead == '2')
        ADVANCE(536);
      if (lookahead == '3')
        ADVANCE(537);
      if (lookahead == '4')
        ADVANCE(538);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 539:
      if (lookahead == 'L')
        ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 541:
      if (lookahead == 'E')
        ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 543:
      if (lookahead == 'M')
        ADVANCE(544);
      if (lookahead == 'N')
        ADVANCE(545);
      if (lookahead == 'O')
        ADVANCE(547);
      if (lookahead == 'S')
        ADVANCE(549);
      if (lookahead == 'T')
        ADVANCE(551);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 545:
      if (lookahead == 'Q')
        ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 547:
      if (lookahead == 'T')
        ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 549:
      if (lookahead == 'C')
        ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 551:
      if (lookahead == 'B')
        ADVANCE(552);
      if (lookahead == 'X')
        ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 554:
      if (lookahead == 'F')
        ADVANCE(555);
      if (lookahead == 'S')
        ADVANCE(556);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 557:
      if (lookahead == 'S')
        ADVANCE(115);
      END_STATE();
    case 558:
      if (lookahead == 'T')
        ADVANCE(117);
      END_STATE();
    case 559:
      if (lookahead == 'F')
        ADVANCE(119);
      END_STATE();
    case 560:
      if (lookahead == 'A')
        ADVANCE(121);
      if (lookahead == 'U')
        ADVANCE(123);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 562:
      if (lookahead == 'S')
        ADVANCE(126);
      END_STATE();
    case 563:
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
    case 564:
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 565:
      if (lookahead == 'T')
        ADVANCE(141);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 572:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(585);
      if (lookahead == 'B')
        ADVANCE(586);
      if (lookahead == 'C')
        ADVANCE(587);
      if (lookahead == 'D')
        ADVANCE(588);
      if (lookahead == 'E')
        ADVANCE(589);
      if (lookahead == 'F')
        ADVANCE(590);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(561);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(566);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(574);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(576);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(577);
      if (lookahead == 'B')
        ADVANCE(578);
      if (lookahead == 'C')
        ADVANCE(579);
      if (lookahead == 'D')
        ADVANCE(580);
      if (lookahead == 'E')
        ADVANCE(581);
      if (lookahead == 'F')
        ADVANCE(582);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(509);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(514);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(583);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'b')
        ADVANCE(517);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(519);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(520);
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
        ADVANCE(411);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(574);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(576);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(577);
      if (lookahead == 'B')
        ADVANCE(578);
      if (lookahead == 'C')
        ADVANCE(579);
      if (lookahead == 'D')
        ADVANCE(580);
      if (lookahead == 'E')
        ADVANCE(581);
      if (lookahead == 'F')
        ADVANCE(582);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(509);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(514);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(583);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'b')
        ADVANCE(517);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(519);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(520);
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
        ADVANCE(411);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '\t')
        ADVANCE(574);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(576);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(577);
      if (lookahead == 'B')
        ADVANCE(578);
      if (lookahead == 'C')
        ADVANCE(579);
      if (lookahead == 'D')
        ADVANCE(580);
      if (lookahead == 'E')
        ADVANCE(581);
      if (lookahead == 'F')
        ADVANCE(582);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(509);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(514);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(583);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'b')
        ADVANCE(517);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(519);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(520);
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
        ADVANCE(411);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(574);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(576);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(577);
      if (lookahead == 'B')
        ADVANCE(578);
      if (lookahead == 'C')
        ADVANCE(579);
      if (lookahead == 'D')
        ADVANCE(580);
      if (lookahead == 'E')
        ADVANCE(581);
      if (lookahead == 'F')
        ADVANCE(582);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(509);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(514);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(583);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'b')
        ADVANCE(517);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(519);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(520);
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
        ADVANCE(411);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(474);
      if (lookahead == 'S')
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(478);
      if (lookahead == 'R')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(482);
      if (lookahead == 'E')
        ADVANCE(487);
      if (lookahead == 'L')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(492);
      if (lookahead == 'N')
        ADVANCE(493);
      if (lookahead == 'O')
        ADVANCE(495);
      if (lookahead == 'S')
        ADVANCE(497);
      if (lookahead == 'T')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(503);
      if (lookahead == 'S')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(575);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(585);
      if (lookahead == 'B')
        ADVANCE(586);
      if (lookahead == 'C')
        ADVANCE(587);
      if (lookahead == 'D')
        ADVANCE(588);
      if (lookahead == 'E')
        ADVANCE(589);
      if (lookahead == 'F')
        ADVANCE(590);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(561);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(566);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(523);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(526);
      if (lookahead == 'S')
        ADVANCE(528);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(530);
      if (lookahead == 'R')
        ADVANCE(532);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(534);
      if (lookahead == 'E')
        ADVANCE(539);
      if (lookahead == 'L')
        ADVANCE(541);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(544);
      if (lookahead == 'N')
        ADVANCE(545);
      if (lookahead == 'O')
        ADVANCE(547);
      if (lookahead == 'S')
        ADVANCE(549);
      if (lookahead == 'T')
        ADVANCE(551);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(555);
      if (lookahead == 'S')
        ADVANCE(556);
      END_STATE();
    case 591:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(595);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(596);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(591);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(597);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 593:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(592);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(594);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(592);
      if (lookahead == '\r')
        ADVANCE(595);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(596);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(591);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(597);
      END_STATE();
    case 596:
      if (lookahead == 'n')
        SKIP(591);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(597);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(600);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 602:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(606);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(608);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(605);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(603);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(606);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(608);
      END_STATE();
    case 607:
      if (lookahead == 'n')
        SKIP(602);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 609:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(609);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(615);
      END_STATE();
    case 610:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(610);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(612);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(609);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(615);
      END_STATE();
    case 614:
      if (lookahead == 'n')
        SKIP(609);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 616:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(621);
      if (lookahead == '\\')
        SKIP(622);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(616);
      END_STATE();
    case 617:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == ':')
        ADVANCE(618);
      if (lookahead == '\\')
        ADVANCE(619);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(617);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(617);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == ':')
        ADVANCE(621);
      if (lookahead == '\\')
        SKIP(622);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(616);
      END_STATE();
    case 621:
      if (lookahead == ':')
        ADVANCE(107);
      END_STATE();
    case 622:
      if (lookahead == 'n')
        SKIP(616);
      END_STATE();
    case 623:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(627);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'h')
        ADVANCE(441);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(623);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 624:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(624);
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
        ADVANCE(625);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(624);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(624);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(627);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'h')
        ADVANCE(441);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(623);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 627:
      if (lookahead == 'n')
        SKIP(623);
      END_STATE();
    case 628:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(630);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(632);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(633);
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
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(630);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(632);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(633);
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
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '\t')
        ADVANCE(630);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(632);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(633);
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
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(630);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(632);
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
        ADVANCE(408);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(409);
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
        ADVANCE(633);
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
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(415);
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
        ADVANCE(416);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 635:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 636:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(636);
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
        ADVANCE(637);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(450);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(250);
      if (lookahead == 'w')
        ADVANCE(257);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(636);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(636);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead == '0')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == '_')
        ADVANCE(272);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'e')
        ADVANCE(293);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'l')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(326);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'o')
        ADVANCE(339);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead == 'w')
        ADVANCE(348);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(353);
      END_STATE();
    case 639:
      if (lookahead == 'n')
        SKIP(635);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 355},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 370},
  [5] = {.lex_state = 393},
  [6] = {.lex_state = 393},
  [7] = {.lex_state = 393},
  [8] = {.lex_state = 400},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 405},
  [11] = {.lex_state = 418},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 355},
  [19] = {.lex_state = 393},
  [20] = {.lex_state = 426},
  [21] = {.lex_state = 426},
  [22] = {.lex_state = 447},
  [23] = {.lex_state = 447},
  [24] = {.lex_state = 447},
  [25] = {.lex_state = 393},
  [26] = {.lex_state = 393},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 468},
  [36] = {.lex_state = 418},
  [37] = {.lex_state = 418},
  [38] = {.lex_state = 418},
  [39] = {.lex_state = 418},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 418},
  [42] = {.lex_state = 418},
  [43] = {.lex_state = 572},
  [44] = {.lex_state = 418},
  [45] = {.lex_state = 418},
  [46] = {.lex_state = 165},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 393},
  [49] = {.lex_state = 355},
  [50] = {.lex_state = 426},
  [51] = {.lex_state = 393},
  [52] = {.lex_state = 393},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 165},
  [55] = {.lex_state = 447},
  [56] = {.lex_state = 447},
  [57] = {.lex_state = 447},
  [58] = {.lex_state = 393},
  [59] = {.lex_state = 447},
  [60] = {.lex_state = 447},
  [61] = {.lex_state = 165},
  [62] = {.lex_state = 447},
  [63] = {.lex_state = 393},
  [64] = {.lex_state = 393},
  [65] = {.lex_state = 591},
  [66] = {.lex_state = 393},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 598},
  [71] = {.lex_state = 602},
  [72] = {.lex_state = 609},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 418},
  [75] = {.lex_state = 418},
  [76] = {.lex_state = 598},
  [77] = {.lex_state = 602},
  [78] = {.lex_state = 609},
  [79] = {.lex_state = 418},
  [80] = {.lex_state = 418},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 355},
  [84] = {.lex_state = 616},
  [85] = {.lex_state = 616},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 393},
  [88] = {.lex_state = 165},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 616},
  [91] = {.lex_state = 623},
  [92] = {.lex_state = 623},
  [93] = {.lex_state = 393},
  [94] = {.lex_state = 447},
  [95] = {.lex_state = 447},
  [96] = {.lex_state = 165},
  [97] = {.lex_state = 393},
  [98] = {.lex_state = 165},
  [99] = {.lex_state = 393},
  [100] = {.lex_state = 447},
  [101] = {.lex_state = 393},
  [102] = {.lex_state = 393},
  [103] = {.lex_state = 447},
  [104] = {.lex_state = 393},
  [105] = {.lex_state = 393},
  [106] = {.lex_state = 447},
  [107] = {.lex_state = 165},
  [108] = {.lex_state = 165},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 602},
  [112] = {.lex_state = 602},
  [113] = {.lex_state = 609},
  [114] = {.lex_state = 609},
  [115] = {.lex_state = 418},
  [116] = {.lex_state = 418},
  [117] = {.lex_state = 418},
  [118] = {.lex_state = 418},
  [119] = {.lex_state = 628},
  [120] = {.lex_state = 628},
  [121] = {.lex_state = 393},
  [122] = {.lex_state = 355},
  [123] = {.lex_state = 616},
  [124] = {.lex_state = 393},
  [125] = {.lex_state = 165},
  [126] = {.lex_state = 623},
  [127] = {.lex_state = 393},
  [128] = {.lex_state = 393},
  [129] = {.lex_state = 165},
  [130] = {.lex_state = 616},
  [131] = {.lex_state = 165},
  [132] = {.lex_state = 616},
  [133] = {.lex_state = 165},
  [134] = {.lex_state = 616},
  [135] = {.lex_state = 447},
  [136] = {.lex_state = 393},
  [137] = {.lex_state = 616},
  [138] = {.lex_state = 616},
  [139] = {.lex_state = 635},
  [140] = {.lex_state = 447},
  [141] = {.lex_state = 165},
  [142] = {.lex_state = 165},
  [143] = {.lex_state = 602},
  [144] = {.lex_state = 609},
  [145] = {.lex_state = 418},
  [146] = {.lex_state = 628},
  [147] = {.lex_state = 616},
  [148] = {.lex_state = 393},
  [149] = {.lex_state = 355},
  [150] = {.lex_state = 355},
  [151] = {.lex_state = 616},
  [152] = {.lex_state = 165},
  [153] = {.lex_state = 355},
  [154] = {.lex_state = 616},
  [155] = {.lex_state = 616},
  [156] = {.lex_state = 393},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 393},
  [159] = {.lex_state = 616},
  [160] = {.lex_state = 393},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 616},
  [163] = {.lex_state = 447},
  [164] = {.lex_state = 393},
  [165] = {.lex_state = 393},
  [166] = {.lex_state = 616},
  [167] = {.lex_state = 393},
  [168] = {.lex_state = 447},
  [169] = {.lex_state = 616},
  [170] = {.lex_state = 616},
  [171] = {.lex_state = 616},
  [172] = {.lex_state = 616},
  [173] = {.lex_state = 616},
  [174] = {.lex_state = 616},
  [175] = {.lex_state = 393},
  [176] = {.lex_state = 616},
  [177] = {.lex_state = 355},
  [178] = {.lex_state = 616},
  [179] = {.lex_state = 165},
  [180] = {.lex_state = 616},
  [181] = {.lex_state = 393},
  [182] = {.lex_state = 165},
  [183] = {.lex_state = 616},
  [184] = {.lex_state = 393},
  [185] = {.lex_state = 616},
  [186] = {.lex_state = 393},
  [187] = {.lex_state = 393},
  [188] = {.lex_state = 616},
  [189] = {.lex_state = 393},
  [190] = {.lex_state = 447},
  [191] = {.lex_state = 616},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 616},
  [194] = {.lex_state = 616},
  [195] = {.lex_state = 355},
  [196] = {.lex_state = 616},
  [197] = {.lex_state = 393},
  [198] = {.lex_state = 616},
  [199] = {.lex_state = 616},
  [200] = {.lex_state = 616},
  [201] = {.lex_state = 616},
  [202] = {.lex_state = 616},
  [203] = {.lex_state = 165},
  [204] = {.lex_state = 616},
  [205] = {.lex_state = 616},
  [206] = {.lex_state = 616},
  [207] = {.lex_state = 355},
  [208] = {.lex_state = 616},
  [209] = {.lex_state = 616},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 616},
  [212] = {.lex_state = 616},
  [213] = {.lex_state = 616},
  [214] = {.lex_state = 616},
  [215] = {.lex_state = 165},
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
    [sym_import] = STATE(15),
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
    [sym__identifier] = STATE(23),
    [sym_simple_type] = STATE(24),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym__identifier] = STATE(26),
    [sym_simple_type] = STATE(27),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(26),
    [sym_simple_type] = STATE(28),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_module_identifier] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
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
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_module] = ACTIONS(64),
    [anon_sym_where] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(64),
    [anon_sym_data] = ACTIONS(64),
    [anon_sym_newtype] = ACTIONS(64),
    [anon_sym_type] = ACTIONS(64),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [anon_sym_case] = ACTIONS(64),
    [anon_sym_class] = ACTIONS(64),
    [anon_sym_default] = ACTIONS(64),
    [anon_sym_do] = ACTIONS(64),
    [anon_sym_else] = ACTIONS(64),
    [anon_sym_foreign] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_in] = ACTIONS(64),
    [anon_sym_infix] = ACTIONS(64),
    [anon_sym_infixl] = ACTIONS(64),
    [anon_sym_infixr] = ACTIONS(64),
    [anon_sym_instance] = ACTIONS(64),
    [anon_sym_let] = ACTIONS(64),
    [anon_sym_of] = ACTIONS(64),
    [anon_sym_then] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym__integer_literal] = ACTIONS(64),
    [sym__octal_literal] = ACTIONS(64),
    [sym__hexidecimal_literal] = ACTIONS(64),
  },
  [10] = {
    [sym__graphic] = STATE(32),
    [sym__small] = STATE(33),
    [sym__large] = STATE(33),
    [sym__symbol] = STATE(33),
    [sym__special] = STATE(33),
    [sym__escape] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym__] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(68),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [sym__space] = ACTIONS(76),
  },
  [11] = {
    [sym__gap] = STATE(39),
    [sym__graphic] = STATE(39),
    [sym__small] = STATE(41),
    [sym__large] = STATE(41),
    [sym__symbol] = STATE(41),
    [sym__special] = STATE(41),
    [sym__escape] = STATE(39),
    [aux_sym_string_repeat1] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym__] = ACTIONS(88),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(88),
    [sym__ascii_large] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(86),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_1] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(84),
    [sym__space] = ACTIONS(100),
    [sym__newline] = ACTIONS(100),
    [sym__tab] = ACTIONS(100),
    [sym__vertical_tab] = ACTIONS(100),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
    [anon_sym_import] = ACTIONS(104),
    [anon_sym_data] = ACTIONS(104),
    [anon_sym_newtype] = ACTIONS(104),
    [anon_sym_type] = ACTIONS(104),
    [sym_variable_identifier] = ACTIONS(106),
    [sym_constructor_identifier] = ACTIONS(106),
    [sym_module_identifier] = ACTIONS(106),
    [anon_sym_case] = ACTIONS(104),
    [anon_sym_class] = ACTIONS(104),
    [anon_sym_default] = ACTIONS(104),
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
    [anon_sym_of] = ACTIONS(104),
    [anon_sym_then] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym__integer_literal] = ACTIONS(104),
    [sym__octal_literal] = ACTIONS(104),
    [sym__hexidecimal_literal] = ACTIONS(104),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_import] = ACTIONS(112),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_newtype] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [sym_variable_identifier] = ACTIONS(114),
    [sym_constructor_identifier] = ACTIONS(114),
    [sym_module_identifier] = ACTIONS(114),
    [anon_sym_case] = ACTIONS(112),
    [anon_sym_class] = ACTIONS(112),
    [anon_sym_default] = ACTIONS(112),
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
    [anon_sym_of] = ACTIONS(112),
    [anon_sym_then] = ACTIONS(112),
    [anon_sym__] = ACTIONS(112),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [sym__integer_literal] = ACTIONS(112),
    [sym__octal_literal] = ACTIONS(112),
    [sym__hexidecimal_literal] = ACTIONS(112),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_where] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [anon_sym_data] = ACTIONS(118),
    [anon_sym_newtype] = ACTIONS(118),
    [anon_sym_type] = ACTIONS(118),
    [sym_variable_identifier] = ACTIONS(120),
    [sym_constructor_identifier] = ACTIONS(120),
    [sym_module_identifier] = ACTIONS(120),
    [anon_sym_case] = ACTIONS(118),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_default] = ACTIONS(118),
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
    [anon_sym_of] = ACTIONS(118),
    [anon_sym_then] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__integer_literal] = ACTIONS(118),
    [sym__octal_literal] = ACTIONS(118),
    [sym__hexidecimal_literal] = ACTIONS(118),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(124),
    [anon_sym_data] = ACTIONS(124),
    [anon_sym_newtype] = ACTIONS(124),
    [anon_sym_type] = ACTIONS(124),
    [sym_variable_identifier] = ACTIONS(126),
    [sym_constructor_identifier] = ACTIONS(126),
    [sym_module_identifier] = ACTIONS(126),
    [anon_sym_case] = ACTIONS(124),
    [anon_sym_class] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_do] = ACTIONS(124),
    [anon_sym_else] = ACTIONS(124),
    [anon_sym_foreign] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_infix] = ACTIONS(124),
    [anon_sym_infixl] = ACTIONS(124),
    [anon_sym_infixr] = ACTIONS(124),
    [anon_sym_instance] = ACTIONS(124),
    [anon_sym_let] = ACTIONS(124),
    [anon_sym_of] = ACTIONS(124),
    [anon_sym_then] = ACTIONS(124),
    [anon_sym__] = ACTIONS(124),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [sym__integer_literal] = ACTIONS(124),
    [sym__octal_literal] = ACTIONS(124),
    [sym__hexidecimal_literal] = ACTIONS(124),
  },
  [17] = {
    [sym__statement] = STATE(46),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
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
    [ts_builtin_sym_end] = ACTIONS(128),
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
    [sym_module_exports] = STATE(49),
    [anon_sym_where] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__identifier] = STATE(50),
    [sym_variable_identifier] = ACTIONS(134),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_as] = ACTIONS(58),
    [anon_sym_hiding] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_module_identifier] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
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
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [21] = {
    [sym_import_specification] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(138),
    [anon_sym_where] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(138),
    [anon_sym_as] = ACTIONS(142),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(138),
    [anon_sym_type] = ACTIONS(138),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(138),
    [anon_sym_class] = ACTIONS(138),
    [anon_sym_default] = ACTIONS(138),
    [anon_sym_do] = ACTIONS(138),
    [anon_sym_else] = ACTIONS(138),
    [anon_sym_foreign] = ACTIONS(138),
    [anon_sym_if] = ACTIONS(138),
    [anon_sym_in] = ACTIONS(138),
    [anon_sym_infix] = ACTIONS(138),
    [anon_sym_infixl] = ACTIONS(138),
    [anon_sym_infixr] = ACTIONS(138),
    [anon_sym_instance] = ACTIONS(138),
    [anon_sym_let] = ACTIONS(138),
    [anon_sym_of] = ACTIONS(138),
    [anon_sym_then] = ACTIONS(138),
    [anon_sym__] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__integer_literal] = ACTIONS(138),
    [sym__octal_literal] = ACTIONS(138),
    [sym__hexidecimal_literal] = ACTIONS(138),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_deriving] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_module_identifier] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
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
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [23] = {
    [sym__identifier] = STATE(55),
    [aux_sym_type_synonym_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_module] = ACTIONS(150),
    [anon_sym_where] = ACTIONS(150),
    [anon_sym_import] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_deriving] = ACTIONS(150),
    [anon_sym_newtype] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(150),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(150),
    [anon_sym_class] = ACTIONS(150),
    [anon_sym_default] = ACTIONS(150),
    [anon_sym_do] = ACTIONS(150),
    [anon_sym_else] = ACTIONS(150),
    [anon_sym_foreign] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(150),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_infix] = ACTIONS(150),
    [anon_sym_infixl] = ACTIONS(150),
    [anon_sym_infixr] = ACTIONS(150),
    [anon_sym_instance] = ACTIONS(150),
    [anon_sym_let] = ACTIONS(150),
    [anon_sym_of] = ACTIONS(150),
    [anon_sym_then] = ACTIONS(150),
    [anon_sym__] = ACTIONS(150),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym__integer_literal] = ACTIONS(150),
    [sym__octal_literal] = ACTIONS(150),
    [sym__hexidecimal_literal] = ACTIONS(150),
  },
  [24] = {
    [sym_constructors] = STATE(59),
    [sym_constructor] = STATE(60),
    [sym_deriving] = STATE(61),
    [sym__identifier] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_module] = ACTIONS(156),
    [anon_sym_where] = ACTIONS(156),
    [anon_sym_import] = ACTIONS(156),
    [anon_sym_data] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(156),
    [anon_sym_type] = ACTIONS(156),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(156),
    [anon_sym_default] = ACTIONS(156),
    [anon_sym_do] = ACTIONS(156),
    [anon_sym_else] = ACTIONS(156),
    [anon_sym_foreign] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(156),
    [anon_sym_in] = ACTIONS(156),
    [anon_sym_infix] = ACTIONS(156),
    [anon_sym_infixl] = ACTIONS(156),
    [anon_sym_infixr] = ACTIONS(156),
    [anon_sym_instance] = ACTIONS(156),
    [anon_sym_let] = ACTIONS(156),
    [anon_sym_of] = ACTIONS(156),
    [anon_sym_then] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym__integer_literal] = ACTIONS(156),
    [sym__octal_literal] = ACTIONS(156),
    [sym__hexidecimal_literal] = ACTIONS(156),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_module_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym__identifier] = STATE(63),
    [aux_sym_type_synonym_repeat1] = STATE(64),
    [anon_sym_EQ] = ACTIONS(150),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [anon_sym_EQ] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(168),
  },
  [30] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(170),
  },
  [31] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(172),
  },
  [32] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [33] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(176),
  },
  [34] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(178),
  },
  [35] = {
    [sym__char_escape] = STATE(69),
    [sym__ascii] = STATE(69),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_x] = ACTIONS(186),
    [anon_sym_X] = ACTIONS(186),
    [anon_sym_o] = ACTIONS(188),
    [anon_sym_O] = ACTIONS(188),
    [anon_sym_a] = ACTIONS(180),
    [anon_sym_b] = ACTIONS(180),
    [anon_sym_f] = ACTIONS(180),
    [anon_sym_n] = ACTIONS(180),
    [anon_sym_r] = ACTIONS(180),
    [anon_sym_t] = ACTIONS(180),
    [anon_sym_v] = ACTIONS(180),
    [anon_sym_NUL] = ACTIONS(190),
    [anon_sym_SOH] = ACTIONS(190),
    [anon_sym_STX] = ACTIONS(190),
    [anon_sym_ETX] = ACTIONS(190),
    [anon_sym_EOT] = ACTIONS(190),
    [anon_sym_ENQ] = ACTIONS(190),
    [anon_sym_ACK] = ACTIONS(190),
    [anon_sym_BEL] = ACTIONS(190),
    [anon_sym_BS] = ACTIONS(190),
    [anon_sym_HT] = ACTIONS(190),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_VT] = ACTIONS(190),
    [anon_sym_FF] = ACTIONS(190),
    [anon_sym_CR] = ACTIONS(190),
    [anon_sym_SO] = ACTIONS(190),
    [anon_sym_SI] = ACTIONS(190),
    [anon_sym_DLE] = ACTIONS(190),
    [anon_sym_DC1] = ACTIONS(190),
    [anon_sym_DC2] = ACTIONS(190),
    [anon_sym_DC3] = ACTIONS(190),
    [anon_sym_DC4] = ACTIONS(190),
    [anon_sym_NAK] = ACTIONS(190),
    [anon_sym_SYN] = ACTIONS(190),
    [anon_sym_ETB] = ACTIONS(190),
    [anon_sym_CAN] = ACTIONS(190),
    [anon_sym_EM] = ACTIONS(190),
    [anon_sym_SUB] = ACTIONS(190),
    [anon_sym_ESC] = ACTIONS(190),
    [anon_sym_FS] = ACTIONS(190),
    [anon_sym_GS] = ACTIONS(190),
    [anon_sym_RS] = ACTIONS(190),
    [anon_sym_US] = ACTIONS(190),
    [anon_sym_SP] = ACTIONS(190),
    [anon_sym_DEL] = ACTIONS(190),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [sym_comment] = ACTIONS(74),
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
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(74),
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
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [sym__ascii_large] = ACTIONS(196),
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
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(198),
    [sym__ascii_large] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_1] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_QMARK] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [sym__space] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
    [sym__tab] = ACTIONS(198),
    [sym__vertical_tab] = ACTIONS(198),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_module] = ACTIONS(202),
    [anon_sym_where] = ACTIONS(202),
    [anon_sym_import] = ACTIONS(202),
    [anon_sym_data] = ACTIONS(202),
    [anon_sym_newtype] = ACTIONS(202),
    [anon_sym_type] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_constructor_identifier] = ACTIONS(204),
    [sym_module_identifier] = ACTIONS(204),
    [anon_sym_case] = ACTIONS(202),
    [anon_sym_class] = ACTIONS(202),
    [anon_sym_default] = ACTIONS(202),
    [anon_sym_do] = ACTIONS(202),
    [anon_sym_else] = ACTIONS(202),
    [anon_sym_foreign] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(202),
    [anon_sym_in] = ACTIONS(202),
    [anon_sym_infix] = ACTIONS(202),
    [anon_sym_infixl] = ACTIONS(202),
    [anon_sym_infixr] = ACTIONS(202),
    [anon_sym_instance] = ACTIONS(202),
    [anon_sym_let] = ACTIONS(202),
    [anon_sym_of] = ACTIONS(202),
    [anon_sym_then] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym__integer_literal] = ACTIONS(202),
    [sym__octal_literal] = ACTIONS(202),
    [sym__hexidecimal_literal] = ACTIONS(202),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_1] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [sym__vertical_tab] = ACTIONS(206),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
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
  [43] = {
    [sym__char_escape] = STATE(75),
    [sym__ascii] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
    [anon_sym_x] = ACTIONS(216),
    [anon_sym_X] = ACTIONS(216),
    [anon_sym_o] = ACTIONS(218),
    [anon_sym_O] = ACTIONS(218),
    [anon_sym_a] = ACTIONS(210),
    [anon_sym_b] = ACTIONS(210),
    [anon_sym_f] = ACTIONS(210),
    [anon_sym_n] = ACTIONS(210),
    [anon_sym_r] = ACTIONS(210),
    [anon_sym_t] = ACTIONS(210),
    [anon_sym_v] = ACTIONS(210),
    [anon_sym_NUL] = ACTIONS(220),
    [anon_sym_SOH] = ACTIONS(220),
    [anon_sym_STX] = ACTIONS(220),
    [anon_sym_ETX] = ACTIONS(220),
    [anon_sym_EOT] = ACTIONS(220),
    [anon_sym_ENQ] = ACTIONS(220),
    [anon_sym_ACK] = ACTIONS(220),
    [anon_sym_BEL] = ACTIONS(220),
    [anon_sym_BS] = ACTIONS(220),
    [anon_sym_HT] = ACTIONS(220),
    [anon_sym_LF] = ACTIONS(220),
    [anon_sym_VT] = ACTIONS(220),
    [anon_sym_FF] = ACTIONS(220),
    [anon_sym_CR] = ACTIONS(220),
    [anon_sym_SO] = ACTIONS(220),
    [anon_sym_SI] = ACTIONS(220),
    [anon_sym_DLE] = ACTIONS(220),
    [anon_sym_DC1] = ACTIONS(220),
    [anon_sym_DC2] = ACTIONS(220),
    [anon_sym_DC3] = ACTIONS(220),
    [anon_sym_DC4] = ACTIONS(220),
    [anon_sym_NAK] = ACTIONS(220),
    [anon_sym_SYN] = ACTIONS(220),
    [anon_sym_ETB] = ACTIONS(220),
    [anon_sym_CAN] = ACTIONS(220),
    [anon_sym_EM] = ACTIONS(220),
    [anon_sym_SUB] = ACTIONS(220),
    [anon_sym_ESC] = ACTIONS(220),
    [anon_sym_FS] = ACTIONS(220),
    [anon_sym_GS] = ACTIONS(220),
    [anon_sym_RS] = ACTIONS(220),
    [anon_sym_US] = ACTIONS(220),
    [anon_sym_SP] = ACTIONS(220),
    [anon_sym_DEL] = ACTIONS(220),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [sym__vertical_tab] = ACTIONS(222),
  },
  [45] = {
    [sym__gap] = STATE(80),
    [sym__graphic] = STATE(80),
    [sym__small] = STATE(41),
    [sym__large] = STATE(41),
    [sym__symbol] = STATE(41),
    [sym__special] = STATE(41),
    [sym__escape] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym__] = ACTIONS(88),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(88),
    [sym__ascii_large] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(86),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_1] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(84),
    [sym__space] = ACTIONS(100),
    [sym__newline] = ACTIONS(100),
    [sym__tab] = ACTIONS(100),
    [sym__vertical_tab] = ACTIONS(100),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_module] = ACTIONS(230),
    [anon_sym_where] = ACTIONS(230),
    [anon_sym_import] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(230),
    [anon_sym_newtype] = ACTIONS(230),
    [anon_sym_type] = ACTIONS(230),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_module_identifier] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_class] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_do] = ACTIONS(230),
    [anon_sym_else] = ACTIONS(230),
    [anon_sym_foreign] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_in] = ACTIONS(230),
    [anon_sym_infix] = ACTIONS(230),
    [anon_sym_infixl] = ACTIONS(230),
    [anon_sym_infixr] = ACTIONS(230),
    [anon_sym_instance] = ACTIONS(230),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_of] = ACTIONS(230),
    [anon_sym_then] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [sym__integer_literal] = ACTIONS(230),
    [sym__octal_literal] = ACTIONS(230),
    [sym__hexidecimal_literal] = ACTIONS(230),
  },
  [47] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
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
    [aux_sym_program_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(234),
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
  [48] = {
    [sym_export] = STATE(84),
    [sym__identifier] = STATE(85),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [49] = {
    [anon_sym_where] = ACTIONS(240),
    [sym_comment] = ACTIONS(26),
  },
  [50] = {
    [sym_import_specification] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_where] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_newtype] = ACTIONS(244),
    [anon_sym_type] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(248),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_class] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [sym__integer_literal] = ACTIONS(244),
    [sym__octal_literal] = ACTIONS(244),
    [sym__hexidecimal_literal] = ACTIONS(244),
  },
  [51] = {
    [sym__identifier] = STATE(90),
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [sym__identifier] = STATE(92),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_module_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(256),
    [sym_comment] = ACTIONS(26),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_where] = ACTIONS(244),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_newtype] = ACTIONS(244),
    [anon_sym_type] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(248),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_class] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [sym__integer_literal] = ACTIONS(244),
    [sym__octal_literal] = ACTIONS(244),
    [sym__hexidecimal_literal] = ACTIONS(244),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(260),
    [anon_sym_where] = ACTIONS(260),
    [anon_sym_import] = ACTIONS(260),
    [anon_sym_data] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_deriving] = ACTIONS(260),
    [anon_sym_newtype] = ACTIONS(260),
    [anon_sym_type] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(262),
    [sym_module_identifier] = ACTIONS(262),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_class] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
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
    [sym__identifier] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(266),
    [anon_sym_default] = ACTIONS(266),
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
    [sym_constructors] = STATE(95),
    [sym_constructor] = STATE(60),
    [sym_deriving] = STATE(96),
    [sym__identifier] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
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
    [sym_float] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [58] = {
    [sym__identifier] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [sym_deriving] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(274),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_module_identifier] = ACTIONS(274),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
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
    [sym_float] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [60] = {
    [aux_sym_constructors_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_module] = ACTIONS(280),
    [anon_sym_where] = ACTIONS(280),
    [anon_sym_import] = ACTIONS(280),
    [anon_sym_data] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_deriving] = ACTIONS(280),
    [anon_sym_newtype] = ACTIONS(280),
    [anon_sym_type] = ACTIONS(280),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_module_identifier] = ACTIONS(284),
    [anon_sym_case] = ACTIONS(280),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_default] = ACTIONS(280),
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
    [sym_float] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym__integer_literal] = ACTIONS(280),
    [sym__octal_literal] = ACTIONS(280),
    [sym__hexidecimal_literal] = ACTIONS(280),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(274),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_module_identifier] = ACTIONS(274),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
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
    [sym_float] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [62] = {
    [sym_fields] = STATE(103),
    [sym_strict] = STATE(103),
    [sym__identifier] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(288),
    [anon_sym_where] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(288),
    [anon_sym_deriving] = ACTIONS(288),
    [anon_sym_newtype] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(288),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_default] = ACTIONS(288),
    [anon_sym_do] = ACTIONS(288),
    [anon_sym_else] = ACTIONS(288),
    [anon_sym_foreign] = ACTIONS(288),
    [anon_sym_if] = ACTIONS(288),
    [anon_sym_in] = ACTIONS(288),
    [anon_sym_infix] = ACTIONS(288),
    [anon_sym_infixl] = ACTIONS(288),
    [anon_sym_infixr] = ACTIONS(288),
    [anon_sym_instance] = ACTIONS(288),
    [anon_sym_let] = ACTIONS(288),
    [anon_sym_of] = ACTIONS(288),
    [anon_sym_then] = ACTIONS(288),
    [anon_sym__] = ACTIONS(288),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__integer_literal] = ACTIONS(288),
    [sym__octal_literal] = ACTIONS(288),
    [sym__hexidecimal_literal] = ACTIONS(288),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(260),
    [sym_constructor_identifier] = ACTIONS(262),
    [sym_module_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [sym__identifier] = STATE(104),
    [anon_sym_EQ] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [sym_new_constructor] = STATE(106),
    [sym_constructor_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [sym__identifier] = STATE(107),
    [aux_sym_type_synonym_repeat1] = STATE(108),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_where] = ACTIONS(300),
    [anon_sym_import] = ACTIONS(300),
    [anon_sym_data] = ACTIONS(300),
    [anon_sym_newtype] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(300),
    [sym_variable_identifier] = ACTIONS(302),
    [sym_constructor_identifier] = ACTIONS(302),
    [sym_module_identifier] = ACTIONS(302),
    [anon_sym_case] = ACTIONS(300),
    [anon_sym_class] = ACTIONS(300),
    [anon_sym_default] = ACTIONS(300),
    [anon_sym_do] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [anon_sym_foreign] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(300),
    [anon_sym_in] = ACTIONS(300),
    [anon_sym_infix] = ACTIONS(300),
    [anon_sym_infixl] = ACTIONS(300),
    [anon_sym_infixr] = ACTIONS(300),
    [anon_sym_instance] = ACTIONS(300),
    [anon_sym_let] = ACTIONS(300),
    [anon_sym_of] = ACTIONS(300),
    [anon_sym_then] = ACTIONS(300),
    [anon_sym__] = ACTIONS(300),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__integer_literal] = ACTIONS(300),
    [sym__octal_literal] = ACTIONS(300),
    [sym__hexidecimal_literal] = ACTIONS(300),
  },
  [68] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(304),
  },
  [69] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(306),
  },
  [70] = {
    [sym__cntrl] = STATE(110),
    [anon_sym__] = ACTIONS(308),
    [sym_comment] = ACTIONS(74),
    [sym__ascii_large] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
  },
  [71] = {
    [aux_sym__escape_repeat1] = STATE(112),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(310),
  },
  [72] = {
    [aux_sym__escape_repeat2] = STATE(114),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(312),
  },
  [73] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(314),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym__] = ACTIONS(316),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(316),
    [sym__ascii_large] = ACTIONS(316),
    [anon_sym_POUND] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_1] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [sym__space] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
    [sym__tab] = ACTIONS(316),
    [sym__vertical_tab] = ACTIONS(316),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym__] = ACTIONS(318),
    [sym_comment] = ACTIONS(74),
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
  [76] = {
    [sym__cntrl] = STATE(116),
    [anon_sym__] = ACTIONS(320),
    [sym_comment] = ACTIONS(74),
    [sym__ascii_large] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(320),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
  },
  [77] = {
    [aux_sym__escape_repeat1] = STATE(118),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(322),
  },
  [78] = {
    [aux_sym__escape_repeat2] = STATE(120),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(324),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(326),
    [sym__ascii_large] = ACTIONS(326),
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
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [sym__space] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [sym__tab] = ACTIONS(326),
    [sym__vertical_tab] = ACTIONS(326),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(328),
    [sym__ascii_large] = ACTIONS(328),
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
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_BQUOTE] = ACTIONS(328),
    [sym__space] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
    [sym__tab] = ACTIONS(328),
    [sym__vertical_tab] = ACTIONS(328),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(332),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(334),
    [sym_module_identifier] = ACTIONS(334),
    [anon_sym_case] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
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
    [anon_sym_of] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [82] = {
    [sym__statement] = STATE(46),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
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
    [ts_builtin_sym_end] = ACTIONS(336),
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
  [83] = {
    [anon_sym_where] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [aux_sym_module_exports_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(342),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
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
    [aux_sym_program_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(348),
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
  [87] = {
    [sym__identifier] = STATE(126),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_module_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_where] = ACTIONS(352),
    [anon_sym_import] = ACTIONS(352),
    [anon_sym_data] = ACTIONS(352),
    [anon_sym_newtype] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [anon_sym_case] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_default] = ACTIONS(352),
    [anon_sym_do] = ACTIONS(352),
    [anon_sym_else] = ACTIONS(352),
    [anon_sym_foreign] = ACTIONS(352),
    [anon_sym_if] = ACTIONS(352),
    [anon_sym_in] = ACTIONS(352),
    [anon_sym_infix] = ACTIONS(352),
    [anon_sym_infixl] = ACTIONS(352),
    [anon_sym_infixr] = ACTIONS(352),
    [anon_sym_instance] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_of] = ACTIONS(352),
    [anon_sym_then] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [sym__integer_literal] = ACTIONS(352),
    [sym__octal_literal] = ACTIONS(352),
    [sym__hexidecimal_literal] = ACTIONS(352),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_where] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_constructor_identifier] = ACTIONS(360),
    [sym_module_identifier] = ACTIONS(360),
    [anon_sym_case] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_else] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_in] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_let] = ACTIONS(358),
    [anon_sym_of] = ACTIONS(358),
    [anon_sym_then] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [90] = {
    [aux_sym_import_specification_repeat1] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_hiding] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_module_identifier] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
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
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [92] = {
    [sym_import_specification] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_module] = ACTIONS(352),
    [anon_sym_where] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(352),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(352),
    [anon_sym_newtype] = ACTIONS(352),
    [anon_sym_type] = ACTIONS(352),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [anon_sym_case] = ACTIONS(352),
    [anon_sym_class] = ACTIONS(352),
    [anon_sym_default] = ACTIONS(352),
    [anon_sym_do] = ACTIONS(352),
    [anon_sym_else] = ACTIONS(352),
    [anon_sym_foreign] = ACTIONS(352),
    [anon_sym_if] = ACTIONS(352),
    [anon_sym_in] = ACTIONS(352),
    [anon_sym_infix] = ACTIONS(352),
    [anon_sym_infixl] = ACTIONS(352),
    [anon_sym_infixr] = ACTIONS(352),
    [anon_sym_instance] = ACTIONS(352),
    [anon_sym_let] = ACTIONS(352),
    [anon_sym_of] = ACTIONS(352),
    [anon_sym_then] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [sym__integer_literal] = ACTIONS(352),
    [sym__octal_literal] = ACTIONS(352),
    [sym__hexidecimal_literal] = ACTIONS(352),
  },
  [93] = {
    [sym__identifier] = STATE(132),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(370),
    [anon_sym_where] = ACTIONS(370),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_deriving] = ACTIONS(370),
    [anon_sym_newtype] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(372),
    [sym_constructor_identifier] = ACTIONS(372),
    [sym_module_identifier] = ACTIONS(372),
    [anon_sym_case] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_do] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(370),
    [anon_sym_foreign] = ACTIONS(370),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_in] = ACTIONS(370),
    [anon_sym_infix] = ACTIONS(370),
    [anon_sym_infixl] = ACTIONS(370),
    [anon_sym_infixr] = ACTIONS(370),
    [anon_sym_instance] = ACTIONS(370),
    [anon_sym_let] = ACTIONS(370),
    [anon_sym_of] = ACTIONS(370),
    [anon_sym_then] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [sym__integer_literal] = ACTIONS(370),
    [sym__octal_literal] = ACTIONS(370),
    [sym__hexidecimal_literal] = ACTIONS(370),
  },
  [95] = {
    [sym_deriving] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [97] = {
    [sym__identifier] = STATE(134),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_where] = ACTIONS(382),
    [anon_sym_import] = ACTIONS(382),
    [anon_sym_data] = ACTIONS(382),
    [anon_sym_newtype] = ACTIONS(382),
    [anon_sym_type] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [anon_sym_case] = ACTIONS(382),
    [anon_sym_class] = ACTIONS(382),
    [anon_sym_default] = ACTIONS(382),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [99] = {
    [sym_constructor] = STATE(135),
    [sym__identifier] = STATE(62),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_module] = ACTIONS(388),
    [anon_sym_where] = ACTIONS(388),
    [anon_sym_import] = ACTIONS(388),
    [anon_sym_data] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_deriving] = ACTIONS(388),
    [anon_sym_newtype] = ACTIONS(388),
    [anon_sym_type] = ACTIONS(388),
    [sym_variable_identifier] = ACTIONS(392),
    [sym_constructor_identifier] = ACTIONS(392),
    [sym_module_identifier] = ACTIONS(392),
    [anon_sym_case] = ACTIONS(388),
    [anon_sym_class] = ACTIONS(388),
    [anon_sym_default] = ACTIONS(388),
    [anon_sym_do] = ACTIONS(388),
    [anon_sym_else] = ACTIONS(388),
    [anon_sym_foreign] = ACTIONS(388),
    [anon_sym_if] = ACTIONS(388),
    [anon_sym_in] = ACTIONS(388),
    [anon_sym_infix] = ACTIONS(388),
    [anon_sym_infixl] = ACTIONS(388),
    [anon_sym_infixr] = ACTIONS(388),
    [anon_sym_instance] = ACTIONS(388),
    [anon_sym_let] = ACTIONS(388),
    [anon_sym_of] = ACTIONS(388),
    [anon_sym_then] = ACTIONS(388),
    [anon_sym__] = ACTIONS(388),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [sym__integer_literal] = ACTIONS(388),
    [sym__octal_literal] = ACTIONS(388),
    [sym__hexidecimal_literal] = ACTIONS(388),
  },
  [101] = {
    [sym_field] = STATE(138),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(26),
  },
  [102] = {
    [sym__identifier] = STATE(139),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_module] = ACTIONS(398),
    [anon_sym_where] = ACTIONS(398),
    [anon_sym_import] = ACTIONS(398),
    [anon_sym_data] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_deriving] = ACTIONS(398),
    [anon_sym_newtype] = ACTIONS(398),
    [anon_sym_type] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(400),
    [sym_constructor_identifier] = ACTIONS(400),
    [sym_module_identifier] = ACTIONS(400),
    [anon_sym_case] = ACTIONS(398),
    [anon_sym_class] = ACTIONS(398),
    [anon_sym_default] = ACTIONS(398),
    [anon_sym_do] = ACTIONS(398),
    [anon_sym_else] = ACTIONS(398),
    [anon_sym_foreign] = ACTIONS(398),
    [anon_sym_if] = ACTIONS(398),
    [anon_sym_in] = ACTIONS(398),
    [anon_sym_infix] = ACTIONS(398),
    [anon_sym_infixl] = ACTIONS(398),
    [anon_sym_infixr] = ACTIONS(398),
    [anon_sym_instance] = ACTIONS(398),
    [anon_sym_let] = ACTIONS(398),
    [anon_sym_of] = ACTIONS(398),
    [anon_sym_then] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(400),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [sym__integer_literal] = ACTIONS(398),
    [sym__octal_literal] = ACTIONS(398),
    [sym__hexidecimal_literal] = ACTIONS(398),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(372),
    [sym_module_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [sym_fields] = STATE(140),
    [sym__identifier] = STATE(140),
    [anon_sym_LBRACE] = ACTIONS(290),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [sym_deriving] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(404),
    [anon_sym_where] = ACTIONS(404),
    [anon_sym_import] = ACTIONS(404),
    [anon_sym_data] = ACTIONS(404),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(404),
    [anon_sym_type] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_constructor_identifier] = ACTIONS(406),
    [sym_module_identifier] = ACTIONS(406),
    [anon_sym_case] = ACTIONS(404),
    [anon_sym_class] = ACTIONS(404),
    [anon_sym_default] = ACTIONS(404),
    [anon_sym_do] = ACTIONS(404),
    [anon_sym_else] = ACTIONS(404),
    [anon_sym_foreign] = ACTIONS(404),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_in] = ACTIONS(404),
    [anon_sym_infix] = ACTIONS(404),
    [anon_sym_infixl] = ACTIONS(404),
    [anon_sym_infixr] = ACTIONS(404),
    [anon_sym_instance] = ACTIONS(404),
    [anon_sym_let] = ACTIONS(404),
    [anon_sym_of] = ACTIONS(404),
    [anon_sym_then] = ACTIONS(404),
    [anon_sym__] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(406),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [sym__integer_literal] = ACTIONS(404),
    [sym__octal_literal] = ACTIONS(404),
    [sym__hexidecimal_literal] = ACTIONS(404),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(260),
    [anon_sym_where] = ACTIONS(260),
    [anon_sym_import] = ACTIONS(260),
    [anon_sym_data] = ACTIONS(260),
    [anon_sym_newtype] = ACTIONS(260),
    [anon_sym_type] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(262),
    [sym_module_identifier] = ACTIONS(262),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_class] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
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
  [108] = {
    [sym__identifier] = STATE(142),
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_where] = ACTIONS(410),
    [anon_sym_import] = ACTIONS(410),
    [anon_sym_data] = ACTIONS(410),
    [anon_sym_newtype] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(410),
    [anon_sym_class] = ACTIONS(410),
    [anon_sym_default] = ACTIONS(410),
    [anon_sym_do] = ACTIONS(410),
    [anon_sym_else] = ACTIONS(410),
    [anon_sym_foreign] = ACTIONS(410),
    [anon_sym_if] = ACTIONS(410),
    [anon_sym_in] = ACTIONS(410),
    [anon_sym_infix] = ACTIONS(410),
    [anon_sym_infixl] = ACTIONS(410),
    [anon_sym_infixr] = ACTIONS(410),
    [anon_sym_instance] = ACTIONS(410),
    [anon_sym_let] = ACTIONS(410),
    [anon_sym_of] = ACTIONS(410),
    [anon_sym_then] = ACTIONS(410),
    [anon_sym__] = ACTIONS(410),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym__integer_literal] = ACTIONS(410),
    [sym__octal_literal] = ACTIONS(410),
    [sym__hexidecimal_literal] = ACTIONS(410),
  },
  [109] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(414),
  },
  [110] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(416),
  },
  [111] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(418),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(418),
  },
  [112] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(422),
  },
  [113] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(424),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(424),
  },
  [114] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(426),
  },
  [115] = {
    [anon_sym_LPAREN] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_EQ] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(428),
    [sym__ascii_large] = ACTIONS(428),
    [anon_sym_POUND] = ACTIONS(428),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(428),
    [anon_sym_1] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(428),
    [anon_sym_LT] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_QMARK] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(428),
    [anon_sym_CARET] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym_BSLASH] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_RBRACK] = ACTIONS(428),
    [anon_sym_BQUOTE] = ACTIONS(428),
    [sym__space] = ACTIONS(428),
    [sym__newline] = ACTIONS(428),
    [sym__tab] = ACTIONS(428),
    [sym__vertical_tab] = ACTIONS(428),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(430),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_BANG] = ACTIONS(430),
    [anon_sym__] = ACTIONS(430),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(430),
    [sym__ascii_large] = ACTIONS(430),
    [anon_sym_POUND] = ACTIONS(430),
    [anon_sym_DOLLAR] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(430),
    [anon_sym_1] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_QMARK] = ACTIONS(430),
    [anon_sym_AT] = ACTIONS(430),
    [anon_sym_CARET] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_TILDE] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_BSLASH] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_RBRACK] = ACTIONS(430),
    [anon_sym_BQUOTE] = ACTIONS(430),
    [sym__space] = ACTIONS(430),
    [sym__newline] = ACTIONS(430),
    [sym__tab] = ACTIONS(430),
    [sym__vertical_tab] = ACTIONS(430),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(432),
    [anon_sym__] = ACTIONS(432),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(432),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(432),
    [sym__ascii_large] = ACTIONS(432),
    [anon_sym_POUND] = ACTIONS(432),
    [anon_sym_DOLLAR] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(432),
    [anon_sym_AMP] = ACTIONS(432),
    [anon_sym_1] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_SLASH] = ACTIONS(432),
    [anon_sym_LT] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_QMARK] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(432),
    [anon_sym_CARET] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(432),
    [anon_sym_TILDE] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_BSLASH] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [anon_sym_BQUOTE] = ACTIONS(432),
    [sym__space] = ACTIONS(432),
    [sym__newline] = ACTIONS(432),
    [sym__tab] = ACTIONS(432),
    [sym__vertical_tab] = ACTIONS(432),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(432),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_BANG] = ACTIONS(434),
    [anon_sym__] = ACTIONS(434),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(434),
    [sym__ascii_large] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_DOLLAR] = ACTIONS(434),
    [anon_sym_PERCENT] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(434),
    [anon_sym_1] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_SLASH] = ACTIONS(434),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_QMARK] = ACTIONS(434),
    [anon_sym_AT] = ACTIONS(434),
    [anon_sym_CARET] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(434),
    [anon_sym_BSLASH] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(434),
    [anon_sym_BQUOTE] = ACTIONS(434),
    [sym__space] = ACTIONS(434),
    [sym__newline] = ACTIONS(434),
    [sym__tab] = ACTIONS(434),
    [sym__vertical_tab] = ACTIONS(434),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(436),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_BANG] = ACTIONS(438),
    [anon_sym__] = ACTIONS(438),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(438),
    [sym__ascii_large] = ACTIONS(438),
    [anon_sym_POUND] = ACTIONS(438),
    [anon_sym_DOLLAR] = ACTIONS(438),
    [anon_sym_PERCENT] = ACTIONS(438),
    [anon_sym_AMP] = ACTIONS(438),
    [anon_sym_1] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_QMARK] = ACTIONS(438),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_CARET] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(438),
    [anon_sym_BSLASH] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_RBRACK] = ACTIONS(438),
    [anon_sym_BQUOTE] = ACTIONS(438),
    [sym__space] = ACTIONS(438),
    [sym__newline] = ACTIONS(438),
    [sym__tab] = ACTIONS(438),
    [sym__vertical_tab] = ACTIONS(438),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(438),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_BANG] = ACTIONS(434),
    [anon_sym__] = ACTIONS(434),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(434),
    [sym__ascii_large] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_DOLLAR] = ACTIONS(434),
    [anon_sym_PERCENT] = ACTIONS(434),
    [anon_sym_AMP] = ACTIONS(434),
    [anon_sym_1] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_SLASH] = ACTIONS(434),
    [anon_sym_LT] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_QMARK] = ACTIONS(434),
    [anon_sym_AT] = ACTIONS(434),
    [anon_sym_CARET] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(434),
    [anon_sym_BSLASH] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_RBRACK] = ACTIONS(434),
    [anon_sym_BQUOTE] = ACTIONS(434),
    [sym__space] = ACTIONS(434),
    [sym__newline] = ACTIONS(434),
    [sym__tab] = ACTIONS(434),
    [sym__vertical_tab] = ACTIONS(434),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(440),
  },
  [121] = {
    [sym_export] = STATE(147),
    [sym__identifier] = STATE(85),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [anon_sym_where] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [sym__identifier] = STATE(151),
    [anon_sym_DOT_DOT] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [sym__statement] = STATE(46),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
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
    [ts_builtin_sym_end] = ACTIONS(450),
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
  [126] = {
    [sym_import_specification] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(454),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(454),
    [anon_sym_newtype] = ACTIONS(454),
    [anon_sym_type] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_constructor_identifier] = ACTIONS(456),
    [sym_module_identifier] = ACTIONS(456),
    [anon_sym_case] = ACTIONS(454),
    [anon_sym_class] = ACTIONS(454),
    [anon_sym_default] = ACTIONS(454),
    [anon_sym_do] = ACTIONS(454),
    [anon_sym_else] = ACTIONS(454),
    [anon_sym_foreign] = ACTIONS(454),
    [anon_sym_if] = ACTIONS(454),
    [anon_sym_in] = ACTIONS(454),
    [anon_sym_infix] = ACTIONS(454),
    [anon_sym_infixl] = ACTIONS(454),
    [anon_sym_infixr] = ACTIONS(454),
    [anon_sym_instance] = ACTIONS(454),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_of] = ACTIONS(454),
    [anon_sym_then] = ACTIONS(454),
    [anon_sym__] = ACTIONS(454),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [sym__integer_literal] = ACTIONS(454),
    [sym__octal_literal] = ACTIONS(454),
    [sym__hexidecimal_literal] = ACTIONS(454),
  },
  [127] = {
    [sym__identifier] = STATE(154),
    [anon_sym_DOT_DOT] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [sym__identifier] = STATE(155),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_where] = ACTIONS(462),
    [anon_sym_import] = ACTIONS(462),
    [anon_sym_data] = ACTIONS(462),
    [anon_sym_newtype] = ACTIONS(462),
    [anon_sym_type] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_constructor_identifier] = ACTIONS(464),
    [sym_module_identifier] = ACTIONS(464),
    [anon_sym_case] = ACTIONS(462),
    [anon_sym_class] = ACTIONS(462),
    [anon_sym_default] = ACTIONS(462),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [sym__integer_literal] = ACTIONS(462),
    [sym__octal_literal] = ACTIONS(462),
    [sym__hexidecimal_literal] = ACTIONS(462),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
    [anon_sym_import] = ACTIONS(454),
    [anon_sym_data] = ACTIONS(454),
    [anon_sym_newtype] = ACTIONS(454),
    [anon_sym_type] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_constructor_identifier] = ACTIONS(456),
    [sym_module_identifier] = ACTIONS(456),
    [anon_sym_case] = ACTIONS(454),
    [anon_sym_class] = ACTIONS(454),
    [anon_sym_default] = ACTIONS(454),
    [anon_sym_do] = ACTIONS(454),
    [anon_sym_else] = ACTIONS(454),
    [anon_sym_foreign] = ACTIONS(454),
    [anon_sym_if] = ACTIONS(454),
    [anon_sym_in] = ACTIONS(454),
    [anon_sym_infix] = ACTIONS(454),
    [anon_sym_infixl] = ACTIONS(454),
    [anon_sym_infixr] = ACTIONS(454),
    [anon_sym_instance] = ACTIONS(454),
    [anon_sym_let] = ACTIONS(454),
    [anon_sym_of] = ACTIONS(454),
    [anon_sym_then] = ACTIONS(454),
    [anon_sym__] = ACTIONS(454),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [sym__integer_literal] = ACTIONS(454),
    [sym__octal_literal] = ACTIONS(454),
    [sym__hexidecimal_literal] = ACTIONS(454),
  },
  [132] = {
    [aux_sym_import_specification_repeat1] = STATE(159),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_module] = ACTIONS(474),
    [anon_sym_where] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [anon_sym_case] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
    [anon_sym_default] = ACTIONS(474),
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
  [134] = {
    [aux_sym_export_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(480),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [anon_sym_module] = ACTIONS(484),
    [anon_sym_where] = ACTIONS(484),
    [anon_sym_import] = ACTIONS(484),
    [anon_sym_data] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_deriving] = ACTIONS(484),
    [anon_sym_newtype] = ACTIONS(484),
    [anon_sym_type] = ACTIONS(484),
    [sym_variable_identifier] = ACTIONS(486),
    [sym_constructor_identifier] = ACTIONS(486),
    [sym_module_identifier] = ACTIONS(486),
    [anon_sym_case] = ACTIONS(484),
    [anon_sym_class] = ACTIONS(484),
    [anon_sym_default] = ACTIONS(484),
    [anon_sym_do] = ACTIONS(484),
    [anon_sym_else] = ACTIONS(484),
    [anon_sym_foreign] = ACTIONS(484),
    [anon_sym_if] = ACTIONS(484),
    [anon_sym_in] = ACTIONS(484),
    [anon_sym_infix] = ACTIONS(484),
    [anon_sym_infixl] = ACTIONS(484),
    [anon_sym_infixr] = ACTIONS(484),
    [anon_sym_instance] = ACTIONS(484),
    [anon_sym_let] = ACTIONS(484),
    [anon_sym_of] = ACTIONS(484),
    [anon_sym_then] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(484),
    [sym__integer_literal] = ACTIONS(484),
    [sym__octal_literal] = ACTIONS(484),
    [sym__hexidecimal_literal] = ACTIONS(484),
  },
  [136] = {
    [sym_constructor] = STATE(163),
    [sym__identifier] = STATE(62),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [aux_sym_field_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_COLON_COLON] = ACTIONS(490),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [aux_sym_fields_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_module] = ACTIONS(498),
    [anon_sym_where] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_import] = ACTIONS(498),
    [anon_sym_data] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_deriving] = ACTIONS(498),
    [anon_sym_newtype] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_type] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(500),
    [sym_constructor_identifier] = ACTIONS(500),
    [sym_module_identifier] = ACTIONS(500),
    [anon_sym_case] = ACTIONS(498),
    [anon_sym_class] = ACTIONS(498),
    [anon_sym_default] = ACTIONS(498),
    [anon_sym_do] = ACTIONS(498),
    [anon_sym_else] = ACTIONS(498),
    [anon_sym_foreign] = ACTIONS(498),
    [anon_sym_if] = ACTIONS(498),
    [anon_sym_in] = ACTIONS(498),
    [anon_sym_infix] = ACTIONS(498),
    [anon_sym_infixl] = ACTIONS(498),
    [anon_sym_infixr] = ACTIONS(498),
    [anon_sym_instance] = ACTIONS(498),
    [anon_sym_let] = ACTIONS(498),
    [anon_sym_of] = ACTIONS(498),
    [anon_sym_then] = ACTIONS(498),
    [anon_sym__] = ACTIONS(498),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(500),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [sym__integer_literal] = ACTIONS(498),
    [sym__octal_literal] = ACTIONS(498),
    [sym__hexidecimal_literal] = ACTIONS(498),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_module] = ACTIONS(504),
    [anon_sym_where] = ACTIONS(504),
    [anon_sym_import] = ACTIONS(504),
    [anon_sym_data] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(504),
    [anon_sym_newtype] = ACTIONS(504),
    [anon_sym_type] = ACTIONS(504),
    [sym_variable_identifier] = ACTIONS(506),
    [sym_constructor_identifier] = ACTIONS(506),
    [sym_module_identifier] = ACTIONS(506),
    [anon_sym_case] = ACTIONS(504),
    [anon_sym_class] = ACTIONS(504),
    [anon_sym_default] = ACTIONS(504),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(506),
    [anon_sym_SQUOTE] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [sym__integer_literal] = ACTIONS(504),
    [sym__octal_literal] = ACTIONS(504),
    [sym__hexidecimal_literal] = ACTIONS(504),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_where] = ACTIONS(510),
    [anon_sym_import] = ACTIONS(510),
    [anon_sym_data] = ACTIONS(510),
    [anon_sym_newtype] = ACTIONS(510),
    [anon_sym_type] = ACTIONS(510),
    [sym_variable_identifier] = ACTIONS(512),
    [sym_constructor_identifier] = ACTIONS(512),
    [sym_module_identifier] = ACTIONS(512),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_class] = ACTIONS(510),
    [anon_sym_default] = ACTIONS(510),
    [anon_sym_do] = ACTIONS(510),
    [anon_sym_else] = ACTIONS(510),
    [anon_sym_foreign] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_in] = ACTIONS(510),
    [anon_sym_infix] = ACTIONS(510),
    [anon_sym_infixl] = ACTIONS(510),
    [anon_sym_infixr] = ACTIONS(510),
    [anon_sym_instance] = ACTIONS(510),
    [anon_sym_let] = ACTIONS(510),
    [anon_sym_of] = ACTIONS(510),
    [anon_sym_then] = ACTIONS(510),
    [anon_sym__] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(512),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [sym__integer_literal] = ACTIONS(510),
    [sym__octal_literal] = ACTIONS(510),
    [sym__hexidecimal_literal] = ACTIONS(510),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(370),
    [anon_sym_where] = ACTIONS(370),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_newtype] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(372),
    [sym_constructor_identifier] = ACTIONS(372),
    [sym_module_identifier] = ACTIONS(372),
    [anon_sym_case] = ACTIONS(370),
    [anon_sym_class] = ACTIONS(370),
    [anon_sym_default] = ACTIONS(370),
    [anon_sym_do] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(370),
    [anon_sym_foreign] = ACTIONS(370),
    [anon_sym_if] = ACTIONS(370),
    [anon_sym_in] = ACTIONS(370),
    [anon_sym_infix] = ACTIONS(370),
    [anon_sym_infixl] = ACTIONS(370),
    [anon_sym_infixr] = ACTIONS(370),
    [anon_sym_instance] = ACTIONS(370),
    [anon_sym_let] = ACTIONS(370),
    [anon_sym_of] = ACTIONS(370),
    [anon_sym_then] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [sym__integer_literal] = ACTIONS(370),
    [sym__octal_literal] = ACTIONS(370),
    [sym__hexidecimal_literal] = ACTIONS(370),
  },
  [143] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(514),
  },
  [144] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(516),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_EQ] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_BANG] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(518),
    [sym__ascii_large] = ACTIONS(518),
    [anon_sym_POUND] = ACTIONS(518),
    [anon_sym_DOLLAR] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(518),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_1] = ACTIONS(518),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_DOT] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_QMARK] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_TILDE] = ACTIONS(518),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_BSLASH] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(518),
    [anon_sym_BQUOTE] = ACTIONS(518),
    [sym__space] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
    [sym__tab] = ACTIONS(518),
    [sym__vertical_tab] = ACTIONS(518),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(518),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_EQ] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(520),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(520),
    [sym__ascii_large] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(520),
    [anon_sym_DOLLAR] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_1] = ACTIONS(520),
    [anon_sym_PLUS] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [anon_sym_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_GT] = ACTIONS(520),
    [anon_sym_QMARK] = ACTIONS(520),
    [anon_sym_AT] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_COLON] = ACTIONS(520),
    [anon_sym_BSLASH] = ACTIONS(520),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(520),
    [anon_sym_BQUOTE] = ACTIONS(520),
    [sym__space] = ACTIONS(520),
    [sym__newline] = ACTIONS(520),
    [sym__tab] = ACTIONS(520),
    [sym__vertical_tab] = ACTIONS(520),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(520),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [sym_export] = STATE(170),
    [sym__identifier] = STATE(85),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [anon_sym_where] = ACTIONS(524),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(526),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [aux_sym_export_repeat1] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(526),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [anon_sym_module] = ACTIONS(530),
    [anon_sym_where] = ACTIONS(530),
    [anon_sym_import] = ACTIONS(530),
    [anon_sym_data] = ACTIONS(530),
    [anon_sym_newtype] = ACTIONS(530),
    [anon_sym_type] = ACTIONS(530),
    [sym_variable_identifier] = ACTIONS(532),
    [sym_constructor_identifier] = ACTIONS(532),
    [sym_module_identifier] = ACTIONS(532),
    [anon_sym_case] = ACTIONS(530),
    [anon_sym_class] = ACTIONS(530),
    [anon_sym_default] = ACTIONS(530),
    [anon_sym_do] = ACTIONS(530),
    [anon_sym_else] = ACTIONS(530),
    [anon_sym_foreign] = ACTIONS(530),
    [anon_sym_if] = ACTIONS(530),
    [anon_sym_in] = ACTIONS(530),
    [anon_sym_infix] = ACTIONS(530),
    [anon_sym_infixl] = ACTIONS(530),
    [anon_sym_infixr] = ACTIONS(530),
    [anon_sym_instance] = ACTIONS(530),
    [anon_sym_let] = ACTIONS(530),
    [anon_sym_of] = ACTIONS(530),
    [anon_sym_then] = ACTIONS(530),
    [anon_sym__] = ACTIONS(530),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(532),
    [anon_sym_SQUOTE] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [sym__integer_literal] = ACTIONS(530),
    [sym__octal_literal] = ACTIONS(530),
    [sym__hexidecimal_literal] = ACTIONS(530),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [aux_sym_export_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_LPAREN] = ACTIONS(536),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [sym__identifier] = STATE(176),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_module] = ACTIONS(542),
    [anon_sym_where] = ACTIONS(542),
    [anon_sym_import] = ACTIONS(542),
    [anon_sym_data] = ACTIONS(542),
    [anon_sym_newtype] = ACTIONS(542),
    [anon_sym_type] = ACTIONS(542),
    [sym_variable_identifier] = ACTIONS(544),
    [sym_constructor_identifier] = ACTIONS(544),
    [sym_module_identifier] = ACTIONS(544),
    [anon_sym_case] = ACTIONS(542),
    [anon_sym_class] = ACTIONS(542),
    [anon_sym_default] = ACTIONS(542),
    [anon_sym_do] = ACTIONS(542),
    [anon_sym_else] = ACTIONS(542),
    [anon_sym_foreign] = ACTIONS(542),
    [anon_sym_if] = ACTIONS(542),
    [anon_sym_in] = ACTIONS(542),
    [anon_sym_infix] = ACTIONS(542),
    [anon_sym_infixl] = ACTIONS(542),
    [anon_sym_infixr] = ACTIONS(542),
    [anon_sym_instance] = ACTIONS(542),
    [anon_sym_let] = ACTIONS(542),
    [anon_sym_of] = ACTIONS(542),
    [anon_sym_then] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(544),
    [anon_sym_SQUOTE] = ACTIONS(542),
    [anon_sym_DQUOTE] = ACTIONS(542),
    [sym__integer_literal] = ACTIONS(542),
    [sym__octal_literal] = ACTIONS(542),
    [sym__hexidecimal_literal] = ACTIONS(542),
  },
  [158] = {
    [sym__identifier] = STATE(178),
    [anon_sym_DOT_DOT] = ACTIONS(546),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [sym__identifier] = STATE(180),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_module] = ACTIONS(552),
    [anon_sym_where] = ACTIONS(552),
    [anon_sym_import] = ACTIONS(552),
    [anon_sym_data] = ACTIONS(552),
    [anon_sym_newtype] = ACTIONS(552),
    [anon_sym_type] = ACTIONS(552),
    [sym_variable_identifier] = ACTIONS(554),
    [sym_constructor_identifier] = ACTIONS(554),
    [sym_module_identifier] = ACTIONS(554),
    [anon_sym_case] = ACTIONS(552),
    [anon_sym_class] = ACTIONS(552),
    [anon_sym_default] = ACTIONS(552),
    [anon_sym_do] = ACTIONS(552),
    [anon_sym_else] = ACTIONS(552),
    [anon_sym_foreign] = ACTIONS(552),
    [anon_sym_if] = ACTIONS(552),
    [anon_sym_in] = ACTIONS(552),
    [anon_sym_infix] = ACTIONS(552),
    [anon_sym_infixl] = ACTIONS(552),
    [anon_sym_infixr] = ACTIONS(552),
    [anon_sym_instance] = ACTIONS(552),
    [anon_sym_let] = ACTIONS(552),
    [anon_sym_of] = ACTIONS(552),
    [anon_sym_then] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(554),
    [anon_sym_SQUOTE] = ACTIONS(552),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [sym__integer_literal] = ACTIONS(552),
    [sym__octal_literal] = ACTIONS(552),
    [sym__hexidecimal_literal] = ACTIONS(552),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(558),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_module] = ACTIONS(562),
    [anon_sym_where] = ACTIONS(562),
    [anon_sym_import] = ACTIONS(562),
    [anon_sym_data] = ACTIONS(562),
    [anon_sym_PIPE] = ACTIONS(562),
    [anon_sym_deriving] = ACTIONS(562),
    [anon_sym_newtype] = ACTIONS(562),
    [anon_sym_type] = ACTIONS(562),
    [sym_variable_identifier] = ACTIONS(564),
    [sym_constructor_identifier] = ACTIONS(564),
    [sym_module_identifier] = ACTIONS(564),
    [anon_sym_case] = ACTIONS(562),
    [anon_sym_class] = ACTIONS(562),
    [anon_sym_default] = ACTIONS(562),
    [anon_sym_do] = ACTIONS(562),
    [anon_sym_else] = ACTIONS(562),
    [anon_sym_foreign] = ACTIONS(562),
    [anon_sym_if] = ACTIONS(562),
    [anon_sym_in] = ACTIONS(562),
    [anon_sym_infix] = ACTIONS(562),
    [anon_sym_infixl] = ACTIONS(562),
    [anon_sym_infixr] = ACTIONS(562),
    [anon_sym_instance] = ACTIONS(562),
    [anon_sym_let] = ACTIONS(562),
    [anon_sym_of] = ACTIONS(562),
    [anon_sym_then] = ACTIONS(562),
    [anon_sym__] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [sym__integer_literal] = ACTIONS(562),
    [sym__octal_literal] = ACTIONS(562),
    [sym__hexidecimal_literal] = ACTIONS(562),
  },
  [164] = {
    [sym_variable_identifier] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [sym_strict] = STATE(185),
    [sym__identifier] = STATE(185),
    [anon_sym_BANG] = ACTIONS(568),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_COLON_COLON] = ACTIONS(572),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym_field] = STATE(188),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_module] = ACTIONS(576),
    [anon_sym_where] = ACTIONS(576),
    [anon_sym_import] = ACTIONS(576),
    [anon_sym_data] = ACTIONS(576),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_deriving] = ACTIONS(576),
    [anon_sym_newtype] = ACTIONS(576),
    [anon_sym_type] = ACTIONS(576),
    [sym_variable_identifier] = ACTIONS(578),
    [sym_constructor_identifier] = ACTIONS(578),
    [sym_module_identifier] = ACTIONS(578),
    [anon_sym_case] = ACTIONS(576),
    [anon_sym_class] = ACTIONS(576),
    [anon_sym_default] = ACTIONS(576),
    [anon_sym_do] = ACTIONS(576),
    [anon_sym_else] = ACTIONS(576),
    [anon_sym_foreign] = ACTIONS(576),
    [anon_sym_if] = ACTIONS(576),
    [anon_sym_in] = ACTIONS(576),
    [anon_sym_infix] = ACTIONS(576),
    [anon_sym_infixl] = ACTIONS(576),
    [anon_sym_infixr] = ACTIONS(576),
    [anon_sym_instance] = ACTIONS(576),
    [anon_sym_let] = ACTIONS(576),
    [anon_sym_of] = ACTIONS(576),
    [anon_sym_then] = ACTIONS(576),
    [anon_sym__] = ACTIONS(576),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(576),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [sym__integer_literal] = ACTIONS(576),
    [sym__octal_literal] = ACTIONS(576),
    [sym__hexidecimal_literal] = ACTIONS(576),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(580),
    [anon_sym_RBRACE] = ACTIONS(582),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [aux_sym_import_specification_repeat1] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(590),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [sym__identifier] = STATE(196),
    [anon_sym_DOT_DOT] = ACTIONS(594),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(596),
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [aux_sym_export_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(600),
    [anon_sym_module] = ACTIONS(602),
    [anon_sym_where] = ACTIONS(602),
    [anon_sym_import] = ACTIONS(602),
    [anon_sym_data] = ACTIONS(602),
    [anon_sym_newtype] = ACTIONS(602),
    [anon_sym_type] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(604),
    [sym_constructor_identifier] = ACTIONS(604),
    [sym_module_identifier] = ACTIONS(604),
    [anon_sym_case] = ACTIONS(602),
    [anon_sym_class] = ACTIONS(602),
    [anon_sym_default] = ACTIONS(602),
    [anon_sym_do] = ACTIONS(602),
    [anon_sym_else] = ACTIONS(602),
    [anon_sym_foreign] = ACTIONS(602),
    [anon_sym_if] = ACTIONS(602),
    [anon_sym_in] = ACTIONS(602),
    [anon_sym_infix] = ACTIONS(602),
    [anon_sym_infixl] = ACTIONS(602),
    [anon_sym_infixr] = ACTIONS(602),
    [anon_sym_instance] = ACTIONS(602),
    [anon_sym_let] = ACTIONS(602),
    [anon_sym_of] = ACTIONS(602),
    [anon_sym_then] = ACTIONS(602),
    [anon_sym__] = ACTIONS(602),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(604),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym__integer_literal] = ACTIONS(602),
    [sym__octal_literal] = ACTIONS(602),
    [sym__hexidecimal_literal] = ACTIONS(602),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [sym__identifier] = STATE(199),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
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
  [183] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(614),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [sym__identifier] = STATE(139),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RBRACE] = ACTIONS(616),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [sym_variable_identifier] = ACTIONS(618),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [sym_strict] = STATE(201),
    [sym__identifier] = STATE(201),
    [anon_sym_BANG] = ACTIONS(568),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RBRACE] = ACTIONS(620),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [sym_field] = STATE(202),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [anon_sym_module] = ACTIONS(624),
    [anon_sym_where] = ACTIONS(624),
    [anon_sym_import] = ACTIONS(624),
    [anon_sym_data] = ACTIONS(624),
    [anon_sym_PIPE] = ACTIONS(624),
    [anon_sym_deriving] = ACTIONS(624),
    [anon_sym_newtype] = ACTIONS(624),
    [anon_sym_type] = ACTIONS(624),
    [sym_variable_identifier] = ACTIONS(626),
    [sym_constructor_identifier] = ACTIONS(626),
    [sym_module_identifier] = ACTIONS(626),
    [anon_sym_case] = ACTIONS(624),
    [anon_sym_class] = ACTIONS(624),
    [anon_sym_default] = ACTIONS(624),
    [anon_sym_do] = ACTIONS(624),
    [anon_sym_else] = ACTIONS(624),
    [anon_sym_foreign] = ACTIONS(624),
    [anon_sym_if] = ACTIONS(624),
    [anon_sym_in] = ACTIONS(624),
    [anon_sym_infix] = ACTIONS(624),
    [anon_sym_infixl] = ACTIONS(624),
    [anon_sym_infixr] = ACTIONS(624),
    [anon_sym_instance] = ACTIONS(624),
    [anon_sym_let] = ACTIONS(624),
    [anon_sym_of] = ACTIONS(624),
    [anon_sym_then] = ACTIONS(624),
    [anon_sym__] = ACTIONS(624),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [sym__integer_literal] = ACTIONS(624),
    [sym__octal_literal] = ACTIONS(624),
    [sym__hexidecimal_literal] = ACTIONS(624),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_module] = ACTIONS(632),
    [anon_sym_where] = ACTIONS(632),
    [anon_sym_import] = ACTIONS(632),
    [anon_sym_data] = ACTIONS(632),
    [anon_sym_newtype] = ACTIONS(632),
    [anon_sym_type] = ACTIONS(632),
    [sym_variable_identifier] = ACTIONS(634),
    [sym_constructor_identifier] = ACTIONS(634),
    [sym_module_identifier] = ACTIONS(634),
    [anon_sym_case] = ACTIONS(632),
    [anon_sym_class] = ACTIONS(632),
    [anon_sym_default] = ACTIONS(632),
    [anon_sym_do] = ACTIONS(632),
    [anon_sym_else] = ACTIONS(632),
    [anon_sym_foreign] = ACTIONS(632),
    [anon_sym_if] = ACTIONS(632),
    [anon_sym_in] = ACTIONS(632),
    [anon_sym_infix] = ACTIONS(632),
    [anon_sym_infixl] = ACTIONS(632),
    [anon_sym_infixr] = ACTIONS(632),
    [anon_sym_instance] = ACTIONS(632),
    [anon_sym_let] = ACTIONS(632),
    [anon_sym_of] = ACTIONS(632),
    [anon_sym_then] = ACTIONS(632),
    [anon_sym__] = ACTIONS(632),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym__integer_literal] = ACTIONS(632),
    [sym__octal_literal] = ACTIONS(632),
    [sym__hexidecimal_literal] = ACTIONS(632),
  },
  [193] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [aux_sym_import_specification_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [aux_sym_export_repeat1] = STATE(206),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [sym__identifier] = STATE(208),
    [anon_sym_DOT_DOT] = ACTIONS(640),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(642),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_COLON_COLON] = ACTIONS(646),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [anon_sym_COMMA] = ACTIONS(648),
    [anon_sym_RBRACE] = ACTIONS(648),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(650),
    [anon_sym_RBRACE] = ACTIONS(650),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(652),
    [anon_sym_module] = ACTIONS(654),
    [anon_sym_where] = ACTIONS(654),
    [anon_sym_import] = ACTIONS(654),
    [anon_sym_data] = ACTIONS(654),
    [anon_sym_newtype] = ACTIONS(654),
    [anon_sym_type] = ACTIONS(654),
    [sym_variable_identifier] = ACTIONS(656),
    [sym_constructor_identifier] = ACTIONS(656),
    [sym_module_identifier] = ACTIONS(656),
    [anon_sym_case] = ACTIONS(654),
    [anon_sym_class] = ACTIONS(654),
    [anon_sym_default] = ACTIONS(654),
    [anon_sym_do] = ACTIONS(654),
    [anon_sym_else] = ACTIONS(654),
    [anon_sym_foreign] = ACTIONS(654),
    [anon_sym_if] = ACTIONS(654),
    [anon_sym_in] = ACTIONS(654),
    [anon_sym_infix] = ACTIONS(654),
    [anon_sym_infixl] = ACTIONS(654),
    [anon_sym_infixr] = ACTIONS(654),
    [anon_sym_instance] = ACTIONS(654),
    [anon_sym_let] = ACTIONS(654),
    [anon_sym_of] = ACTIONS(654),
    [anon_sym_then] = ACTIONS(654),
    [anon_sym__] = ACTIONS(654),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(656),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [sym__integer_literal] = ACTIONS(654),
    [sym__octal_literal] = ACTIONS(654),
    [sym__hexidecimal_literal] = ACTIONS(654),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [aux_sym_export_repeat1] = STATE(212),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [aux_sym_import_specification_repeat1] = STATE(213),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [anon_sym_module] = ACTIONS(666),
    [anon_sym_where] = ACTIONS(666),
    [anon_sym_import] = ACTIONS(666),
    [anon_sym_data] = ACTIONS(666),
    [anon_sym_newtype] = ACTIONS(666),
    [anon_sym_type] = ACTIONS(666),
    [sym_variable_identifier] = ACTIONS(668),
    [sym_constructor_identifier] = ACTIONS(668),
    [sym_module_identifier] = ACTIONS(668),
    [anon_sym_case] = ACTIONS(666),
    [anon_sym_class] = ACTIONS(666),
    [anon_sym_default] = ACTIONS(666),
    [anon_sym_do] = ACTIONS(666),
    [anon_sym_else] = ACTIONS(666),
    [anon_sym_foreign] = ACTIONS(666),
    [anon_sym_if] = ACTIONS(666),
    [anon_sym_in] = ACTIONS(666),
    [anon_sym_infix] = ACTIONS(666),
    [anon_sym_infixl] = ACTIONS(666),
    [anon_sym_infixr] = ACTIONS(666),
    [anon_sym_instance] = ACTIONS(666),
    [anon_sym_let] = ACTIONS(666),
    [anon_sym_of] = ACTIONS(666),
    [anon_sym_then] = ACTIONS(666),
    [anon_sym__] = ACTIONS(666),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(668),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [sym__integer_literal] = ACTIONS(666),
    [sym__octal_literal] = ACTIONS(666),
    [sym__hexidecimal_literal] = ACTIONS(666),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(672),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [anon_sym_module] = ACTIONS(680),
    [anon_sym_where] = ACTIONS(680),
    [anon_sym_import] = ACTIONS(680),
    [anon_sym_data] = ACTIONS(680),
    [anon_sym_newtype] = ACTIONS(680),
    [anon_sym_type] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(682),
    [sym_constructor_identifier] = ACTIONS(682),
    [sym_module_identifier] = ACTIONS(682),
    [anon_sym_case] = ACTIONS(680),
    [anon_sym_class] = ACTIONS(680),
    [anon_sym_default] = ACTIONS(680),
    [anon_sym_do] = ACTIONS(680),
    [anon_sym_else] = ACTIONS(680),
    [anon_sym_foreign] = ACTIONS(680),
    [anon_sym_if] = ACTIONS(680),
    [anon_sym_in] = ACTIONS(680),
    [anon_sym_infix] = ACTIONS(680),
    [anon_sym_infixl] = ACTIONS(680),
    [anon_sym_infixr] = ACTIONS(680),
    [anon_sym_instance] = ACTIONS(680),
    [anon_sym_let] = ACTIONS(680),
    [anon_sym_of] = ACTIONS(680),
    [anon_sym_then] = ACTIONS(680),
    [anon_sym__] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [sym__integer_literal] = ACTIONS(680),
    [sym__octal_literal] = ACTIONS(680),
    [sym__hexidecimal_literal] = ACTIONS(680),
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
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
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
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1, .fragile = true),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [430] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [544] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
