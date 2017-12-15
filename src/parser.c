#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 256
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 3
#define TOKEN_COUNT 123
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
  anon_sym_class = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_data = 14,
  anon_sym_EQ = 15,
  anon_sym_EQ_GT = 16,
  anon_sym_PIPE = 17,
  anon_sym_deriving = 18,
  anon_sym_newtype = 19,
  anon_sym_COLON_COLON = 20,
  anon_sym_BANG = 21,
  anon_sym_type = 22,
  sym_variable_identifier = 23,
  sym_constructor_identifier = 24,
  sym_module_identifier = 25,
  anon_sym_case = 26,
  anon_sym_default = 27,
  anon_sym_do = 28,
  anon_sym_else = 29,
  anon_sym_foreign = 30,
  anon_sym_if = 31,
  anon_sym_in = 32,
  anon_sym_infix = 33,
  anon_sym_infixl = 34,
  anon_sym_infixr = 35,
  anon_sym_instance = 36,
  anon_sym_let = 37,
  anon_sym_of = 38,
  anon_sym_then = 39,
  anon_sym__ = 40,
  sym_comment = 41,
  sym_float = 42,
  anon_sym_SQUOTE = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 45,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 46,
  sym__ascii_large = 47,
  anon_sym_POUND = 48,
  anon_sym_DOLLAR = 49,
  anon_sym_PERCENT = 50,
  anon_sym_AMP = 51,
  anon_sym_1 = 52,
  anon_sym_PLUS = 53,
  anon_sym_DOT = 54,
  anon_sym_SLASH = 55,
  anon_sym_LT = 56,
  anon_sym_GT = 57,
  anon_sym_QMARK = 58,
  anon_sym_AT = 59,
  anon_sym_CARET = 60,
  anon_sym_DASH = 61,
  anon_sym_TILDE = 62,
  anon_sym_COLON = 63,
  anon_sym_BSLASH = 64,
  anon_sym_SEMI = 65,
  anon_sym_LBRACK = 66,
  anon_sym_RBRACK = 67,
  anon_sym_BQUOTE = 68,
  sym__space = 69,
  sym__newline = 70,
  sym__tab = 71,
  sym__vertical_tab = 72,
  anon_sym_x = 73,
  anon_sym_X = 74,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 75,
  anon_sym_o = 76,
  anon_sym_O = 77,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 78,
  anon_sym_a = 79,
  anon_sym_b = 80,
  anon_sym_f = 81,
  anon_sym_n = 82,
  anon_sym_r = 83,
  anon_sym_t = 84,
  anon_sym_v = 85,
  anon_sym_NUL = 86,
  anon_sym_SOH = 87,
  anon_sym_STX = 88,
  anon_sym_ETX = 89,
  anon_sym_EOT = 90,
  anon_sym_ENQ = 91,
  anon_sym_ACK = 92,
  anon_sym_BEL = 93,
  anon_sym_BS = 94,
  anon_sym_HT = 95,
  anon_sym_LF = 96,
  anon_sym_VT = 97,
  anon_sym_FF = 98,
  anon_sym_CR = 99,
  anon_sym_SO = 100,
  anon_sym_SI = 101,
  anon_sym_DLE = 102,
  anon_sym_DC1 = 103,
  anon_sym_DC2 = 104,
  anon_sym_DC3 = 105,
  anon_sym_DC4 = 106,
  anon_sym_NAK = 107,
  anon_sym_SYN = 108,
  anon_sym_ETB = 109,
  anon_sym_CAN = 110,
  anon_sym_EM = 111,
  anon_sym_SUB = 112,
  anon_sym_ESC = 113,
  anon_sym_FS = 114,
  anon_sym_GS = 115,
  anon_sym_RS = 116,
  anon_sym_US = 117,
  anon_sym_SP = 118,
  anon_sym_DEL = 119,
  sym__integer_literal = 120,
  sym__octal_literal = 121,
  sym__hexidecimal_literal = 122,
  sym_program = 123,
  sym__statement = 124,
  sym_module = 125,
  sym_module_exports = 126,
  sym_export = 127,
  sym_import = 128,
  sym_import_specification = 129,
  sym__top_level_declaration = 130,
  sym_type_class = 131,
  sym_algebraic_datatype = 132,
  sym_context = 133,
  sym_class = 134,
  sym_constructors = 135,
  sym_constructor = 136,
  sym_deriving = 137,
  sym_newtype = 138,
  sym_new_constructor = 139,
  sym_fields = 140,
  sym_field = 141,
  sym_strict = 142,
  sym_type_synonym = 143,
  sym__literal = 144,
  sym__identifier = 145,
  sym_simple_type = 146,
  sym_reserved_identifier = 147,
  sym_integer = 148,
  sym_char = 149,
  sym_string = 150,
  sym__gap = 151,
  sym__graphic = 152,
  sym__small = 153,
  sym__large = 154,
  sym__symbol = 155,
  sym__special = 156,
  sym__escape = 157,
  sym__char_escape = 158,
  sym__ascii = 159,
  sym__cntrl = 160,
  aux_sym_program_repeat1 = 161,
  aux_sym_module_exports_repeat1 = 162,
  aux_sym_export_repeat1 = 163,
  aux_sym_import_specification_repeat1 = 164,
  aux_sym_type_class_repeat1 = 165,
  aux_sym_context_repeat1 = 166,
  aux_sym_constructors_repeat1 = 167,
  aux_sym_constructor_repeat1 = 168,
  aux_sym_fields_repeat1 = 169,
  aux_sym_field_repeat1 = 170,
  aux_sym_string_repeat1 = 171,
  aux_sym__escape_repeat1 = 172,
  aux_sym__escape_repeat2 = 173,
  alias_sym_module_body = 174,
  alias_sym_type_constructor = 175,
  alias_sym_type_variable = 176,
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
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_deriving] = "deriving",
  [anon_sym_newtype] = "newtype",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_BANG] = "!",
  [anon_sym_type] = "type",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym_module_identifier] = "module_identifier",
  [anon_sym_case] = "case",
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
  [sym_type_class] = "type_class",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_context] = "context",
  [sym_class] = "class",
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
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
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
  [anon_sym_class] = {
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [sym_type_class] = {
    .visible = true,
    .named = true,
  },
  [sym_algebraic_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
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
  [aux_sym_type_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_repeat1] = {
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
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(104);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(107);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
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
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(67);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
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
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(52);
      if (lookahead == 'O')
        ADVANCE(53);
      if (lookahead == 'P')
        ADVANCE(55);
      if (lookahead == 'T')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(58);
      if (lookahead == 'Y')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(82);
      if (lookahead == 'E')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      if (lookahead == '+')
        ADVANCE(84);
      if (lookahead == '-')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(82);
      if (lookahead == 'E')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 91:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(91);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(104);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(107);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'K')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 125:
      if (lookahead == 'L')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(130);
      if (lookahead == 'O')
        ADVANCE(131);
      if (lookahead == 'P')
        ADVANCE(133);
      if (lookahead == 'T')
        ADVANCE(134);
      if (lookahead == 'U')
        ADVANCE(136);
      if (lookahead == 'Y')
        ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 134:
      if (lookahead == 'X')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 136:
      if (lookahead == 'B')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 138:
      if (lookahead == 'N')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 145:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(160);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '+')
        ADVANCE(162);
      if (lookahead == '-')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(163);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(160);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 167:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(168);
      if (lookahead == '\r')
        ADVANCE(263);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 168:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(168);
      if (lookahead == '\r')
        ADVANCE(168);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '\\')
        ADVANCE(176);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(177);
      if (lookahead == 'd')
        ADVANCE(185);
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
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(262);
      ADVANCE(8);
      END_STATE();
    case 169:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(82);
      if (lookahead == 'E')
        ADVANCE(83);
      if (lookahead == 'O')
        ADVANCE(171);
      if (lookahead == 'X')
        ADVANCE(173);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == 'o')
        ADVANCE(171);
      if (lookahead == 'x')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 175:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 176:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 177:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(178);
      if (lookahead == 'l')
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(180);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(183);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(189);
      if (lookahead == 'o')
        ADVANCE(201);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(190);
      if (lookahead == 'r')
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(197);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(198);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(199);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(200);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(208);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(209);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(210);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(211);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(212);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(214);
      if (lookahead == 'm')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(217);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(219);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(223);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(228);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(229);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(233);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(234);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(236);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(237);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(238);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(239);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(244);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(245);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(246);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(247);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(251);
      if (lookahead == 'y')
        ADVANCE(254);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(255);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(258);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(259);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(260);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(262);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(262);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(168);
      if (lookahead == '\r')
        ADVANCE(263);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 264:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(160);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'O')
        ADVANCE(266);
      if (lookahead == 'X')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'o')
        ADVANCE(266);
      if (lookahead == 'x')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(267);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(269);
      END_STATE();
    case 270:
      if (lookahead == '>')
        ADVANCE(112);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        SKIP(167);
      END_STATE();
    case 272:
      if (lookahead == 'a')
        ADVANCE(273);
      if (lookahead == 'l')
        ADVANCE(276);
      END_STATE();
    case 273:
      if (lookahead == 's')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'e')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 276:
      if (lookahead == 'a')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 's')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 's')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 280:
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead == 'e')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 281:
      if (lookahead == 't')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 284:
      if (lookahead == 'f')
        ADVANCE(285);
      if (lookahead == 'r')
        ADVANCE(290);
      END_STATE();
    case 285:
      if (lookahead == 'a')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'u')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'l')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 't')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 290:
      if (lookahead == 'i')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'v')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'i')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'n')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'g')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 297:
      if (lookahead == 'l')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 's')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'e')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'r')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'i')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'g')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 308:
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'm')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(315);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 310:
      if (lookahead == 'p')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'o')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'r')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'f')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(321);
      END_STATE();
    case 316:
      if (lookahead == 'i')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'x')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'r')
        ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 321:
      if (lookahead == 't')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'a')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'n')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'c')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'e')
        ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 327:
      if (lookahead == 'e')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 330:
      if (lookahead == 'o')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'd')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'u')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'l')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 336:
      if (lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'w')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'y')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'p')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'e')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_newtype);
      END_STATE();
    case 343:
      if (lookahead == 'f')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 345:
      if (lookahead == 'h')
        ADVANCE(346);
      if (lookahead == 'y')
        ADVANCE(349);
      END_STATE();
    case 346:
      if (lookahead == 'e')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'n')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 349:
      if (lookahead == 'p')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'e')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 352:
      if (lookahead == 'h')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'e')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'r')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'e')
        ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(357);
      END_STATE();
    case 358:
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == '\r')
        ADVANCE(385);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == 'q')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(358);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == '\r')
        ADVANCE(359);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == 'q')
        ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == ')')
        ADVANCE(361);
      if (lookahead == ',')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == ')')
        ADVANCE(361);
      if (lookahead == ',')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '>')
        ADVANCE(364);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == ')')
        ADVANCE(361);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == ']')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(368);
      if (lookahead == '}')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == ']')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 369:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(384);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == '\r')
        ADVANCE(385);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == 'q')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(358);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 386:
      if (lookahead == ')')
        ADVANCE(387);
      if (lookahead == ',')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 388:
      if (lookahead == ')')
        ADVANCE(387);
      if (lookahead == ',')
        ADVANCE(388);
      END_STATE();
    case 389:
      if (lookahead == '>')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == ')')
        ADVANCE(387);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        SKIP(358);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'd')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(403);
      END_STATE();
    case 404:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(498);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(404);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 405:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(405);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(406);
      if (lookahead == '_')
        ADVANCE(407);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(416);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(457);
      if (lookahead == 'm')
        ADVANCE(460);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 't')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(405);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(409);
      if (lookahead == 'l')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(417);
      if (lookahead == 'e')
        ADVANCE(420);
      if (lookahead == 'o')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(439);
      if (lookahead == 'm')
        ADVANCE(440);
      if (lookahead == 'n')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 's')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'r')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(476);
      if (lookahead == 'y')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(498);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(404);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        SKIP(404);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(491);
      if (lookahead == 'l')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'o')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(521);
      if (lookahead == 'm')
        ADVANCE(522);
      if (lookahead == 'n')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(528);
      if (lookahead == 's')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'x')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(531);
      if (lookahead == 'r')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'c')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'd')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'w')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'y')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'h')
        ADVANCE(558);
      if (lookahead == 'y')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'h')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(574);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(569);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(571);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(361);
      if (lookahead == ',')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(574);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(569);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(387);
      if (lookahead == ',')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(389);
      END_STATE();
    case 575:
      if (lookahead == 'n')
        SKIP(569);
      END_STATE();
    case 576:
      if (lookahead == '\n')
        ADVANCE(577);
      if (lookahead == '\r')
        ADVANCE(580);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '.')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 577:
      if (lookahead == '\n')
        ADVANCE(577);
      if (lookahead == '\r')
        ADVANCE(577);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '.')
        ADVANCE(578);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(579);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(577);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(577);
      if (lookahead == '\r')
        ADVANCE(580);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '.')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 581:
      if (lookahead == '.')
        ADVANCE(105);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        SKIP(576);
      END_STATE();
    case 583:
      if (lookahead == '\t')
        SKIP(583);
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 584:
      if (lookahead == '\t')
        ADVANCE(584);
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == ' ')
        ADVANCE(585);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(588);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(584);
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == ' ')
        ADVANCE(585);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(588);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '\t')
        SKIP(583);
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 596:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(599);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ' ')
        ADVANCE(601);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(599);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ' ')
        ADVANCE(601);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '\t')
        ADVANCE(599);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ' ')
        ADVANCE(601);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(599);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == ' ')
        ADVANCE(601);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(600);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 604:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(616);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(617);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(619);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 605:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(605);
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
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '\\')
        ADVANCE(606);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(607);
      if (lookahead == 'c')
        ADVANCE(177);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(609);
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
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(605);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      ADVANCE(8);
      END_STATE();
    case 606:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(605);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(608);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(612);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(613);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(616);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(617);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(619);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 616:
      if (lookahead == 'n')
        SKIP(604);
      END_STATE();
    case 617:
      if (lookahead == 's')
        ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 619:
      if (lookahead == 'i')
        ADVANCE(620);
      END_STATE();
    case 620:
      if (lookahead == 'd')
        ADVANCE(621);
      END_STATE();
    case 621:
      if (lookahead == 'i')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 'n')
        ADVANCE(623);
      END_STATE();
    case 623:
      if (lookahead == 'g')
        ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 625:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(617);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(619);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(625);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 626:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '\\')
        ADVANCE(627);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(607);
      if (lookahead == 'c')
        ADVANCE(177);
      if (lookahead == 'd')
        ADVANCE(628);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(609);
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
        ADVANCE(626);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(626);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(629);
      if (lookahead == 'o')
        ADVANCE(201);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(617);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(619);
      if (lookahead == 'i')
        ADVANCE(308);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(330);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(625);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        SKIP(625);
      END_STATE();
    case 632:
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead == 'e')
        ADVANCE(633);
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 633:
      if (lookahead == 'f')
        ADVANCE(285);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 638:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 639:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(650);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(574);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 640:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(640);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(571);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(641);
      if (lookahead == '_')
        ADVANCE(407);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(457);
      if (lookahead == 'm')
        ADVANCE(460);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 't')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(640);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(417);
      if (lookahead == 'e')
        ADVANCE(643);
      if (lookahead == 'o')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(421);
      if (lookahead == 'r')
        ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(650);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(574);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 651:
      if (lookahead == 'n')
        SKIP(639);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(653);
      if (lookahead == 'o')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(503);
      if (lookahead == 'r')
        ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'v')
        ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 660:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 661:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(661);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(662);
      if (lookahead == '_')
        ADVANCE(407);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(457);
      if (lookahead == 'm')
        ADVANCE(460);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 't')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(661);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 664:
      if (lookahead == 'n')
        SKIP(660);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(719);
      if (lookahead == 'B')
        ADVANCE(722);
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'D')
        ADVANCE(730);
      if (lookahead == 'E')
        ADVANCE(740);
      if (lookahead == 'F')
        ADVANCE(751);
      if (lookahead == 'G')
        ADVANCE(754);
      if (lookahead == 'H')
        ADVANCE(755);
      if (lookahead == 'L')
        ADVANCE(756);
      if (lookahead == 'N')
        ADVANCE(757);
      if (lookahead == 'O')
        ADVANCE(758);
      if (lookahead == 'R')
        ADVANCE(759);
      if (lookahead == 'S')
        ADVANCE(760);
      if (lookahead == 'U')
        ADVANCE(761);
      if (lookahead == 'V')
        ADVANCE(762);
      if (lookahead == 'X')
        ADVANCE(763);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(764);
      if (lookahead == 'b')
        ADVANCE(765);
      if (lookahead == 'f')
        ADVANCE(766);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(767);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      END_STATE();
    case 666:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(666);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == 'A')
        ADVANCE(667);
      if (lookahead == 'B')
        ADVANCE(670);
      if (lookahead == 'C')
        ADVANCE(674);
      if (lookahead == 'D')
        ADVANCE(678);
      if (lookahead == 'E')
        ADVANCE(688);
      if (lookahead == 'F')
        ADVANCE(699);
      if (lookahead == 'G')
        ADVANCE(702);
      if (lookahead == 'H')
        ADVANCE(703);
      if (lookahead == 'L')
        ADVANCE(704);
      if (lookahead == 'N')
        ADVANCE(705);
      if (lookahead == 'O')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(708);
      if (lookahead == 'U')
        ADVANCE(709);
      if (lookahead == 'V')
        ADVANCE(710);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead == '\\')
        ADVANCE(712);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'b')
        ADVANCE(714);
      if (lookahead == 'f')
        ADVANCE(715);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(716);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(671);
      if (lookahead == 'S')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(675);
      if (lookahead == 'R')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(679);
      if (lookahead == 'E')
        ADVANCE(684);
      if (lookahead == 'L')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(680);
      if (lookahead == '2')
        ADVANCE(681);
      if (lookahead == '3')
        ADVANCE(682);
      if (lookahead == '4')
        ADVANCE(683);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(687);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(689);
      if (lookahead == 'N')
        ADVANCE(690);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'S')
        ADVANCE(694);
      if (lookahead == 'T')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(693);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(695);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(697);
      if (lookahead == 'X')
        ADVANCE(698);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(700);
      if (lookahead == 'S')
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(52);
      if (lookahead == 'O')
        ADVANCE(53);
      if (lookahead == 'P')
        ADVANCE(55);
      if (lookahead == 'T')
        ADVANCE(56);
      if (lookahead == 'U')
        ADVANCE(58);
      if (lookahead == 'Y')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 718:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(719);
      if (lookahead == 'B')
        ADVANCE(722);
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'D')
        ADVANCE(730);
      if (lookahead == 'E')
        ADVANCE(740);
      if (lookahead == 'F')
        ADVANCE(751);
      if (lookahead == 'G')
        ADVANCE(754);
      if (lookahead == 'H')
        ADVANCE(755);
      if (lookahead == 'L')
        ADVANCE(756);
      if (lookahead == 'N')
        ADVANCE(757);
      if (lookahead == 'O')
        ADVANCE(758);
      if (lookahead == 'R')
        ADVANCE(759);
      if (lookahead == 'S')
        ADVANCE(760);
      if (lookahead == 'U')
        ADVANCE(761);
      if (lookahead == 'V')
        ADVANCE(762);
      if (lookahead == 'X')
        ADVANCE(763);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(764);
      if (lookahead == 'b')
        ADVANCE(765);
      if (lookahead == 'f')
        ADVANCE(766);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(767);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      END_STATE();
    case 719:
      if (lookahead == 'C')
        ADVANCE(720);
      END_STATE();
    case 720:
      if (lookahead == 'K')
        ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 722:
      if (lookahead == 'E')
        ADVANCE(723);
      if (lookahead == 'S')
        ADVANCE(725);
      END_STATE();
    case 723:
      if (lookahead == 'L')
        ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 726:
      if (lookahead == 'A')
        ADVANCE(727);
      if (lookahead == 'R')
        ADVANCE(729);
      END_STATE();
    case 727:
      if (lookahead == 'N')
        ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 730:
      if (lookahead == 'C')
        ADVANCE(731);
      if (lookahead == 'E')
        ADVANCE(736);
      if (lookahead == 'L')
        ADVANCE(738);
      END_STATE();
    case 731:
      if (lookahead == '1')
        ADVANCE(732);
      if (lookahead == '2')
        ADVANCE(733);
      if (lookahead == '3')
        ADVANCE(734);
      if (lookahead == '4')
        ADVANCE(735);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 736:
      if (lookahead == 'L')
        ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 738:
      if (lookahead == 'E')
        ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 740:
      if (lookahead == 'M')
        ADVANCE(741);
      if (lookahead == 'N')
        ADVANCE(742);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'S')
        ADVANCE(746);
      if (lookahead == 'T')
        ADVANCE(748);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 742:
      if (lookahead == 'Q')
        ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 744:
      if (lookahead == 'T')
        ADVANCE(745);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 746:
      if (lookahead == 'C')
        ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 748:
      if (lookahead == 'B')
        ADVANCE(749);
      if (lookahead == 'X')
        ADVANCE(750);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 751:
      if (lookahead == 'F')
        ADVANCE(752);
      if (lookahead == 'S')
        ADVANCE(753);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 754:
      if (lookahead == 'S')
        ADVANCE(117);
      END_STATE();
    case 755:
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 756:
      if (lookahead == 'F')
        ADVANCE(121);
      END_STATE();
    case 757:
      if (lookahead == 'A')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(125);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 759:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 760:
      if (lookahead == 'I')
        ADVANCE(130);
      if (lookahead == 'O')
        ADVANCE(131);
      if (lookahead == 'P')
        ADVANCE(133);
      if (lookahead == 'T')
        ADVANCE(134);
      if (lookahead == 'U')
        ADVANCE(136);
      if (lookahead == 'Y')
        ADVANCE(138);
      END_STATE();
    case 761:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 762:
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 769:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(781);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'A')
        ADVANCE(782);
      if (lookahead == 'B')
        ADVANCE(783);
      if (lookahead == 'C')
        ADVANCE(784);
      if (lookahead == 'D')
        ADVANCE(785);
      if (lookahead == 'E')
        ADVANCE(786);
      if (lookahead == 'F')
        ADVANCE(787);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(758);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(763);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(764);
      if (lookahead == 'b')
        ADVANCE(765);
      if (lookahead == 'f')
        ADVANCE(766);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(767);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(768);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(771);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == ' ')
        ADVANCE(773);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(774);
      if (lookahead == 'B')
        ADVANCE(775);
      if (lookahead == 'C')
        ADVANCE(776);
      if (lookahead == 'D')
        ADVANCE(777);
      if (lookahead == 'E')
        ADVANCE(778);
      if (lookahead == 'F')
        ADVANCE(779);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(780);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'b')
        ADVANCE(714);
      if (lookahead == 'f')
        ADVANCE(715);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(716);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(717);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(771);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == ' ')
        ADVANCE(773);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(774);
      if (lookahead == 'B')
        ADVANCE(775);
      if (lookahead == 'C')
        ADVANCE(776);
      if (lookahead == 'D')
        ADVANCE(777);
      if (lookahead == 'E')
        ADVANCE(778);
      if (lookahead == 'F')
        ADVANCE(779);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(780);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'b')
        ADVANCE(714);
      if (lookahead == 'f')
        ADVANCE(715);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(716);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(717);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      if (lookahead == '\t')
        ADVANCE(771);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == ' ')
        ADVANCE(773);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(774);
      if (lookahead == 'B')
        ADVANCE(775);
      if (lookahead == 'C')
        ADVANCE(776);
      if (lookahead == 'D')
        ADVANCE(777);
      if (lookahead == 'E')
        ADVANCE(778);
      if (lookahead == 'F')
        ADVANCE(779);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(780);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'b')
        ADVANCE(714);
      if (lookahead == 'f')
        ADVANCE(715);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(716);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(717);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(771);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == ' ')
        ADVANCE(773);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(774);
      if (lookahead == 'B')
        ADVANCE(775);
      if (lookahead == 'C')
        ADVANCE(776);
      if (lookahead == 'D')
        ADVANCE(777);
      if (lookahead == 'E')
        ADVANCE(778);
      if (lookahead == 'F')
        ADVANCE(779);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(780);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(713);
      if (lookahead == 'b')
        ADVANCE(714);
      if (lookahead == 'f')
        ADVANCE(715);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(716);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(717);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(671);
      if (lookahead == 'S')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(675);
      if (lookahead == 'R')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(679);
      if (lookahead == 'E')
        ADVANCE(684);
      if (lookahead == 'L')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(689);
      if (lookahead == 'N')
        ADVANCE(690);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'S')
        ADVANCE(694);
      if (lookahead == 'T')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(700);
      if (lookahead == 'S')
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(772);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 781:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(770);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(781);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'A')
        ADVANCE(782);
      if (lookahead == 'B')
        ADVANCE(783);
      if (lookahead == 'C')
        ADVANCE(784);
      if (lookahead == 'D')
        ADVANCE(785);
      if (lookahead == 'E')
        ADVANCE(786);
      if (lookahead == 'F')
        ADVANCE(787);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(758);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(763);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(764);
      if (lookahead == 'b')
        ADVANCE(765);
      if (lookahead == 'f')
        ADVANCE(766);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(767);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(768);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(720);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(723);
      if (lookahead == 'S')
        ADVANCE(725);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(727);
      if (lookahead == 'R')
        ADVANCE(729);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(731);
      if (lookahead == 'E')
        ADVANCE(736);
      if (lookahead == 'L')
        ADVANCE(738);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(741);
      if (lookahead == 'N')
        ADVANCE(742);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'S')
        ADVANCE(746);
      if (lookahead == 'T')
        ADVANCE(748);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(752);
      if (lookahead == 'S')
        ADVANCE(753);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(793);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == ':')
        ADVANCE(790);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '\\')
        ADVANCE(791);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(793);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      END_STATE();
    case 793:
      if (lookahead == ':')
        ADVANCE(108);
      END_STATE();
    case 794:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 795:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 796:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(797);
      if (lookahead == '_')
        ADVANCE(407);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(457);
      if (lookahead == 'm')
        ADVANCE(460);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 't')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(796);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(796);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        SKIP(795);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(806);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(803);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(801);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(803);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(803);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(806);
      END_STATE();
    case 805:
      if (lookahead == 'n')
        SKIP(800);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(806);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(809);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(808);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(817);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(812);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(814);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 813:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(812);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(817);
      END_STATE();
    case 816:
      if (lookahead == 'n')
        SKIP(811);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(824);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(819);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(820);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(821);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(819);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(824);
      END_STATE();
    case 823:
      if (lookahead == 'n')
        SKIP(818);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 825:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(827);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ' ')
        ADVANCE(829);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(827);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ' ')
        ADVANCE(829);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      if (lookahead == '\t')
        ADVANCE(827);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ' ')
        ADVANCE(829);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(827);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == ' ')
        ADVANCE(829);
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
        ADVANCE(586);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(79);
      if (lookahead == 8902)
        ADVANCE(80);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(828);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 831:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (lookahead == '$')
        ADVANCE(95);
      if (lookahead == '%')
        ADVANCE(96);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '.')
        ADVANCE(592);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(593);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '~')
        ADVANCE(157);
      if (lookahead == 8902)
        ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 832:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 833:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(834);
      if (lookahead == '_')
        ADVANCE(407);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'i')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(457);
      if (lookahead == 'm')
        ADVANCE(460);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 't')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(833);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 834:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(833);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(833);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == '_')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(490);
      if (lookahead == 'd')
        ADVANCE(652);
      if (lookahead == 'e')
        ADVANCE(509);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'l')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(542);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(555);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead == 'w')
        ADVANCE(564);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(832);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 836:
      if (lookahead == 'n')
        SKIP(832);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 167},
  [3] = {.lex_state = 167},
  [4] = {.lex_state = 358},
  [5] = {.lex_state = 404},
  [6] = {.lex_state = 569},
  [7] = {.lex_state = 576},
  [8] = {.lex_state = 576},
  [9] = {.lex_state = 167},
  [10] = {.lex_state = 583},
  [11] = {.lex_state = 596},
  [12] = {.lex_state = 167},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 167},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 167},
  [19] = {.lex_state = 576},
  [20] = {.lex_state = 604},
  [21] = {.lex_state = 625},
  [22] = {.lex_state = 634},
  [23] = {.lex_state = 634},
  [24] = {.lex_state = 634},
  [25] = {.lex_state = 576},
  [26] = {.lex_state = 639},
  [27] = {.lex_state = 576},
  [28] = {.lex_state = 167},
  [29] = {.lex_state = 639},
  [30] = {.lex_state = 660},
  [31] = {.lex_state = 576},
  [32] = {.lex_state = 576},
  [33] = {.lex_state = 358},
  [34] = {.lex_state = 358},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 665},
  [42] = {.lex_state = 596},
  [43] = {.lex_state = 596},
  [44] = {.lex_state = 596},
  [45] = {.lex_state = 596},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 596},
  [48] = {.lex_state = 596},
  [49] = {.lex_state = 769},
  [50] = {.lex_state = 596},
  [51] = {.lex_state = 596},
  [52] = {.lex_state = 167},
  [53] = {.lex_state = 167},
  [54] = {.lex_state = 576},
  [55] = {.lex_state = 167},
  [56] = {.lex_state = 625},
  [57] = {.lex_state = 576},
  [58] = {.lex_state = 576},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 634},
  [63] = {.lex_state = 569},
  [64] = {.lex_state = 788},
  [65] = {.lex_state = 569},
  [66] = {.lex_state = 660},
  [67] = {.lex_state = 660},
  [68] = {.lex_state = 660},
  [69] = {.lex_state = 576},
  [70] = {.lex_state = 576},
  [71] = {.lex_state = 795},
  [72] = {.lex_state = 795},
  [73] = {.lex_state = 660},
  [74] = {.lex_state = 660},
  [75] = {.lex_state = 569},
  [76] = {.lex_state = 167},
  [77] = {.lex_state = 167},
  [78] = {.lex_state = 167},
  [79] = {.lex_state = 660},
  [80] = {.lex_state = 576},
  [81] = {.lex_state = 576},
  [82] = {.lex_state = 800},
  [83] = {.lex_state = 576},
  [84] = {.lex_state = 167},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 807},
  [88] = {.lex_state = 811},
  [89] = {.lex_state = 818},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 596},
  [92] = {.lex_state = 596},
  [93] = {.lex_state = 807},
  [94] = {.lex_state = 811},
  [95] = {.lex_state = 818},
  [96] = {.lex_state = 596},
  [97] = {.lex_state = 596},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 167},
  [101] = {.lex_state = 788},
  [102] = {.lex_state = 788},
  [103] = {.lex_state = 167},
  [104] = {.lex_state = 576},
  [105] = {.lex_state = 167},
  [106] = {.lex_state = 167},
  [107] = {.lex_state = 788},
  [108] = {.lex_state = 625},
  [109] = {.lex_state = 576},
  [110] = {.lex_state = 788},
  [111] = {.lex_state = 576},
  [112] = {.lex_state = 167},
  [113] = {.lex_state = 788},
  [114] = {.lex_state = 788},
  [115] = {.lex_state = 660},
  [116] = {.lex_state = 660},
  [117] = {.lex_state = 167},
  [118] = {.lex_state = 167},
  [119] = {.lex_state = 788},
  [120] = {.lex_state = 660},
  [121] = {.lex_state = 576},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 576},
  [124] = {.lex_state = 167},
  [125] = {.lex_state = 569},
  [126] = {.lex_state = 576},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 660},
  [129] = {.lex_state = 660},
  [130] = {.lex_state = 576},
  [131] = {.lex_state = 576},
  [132] = {.lex_state = 167},
  [133] = {.lex_state = 404},
  [134] = {.lex_state = 404},
  [135] = {.lex_state = 404},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 811},
  [139] = {.lex_state = 811},
  [140] = {.lex_state = 818},
  [141] = {.lex_state = 818},
  [142] = {.lex_state = 596},
  [143] = {.lex_state = 596},
  [144] = {.lex_state = 596},
  [145] = {.lex_state = 596},
  [146] = {.lex_state = 825},
  [147] = {.lex_state = 825},
  [148] = {.lex_state = 576},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 788},
  [151] = {.lex_state = 576},
  [152] = {.lex_state = 167},
  [153] = {.lex_state = 625},
  [154] = {.lex_state = 576},
  [155] = {.lex_state = 576},
  [156] = {.lex_state = 167},
  [157] = {.lex_state = 788},
  [158] = {.lex_state = 167},
  [159] = {.lex_state = 788},
  [160] = {.lex_state = 167},
  [161] = {.lex_state = 788},
  [162] = {.lex_state = 576},
  [163] = {.lex_state = 576},
  [164] = {.lex_state = 167},
  [165] = {.lex_state = 167},
  [166] = {.lex_state = 167},
  [167] = {.lex_state = 576},
  [168] = {.lex_state = 788},
  [169] = {.lex_state = 788},
  [170] = {.lex_state = 788},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 576},
  [173] = {.lex_state = 788},
  [174] = {.lex_state = 788},
  [175] = {.lex_state = 832},
  [176] = {.lex_state = 660},
  [177] = {.lex_state = 167},
  [178] = {.lex_state = 167},
  [179] = {.lex_state = 404},
  [180] = {.lex_state = 811},
  [181] = {.lex_state = 818},
  [182] = {.lex_state = 596},
  [183] = {.lex_state = 825},
  [184] = {.lex_state = 788},
  [185] = {.lex_state = 576},
  [186] = {.lex_state = 167},
  [187] = {.lex_state = 358},
  [188] = {.lex_state = 788},
  [189] = {.lex_state = 167},
  [190] = {.lex_state = 358},
  [191] = {.lex_state = 788},
  [192] = {.lex_state = 788},
  [193] = {.lex_state = 576},
  [194] = {.lex_state = 167},
  [195] = {.lex_state = 576},
  [196] = {.lex_state = 788},
  [197] = {.lex_state = 788},
  [198] = {.lex_state = 576},
  [199] = {.lex_state = 167},
  [200] = {.lex_state = 788},
  [201] = {.lex_state = 576},
  [202] = {.lex_state = 788},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 788},
  [205] = {.lex_state = 167},
  [206] = {.lex_state = 569},
  [207] = {.lex_state = 576},
  [208] = {.lex_state = 788},
  [209] = {.lex_state = 569},
  [210] = {.lex_state = 167},
  [211] = {.lex_state = 788},
  [212] = {.lex_state = 788},
  [213] = {.lex_state = 788},
  [214] = {.lex_state = 788},
  [215] = {.lex_state = 788},
  [216] = {.lex_state = 788},
  [217] = {.lex_state = 576},
  [218] = {.lex_state = 788},
  [219] = {.lex_state = 358},
  [220] = {.lex_state = 788},
  [221] = {.lex_state = 167},
  [222] = {.lex_state = 788},
  [223] = {.lex_state = 167},
  [224] = {.lex_state = 788},
  [225] = {.lex_state = 576},
  [226] = {.lex_state = 788},
  [227] = {.lex_state = 569},
  [228] = {.lex_state = 576},
  [229] = {.lex_state = 788},
  [230] = {.lex_state = 569},
  [231] = {.lex_state = 167},
  [232] = {.lex_state = 788},
  [233] = {.lex_state = 167},
  [234] = {.lex_state = 788},
  [235] = {.lex_state = 788},
  [236] = {.lex_state = 358},
  [237] = {.lex_state = 788},
  [238] = {.lex_state = 576},
  [239] = {.lex_state = 788},
  [240] = {.lex_state = 788},
  [241] = {.lex_state = 788},
  [242] = {.lex_state = 788},
  [243] = {.lex_state = 167},
  [244] = {.lex_state = 788},
  [245] = {.lex_state = 788},
  [246] = {.lex_state = 788},
  [247] = {.lex_state = 358},
  [248] = {.lex_state = 788},
  [249] = {.lex_state = 788},
  [250] = {.lex_state = 167},
  [251] = {.lex_state = 788},
  [252] = {.lex_state = 788},
  [253] = {.lex_state = 788},
  [254] = {.lex_state = 788},
  [255] = {.lex_state = 167},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
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
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [anon_sym_case] = ACTIONS(40),
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
    [aux_sym_type_class_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(40),
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
  [6] = {
    [sym_context] = STATE(27),
    [sym_class] = STATE(28),
    [sym__identifier] = STATE(29),
    [sym_simple_type] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(32),
    [sym_simple_type] = STATE(33),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [sym__identifier] = STATE(32),
    [sym_simple_type] = STATE(34),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_import] = ACTIONS(62),
    [anon_sym_class] = ACTIONS(62),
    [anon_sym_data] = ACTIONS(62),
    [anon_sym_newtype] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_default] = ACTIONS(62),
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
    [sym__graphic] = STATE(38),
    [sym__small] = STATE(39),
    [sym__large] = STATE(39),
    [sym__symbol] = STATE(39),
    [sym__special] = STATE(39),
    [sym__escape] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
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
    [sym__gap] = STATE(45),
    [sym__graphic] = STATE(45),
    [sym__small] = STATE(47),
    [sym__large] = STATE(47),
    [sym__symbol] = STATE(47),
    [sym__special] = STATE(47),
    [sym__escape] = STATE(45),
    [aux_sym_string_repeat1] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
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
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(102),
    [anon_sym_newtype] = ACTIONS(102),
    [anon_sym_type] = ACTIONS(102),
    [anon_sym_case] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
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
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_newtype] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym_case] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
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
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_data] = ACTIONS(116),
    [anon_sym_newtype] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(116),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
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
    [anon_sym_class] = ACTIONS(122),
    [anon_sym_data] = ACTIONS(122),
    [anon_sym_newtype] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(122),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_default] = ACTIONS(122),
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
    [sym__statement] = STATE(52),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
    [sym_module_exports] = STATE(55),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__identifier] = STATE(56),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_as] = ACTIONS(136),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_deriving] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
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
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [21] = {
    [sym_import_specification] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_where] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(142),
    [anon_sym_as] = ACTIONS(146),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_newtype] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym_case] = ACTIONS(142),
    [anon_sym_default] = ACTIONS(142),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [sym__integer_literal] = ACTIONS(142),
    [sym__octal_literal] = ACTIONS(142),
    [sym__hexidecimal_literal] = ACTIONS(142),
  },
  [22] = {
    [anon_sym_where] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [anon_sym_where] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym__identifier] = STATE(62),
    [anon_sym_where] = ACTIONS(156),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [sym_class] = STATE(64),
    [sym__identifier] = STATE(65),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_deriving] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
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
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [27] = {
    [sym__identifier] = STATE(67),
    [sym_simple_type] = STATE(68),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [anon_sym_EQ_GT] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [sym__identifier] = STATE(72),
    [aux_sym_type_class_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_module] = ACTIONS(170),
    [anon_sym_where] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_import] = ACTIONS(170),
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_data] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_deriving] = ACTIONS(170),
    [anon_sym_newtype] = ACTIONS(170),
    [anon_sym_type] = ACTIONS(170),
    [sym_variable_identifier] = ACTIONS(174),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_module_identifier] = ACTIONS(174),
    [anon_sym_case] = ACTIONS(170),
    [anon_sym_default] = ACTIONS(170),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_else] = ACTIONS(170),
    [anon_sym_foreign] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(170),
    [anon_sym_infix] = ACTIONS(170),
    [anon_sym_infixl] = ACTIONS(170),
    [anon_sym_infixr] = ACTIONS(170),
    [anon_sym_instance] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_of] = ACTIONS(170),
    [anon_sym_then] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym__integer_literal] = ACTIONS(170),
    [sym__octal_literal] = ACTIONS(170),
    [sym__hexidecimal_literal] = ACTIONS(170),
  },
  [30] = {
    [sym_constructors] = STATE(76),
    [sym_constructor] = STATE(77),
    [sym_deriving] = STATE(78),
    [sym__identifier] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_where] = ACTIONS(180),
    [anon_sym_import] = ACTIONS(180),
    [anon_sym_class] = ACTIONS(180),
    [anon_sym_data] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(180),
    [anon_sym_type] = ACTIONS(180),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(180),
    [anon_sym_default] = ACTIONS(180),
    [anon_sym_do] = ACTIONS(180),
    [anon_sym_else] = ACTIONS(180),
    [anon_sym_foreign] = ACTIONS(180),
    [anon_sym_if] = ACTIONS(180),
    [anon_sym_in] = ACTIONS(180),
    [anon_sym_infix] = ACTIONS(180),
    [anon_sym_infixl] = ACTIONS(180),
    [anon_sym_infixr] = ACTIONS(180),
    [anon_sym_instance] = ACTIONS(180),
    [anon_sym_let] = ACTIONS(180),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_then] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [sym__integer_literal] = ACTIONS(180),
    [sym__octal_literal] = ACTIONS(180),
    [sym__hexidecimal_literal] = ACTIONS(180),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym__identifier] = STATE(80),
    [aux_sym_type_class_repeat1] = STATE(81),
    [anon_sym_EQ] = ACTIONS(170),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(188),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [anon_sym_EQ] = ACTIONS(190),
    [sym_comment] = ACTIONS(26),
  },
  [35] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(192),
  },
  [36] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(194),
  },
  [37] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(196),
  },
  [38] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [39] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(200),
  },
  [40] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(202),
  },
  [41] = {
    [sym__char_escape] = STATE(86),
    [sym__ascii] = STATE(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(204),
    [anon_sym_x] = ACTIONS(210),
    [anon_sym_X] = ACTIONS(210),
    [anon_sym_o] = ACTIONS(212),
    [anon_sym_O] = ACTIONS(212),
    [anon_sym_a] = ACTIONS(204),
    [anon_sym_b] = ACTIONS(204),
    [anon_sym_f] = ACTIONS(204),
    [anon_sym_n] = ACTIONS(204),
    [anon_sym_r] = ACTIONS(204),
    [anon_sym_t] = ACTIONS(204),
    [anon_sym_v] = ACTIONS(204),
    [anon_sym_NUL] = ACTIONS(214),
    [anon_sym_SOH] = ACTIONS(214),
    [anon_sym_STX] = ACTIONS(214),
    [anon_sym_ETX] = ACTIONS(214),
    [anon_sym_EOT] = ACTIONS(214),
    [anon_sym_ENQ] = ACTIONS(214),
    [anon_sym_ACK] = ACTIONS(214),
    [anon_sym_BEL] = ACTIONS(214),
    [anon_sym_BS] = ACTIONS(214),
    [anon_sym_HT] = ACTIONS(214),
    [anon_sym_LF] = ACTIONS(214),
    [anon_sym_VT] = ACTIONS(214),
    [anon_sym_FF] = ACTIONS(214),
    [anon_sym_CR] = ACTIONS(214),
    [anon_sym_SO] = ACTIONS(214),
    [anon_sym_SI] = ACTIONS(214),
    [anon_sym_DLE] = ACTIONS(214),
    [anon_sym_DC1] = ACTIONS(214),
    [anon_sym_DC2] = ACTIONS(214),
    [anon_sym_DC3] = ACTIONS(214),
    [anon_sym_DC4] = ACTIONS(214),
    [anon_sym_NAK] = ACTIONS(214),
    [anon_sym_SYN] = ACTIONS(214),
    [anon_sym_ETB] = ACTIONS(214),
    [anon_sym_CAN] = ACTIONS(214),
    [anon_sym_EM] = ACTIONS(214),
    [anon_sym_SUB] = ACTIONS(214),
    [anon_sym_ESC] = ACTIONS(214),
    [anon_sym_FS] = ACTIONS(214),
    [anon_sym_GS] = ACTIONS(214),
    [anon_sym_RS] = ACTIONS(214),
    [anon_sym_US] = ACTIONS(214),
    [anon_sym_SP] = ACTIONS(214),
    [anon_sym_DEL] = ACTIONS(214),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(216),
    [sym__ascii_large] = ACTIONS(216),
    [anon_sym_POUND] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [anon_sym_PERCENT] = ACTIONS(216),
    [anon_sym_AMP] = ACTIONS(216),
    [anon_sym_1] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_QMARK] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [sym__space] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
    [sym__tab] = ACTIONS(216),
    [sym__vertical_tab] = ACTIONS(216),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
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
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym__] = ACTIONS(220),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(220),
    [sym__ascii_large] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(220),
    [anon_sym_DOLLAR] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_QMARK] = ACTIONS(220),
    [anon_sym_AT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_BQUOTE] = ACTIONS(220),
    [sym__space] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
    [sym__tab] = ACTIONS(220),
    [sym__vertical_tab] = ACTIONS(220),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(72),
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
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_module] = ACTIONS(226),
    [anon_sym_where] = ACTIONS(226),
    [anon_sym_import] = ACTIONS(226),
    [anon_sym_class] = ACTIONS(226),
    [anon_sym_data] = ACTIONS(226),
    [anon_sym_newtype] = ACTIONS(226),
    [anon_sym_type] = ACTIONS(226),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
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
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(230),
    [sym__ascii_large] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(230),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [anon_sym_PERCENT] = ACTIONS(230),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_1] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(230),
    [anon_sym_CARET] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [sym__space] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
    [sym__tab] = ACTIONS(230),
    [sym__vertical_tab] = ACTIONS(230),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(232),
    [sym__ascii_large] = ACTIONS(232),
    [anon_sym_POUND] = ACTIONS(232),
    [anon_sym_DOLLAR] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_1] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_BQUOTE] = ACTIONS(232),
    [sym__space] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
    [sym__tab] = ACTIONS(232),
    [sym__vertical_tab] = ACTIONS(232),
  },
  [49] = {
    [sym__char_escape] = STATE(92),
    [sym__ascii] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_BANG] = ACTIONS(218),
    [anon_sym__] = ACTIONS(218),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(218),
    [sym__ascii_large] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(218),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [anon_sym_QMARK] = ACTIONS(218),
    [anon_sym_AT] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_TILDE] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_BQUOTE] = ACTIONS(218),
    [sym__space] = ACTIONS(218),
    [sym__newline] = ACTIONS(218),
    [sym__tab] = ACTIONS(218),
    [sym__vertical_tab] = ACTIONS(218),
    [anon_sym_x] = ACTIONS(240),
    [anon_sym_X] = ACTIONS(240),
    [anon_sym_o] = ACTIONS(242),
    [anon_sym_O] = ACTIONS(242),
    [anon_sym_a] = ACTIONS(234),
    [anon_sym_b] = ACTIONS(234),
    [anon_sym_f] = ACTIONS(234),
    [anon_sym_n] = ACTIONS(234),
    [anon_sym_r] = ACTIONS(234),
    [anon_sym_t] = ACTIONS(234),
    [anon_sym_v] = ACTIONS(234),
    [anon_sym_NUL] = ACTIONS(244),
    [anon_sym_SOH] = ACTIONS(244),
    [anon_sym_STX] = ACTIONS(244),
    [anon_sym_ETX] = ACTIONS(244),
    [anon_sym_EOT] = ACTIONS(244),
    [anon_sym_ENQ] = ACTIONS(244),
    [anon_sym_ACK] = ACTIONS(244),
    [anon_sym_BEL] = ACTIONS(244),
    [anon_sym_BS] = ACTIONS(244),
    [anon_sym_HT] = ACTIONS(244),
    [anon_sym_LF] = ACTIONS(244),
    [anon_sym_VT] = ACTIONS(244),
    [anon_sym_FF] = ACTIONS(244),
    [anon_sym_CR] = ACTIONS(244),
    [anon_sym_SO] = ACTIONS(244),
    [anon_sym_SI] = ACTIONS(244),
    [anon_sym_DLE] = ACTIONS(244),
    [anon_sym_DC1] = ACTIONS(244),
    [anon_sym_DC2] = ACTIONS(244),
    [anon_sym_DC3] = ACTIONS(244),
    [anon_sym_DC4] = ACTIONS(244),
    [anon_sym_NAK] = ACTIONS(244),
    [anon_sym_SYN] = ACTIONS(244),
    [anon_sym_ETB] = ACTIONS(244),
    [anon_sym_CAN] = ACTIONS(244),
    [anon_sym_EM] = ACTIONS(244),
    [anon_sym_SUB] = ACTIONS(244),
    [anon_sym_ESC] = ACTIONS(244),
    [anon_sym_FS] = ACTIONS(244),
    [anon_sym_GS] = ACTIONS(244),
    [anon_sym_RS] = ACTIONS(244),
    [anon_sym_US] = ACTIONS(244),
    [anon_sym_SP] = ACTIONS(244),
    [anon_sym_DEL] = ACTIONS(244),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_BANG] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(246),
    [sym__ascii_large] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_1] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_TILDE] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(246),
    [sym__space] = ACTIONS(246),
    [sym__newline] = ACTIONS(246),
    [sym__tab] = ACTIONS(246),
    [sym__vertical_tab] = ACTIONS(246),
  },
  [51] = {
    [sym__gap] = STATE(97),
    [sym__graphic] = STATE(97),
    [sym__small] = STATE(47),
    [sym__large] = STATE(47),
    [sym__symbol] = STATE(47),
    [sym__special] = STATE(47),
    [sym__escape] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(250),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_import] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_newtype] = ACTIONS(254),
    [anon_sym_type] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(254),
    [anon_sym_default] = ACTIONS(254),
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
  [53] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
  [54] = {
    [sym_export] = STATE(101),
    [sym__identifier] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [anon_sym_where] = ACTIONS(262),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [sym_import_specification] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_case] = ACTIONS(266),
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
    [sym_float] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [57] = {
    [sym__identifier] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [58] = {
    [sym__identifier] = STATE(108),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(274),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_case] = ACTIONS(266),
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
    [sym_float] = ACTIONS(270),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [sym_comment] = ACTIONS(26),
  },
  [62] = {
    [anon_sym_where] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [aux_sym_context_repeat1] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [sym__identifier] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(172),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_deriving] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
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
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [67] = {
    [sym__identifier] = STATE(115),
    [aux_sym_type_class_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_module] = ACTIONS(170),
    [anon_sym_where] = ACTIONS(170),
    [anon_sym_import] = ACTIONS(170),
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_data] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_deriving] = ACTIONS(170),
    [anon_sym_newtype] = ACTIONS(170),
    [anon_sym_type] = ACTIONS(170),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(170),
    [anon_sym_default] = ACTIONS(170),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_else] = ACTIONS(170),
    [anon_sym_foreign] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(170),
    [anon_sym_infix] = ACTIONS(170),
    [anon_sym_infixl] = ACTIONS(170),
    [anon_sym_infixr] = ACTIONS(170),
    [anon_sym_instance] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_of] = ACTIONS(170),
    [anon_sym_then] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym__integer_literal] = ACTIONS(170),
    [sym__octal_literal] = ACTIONS(170),
    [sym__hexidecimal_literal] = ACTIONS(170),
  },
  [68] = {
    [sym_constructors] = STATE(117),
    [sym_constructor] = STATE(77),
    [sym_deriving] = STATE(118),
    [sym__identifier] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(288),
    [anon_sym_where] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(288),
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
    [sym_float] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__integer_literal] = ACTIONS(288),
    [sym__octal_literal] = ACTIONS(288),
    [sym__hexidecimal_literal] = ACTIONS(288),
  },
  [69] = {
    [sym_variable_identifier] = ACTIONS(294),
    [sym_constructor_identifier] = ACTIONS(296),
    [sym_module_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(26),
  },
  [70] = {
    [sym__identifier] = STATE(119),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_EQ_GT] = ACTIONS(136),
    [anon_sym_deriving] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
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
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_deriving] = ACTIONS(152),
    [anon_sym_newtype] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(152),
    [anon_sym_default] = ACTIONS(152),
    [anon_sym_do] = ACTIONS(152),
    [anon_sym_else] = ACTIONS(152),
    [anon_sym_foreign] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_in] = ACTIONS(152),
    [anon_sym_infix] = ACTIONS(152),
    [anon_sym_infixl] = ACTIONS(152),
    [anon_sym_infixr] = ACTIONS(152),
    [anon_sym_instance] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_of] = ACTIONS(152),
    [anon_sym_then] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym__integer_literal] = ACTIONS(152),
    [sym__octal_literal] = ACTIONS(152),
    [sym__hexidecimal_literal] = ACTIONS(152),
  },
  [73] = {
    [sym__identifier] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_where] = ACTIONS(304),
    [anon_sym_import] = ACTIONS(304),
    [anon_sym_class] = ACTIONS(304),
    [anon_sym_data] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_deriving] = ACTIONS(304),
    [anon_sym_newtype] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [sym__integer_literal] = ACTIONS(304),
    [sym__octal_literal] = ACTIONS(304),
    [sym__hexidecimal_literal] = ACTIONS(304),
  },
  [74] = {
    [sym_constructors] = STATE(117),
    [sym_constructor] = STATE(77),
    [sym_deriving] = STATE(118),
    [sym__identifier] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(288),
    [anon_sym_where] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(288),
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
    [sym_float] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__integer_literal] = ACTIONS(288),
    [sym__octal_literal] = ACTIONS(288),
    [sym__hexidecimal_literal] = ACTIONS(288),
  },
  [75] = {
    [sym__identifier] = STATE(122),
    [anon_sym_LPAREN] = ACTIONS(308),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [76] = {
    [sym_deriving] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(288),
    [anon_sym_where] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(288),
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
    [sym_float] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__integer_literal] = ACTIONS(288),
    [sym__octal_literal] = ACTIONS(288),
    [sym__hexidecimal_literal] = ACTIONS(288),
  },
  [77] = {
    [aux_sym_constructors_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_module] = ACTIONS(312),
    [anon_sym_where] = ACTIONS(312),
    [anon_sym_import] = ACTIONS(312),
    [anon_sym_class] = ACTIONS(312),
    [anon_sym_data] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_deriving] = ACTIONS(312),
    [anon_sym_newtype] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(312),
    [anon_sym_case] = ACTIONS(312),
    [anon_sym_default] = ACTIONS(312),
    [anon_sym_do] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [anon_sym_foreign] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(312),
    [anon_sym_in] = ACTIONS(312),
    [anon_sym_infix] = ACTIONS(312),
    [anon_sym_infixl] = ACTIONS(312),
    [anon_sym_infixr] = ACTIONS(312),
    [anon_sym_instance] = ACTIONS(312),
    [anon_sym_let] = ACTIONS(312),
    [anon_sym_of] = ACTIONS(312),
    [anon_sym_then] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(316),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [sym__integer_literal] = ACTIONS(312),
    [sym__octal_literal] = ACTIONS(312),
    [sym__hexidecimal_literal] = ACTIONS(312),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(288),
    [anon_sym_where] = ACTIONS(288),
    [anon_sym_import] = ACTIONS(288),
    [anon_sym_class] = ACTIONS(288),
    [anon_sym_data] = ACTIONS(288),
    [anon_sym_newtype] = ACTIONS(288),
    [anon_sym_type] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(288),
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
    [sym_float] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym__integer_literal] = ACTIONS(288),
    [sym__octal_literal] = ACTIONS(288),
    [sym__hexidecimal_literal] = ACTIONS(288),
  },
  [79] = {
    [sym_fields] = STATE(127),
    [sym_strict] = STATE(128),
    [sym__identifier] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_where] = ACTIONS(320),
    [anon_sym_import] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_deriving] = ACTIONS(320),
    [anon_sym_newtype] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(324),
    [anon_sym_type] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(320),
    [anon_sym_default] = ACTIONS(320),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [sym__integer_literal] = ACTIONS(320),
    [sym__octal_literal] = ACTIONS(320),
    [sym__hexidecimal_literal] = ACTIONS(320),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [sym__identifier] = STATE(130),
    [anon_sym_EQ] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [sym_new_constructor] = STATE(132),
    [sym_constructor_identifier] = ACTIONS(328),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [sym__identifier] = STATE(134),
    [aux_sym_type_class_repeat1] = STATE(135),
    [sym_variable_identifier] = ACTIONS(330),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_module] = ACTIONS(336),
    [anon_sym_where] = ACTIONS(336),
    [anon_sym_import] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_data] = ACTIONS(336),
    [anon_sym_newtype] = ACTIONS(336),
    [anon_sym_type] = ACTIONS(336),
    [anon_sym_case] = ACTIONS(336),
    [anon_sym_default] = ACTIONS(336),
    [anon_sym_do] = ACTIONS(336),
    [anon_sym_else] = ACTIONS(336),
    [anon_sym_foreign] = ACTIONS(336),
    [anon_sym_if] = ACTIONS(336),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_infix] = ACTIONS(336),
    [anon_sym_infixl] = ACTIONS(336),
    [anon_sym_infixr] = ACTIONS(336),
    [anon_sym_instance] = ACTIONS(336),
    [anon_sym_let] = ACTIONS(336),
    [anon_sym_of] = ACTIONS(336),
    [anon_sym_then] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [85] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(340),
  },
  [86] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(342),
  },
  [87] = {
    [sym__cntrl] = STATE(137),
    [anon_sym__] = ACTIONS(344),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
  },
  [88] = {
    [aux_sym__escape_repeat1] = STATE(139),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(346),
  },
  [89] = {
    [aux_sym__escape_repeat2] = STATE(141),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(348),
  },
  [90] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(350),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(352),
    [sym__ascii_large] = ACTIONS(352),
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
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(354),
    [sym__ascii_large] = ACTIONS(354),
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
  },
  [93] = {
    [sym__cntrl] = STATE(143),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(356),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
  },
  [94] = {
    [aux_sym__escape_repeat1] = STATE(145),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(358),
  },
  [95] = {
    [aux_sym__escape_repeat2] = STATE(147),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(360),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym__] = ACTIONS(362),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(362),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(362),
    [sym__ascii_large] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_1] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [anon_sym_RBRACK] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [sym__space] = ACTIONS(362),
    [sym__newline] = ACTIONS(362),
    [sym__tab] = ACTIONS(362),
    [sym__vertical_tab] = ACTIONS(362),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym__] = ACTIONS(364),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(364),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(364),
    [sym__ascii_large] = ACTIONS(364),
    [anon_sym_POUND] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_1] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(364),
    [anon_sym_BSLASH] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_BQUOTE] = ACTIONS(364),
    [sym__space] = ACTIONS(364),
    [sym__newline] = ACTIONS(364),
    [sym__tab] = ACTIONS(364),
    [sym__vertical_tab] = ACTIONS(364),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
    [anon_sym_import] = ACTIONS(368),
    [anon_sym_class] = ACTIONS(368),
    [anon_sym_data] = ACTIONS(368),
    [anon_sym_newtype] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym_case] = ACTIONS(368),
    [anon_sym_default] = ACTIONS(368),
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
  [99] = {
    [sym__statement] = STATE(52),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
  [100] = {
    [anon_sym_where] = ACTIONS(374),
    [sym_comment] = ACTIONS(26),
  },
  [101] = {
    [aux_sym_module_exports_repeat1] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(26),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [sym_comment] = ACTIONS(26),
  },
  [103] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
  [104] = {
    [sym__identifier] = STATE(153),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_module] = ACTIONS(388),
    [anon_sym_where] = ACTIONS(388),
    [anon_sym_import] = ACTIONS(388),
    [anon_sym_class] = ACTIONS(388),
    [anon_sym_data] = ACTIONS(388),
    [anon_sym_newtype] = ACTIONS(388),
    [anon_sym_type] = ACTIONS(388),
    [anon_sym_case] = ACTIONS(388),
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
    [sym_float] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [sym__integer_literal] = ACTIONS(388),
    [sym__octal_literal] = ACTIONS(388),
    [sym__hexidecimal_literal] = ACTIONS(388),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_module] = ACTIONS(394),
    [anon_sym_where] = ACTIONS(394),
    [anon_sym_import] = ACTIONS(394),
    [anon_sym_class] = ACTIONS(394),
    [anon_sym_data] = ACTIONS(394),
    [anon_sym_newtype] = ACTIONS(394),
    [anon_sym_type] = ACTIONS(394),
    [anon_sym_case] = ACTIONS(394),
    [anon_sym_default] = ACTIONS(394),
    [anon_sym_do] = ACTIONS(394),
    [anon_sym_else] = ACTIONS(394),
    [anon_sym_foreign] = ACTIONS(394),
    [anon_sym_if] = ACTIONS(394),
    [anon_sym_in] = ACTIONS(394),
    [anon_sym_infix] = ACTIONS(394),
    [anon_sym_infixl] = ACTIONS(394),
    [anon_sym_infixr] = ACTIONS(394),
    [anon_sym_instance] = ACTIONS(394),
    [anon_sym_let] = ACTIONS(394),
    [anon_sym_of] = ACTIONS(394),
    [anon_sym_then] = ACTIONS(394),
    [anon_sym__] = ACTIONS(394),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [sym__integer_literal] = ACTIONS(394),
    [sym__octal_literal] = ACTIONS(394),
    [sym__hexidecimal_literal] = ACTIONS(394),
  },
  [107] = {
    [aux_sym_import_specification_repeat1] = STATE(157),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(26),
  },
  [108] = {
    [sym_import_specification] = STATE(158),
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_module] = ACTIONS(388),
    [anon_sym_where] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(388),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(388),
    [anon_sym_data] = ACTIONS(388),
    [anon_sym_newtype] = ACTIONS(388),
    [anon_sym_type] = ACTIONS(388),
    [anon_sym_case] = ACTIONS(388),
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
    [sym_float] = ACTIONS(390),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [sym__integer_literal] = ACTIONS(388),
    [sym__octal_literal] = ACTIONS(388),
    [sym__hexidecimal_literal] = ACTIONS(388),
  },
  [109] = {
    [sym__identifier] = STATE(159),
    [anon_sym_RPAREN] = ACTIONS(402),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [anon_sym_RBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(26),
  },
  [111] = {
    [sym_class] = STATE(161),
    [sym__identifier] = STATE(65),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
  },
  [112] = {
    [anon_sym_EQ_GT] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(410),
    [sym_comment] = ACTIONS(26),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_deriving] = ACTIONS(152),
    [anon_sym_newtype] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(152),
    [anon_sym_default] = ACTIONS(152),
    [anon_sym_do] = ACTIONS(152),
    [anon_sym_else] = ACTIONS(152),
    [anon_sym_foreign] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_in] = ACTIONS(152),
    [anon_sym_infix] = ACTIONS(152),
    [anon_sym_infixl] = ACTIONS(152),
    [anon_sym_infixr] = ACTIONS(152),
    [anon_sym_instance] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_of] = ACTIONS(152),
    [anon_sym_then] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym__integer_literal] = ACTIONS(152),
    [sym__octal_literal] = ACTIONS(152),
    [sym__hexidecimal_literal] = ACTIONS(152),
  },
  [116] = {
    [sym_constructors] = STATE(165),
    [sym_constructor] = STATE(77),
    [sym_deriving] = STATE(166),
    [sym__identifier] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [117] = {
    [sym_deriving] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [119] = {
    [aux_sym_export_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_where] = ACTIONS(278),
    [anon_sym_import] = ACTIONS(278),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [anon_sym_newtype] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
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
    [anon_sym_of] = ACTIONS(278),
    [anon_sym_then] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [sym__integer_literal] = ACTIONS(278),
    [sym__octal_literal] = ACTIONS(278),
    [sym__hexidecimal_literal] = ACTIONS(278),
  },
  [121] = {
    [sym__identifier] = STATE(170),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [anon_sym_module] = ACTIONS(426),
    [anon_sym_where] = ACTIONS(426),
    [anon_sym_import] = ACTIONS(426),
    [anon_sym_class] = ACTIONS(426),
    [anon_sym_data] = ACTIONS(426),
    [anon_sym_newtype] = ACTIONS(426),
    [anon_sym_type] = ACTIONS(426),
    [anon_sym_case] = ACTIONS(426),
    [anon_sym_default] = ACTIONS(426),
    [anon_sym_do] = ACTIONS(426),
    [anon_sym_else] = ACTIONS(426),
    [anon_sym_foreign] = ACTIONS(426),
    [anon_sym_if] = ACTIONS(426),
    [anon_sym_in] = ACTIONS(426),
    [anon_sym_infix] = ACTIONS(426),
    [anon_sym_infixl] = ACTIONS(426),
    [anon_sym_infixr] = ACTIONS(426),
    [anon_sym_instance] = ACTIONS(426),
    [anon_sym_let] = ACTIONS(426),
    [anon_sym_of] = ACTIONS(426),
    [anon_sym_then] = ACTIONS(426),
    [anon_sym__] = ACTIONS(426),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [sym__integer_literal] = ACTIONS(426),
    [sym__octal_literal] = ACTIONS(426),
    [sym__hexidecimal_literal] = ACTIONS(426),
  },
  [123] = {
    [sym_constructor] = STATE(171),
    [sym__identifier] = STATE(79),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_where] = ACTIONS(432),
    [anon_sym_import] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(432),
    [anon_sym_data] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_deriving] = ACTIONS(432),
    [anon_sym_newtype] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_case] = ACTIONS(432),
    [anon_sym_default] = ACTIONS(432),
    [anon_sym_do] = ACTIONS(432),
    [anon_sym_else] = ACTIONS(432),
    [anon_sym_foreign] = ACTIONS(432),
    [anon_sym_if] = ACTIONS(432),
    [anon_sym_in] = ACTIONS(432),
    [anon_sym_infix] = ACTIONS(432),
    [anon_sym_infixl] = ACTIONS(432),
    [anon_sym_infixr] = ACTIONS(432),
    [anon_sym_instance] = ACTIONS(432),
    [anon_sym_let] = ACTIONS(432),
    [anon_sym_of] = ACTIONS(432),
    [anon_sym_then] = ACTIONS(432),
    [anon_sym__] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__integer_literal] = ACTIONS(432),
    [sym__octal_literal] = ACTIONS(432),
    [sym__hexidecimal_literal] = ACTIONS(432),
  },
  [125] = {
    [sym_field] = STATE(174),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [sym__identifier] = STATE(175),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_where] = ACTIONS(442),
    [anon_sym_import] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(442),
    [anon_sym_data] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_deriving] = ACTIONS(442),
    [anon_sym_newtype] = ACTIONS(442),
    [anon_sym_type] = ACTIONS(442),
    [anon_sym_case] = ACTIONS(442),
    [anon_sym_default] = ACTIONS(442),
    [anon_sym_do] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(442),
    [anon_sym_foreign] = ACTIONS(442),
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_in] = ACTIONS(442),
    [anon_sym_infix] = ACTIONS(442),
    [anon_sym_infixl] = ACTIONS(442),
    [anon_sym_infixr] = ACTIONS(442),
    [anon_sym_instance] = ACTIONS(442),
    [anon_sym_let] = ACTIONS(442),
    [anon_sym_of] = ACTIONS(442),
    [anon_sym_then] = ACTIONS(442),
    [anon_sym__] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [sym__integer_literal] = ACTIONS(442),
    [sym__octal_literal] = ACTIONS(442),
    [sym__hexidecimal_literal] = ACTIONS(442),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_where] = ACTIONS(448),
    [anon_sym_import] = ACTIONS(448),
    [anon_sym_class] = ACTIONS(448),
    [anon_sym_data] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [anon_sym_newtype] = ACTIONS(448),
    [anon_sym_BANG] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(450),
    [sym_constructor_identifier] = ACTIONS(450),
    [sym_module_identifier] = ACTIONS(450),
    [anon_sym_case] = ACTIONS(448),
    [anon_sym_default] = ACTIONS(448),
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
  [129] = {
    [sym_strict] = STATE(176),
    [sym__identifier] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_where] = ACTIONS(442),
    [anon_sym_import] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(442),
    [anon_sym_data] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_deriving] = ACTIONS(442),
    [anon_sym_newtype] = ACTIONS(442),
    [anon_sym_BANG] = ACTIONS(324),
    [anon_sym_type] = ACTIONS(442),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(442),
    [anon_sym_default] = ACTIONS(442),
    [anon_sym_do] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(442),
    [anon_sym_foreign] = ACTIONS(442),
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_in] = ACTIONS(442),
    [anon_sym_infix] = ACTIONS(442),
    [anon_sym_infixl] = ACTIONS(442),
    [anon_sym_infixr] = ACTIONS(442),
    [anon_sym_instance] = ACTIONS(442),
    [anon_sym_let] = ACTIONS(442),
    [anon_sym_of] = ACTIONS(442),
    [anon_sym_then] = ACTIONS(442),
    [anon_sym__] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [sym__integer_literal] = ACTIONS(442),
    [sym__octal_literal] = ACTIONS(442),
    [sym__hexidecimal_literal] = ACTIONS(442),
  },
  [130] = {
    [anon_sym_EQ] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym_fields] = STATE(177),
    [sym__identifier] = STATE(177),
    [anon_sym_LBRACE] = ACTIONS(322),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [sym_deriving] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
    [anon_sym_import] = ACTIONS(454),
    [anon_sym_class] = ACTIONS(454),
    [anon_sym_data] = ACTIONS(454),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(454),
    [anon_sym_type] = ACTIONS(454),
    [anon_sym_case] = ACTIONS(454),
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
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
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
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(152),
    [anon_sym_class] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_newtype] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(152),
    [anon_sym_default] = ACTIONS(152),
    [anon_sym_do] = ACTIONS(152),
    [anon_sym_else] = ACTIONS(152),
    [anon_sym_foreign] = ACTIONS(152),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_in] = ACTIONS(152),
    [anon_sym_infix] = ACTIONS(152),
    [anon_sym_infixl] = ACTIONS(152),
    [anon_sym_infixr] = ACTIONS(152),
    [anon_sym_instance] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_of] = ACTIONS(152),
    [anon_sym_then] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym__integer_literal] = ACTIONS(152),
    [sym__octal_literal] = ACTIONS(152),
    [sym__hexidecimal_literal] = ACTIONS(152),
  },
  [135] = {
    [sym__identifier] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_where] = ACTIONS(460),
    [anon_sym_import] = ACTIONS(460),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_data] = ACTIONS(460),
    [anon_sym_newtype] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [sym_variable_identifier] = ACTIONS(332),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(332),
    [anon_sym_case] = ACTIONS(460),
    [anon_sym_default] = ACTIONS(460),
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
  [136] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(464),
  },
  [137] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(466),
  },
  [138] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(468),
  },
  [139] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(472),
  },
  [140] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(474),
  },
  [141] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(476),
  },
  [142] = {
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_BANG] = ACTIONS(478),
    [anon_sym__] = ACTIONS(478),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(478),
    [anon_sym_DQUOTE] = ACTIONS(478),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(478),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(478),
    [sym__ascii_large] = ACTIONS(478),
    [anon_sym_POUND] = ACTIONS(478),
    [anon_sym_DOLLAR] = ACTIONS(478),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_AMP] = ACTIONS(478),
    [anon_sym_1] = ACTIONS(478),
    [anon_sym_PLUS] = ACTIONS(478),
    [anon_sym_DOT] = ACTIONS(478),
    [anon_sym_SLASH] = ACTIONS(478),
    [anon_sym_LT] = ACTIONS(478),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_QMARK] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_DASH] = ACTIONS(478),
    [anon_sym_TILDE] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(478),
    [anon_sym_BSLASH] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(478),
    [anon_sym_RBRACK] = ACTIONS(478),
    [anon_sym_BQUOTE] = ACTIONS(478),
    [sym__space] = ACTIONS(478),
    [sym__newline] = ACTIONS(478),
    [sym__tab] = ACTIONS(478),
    [sym__vertical_tab] = ACTIONS(478),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(480),
    [anon_sym_LBRACE] = ACTIONS(480),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_EQ] = ACTIONS(480),
    [anon_sym_PIPE] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(480),
    [anon_sym__] = ACTIONS(480),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(480),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(480),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(480),
    [sym__ascii_large] = ACTIONS(480),
    [anon_sym_POUND] = ACTIONS(480),
    [anon_sym_DOLLAR] = ACTIONS(480),
    [anon_sym_PERCENT] = ACTIONS(480),
    [anon_sym_AMP] = ACTIONS(480),
    [anon_sym_1] = ACTIONS(480),
    [anon_sym_PLUS] = ACTIONS(480),
    [anon_sym_DOT] = ACTIONS(480),
    [anon_sym_SLASH] = ACTIONS(480),
    [anon_sym_LT] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(480),
    [anon_sym_QMARK] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(480),
    [anon_sym_CARET] = ACTIONS(480),
    [anon_sym_DASH] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_BSLASH] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(480),
    [anon_sym_RBRACK] = ACTIONS(480),
    [anon_sym_BQUOTE] = ACTIONS(480),
    [sym__space] = ACTIONS(480),
    [sym__newline] = ACTIONS(480),
    [sym__tab] = ACTIONS(480),
    [sym__vertical_tab] = ACTIONS(480),
  },
  [144] = {
    [anon_sym_LPAREN] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_EQ] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(482),
    [anon_sym_BANG] = ACTIONS(482),
    [anon_sym__] = ACTIONS(482),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(482),
    [anon_sym_DQUOTE] = ACTIONS(482),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(482),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(482),
    [sym__ascii_large] = ACTIONS(482),
    [anon_sym_POUND] = ACTIONS(482),
    [anon_sym_DOLLAR] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(482),
    [anon_sym_AMP] = ACTIONS(482),
    [anon_sym_1] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_DOT] = ACTIONS(482),
    [anon_sym_SLASH] = ACTIONS(482),
    [anon_sym_LT] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_QMARK] = ACTIONS(482),
    [anon_sym_AT] = ACTIONS(482),
    [anon_sym_CARET] = ACTIONS(482),
    [anon_sym_DASH] = ACTIONS(482),
    [anon_sym_TILDE] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(482),
    [anon_sym_BSLASH] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [anon_sym_BQUOTE] = ACTIONS(482),
    [sym__space] = ACTIONS(482),
    [sym__newline] = ACTIONS(482),
    [sym__tab] = ACTIONS(482),
    [sym__vertical_tab] = ACTIONS(482),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(482),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(484),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(484),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(484),
    [sym__ascii_large] = ACTIONS(484),
    [anon_sym_POUND] = ACTIONS(484),
    [anon_sym_DOLLAR] = ACTIONS(484),
    [anon_sym_PERCENT] = ACTIONS(484),
    [anon_sym_AMP] = ACTIONS(484),
    [anon_sym_1] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_GT] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_AT] = ACTIONS(484),
    [anon_sym_CARET] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(484),
    [anon_sym_TILDE] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_BSLASH] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [anon_sym_BQUOTE] = ACTIONS(484),
    [sym__space] = ACTIONS(484),
    [sym__newline] = ACTIONS(484),
    [sym__tab] = ACTIONS(484),
    [sym__vertical_tab] = ACTIONS(484),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(486),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(488),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(488),
  },
  [147] = {
    [anon_sym_LPAREN] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_RBRACE] = ACTIONS(484),
    [anon_sym_EQ] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_BANG] = ACTIONS(484),
    [anon_sym__] = ACTIONS(484),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(484),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(484),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(484),
    [sym__ascii_large] = ACTIONS(484),
    [anon_sym_POUND] = ACTIONS(484),
    [anon_sym_DOLLAR] = ACTIONS(484),
    [anon_sym_PERCENT] = ACTIONS(484),
    [anon_sym_AMP] = ACTIONS(484),
    [anon_sym_1] = ACTIONS(484),
    [anon_sym_PLUS] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_LT] = ACTIONS(484),
    [anon_sym_GT] = ACTIONS(484),
    [anon_sym_QMARK] = ACTIONS(484),
    [anon_sym_AT] = ACTIONS(484),
    [anon_sym_CARET] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(484),
    [anon_sym_TILDE] = ACTIONS(484),
    [anon_sym_COLON] = ACTIONS(484),
    [anon_sym_BSLASH] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [anon_sym_BQUOTE] = ACTIONS(484),
    [sym__space] = ACTIONS(484),
    [sym__newline] = ACTIONS(484),
    [sym__tab] = ACTIONS(484),
    [sym__vertical_tab] = ACTIONS(484),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(490),
  },
  [148] = {
    [sym_export] = STATE(184),
    [sym__identifier] = STATE(102),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [anon_sym_where] = ACTIONS(492),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [sym__identifier] = STATE(188),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [sym__statement] = STATE(52),
    [sym_module] = STATE(15),
    [sym_import] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_type_class] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_data] = ACTIONS(20),
    [anon_sym_newtype] = ACTIONS(22),
    [anon_sym_type] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
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
  [153] = {
    [sym_import_specification] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_module] = ACTIONS(504),
    [anon_sym_where] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(504),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(504),
    [anon_sym_data] = ACTIONS(504),
    [anon_sym_newtype] = ACTIONS(504),
    [anon_sym_type] = ACTIONS(504),
    [anon_sym_case] = ACTIONS(504),
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
  [154] = {
    [sym__identifier] = STATE(191),
    [anon_sym_DOT_DOT] = ACTIONS(508),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [sym__identifier] = STATE(192),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(512),
    [anon_sym_where] = ACTIONS(512),
    [anon_sym_import] = ACTIONS(512),
    [anon_sym_class] = ACTIONS(512),
    [anon_sym_data] = ACTIONS(512),
    [anon_sym_newtype] = ACTIONS(512),
    [anon_sym_type] = ACTIONS(512),
    [anon_sym_case] = ACTIONS(512),
    [anon_sym_default] = ACTIONS(512),
    [anon_sym_do] = ACTIONS(512),
    [anon_sym_else] = ACTIONS(512),
    [anon_sym_foreign] = ACTIONS(512),
    [anon_sym_if] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(512),
    [anon_sym_infix] = ACTIONS(512),
    [anon_sym_infixl] = ACTIONS(512),
    [anon_sym_infixr] = ACTIONS(512),
    [anon_sym_instance] = ACTIONS(512),
    [anon_sym_let] = ACTIONS(512),
    [anon_sym_of] = ACTIONS(512),
    [anon_sym_then] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(512),
    [anon_sym_DQUOTE] = ACTIONS(512),
    [sym__integer_literal] = ACTIONS(512),
    [sym__octal_literal] = ACTIONS(512),
    [sym__hexidecimal_literal] = ACTIONS(512),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_module] = ACTIONS(504),
    [anon_sym_where] = ACTIONS(504),
    [anon_sym_import] = ACTIONS(504),
    [anon_sym_class] = ACTIONS(504),
    [anon_sym_data] = ACTIONS(504),
    [anon_sym_newtype] = ACTIONS(504),
    [anon_sym_type] = ACTIONS(504),
    [anon_sym_case] = ACTIONS(504),
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
  [159] = {
    [aux_sym_import_specification_repeat1] = STATE(196),
    [anon_sym_LPAREN] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [anon_sym_module] = ACTIONS(524),
    [anon_sym_where] = ACTIONS(524),
    [anon_sym_import] = ACTIONS(524),
    [anon_sym_class] = ACTIONS(524),
    [anon_sym_data] = ACTIONS(524),
    [anon_sym_newtype] = ACTIONS(524),
    [anon_sym_type] = ACTIONS(524),
    [anon_sym_case] = ACTIONS(524),
    [anon_sym_default] = ACTIONS(524),
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
  [161] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [sym_variable_identifier] = ACTIONS(530),
    [sym_constructor_identifier] = ACTIONS(532),
    [sym_module_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [sym_class] = STATE(197),
    [sym__identifier] = STATE(65),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [anon_sym_EQ_GT] = ACTIONS(534),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [sym_deriving] = STATE(199),
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_module] = ACTIONS(538),
    [anon_sym_where] = ACTIONS(538),
    [anon_sym_import] = ACTIONS(538),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_data] = ACTIONS(538),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(538),
    [anon_sym_type] = ACTIONS(538),
    [anon_sym_case] = ACTIONS(538),
    [anon_sym_default] = ACTIONS(538),
    [anon_sym_do] = ACTIONS(538),
    [anon_sym_else] = ACTIONS(538),
    [anon_sym_foreign] = ACTIONS(538),
    [anon_sym_if] = ACTIONS(538),
    [anon_sym_in] = ACTIONS(538),
    [anon_sym_infix] = ACTIONS(538),
    [anon_sym_infixl] = ACTIONS(538),
    [anon_sym_infixr] = ACTIONS(538),
    [anon_sym_instance] = ACTIONS(538),
    [anon_sym_let] = ACTIONS(538),
    [anon_sym_of] = ACTIONS(538),
    [anon_sym_then] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(540),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [sym__integer_literal] = ACTIONS(538),
    [sym__octal_literal] = ACTIONS(538),
    [sym__hexidecimal_literal] = ACTIONS(538),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_module] = ACTIONS(538),
    [anon_sym_where] = ACTIONS(538),
    [anon_sym_import] = ACTIONS(538),
    [anon_sym_class] = ACTIONS(538),
    [anon_sym_data] = ACTIONS(538),
    [anon_sym_newtype] = ACTIONS(538),
    [anon_sym_type] = ACTIONS(538),
    [anon_sym_case] = ACTIONS(538),
    [anon_sym_default] = ACTIONS(538),
    [anon_sym_do] = ACTIONS(538),
    [anon_sym_else] = ACTIONS(538),
    [anon_sym_foreign] = ACTIONS(538),
    [anon_sym_if] = ACTIONS(538),
    [anon_sym_in] = ACTIONS(538),
    [anon_sym_infix] = ACTIONS(538),
    [anon_sym_infixl] = ACTIONS(538),
    [anon_sym_infixr] = ACTIONS(538),
    [anon_sym_instance] = ACTIONS(538),
    [anon_sym_let] = ACTIONS(538),
    [anon_sym_of] = ACTIONS(538),
    [anon_sym_then] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(540),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [sym__integer_literal] = ACTIONS(538),
    [sym__octal_literal] = ACTIONS(538),
    [sym__hexidecimal_literal] = ACTIONS(538),
  },
  [167] = {
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_EQ_GT] = ACTIONS(542),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [aux_sym_export_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_module] = ACTIONS(552),
    [anon_sym_where] = ACTIONS(552),
    [anon_sym_import] = ACTIONS(552),
    [anon_sym_class] = ACTIONS(552),
    [anon_sym_data] = ACTIONS(552),
    [anon_sym_PIPE] = ACTIONS(552),
    [anon_sym_deriving] = ACTIONS(552),
    [anon_sym_newtype] = ACTIONS(552),
    [anon_sym_type] = ACTIONS(552),
    [anon_sym_case] = ACTIONS(552),
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
  [172] = {
    [sym_constructor] = STATE(205),
    [sym__identifier] = STATE(79),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [aux_sym_field_repeat1] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_COLON_COLON] = ACTIONS(558),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [aux_sym_fields_repeat1] = STATE(211),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_module] = ACTIONS(566),
    [anon_sym_where] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(566),
    [anon_sym_data] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(566),
    [anon_sym_deriving] = ACTIONS(566),
    [anon_sym_newtype] = ACTIONS(566),
    [anon_sym_BANG] = ACTIONS(566),
    [anon_sym_type] = ACTIONS(566),
    [sym_variable_identifier] = ACTIONS(568),
    [sym_constructor_identifier] = ACTIONS(568),
    [sym_module_identifier] = ACTIONS(568),
    [anon_sym_case] = ACTIONS(566),
    [anon_sym_default] = ACTIONS(566),
    [anon_sym_do] = ACTIONS(566),
    [anon_sym_else] = ACTIONS(566),
    [anon_sym_foreign] = ACTIONS(566),
    [anon_sym_if] = ACTIONS(566),
    [anon_sym_in] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
    [anon_sym_infixl] = ACTIONS(566),
    [anon_sym_infixr] = ACTIONS(566),
    [anon_sym_instance] = ACTIONS(566),
    [anon_sym_let] = ACTIONS(566),
    [anon_sym_of] = ACTIONS(566),
    [anon_sym_then] = ACTIONS(566),
    [anon_sym__] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [sym__integer_literal] = ACTIONS(566),
    [sym__octal_literal] = ACTIONS(566),
    [sym__hexidecimal_literal] = ACTIONS(566),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_module] = ACTIONS(572),
    [anon_sym_where] = ACTIONS(572),
    [anon_sym_import] = ACTIONS(572),
    [anon_sym_class] = ACTIONS(572),
    [anon_sym_data] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_deriving] = ACTIONS(572),
    [anon_sym_newtype] = ACTIONS(572),
    [anon_sym_BANG] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [sym_variable_identifier] = ACTIONS(574),
    [sym_constructor_identifier] = ACTIONS(574),
    [sym_module_identifier] = ACTIONS(574),
    [anon_sym_case] = ACTIONS(572),
    [anon_sym_default] = ACTIONS(572),
    [anon_sym_do] = ACTIONS(572),
    [anon_sym_else] = ACTIONS(572),
    [anon_sym_foreign] = ACTIONS(572),
    [anon_sym_if] = ACTIONS(572),
    [anon_sym_in] = ACTIONS(572),
    [anon_sym_infix] = ACTIONS(572),
    [anon_sym_infixl] = ACTIONS(572),
    [anon_sym_infixr] = ACTIONS(572),
    [anon_sym_instance] = ACTIONS(572),
    [anon_sym_let] = ACTIONS(572),
    [anon_sym_of] = ACTIONS(572),
    [anon_sym_then] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(572),
    [anon_sym_DQUOTE] = ACTIONS(572),
    [sym__integer_literal] = ACTIONS(572),
    [sym__octal_literal] = ACTIONS(572),
    [sym__hexidecimal_literal] = ACTIONS(572),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_module] = ACTIONS(578),
    [anon_sym_where] = ACTIONS(578),
    [anon_sym_import] = ACTIONS(578),
    [anon_sym_class] = ACTIONS(578),
    [anon_sym_data] = ACTIONS(578),
    [anon_sym_deriving] = ACTIONS(578),
    [anon_sym_newtype] = ACTIONS(578),
    [anon_sym_type] = ACTIONS(578),
    [anon_sym_case] = ACTIONS(578),
    [anon_sym_default] = ACTIONS(578),
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
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_module] = ACTIONS(584),
    [anon_sym_where] = ACTIONS(584),
    [anon_sym_import] = ACTIONS(584),
    [anon_sym_class] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_newtype] = ACTIONS(584),
    [anon_sym_type] = ACTIONS(584),
    [anon_sym_case] = ACTIONS(584),
    [anon_sym_default] = ACTIONS(584),
    [anon_sym_do] = ACTIONS(584),
    [anon_sym_else] = ACTIONS(584),
    [anon_sym_foreign] = ACTIONS(584),
    [anon_sym_if] = ACTIONS(584),
    [anon_sym_in] = ACTIONS(584),
    [anon_sym_infix] = ACTIONS(584),
    [anon_sym_infixl] = ACTIONS(584),
    [anon_sym_infixr] = ACTIONS(584),
    [anon_sym_instance] = ACTIONS(584),
    [anon_sym_let] = ACTIONS(584),
    [anon_sym_of] = ACTIONS(584),
    [anon_sym_then] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(586),
    [anon_sym_SQUOTE] = ACTIONS(584),
    [anon_sym_DQUOTE] = ACTIONS(584),
    [sym__integer_literal] = ACTIONS(584),
    [sym__octal_literal] = ACTIONS(584),
    [sym__hexidecimal_literal] = ACTIONS(584),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_where] = ACTIONS(278),
    [anon_sym_import] = ACTIONS(278),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_newtype] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
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
    [anon_sym_of] = ACTIONS(278),
    [anon_sym_then] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [sym__integer_literal] = ACTIONS(278),
    [sym__octal_literal] = ACTIONS(278),
    [sym__hexidecimal_literal] = ACTIONS(278),
  },
  [180] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(588),
  },
  [181] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(590),
  },
  [182] = {
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_EQ] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(592),
    [anon_sym_BANG] = ACTIONS(592),
    [anon_sym__] = ACTIONS(592),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(592),
    [sym__ascii_large] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_DOLLAR] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(592),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_1] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_SLASH] = ACTIONS(592),
    [anon_sym_LT] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(592),
    [anon_sym_DASH] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_LBRACK] = ACTIONS(592),
    [anon_sym_RBRACK] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(592),
    [sym__space] = ACTIONS(592),
    [sym__newline] = ACTIONS(592),
    [sym__tab] = ACTIONS(592),
    [sym__vertical_tab] = ACTIONS(592),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(592),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(594),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_LBRACE] = ACTIONS(594),
    [anon_sym_RBRACE] = ACTIONS(594),
    [anon_sym_EQ] = ACTIONS(594),
    [anon_sym_PIPE] = ACTIONS(594),
    [anon_sym_BANG] = ACTIONS(594),
    [anon_sym__] = ACTIONS(594),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DQUOTE] = ACTIONS(594),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(594),
    [sym__ascii_large] = ACTIONS(594),
    [anon_sym_POUND] = ACTIONS(594),
    [anon_sym_DOLLAR] = ACTIONS(594),
    [anon_sym_PERCENT] = ACTIONS(594),
    [anon_sym_AMP] = ACTIONS(594),
    [anon_sym_1] = ACTIONS(594),
    [anon_sym_PLUS] = ACTIONS(594),
    [anon_sym_DOT] = ACTIONS(594),
    [anon_sym_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(594),
    [anon_sym_GT] = ACTIONS(594),
    [anon_sym_QMARK] = ACTIONS(594),
    [anon_sym_AT] = ACTIONS(594),
    [anon_sym_CARET] = ACTIONS(594),
    [anon_sym_DASH] = ACTIONS(594),
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_BSLASH] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_LBRACK] = ACTIONS(594),
    [anon_sym_RBRACK] = ACTIONS(594),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [sym__space] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
    [sym__tab] = ACTIONS(594),
    [sym__vertical_tab] = ACTIONS(594),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(594),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [sym_export] = STATE(212),
    [sym__identifier] = STATE(102),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [anon_sym_where] = ACTIONS(598),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [aux_sym_export_repeat1] = STATE(214),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_module] = ACTIONS(604),
    [anon_sym_where] = ACTIONS(604),
    [anon_sym_import] = ACTIONS(604),
    [anon_sym_class] = ACTIONS(604),
    [anon_sym_data] = ACTIONS(604),
    [anon_sym_newtype] = ACTIONS(604),
    [anon_sym_type] = ACTIONS(604),
    [anon_sym_case] = ACTIONS(604),
    [anon_sym_default] = ACTIONS(604),
    [anon_sym_do] = ACTIONS(604),
    [anon_sym_else] = ACTIONS(604),
    [anon_sym_foreign] = ACTIONS(604),
    [anon_sym_if] = ACTIONS(604),
    [anon_sym_in] = ACTIONS(604),
    [anon_sym_infix] = ACTIONS(604),
    [anon_sym_infixl] = ACTIONS(604),
    [anon_sym_infixr] = ACTIONS(604),
    [anon_sym_instance] = ACTIONS(604),
    [anon_sym_let] = ACTIONS(604),
    [anon_sym_of] = ACTIONS(604),
    [anon_sym_then] = ACTIONS(604),
    [anon_sym__] = ACTIONS(604),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(606),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [sym__integer_literal] = ACTIONS(604),
    [sym__octal_literal] = ACTIONS(604),
    [sym__hexidecimal_literal] = ACTIONS(604),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [aux_sym_export_repeat1] = STATE(216),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [sym__identifier] = STATE(218),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_module] = ACTIONS(616),
    [anon_sym_where] = ACTIONS(616),
    [anon_sym_import] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
    [anon_sym_data] = ACTIONS(616),
    [anon_sym_newtype] = ACTIONS(616),
    [anon_sym_type] = ACTIONS(616),
    [anon_sym_case] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [anon_sym_do] = ACTIONS(616),
    [anon_sym_else] = ACTIONS(616),
    [anon_sym_foreign] = ACTIONS(616),
    [anon_sym_if] = ACTIONS(616),
    [anon_sym_in] = ACTIONS(616),
    [anon_sym_infix] = ACTIONS(616),
    [anon_sym_infixl] = ACTIONS(616),
    [anon_sym_infixr] = ACTIONS(616),
    [anon_sym_instance] = ACTIONS(616),
    [anon_sym_let] = ACTIONS(616),
    [anon_sym_of] = ACTIONS(616),
    [anon_sym_then] = ACTIONS(616),
    [anon_sym__] = ACTIONS(616),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [sym__integer_literal] = ACTIONS(616),
    [sym__octal_literal] = ACTIONS(616),
    [sym__hexidecimal_literal] = ACTIONS(616),
  },
  [195] = {
    [sym__identifier] = STATE(220),
    [anon_sym_DOT_DOT] = ACTIONS(620),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [sym_variable_identifier] = ACTIONS(626),
    [sym_constructor_identifier] = ACTIONS(628),
    [sym_module_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_module] = ACTIONS(632),
    [anon_sym_where] = ACTIONS(632),
    [anon_sym_import] = ACTIONS(632),
    [anon_sym_class] = ACTIONS(632),
    [anon_sym_data] = ACTIONS(632),
    [anon_sym_newtype] = ACTIONS(632),
    [anon_sym_type] = ACTIONS(632),
    [anon_sym_case] = ACTIONS(632),
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
  [200] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [sym__identifier] = STATE(222),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_EQ_GT] = ACTIONS(638),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_module] = ACTIONS(642),
    [anon_sym_where] = ACTIONS(642),
    [anon_sym_import] = ACTIONS(642),
    [anon_sym_class] = ACTIONS(642),
    [anon_sym_data] = ACTIONS(642),
    [anon_sym_newtype] = ACTIONS(642),
    [anon_sym_type] = ACTIONS(642),
    [anon_sym_case] = ACTIONS(642),
    [anon_sym_default] = ACTIONS(642),
    [anon_sym_do] = ACTIONS(642),
    [anon_sym_else] = ACTIONS(642),
    [anon_sym_foreign] = ACTIONS(642),
    [anon_sym_if] = ACTIONS(642),
    [anon_sym_in] = ACTIONS(642),
    [anon_sym_infix] = ACTIONS(642),
    [anon_sym_infixl] = ACTIONS(642),
    [anon_sym_infixr] = ACTIONS(642),
    [anon_sym_instance] = ACTIONS(642),
    [anon_sym_let] = ACTIONS(642),
    [anon_sym_of] = ACTIONS(642),
    [anon_sym_then] = ACTIONS(642),
    [anon_sym__] = ACTIONS(642),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(644),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [sym__integer_literal] = ACTIONS(642),
    [sym__octal_literal] = ACTIONS(642),
    [sym__hexidecimal_literal] = ACTIONS(642),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(646),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [anon_sym_module] = ACTIONS(650),
    [anon_sym_where] = ACTIONS(650),
    [anon_sym_import] = ACTIONS(650),
    [anon_sym_class] = ACTIONS(650),
    [anon_sym_data] = ACTIONS(650),
    [anon_sym_PIPE] = ACTIONS(650),
    [anon_sym_deriving] = ACTIONS(650),
    [anon_sym_newtype] = ACTIONS(650),
    [anon_sym_type] = ACTIONS(650),
    [anon_sym_case] = ACTIONS(650),
    [anon_sym_default] = ACTIONS(650),
    [anon_sym_do] = ACTIONS(650),
    [anon_sym_else] = ACTIONS(650),
    [anon_sym_foreign] = ACTIONS(650),
    [anon_sym_if] = ACTIONS(650),
    [anon_sym_in] = ACTIONS(650),
    [anon_sym_infix] = ACTIONS(650),
    [anon_sym_infixl] = ACTIONS(650),
    [anon_sym_infixr] = ACTIONS(650),
    [anon_sym_instance] = ACTIONS(650),
    [anon_sym_let] = ACTIONS(650),
    [anon_sym_of] = ACTIONS(650),
    [anon_sym_then] = ACTIONS(650),
    [anon_sym__] = ACTIONS(650),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(652),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(650),
    [sym__integer_literal] = ACTIONS(650),
    [sym__octal_literal] = ACTIONS(650),
    [sym__hexidecimal_literal] = ACTIONS(650),
  },
  [206] = {
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [sym_strict] = STATE(226),
    [sym__identifier] = STATE(226),
    [anon_sym_BANG] = ACTIONS(656),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_COLON_COLON] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [sym_field] = STATE(229),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(662),
    [anon_sym_module] = ACTIONS(664),
    [anon_sym_where] = ACTIONS(664),
    [anon_sym_import] = ACTIONS(664),
    [anon_sym_class] = ACTIONS(664),
    [anon_sym_data] = ACTIONS(664),
    [anon_sym_PIPE] = ACTIONS(664),
    [anon_sym_deriving] = ACTIONS(664),
    [anon_sym_newtype] = ACTIONS(664),
    [anon_sym_type] = ACTIONS(664),
    [anon_sym_case] = ACTIONS(664),
    [anon_sym_default] = ACTIONS(664),
    [anon_sym_do] = ACTIONS(664),
    [anon_sym_else] = ACTIONS(664),
    [anon_sym_foreign] = ACTIONS(664),
    [anon_sym_if] = ACTIONS(664),
    [anon_sym_in] = ACTIONS(664),
    [anon_sym_infix] = ACTIONS(664),
    [anon_sym_infixl] = ACTIONS(664),
    [anon_sym_infixr] = ACTIONS(664),
    [anon_sym_instance] = ACTIONS(664),
    [anon_sym_let] = ACTIONS(664),
    [anon_sym_of] = ACTIONS(664),
    [anon_sym_then] = ACTIONS(664),
    [anon_sym__] = ACTIONS(664),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(666),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [anon_sym_DQUOTE] = ACTIONS(664),
    [sym__integer_literal] = ACTIONS(664),
    [sym__octal_literal] = ACTIONS(664),
    [sym__hexidecimal_literal] = ACTIONS(664),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RBRACE] = ACTIONS(670),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(672),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(676),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [aux_sym_import_specification_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(678),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [sym__identifier] = STATE(237),
    [anon_sym_DOT_DOT] = ACTIONS(682),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [aux_sym_export_repeat1] = STATE(239),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [anon_sym_module] = ACTIONS(690),
    [anon_sym_where] = ACTIONS(690),
    [anon_sym_import] = ACTIONS(690),
    [anon_sym_class] = ACTIONS(690),
    [anon_sym_data] = ACTIONS(690),
    [anon_sym_newtype] = ACTIONS(690),
    [anon_sym_type] = ACTIONS(690),
    [anon_sym_case] = ACTIONS(690),
    [anon_sym_default] = ACTIONS(690),
    [anon_sym_do] = ACTIONS(690),
    [anon_sym_else] = ACTIONS(690),
    [anon_sym_foreign] = ACTIONS(690),
    [anon_sym_if] = ACTIONS(690),
    [anon_sym_in] = ACTIONS(690),
    [anon_sym_infix] = ACTIONS(690),
    [anon_sym_infixl] = ACTIONS(690),
    [anon_sym_infixr] = ACTIONS(690),
    [anon_sym_instance] = ACTIONS(690),
    [anon_sym_let] = ACTIONS(690),
    [anon_sym_of] = ACTIONS(690),
    [anon_sym_then] = ACTIONS(690),
    [anon_sym__] = ACTIONS(690),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(692),
    [anon_sym_SQUOTE] = ACTIONS(690),
    [anon_sym_DQUOTE] = ACTIONS(690),
    [sym__integer_literal] = ACTIONS(690),
    [sym__octal_literal] = ACTIONS(690),
    [sym__hexidecimal_literal] = ACTIONS(690),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [anon_sym_module] = ACTIONS(698),
    [anon_sym_where] = ACTIONS(698),
    [anon_sym_import] = ACTIONS(698),
    [anon_sym_class] = ACTIONS(698),
    [anon_sym_data] = ACTIONS(698),
    [anon_sym_newtype] = ACTIONS(698),
    [anon_sym_type] = ACTIONS(698),
    [anon_sym_case] = ACTIONS(698),
    [anon_sym_default] = ACTIONS(698),
    [anon_sym_do] = ACTIONS(698),
    [anon_sym_else] = ACTIONS(698),
    [anon_sym_foreign] = ACTIONS(698),
    [anon_sym_if] = ACTIONS(698),
    [anon_sym_in] = ACTIONS(698),
    [anon_sym_infix] = ACTIONS(698),
    [anon_sym_infixl] = ACTIONS(698),
    [anon_sym_infixr] = ACTIONS(698),
    [anon_sym_instance] = ACTIONS(698),
    [anon_sym_let] = ACTIONS(698),
    [anon_sym_of] = ACTIONS(698),
    [anon_sym_then] = ACTIONS(698),
    [anon_sym__] = ACTIONS(698),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [sym__integer_literal] = ACTIONS(698),
    [sym__octal_literal] = ACTIONS(698),
    [sym__hexidecimal_literal] = ACTIONS(698),
  },
  [224] = {
    [anon_sym_COMMA] = ACTIONS(702),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [sym_comment] = ACTIONS(26),
  },
  [225] = {
    [sym__identifier] = STATE(175),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(704),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [sym_variable_identifier] = ACTIONS(706),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [sym_strict] = STATE(241),
    [sym__identifier] = STATE(241),
    [anon_sym_BANG] = ACTIONS(656),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RBRACE] = ACTIONS(708),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [sym_field] = STATE(242),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(710),
    [anon_sym_module] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
    [anon_sym_import] = ACTIONS(712),
    [anon_sym_class] = ACTIONS(712),
    [anon_sym_data] = ACTIONS(712),
    [anon_sym_PIPE] = ACTIONS(712),
    [anon_sym_deriving] = ACTIONS(712),
    [anon_sym_newtype] = ACTIONS(712),
    [anon_sym_type] = ACTIONS(712),
    [anon_sym_case] = ACTIONS(712),
    [anon_sym_default] = ACTIONS(712),
    [anon_sym_do] = ACTIONS(712),
    [anon_sym_else] = ACTIONS(712),
    [anon_sym_foreign] = ACTIONS(712),
    [anon_sym_if] = ACTIONS(712),
    [anon_sym_in] = ACTIONS(712),
    [anon_sym_infix] = ACTIONS(712),
    [anon_sym_infixl] = ACTIONS(712),
    [anon_sym_infixr] = ACTIONS(712),
    [anon_sym_instance] = ACTIONS(712),
    [anon_sym_let] = ACTIONS(712),
    [anon_sym_of] = ACTIONS(712),
    [anon_sym_then] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(714),
    [anon_sym_SQUOTE] = ACTIONS(712),
    [anon_sym_DQUOTE] = ACTIONS(712),
    [sym__integer_literal] = ACTIONS(712),
    [sym__octal_literal] = ACTIONS(712),
    [sym__hexidecimal_literal] = ACTIONS(712),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(716),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_module] = ACTIONS(720),
    [anon_sym_where] = ACTIONS(720),
    [anon_sym_import] = ACTIONS(720),
    [anon_sym_class] = ACTIONS(720),
    [anon_sym_data] = ACTIONS(720),
    [anon_sym_newtype] = ACTIONS(720),
    [anon_sym_type] = ACTIONS(720),
    [anon_sym_case] = ACTIONS(720),
    [anon_sym_default] = ACTIONS(720),
    [anon_sym_do] = ACTIONS(720),
    [anon_sym_else] = ACTIONS(720),
    [anon_sym_foreign] = ACTIONS(720),
    [anon_sym_if] = ACTIONS(720),
    [anon_sym_in] = ACTIONS(720),
    [anon_sym_infix] = ACTIONS(720),
    [anon_sym_infixl] = ACTIONS(720),
    [anon_sym_infixr] = ACTIONS(720),
    [anon_sym_instance] = ACTIONS(720),
    [anon_sym_let] = ACTIONS(720),
    [anon_sym_of] = ACTIONS(720),
    [anon_sym_then] = ACTIONS(720),
    [anon_sym__] = ACTIONS(720),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(722),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [sym__integer_literal] = ACTIONS(720),
    [sym__octal_literal] = ACTIONS(720),
    [sym__hexidecimal_literal] = ACTIONS(720),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [aux_sym_import_specification_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(726),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [aux_sym_export_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(726),
    [sym_comment] = ACTIONS(26),
  },
  [238] = {
    [sym__identifier] = STATE(248),
    [anon_sym_DOT_DOT] = ACTIONS(728),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(730),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(732),
    [anon_sym_COLON_COLON] = ACTIONS(732),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(734),
    [anon_sym_RBRACE] = ACTIONS(734),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(738),
    [anon_sym_module] = ACTIONS(740),
    [anon_sym_where] = ACTIONS(740),
    [anon_sym_import] = ACTIONS(740),
    [anon_sym_class] = ACTIONS(740),
    [anon_sym_data] = ACTIONS(740),
    [anon_sym_newtype] = ACTIONS(740),
    [anon_sym_type] = ACTIONS(740),
    [anon_sym_case] = ACTIONS(740),
    [anon_sym_default] = ACTIONS(740),
    [anon_sym_do] = ACTIONS(740),
    [anon_sym_else] = ACTIONS(740),
    [anon_sym_foreign] = ACTIONS(740),
    [anon_sym_if] = ACTIONS(740),
    [anon_sym_in] = ACTIONS(740),
    [anon_sym_infix] = ACTIONS(740),
    [anon_sym_infixl] = ACTIONS(740),
    [anon_sym_infixr] = ACTIONS(740),
    [anon_sym_instance] = ACTIONS(740),
    [anon_sym_let] = ACTIONS(740),
    [anon_sym_of] = ACTIONS(740),
    [anon_sym_then] = ACTIONS(740),
    [anon_sym__] = ACTIONS(740),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(742),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym__integer_literal] = ACTIONS(740),
    [sym__octal_literal] = ACTIONS(740),
    [sym__hexidecimal_literal] = ACTIONS(740),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [aux_sym_export_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym_comment] = ACTIONS(26),
  },
  [249] = {
    [aux_sym_import_specification_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(750),
    [anon_sym_module] = ACTIONS(752),
    [anon_sym_where] = ACTIONS(752),
    [anon_sym_import] = ACTIONS(752),
    [anon_sym_class] = ACTIONS(752),
    [anon_sym_data] = ACTIONS(752),
    [anon_sym_newtype] = ACTIONS(752),
    [anon_sym_type] = ACTIONS(752),
    [anon_sym_case] = ACTIONS(752),
    [anon_sym_default] = ACTIONS(752),
    [anon_sym_do] = ACTIONS(752),
    [anon_sym_else] = ACTIONS(752),
    [anon_sym_foreign] = ACTIONS(752),
    [anon_sym_if] = ACTIONS(752),
    [anon_sym_in] = ACTIONS(752),
    [anon_sym_infix] = ACTIONS(752),
    [anon_sym_infixl] = ACTIONS(752),
    [anon_sym_infixr] = ACTIONS(752),
    [anon_sym_instance] = ACTIONS(752),
    [anon_sym_let] = ACTIONS(752),
    [anon_sym_of] = ACTIONS(752),
    [anon_sym_then] = ACTIONS(752),
    [anon_sym__] = ACTIONS(752),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(754),
    [anon_sym_SQUOTE] = ACTIONS(752),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [sym__integer_literal] = ACTIONS(752),
    [sym__octal_literal] = ACTIONS(752),
    [sym__hexidecimal_literal] = ACTIONS(752),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(756),
    [anon_sym_RPAREN] = ACTIONS(756),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(758),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(760),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_RPAREN] = ACTIONS(762),
    [sym_comment] = ACTIONS(26),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(764),
    [anon_sym_module] = ACTIONS(766),
    [anon_sym_where] = ACTIONS(766),
    [anon_sym_import] = ACTIONS(766),
    [anon_sym_class] = ACTIONS(766),
    [anon_sym_data] = ACTIONS(766),
    [anon_sym_newtype] = ACTIONS(766),
    [anon_sym_type] = ACTIONS(766),
    [anon_sym_case] = ACTIONS(766),
    [anon_sym_default] = ACTIONS(766),
    [anon_sym_do] = ACTIONS(766),
    [anon_sym_else] = ACTIONS(766),
    [anon_sym_foreign] = ACTIONS(766),
    [anon_sym_if] = ACTIONS(766),
    [anon_sym_in] = ACTIONS(766),
    [anon_sym_infix] = ACTIONS(766),
    [anon_sym_infixl] = ACTIONS(766),
    [anon_sym_infixr] = ACTIONS(766),
    [anon_sym_instance] = ACTIONS(766),
    [anon_sym_let] = ACTIONS(766),
    [anon_sym_of] = ACTIONS(766),
    [anon_sym_then] = ACTIONS(766),
    [anon_sym__] = ACTIONS(766),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(768),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(766),
    [sym__integer_literal] = ACTIONS(766),
    [sym__octal_literal] = ACTIONS(766),
    [sym__hexidecimal_literal] = ACTIONS(766),
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
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
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
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
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
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 5),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [666] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [692] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [722] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [742] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [754] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
