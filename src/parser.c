#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 261
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
        ADVANCE(488);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
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
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(417);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
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
    case 407:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
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
    case 409:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(410);
      if (lookahead == 'l')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
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
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
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
    case 417:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(418);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead == 'o')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 't')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
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
    case 421:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'a')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
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
    case 427:
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
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
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
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
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
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(440);
      if (lookahead == 'm')
        ADVANCE(441);
      if (lookahead == 'n')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
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
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
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
    case 446:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 's')
        ADVANCE(452);
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
      if (lookahead == 'i')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead == 'r')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
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
    case 451:
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
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'a')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
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
    case 458:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
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
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
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
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
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
    case 474:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
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
    case 476:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(477);
      if (lookahead == 'y')
        ADVANCE(480);
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
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
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
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
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
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
    case 488:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(488);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
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
    case 489:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(387);
      if (lookahead == ',')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(389);
      END_STATE();
    case 490:
      if (lookahead == 'n')
        SKIP(404);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'l')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(494);
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
      if (lookahead == 'e')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'a')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(498);
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
      if (lookahead == 's')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'e')
        ADVANCE(504);
      if (lookahead == 'o')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(502);
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
      if (lookahead == 'a')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
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
      if (lookahead == 'a')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'l')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(513);
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
      if (lookahead == 'e')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(520);
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
      if (lookahead == 'n')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_foreign);
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
      if (lookahead == 'f')
        ADVANCE(523);
      if (lookahead == 'm')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'p')
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
      if (lookahead == 'o')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 's')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'x')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(533);
      if (lookahead == 'r')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
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
      if (lookahead == 'a')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'c')
        ADVANCE(539);
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
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(542);
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
      if (lookahead == 't')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(548);
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
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'e')
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(555);
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
      if (lookahead == 'e')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_newtype);
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
      if (lookahead == 'f')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == 'y')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(561);
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
      if (lookahead == 'n')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(564);
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
      if (lookahead == 'e')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 571:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(571);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(571);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 575:
      if (lookahead == 'n')
        SKIP(571);
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
      if (lookahead == '=')
        ADVANCE(270);
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
      if (lookahead == '=')
        ADVANCE(175);
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
      if (lookahead == '=')
        ADVANCE(270);
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
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == 'w')
        ADVANCE(566);
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
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == 'w')
        ADVANCE(483);
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
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == 'w')
        ADVANCE(566);
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
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(643);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(640);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(641);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(643);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(639);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 643:
      if (lookahead == 'n')
        SKIP(639);
      END_STATE();
    case 644:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(656);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 645:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(646);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(645);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 646:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(418);
      if (lookahead == 'e')
        ADVANCE(648);
      if (lookahead == 'o')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
        ADVANCE(422);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
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
    case 655:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(656);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 656:
      if (lookahead == 'n')
        SKIP(644);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(501);
      if (lookahead == 'e')
        ADVANCE(658);
      if (lookahead == 'o')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(505);
      if (lookahead == 'r')
        ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'v')
        ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 665:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(668);
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
        SKIP(669);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 666:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(666);
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
        ADVANCE(667);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(666);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(668);
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
        SKIP(669);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 669:
      if (lookahead == 'n')
        SKIP(665);
      END_STATE();
    case 670:
      if (lookahead == '\n')
        ADVANCE(671);
      if (lookahead == '\r')
        ADVANCE(723);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(724);
      if (lookahead == 'B')
        ADVANCE(727);
      if (lookahead == 'C')
        ADVANCE(731);
      if (lookahead == 'D')
        ADVANCE(735);
      if (lookahead == 'E')
        ADVANCE(745);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(759);
      if (lookahead == 'H')
        ADVANCE(760);
      if (lookahead == 'L')
        ADVANCE(761);
      if (lookahead == 'N')
        ADVANCE(762);
      if (lookahead == 'O')
        ADVANCE(763);
      if (lookahead == 'R')
        ADVANCE(764);
      if (lookahead == 'S')
        ADVANCE(765);
      if (lookahead == 'U')
        ADVANCE(766);
      if (lookahead == 'V')
        ADVANCE(767);
      if (lookahead == 'X')
        ADVANCE(768);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(769);
      if (lookahead == 'b')
        ADVANCE(770);
      if (lookahead == 'f')
        ADVANCE(771);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(772);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(670);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      END_STATE();
    case 671:
      if (lookahead == '\n')
        ADVANCE(671);
      if (lookahead == '\r')
        ADVANCE(671);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == 'A')
        ADVANCE(672);
      if (lookahead == 'B')
        ADVANCE(675);
      if (lookahead == 'C')
        ADVANCE(679);
      if (lookahead == 'D')
        ADVANCE(683);
      if (lookahead == 'E')
        ADVANCE(693);
      if (lookahead == 'F')
        ADVANCE(704);
      if (lookahead == 'G')
        ADVANCE(707);
      if (lookahead == 'H')
        ADVANCE(708);
      if (lookahead == 'L')
        ADVANCE(709);
      if (lookahead == 'N')
        ADVANCE(710);
      if (lookahead == 'O')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(712);
      if (lookahead == 'S')
        ADVANCE(713);
      if (lookahead == 'U')
        ADVANCE(714);
      if (lookahead == 'V')
        ADVANCE(715);
      if (lookahead == 'X')
        ADVANCE(716);
      if (lookahead == '\\')
        ADVANCE(717);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(718);
      if (lookahead == 'b')
        ADVANCE(719);
      if (lookahead == 'f')
        ADVANCE(720);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(680);
      if (lookahead == 'R')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(684);
      if (lookahead == 'E')
        ADVANCE(689);
      if (lookahead == 'L')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(685);
      if (lookahead == '2')
        ADVANCE(686);
      if (lookahead == '3')
        ADVANCE(687);
      if (lookahead == '4')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(692);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(694);
      if (lookahead == 'N')
        ADVANCE(695);
      if (lookahead == 'O')
        ADVANCE(697);
      if (lookahead == 'S')
        ADVANCE(699);
      if (lookahead == 'T')
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(698);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(700);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(702);
      if (lookahead == 'X')
        ADVANCE(703);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(705);
      if (lookahead == 'S')
        ADVANCE(706);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
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
    case 714:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 723:
      if (lookahead == '\n')
        ADVANCE(671);
      if (lookahead == '\r')
        ADVANCE(723);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(724);
      if (lookahead == 'B')
        ADVANCE(727);
      if (lookahead == 'C')
        ADVANCE(731);
      if (lookahead == 'D')
        ADVANCE(735);
      if (lookahead == 'E')
        ADVANCE(745);
      if (lookahead == 'F')
        ADVANCE(756);
      if (lookahead == 'G')
        ADVANCE(759);
      if (lookahead == 'H')
        ADVANCE(760);
      if (lookahead == 'L')
        ADVANCE(761);
      if (lookahead == 'N')
        ADVANCE(762);
      if (lookahead == 'O')
        ADVANCE(763);
      if (lookahead == 'R')
        ADVANCE(764);
      if (lookahead == 'S')
        ADVANCE(765);
      if (lookahead == 'U')
        ADVANCE(766);
      if (lookahead == 'V')
        ADVANCE(767);
      if (lookahead == 'X')
        ADVANCE(768);
      if (lookahead == '\\')
        ADVANCE(594);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(769);
      if (lookahead == 'b')
        ADVANCE(770);
      if (lookahead == 'f')
        ADVANCE(771);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(772);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(670);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(595);
      END_STATE();
    case 724:
      if (lookahead == 'C')
        ADVANCE(725);
      END_STATE();
    case 725:
      if (lookahead == 'K')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 727:
      if (lookahead == 'E')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      END_STATE();
    case 728:
      if (lookahead == 'L')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 731:
      if (lookahead == 'A')
        ADVANCE(732);
      if (lookahead == 'R')
        ADVANCE(734);
      END_STATE();
    case 732:
      if (lookahead == 'N')
        ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 735:
      if (lookahead == 'C')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'L')
        ADVANCE(743);
      END_STATE();
    case 736:
      if (lookahead == '1')
        ADVANCE(737);
      if (lookahead == '2')
        ADVANCE(738);
      if (lookahead == '3')
        ADVANCE(739);
      if (lookahead == '4')
        ADVANCE(740);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 741:
      if (lookahead == 'L')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 743:
      if (lookahead == 'E')
        ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 745:
      if (lookahead == 'M')
        ADVANCE(746);
      if (lookahead == 'N')
        ADVANCE(747);
      if (lookahead == 'O')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(751);
      if (lookahead == 'T')
        ADVANCE(753);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 747:
      if (lookahead == 'Q')
        ADVANCE(748);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 749:
      if (lookahead == 'T')
        ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 751:
      if (lookahead == 'C')
        ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 753:
      if (lookahead == 'B')
        ADVANCE(754);
      if (lookahead == 'X')
        ADVANCE(755);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 756:
      if (lookahead == 'F')
        ADVANCE(757);
      if (lookahead == 'S')
        ADVANCE(758);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 759:
      if (lookahead == 'S')
        ADVANCE(117);
      END_STATE();
    case 760:
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 761:
      if (lookahead == 'F')
        ADVANCE(121);
      END_STATE();
    case 762:
      if (lookahead == 'A')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(125);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 764:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 765:
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
    case 766:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 767:
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 774:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(786);
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
        ADVANCE(787);
      if (lookahead == 'B')
        ADVANCE(788);
      if (lookahead == 'C')
        ADVANCE(789);
      if (lookahead == 'D')
        ADVANCE(790);
      if (lookahead == 'E')
        ADVANCE(791);
      if (lookahead == 'F')
        ADVANCE(792);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(763);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'b')
        ADVANCE(770);
      if (lookahead == 'f')
        ADVANCE(771);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(772);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(773);
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
    case 775:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(776);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == ' ')
        ADVANCE(778);
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
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(716);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(718);
      if (lookahead == 'b')
        ADVANCE(719);
      if (lookahead == 'f')
        ADVANCE(720);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(722);
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
    case 776:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(776);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == ' ')
        ADVANCE(778);
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
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(716);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(718);
      if (lookahead == 'b')
        ADVANCE(719);
      if (lookahead == 'f')
        ADVANCE(720);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(722);
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
    case 777:
      if (lookahead == '\t')
        ADVANCE(776);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == ' ')
        ADVANCE(778);
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
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(716);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(718);
      if (lookahead == 'b')
        ADVANCE(719);
      if (lookahead == 'f')
        ADVANCE(720);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(722);
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
    case 778:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(776);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(777);
      if (lookahead == ' ')
        ADVANCE(778);
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
        ADVANCE(779);
      if (lookahead == 'B')
        ADVANCE(780);
      if (lookahead == 'C')
        ADVANCE(781);
      if (lookahead == 'D')
        ADVANCE(782);
      if (lookahead == 'E')
        ADVANCE(783);
      if (lookahead == 'F')
        ADVANCE(784);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(716);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(718);
      if (lookahead == 'b')
        ADVANCE(719);
      if (lookahead == 'f')
        ADVANCE(720);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(721);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(722);
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
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(680);
      if (lookahead == 'R')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(684);
      if (lookahead == 'E')
        ADVANCE(689);
      if (lookahead == 'L')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(694);
      if (lookahead == 'N')
        ADVANCE(695);
      if (lookahead == 'O')
        ADVANCE(697);
      if (lookahead == 'S')
        ADVANCE(699);
      if (lookahead == 'T')
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(705);
      if (lookahead == 'S')
        ADVANCE(706);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(777);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(786);
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
        ADVANCE(787);
      if (lookahead == 'B')
        ADVANCE(788);
      if (lookahead == 'C')
        ADVANCE(789);
      if (lookahead == 'D')
        ADVANCE(790);
      if (lookahead == 'E')
        ADVANCE(791);
      if (lookahead == 'F')
        ADVANCE(792);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(763);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'b')
        ADVANCE(770);
      if (lookahead == 'f')
        ADVANCE(771);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(772);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(773);
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
    case 787:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(725);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(732);
      if (lookahead == 'R')
        ADVANCE(734);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'L')
        ADVANCE(743);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(746);
      if (lookahead == 'N')
        ADVANCE(747);
      if (lookahead == 'O')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(751);
      if (lookahead == 'T')
        ADVANCE(753);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(757);
      if (lookahead == 'S')
        ADVANCE(758);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(798);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == ':')
        ADVANCE(795);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '\\')
        ADVANCE(796);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(798);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      END_STATE();
    case 798:
      if (lookahead == ':')
        ADVANCE(108);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        SKIP(793);
      END_STATE();
    case 800:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(803);
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
        SKIP(804);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 801:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(801);
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
        ADVANCE(802);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(801);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(803);
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
        SKIP(804);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 804:
      if (lookahead == 'n')
        SKIP(800);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(811);
      END_STATE();
    case 806:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(806);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(808);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(806);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(808);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(808);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(811);
      END_STATE();
    case 810:
      if (lookahead == 'n')
        SKIP(805);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(811);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(815);
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
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(814);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(813);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(815);
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
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(822);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(817);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(818);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(819);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 818:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(817);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(822);
      END_STATE();
    case 821:
      if (lookahead == 'n')
        SKIP(816);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(829);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(824);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(826);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(824);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(829);
      END_STATE();
    case 828:
      if (lookahead == 'n')
        SKIP(823);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 830:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
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
        SKIP(834);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 831:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(831);
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
        ADVANCE(832);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(417);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 832:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(831);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 833:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
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
        SKIP(834);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 834:
      if (lookahead == 'n')
        SKIP(830);
      END_STATE();
    case 835:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(841);
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
    case 836:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(837);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == ' ')
        ADVANCE(839);
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
        ADVANCE(840);
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
    case 837:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(837);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == ' ')
        ADVANCE(839);
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
        ADVANCE(840);
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
    case 838:
      if (lookahead == '\t')
        ADVANCE(837);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == ' ')
        ADVANCE(839);
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
        ADVANCE(840);
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
    case 839:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(837);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == ' ')
        ADVANCE(839);
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
        ADVANCE(840);
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
    case 840:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(838);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 841:
      if (lookahead == '\t')
        ADVANCE(597);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(841);
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
    case 842:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
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
        SKIP(846);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 843:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
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
        ADVANCE(844);
      if (lookahead == '_')
        ADVANCE(408);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'f')
        ADVANCE(432);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead == 'l')
        ADVANCE(458);
      if (lookahead == 'm')
        ADVANCE(461);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead == 'w')
        ADVANCE(483);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
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
        SKIP(846);
      if (lookahead == '_')
        ADVANCE(491);
      if (lookahead == 'c')
        ADVANCE(492);
      if (lookahead == 'd')
        ADVANCE(657);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead == 'l')
        ADVANCE(541);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'n')
        ADVANCE(550);
      if (lookahead == 'o')
        ADVANCE(557);
      if (lookahead == 't')
        ADVANCE(559);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 846:
      if (lookahead == 'n')
        SKIP(842);
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
  [6] = {.lex_state = 571},
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
  [22] = {.lex_state = 576},
  [23] = {.lex_state = 634},
  [24] = {.lex_state = 576},
  [25] = {.lex_state = 167},
  [26] = {.lex_state = 634},
  [27] = {.lex_state = 639},
  [28] = {.lex_state = 644},
  [29] = {.lex_state = 576},
  [30] = {.lex_state = 644},
  [31] = {.lex_state = 665},
  [32] = {.lex_state = 576},
  [33] = {.lex_state = 576},
  [34] = {.lex_state = 358},
  [35] = {.lex_state = 358},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 670},
  [43] = {.lex_state = 596},
  [44] = {.lex_state = 596},
  [45] = {.lex_state = 596},
  [46] = {.lex_state = 596},
  [47] = {.lex_state = 167},
  [48] = {.lex_state = 596},
  [49] = {.lex_state = 596},
  [50] = {.lex_state = 774},
  [51] = {.lex_state = 596},
  [52] = {.lex_state = 596},
  [53] = {.lex_state = 167},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 576},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 625},
  [58] = {.lex_state = 576},
  [59] = {.lex_state = 576},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 571},
  [63] = {.lex_state = 793},
  [64] = {.lex_state = 571},
  [65] = {.lex_state = 639},
  [66] = {.lex_state = 639},
  [67] = {.lex_state = 639},
  [68] = {.lex_state = 576},
  [69] = {.lex_state = 576},
  [70] = {.lex_state = 793},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 639},
  [73] = {.lex_state = 665},
  [74] = {.lex_state = 665},
  [75] = {.lex_state = 665},
  [76] = {.lex_state = 800},
  [77] = {.lex_state = 800},
  [78] = {.lex_state = 665},
  [79] = {.lex_state = 665},
  [80] = {.lex_state = 571},
  [81] = {.lex_state = 167},
  [82] = {.lex_state = 167},
  [83] = {.lex_state = 167},
  [84] = {.lex_state = 665},
  [85] = {.lex_state = 576},
  [86] = {.lex_state = 576},
  [87] = {.lex_state = 805},
  [88] = {.lex_state = 576},
  [89] = {.lex_state = 167},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 812},
  [93] = {.lex_state = 816},
  [94] = {.lex_state = 823},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 596},
  [97] = {.lex_state = 596},
  [98] = {.lex_state = 812},
  [99] = {.lex_state = 816},
  [100] = {.lex_state = 823},
  [101] = {.lex_state = 596},
  [102] = {.lex_state = 596},
  [103] = {.lex_state = 167},
  [104] = {.lex_state = 167},
  [105] = {.lex_state = 167},
  [106] = {.lex_state = 793},
  [107] = {.lex_state = 793},
  [108] = {.lex_state = 167},
  [109] = {.lex_state = 576},
  [110] = {.lex_state = 167},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 793},
  [113] = {.lex_state = 625},
  [114] = {.lex_state = 576},
  [115] = {.lex_state = 576},
  [116] = {.lex_state = 167},
  [117] = {.lex_state = 793},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 576},
  [120] = {.lex_state = 793},
  [121] = {.lex_state = 665},
  [122] = {.lex_state = 665},
  [123] = {.lex_state = 167},
  [124] = {.lex_state = 167},
  [125] = {.lex_state = 665},
  [126] = {.lex_state = 576},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 576},
  [129] = {.lex_state = 167},
  [130] = {.lex_state = 571},
  [131] = {.lex_state = 576},
  [132] = {.lex_state = 167},
  [133] = {.lex_state = 665},
  [134] = {.lex_state = 665},
  [135] = {.lex_state = 576},
  [136] = {.lex_state = 576},
  [137] = {.lex_state = 167},
  [138] = {.lex_state = 830},
  [139] = {.lex_state = 830},
  [140] = {.lex_state = 830},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 816},
  [144] = {.lex_state = 816},
  [145] = {.lex_state = 823},
  [146] = {.lex_state = 823},
  [147] = {.lex_state = 596},
  [148] = {.lex_state = 596},
  [149] = {.lex_state = 596},
  [150] = {.lex_state = 596},
  [151] = {.lex_state = 835},
  [152] = {.lex_state = 835},
  [153] = {.lex_state = 576},
  [154] = {.lex_state = 167},
  [155] = {.lex_state = 793},
  [156] = {.lex_state = 576},
  [157] = {.lex_state = 167},
  [158] = {.lex_state = 625},
  [159] = {.lex_state = 576},
  [160] = {.lex_state = 576},
  [161] = {.lex_state = 167},
  [162] = {.lex_state = 793},
  [163] = {.lex_state = 167},
  [164] = {.lex_state = 793},
  [165] = {.lex_state = 793},
  [166] = {.lex_state = 576},
  [167] = {.lex_state = 576},
  [168] = {.lex_state = 167},
  [169] = {.lex_state = 793},
  [170] = {.lex_state = 793},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 167},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 793},
  [175] = {.lex_state = 167},
  [176] = {.lex_state = 576},
  [177] = {.lex_state = 793},
  [178] = {.lex_state = 793},
  [179] = {.lex_state = 842},
  [180] = {.lex_state = 665},
  [181] = {.lex_state = 167},
  [182] = {.lex_state = 167},
  [183] = {.lex_state = 830},
  [184] = {.lex_state = 816},
  [185] = {.lex_state = 823},
  [186] = {.lex_state = 596},
  [187] = {.lex_state = 835},
  [188] = {.lex_state = 793},
  [189] = {.lex_state = 576},
  [190] = {.lex_state = 167},
  [191] = {.lex_state = 358},
  [192] = {.lex_state = 793},
  [193] = {.lex_state = 167},
  [194] = {.lex_state = 358},
  [195] = {.lex_state = 793},
  [196] = {.lex_state = 793},
  [197] = {.lex_state = 576},
  [198] = {.lex_state = 167},
  [199] = {.lex_state = 576},
  [200] = {.lex_state = 793},
  [201] = {.lex_state = 793},
  [202] = {.lex_state = 576},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 167},
  [205] = {.lex_state = 576},
  [206] = {.lex_state = 167},
  [207] = {.lex_state = 793},
  [208] = {.lex_state = 167},
  [209] = {.lex_state = 571},
  [210] = {.lex_state = 576},
  [211] = {.lex_state = 793},
  [212] = {.lex_state = 571},
  [213] = {.lex_state = 167},
  [214] = {.lex_state = 793},
  [215] = {.lex_state = 793},
  [216] = {.lex_state = 793},
  [217] = {.lex_state = 793},
  [218] = {.lex_state = 793},
  [219] = {.lex_state = 793},
  [220] = {.lex_state = 576},
  [221] = {.lex_state = 793},
  [222] = {.lex_state = 358},
  [223] = {.lex_state = 793},
  [224] = {.lex_state = 167},
  [225] = {.lex_state = 793},
  [226] = {.lex_state = 576},
  [227] = {.lex_state = 167},
  [228] = {.lex_state = 793},
  [229] = {.lex_state = 576},
  [230] = {.lex_state = 793},
  [231] = {.lex_state = 571},
  [232] = {.lex_state = 576},
  [233] = {.lex_state = 793},
  [234] = {.lex_state = 571},
  [235] = {.lex_state = 167},
  [236] = {.lex_state = 793},
  [237] = {.lex_state = 167},
  [238] = {.lex_state = 793},
  [239] = {.lex_state = 793},
  [240] = {.lex_state = 358},
  [241] = {.lex_state = 793},
  [242] = {.lex_state = 576},
  [243] = {.lex_state = 793},
  [244] = {.lex_state = 793},
  [245] = {.lex_state = 793},
  [246] = {.lex_state = 793},
  [247] = {.lex_state = 793},
  [248] = {.lex_state = 167},
  [249] = {.lex_state = 793},
  [250] = {.lex_state = 793},
  [251] = {.lex_state = 793},
  [252] = {.lex_state = 358},
  [253] = {.lex_state = 793},
  [254] = {.lex_state = 793},
  [255] = {.lex_state = 167},
  [256] = {.lex_state = 793},
  [257] = {.lex_state = 793},
  [258] = {.lex_state = 793},
  [259] = {.lex_state = 793},
  [260] = {.lex_state = 167},
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
    [sym_context] = STATE(24),
    [sym_class] = STATE(25),
    [sym__identifier] = STATE(26),
    [aux_sym_type_class_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
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
    [sym_context] = STATE(29),
    [sym_class] = STATE(25),
    [sym__identifier] = STATE(30),
    [sym_simple_type] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(33),
    [sym_simple_type] = STATE(34),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [sym__identifier] = STATE(33),
    [sym_simple_type] = STATE(35),
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
    [sym__graphic] = STATE(39),
    [sym__small] = STATE(40),
    [sym__large] = STATE(40),
    [sym__symbol] = STATE(40),
    [sym__special] = STATE(40),
    [sym__escape] = STATE(39),
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
    [sym__gap] = STATE(46),
    [sym__graphic] = STATE(46),
    [sym__small] = STATE(48),
    [sym__large] = STATE(48),
    [sym__symbol] = STATE(48),
    [sym__special] = STATE(48),
    [sym__escape] = STATE(46),
    [aux_sym_string_repeat1] = STATE(52),
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
    [sym__statement] = STATE(53),
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
    [sym_module_exports] = STATE(56),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__identifier] = STATE(57),
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
    [anon_sym_EQ_GT] = ACTIONS(136),
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
    [sym_import_specification] = STATE(61),
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
    [sym_class] = STATE(63),
    [sym__identifier] = STATE(64),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym__identifier] = STATE(66),
    [aux_sym_type_class_repeat1] = STATE(67),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [anon_sym_EQ_GT] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym__identifier] = STATE(70),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(166),
    [sym_module_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [sym__identifier] = STATE(72),
    [anon_sym_where] = ACTIONS(169),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
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
  [29] = {
    [sym__identifier] = STATE(74),
    [sym_simple_type] = STATE(75),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [sym__identifier] = STATE(77),
    [aux_sym_type_class_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_where] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_data] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_deriving] = ACTIONS(177),
    [anon_sym_newtype] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [anon_sym_do] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_foreign] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_infix] = ACTIONS(177),
    [anon_sym_infixl] = ACTIONS(177),
    [anon_sym_infixr] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_of] = ACTIONS(177),
    [anon_sym_then] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym__integer_literal] = ACTIONS(177),
    [sym__octal_literal] = ACTIONS(177),
    [sym__hexidecimal_literal] = ACTIONS(177),
  },
  [31] = {
    [sym_constructors] = STATE(81),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(83),
    [sym__identifier] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_module] = ACTIONS(185),
    [anon_sym_where] = ACTIONS(185),
    [anon_sym_import] = ACTIONS(185),
    [anon_sym_class] = ACTIONS(185),
    [anon_sym_data] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(185),
    [anon_sym_type] = ACTIONS(185),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(185),
    [anon_sym_default] = ACTIONS(185),
    [anon_sym_do] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(185),
    [anon_sym_foreign] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_in] = ACTIONS(185),
    [anon_sym_infix] = ACTIONS(185),
    [anon_sym_infixl] = ACTIONS(185),
    [anon_sym_infixr] = ACTIONS(185),
    [anon_sym_instance] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(185),
    [anon_sym_of] = ACTIONS(185),
    [anon_sym_then] = ACTIONS(185),
    [anon_sym__] = ACTIONS(185),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym__integer_literal] = ACTIONS(185),
    [sym__octal_literal] = ACTIONS(185),
    [sym__hexidecimal_literal] = ACTIONS(185),
  },
  [32] = {
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(86),
    [anon_sym_EQ] = ACTIONS(177),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [anon_sym_EQ] = ACTIONS(193),
    [sym_comment] = ACTIONS(26),
  },
  [35] = {
    [anon_sym_EQ] = ACTIONS(195),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(197),
  },
  [37] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(199),
  },
  [38] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(201),
  },
  [39] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [40] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(205),
  },
  [41] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(207),
  },
  [42] = {
    [sym__char_escape] = STATE(91),
    [sym__ascii] = STATE(91),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(209),
    [anon_sym_x] = ACTIONS(215),
    [anon_sym_X] = ACTIONS(215),
    [anon_sym_o] = ACTIONS(217),
    [anon_sym_O] = ACTIONS(217),
    [anon_sym_a] = ACTIONS(209),
    [anon_sym_b] = ACTIONS(209),
    [anon_sym_f] = ACTIONS(209),
    [anon_sym_n] = ACTIONS(209),
    [anon_sym_r] = ACTIONS(209),
    [anon_sym_t] = ACTIONS(209),
    [anon_sym_v] = ACTIONS(209),
    [anon_sym_NUL] = ACTIONS(219),
    [anon_sym_SOH] = ACTIONS(219),
    [anon_sym_STX] = ACTIONS(219),
    [anon_sym_ETX] = ACTIONS(219),
    [anon_sym_EOT] = ACTIONS(219),
    [anon_sym_ENQ] = ACTIONS(219),
    [anon_sym_ACK] = ACTIONS(219),
    [anon_sym_BEL] = ACTIONS(219),
    [anon_sym_BS] = ACTIONS(219),
    [anon_sym_HT] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_VT] = ACTIONS(219),
    [anon_sym_FF] = ACTIONS(219),
    [anon_sym_CR] = ACTIONS(219),
    [anon_sym_SO] = ACTIONS(219),
    [anon_sym_SI] = ACTIONS(219),
    [anon_sym_DLE] = ACTIONS(219),
    [anon_sym_DC1] = ACTIONS(219),
    [anon_sym_DC2] = ACTIONS(219),
    [anon_sym_DC3] = ACTIONS(219),
    [anon_sym_DC4] = ACTIONS(219),
    [anon_sym_NAK] = ACTIONS(219),
    [anon_sym_SYN] = ACTIONS(219),
    [anon_sym_ETB] = ACTIONS(219),
    [anon_sym_CAN] = ACTIONS(219),
    [anon_sym_EM] = ACTIONS(219),
    [anon_sym_SUB] = ACTIONS(219),
    [anon_sym_ESC] = ACTIONS(219),
    [anon_sym_FS] = ACTIONS(219),
    [anon_sym_GS] = ACTIONS(219),
    [anon_sym_RS] = ACTIONS(219),
    [anon_sym_US] = ACTIONS(219),
    [anon_sym_SP] = ACTIONS(219),
    [anon_sym_DEL] = ACTIONS(219),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(221),
    [sym__ascii_large] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_1] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [sym__space] = ACTIONS(221),
    [sym__newline] = ACTIONS(221),
    [sym__tab] = ACTIONS(221),
    [sym__vertical_tab] = ACTIONS(221),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym__] = ACTIONS(223),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(223),
    [sym__ascii_large] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [sym__space] = ACTIONS(223),
    [sym__newline] = ACTIONS(223),
    [sym__tab] = ACTIONS(223),
    [sym__vertical_tab] = ACTIONS(223),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(225),
    [sym__ascii_large] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_1] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [sym__space] = ACTIONS(225),
    [sym__newline] = ACTIONS(225),
    [sym__tab] = ACTIONS(225),
    [sym__vertical_tab] = ACTIONS(225),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym__] = ACTIONS(227),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(227),
    [sym__ascii_large] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_1] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_BQUOTE] = ACTIONS(227),
    [sym__space] = ACTIONS(227),
    [sym__newline] = ACTIONS(227),
    [sym__tab] = ACTIONS(227),
    [sym__vertical_tab] = ACTIONS(227),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_module] = ACTIONS(231),
    [anon_sym_where] = ACTIONS(231),
    [anon_sym_import] = ACTIONS(231),
    [anon_sym_class] = ACTIONS(231),
    [anon_sym_data] = ACTIONS(231),
    [anon_sym_newtype] = ACTIONS(231),
    [anon_sym_type] = ACTIONS(231),
    [anon_sym_case] = ACTIONS(231),
    [anon_sym_default] = ACTIONS(231),
    [anon_sym_do] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(231),
    [anon_sym_foreign] = ACTIONS(231),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_in] = ACTIONS(231),
    [anon_sym_infix] = ACTIONS(231),
    [anon_sym_infixl] = ACTIONS(231),
    [anon_sym_infixr] = ACTIONS(231),
    [anon_sym_instance] = ACTIONS(231),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_of] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(231),
    [anon_sym__] = ACTIONS(231),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym__integer_literal] = ACTIONS(231),
    [sym__octal_literal] = ACTIONS(231),
    [sym__hexidecimal_literal] = ACTIONS(231),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(235),
    [sym__ascii_large] = ACTIONS(235),
    [anon_sym_POUND] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
    [anon_sym_1] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_CARET] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_BSLASH] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [sym__space] = ACTIONS(235),
    [sym__newline] = ACTIONS(235),
    [sym__tab] = ACTIONS(235),
    [sym__vertical_tab] = ACTIONS(235),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(237),
    [sym__ascii_large] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_1] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [sym__space] = ACTIONS(237),
    [sym__newline] = ACTIONS(237),
    [sym__tab] = ACTIONS(237),
    [sym__vertical_tab] = ACTIONS(237),
  },
  [50] = {
    [sym__char_escape] = STATE(97),
    [sym__ascii] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym__] = ACTIONS(223),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(223),
    [sym__ascii_large] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [sym__space] = ACTIONS(223),
    [sym__newline] = ACTIONS(223),
    [sym__tab] = ACTIONS(223),
    [sym__vertical_tab] = ACTIONS(223),
    [anon_sym_x] = ACTIONS(245),
    [anon_sym_X] = ACTIONS(245),
    [anon_sym_o] = ACTIONS(247),
    [anon_sym_O] = ACTIONS(247),
    [anon_sym_a] = ACTIONS(239),
    [anon_sym_b] = ACTIONS(239),
    [anon_sym_f] = ACTIONS(239),
    [anon_sym_n] = ACTIONS(239),
    [anon_sym_r] = ACTIONS(239),
    [anon_sym_t] = ACTIONS(239),
    [anon_sym_v] = ACTIONS(239),
    [anon_sym_NUL] = ACTIONS(249),
    [anon_sym_SOH] = ACTIONS(249),
    [anon_sym_STX] = ACTIONS(249),
    [anon_sym_ETX] = ACTIONS(249),
    [anon_sym_EOT] = ACTIONS(249),
    [anon_sym_ENQ] = ACTIONS(249),
    [anon_sym_ACK] = ACTIONS(249),
    [anon_sym_BEL] = ACTIONS(249),
    [anon_sym_BS] = ACTIONS(249),
    [anon_sym_HT] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_VT] = ACTIONS(249),
    [anon_sym_FF] = ACTIONS(249),
    [anon_sym_CR] = ACTIONS(249),
    [anon_sym_SO] = ACTIONS(249),
    [anon_sym_SI] = ACTIONS(249),
    [anon_sym_DLE] = ACTIONS(249),
    [anon_sym_DC1] = ACTIONS(249),
    [anon_sym_DC2] = ACTIONS(249),
    [anon_sym_DC3] = ACTIONS(249),
    [anon_sym_DC4] = ACTIONS(249),
    [anon_sym_NAK] = ACTIONS(249),
    [anon_sym_SYN] = ACTIONS(249),
    [anon_sym_ETB] = ACTIONS(249),
    [anon_sym_CAN] = ACTIONS(249),
    [anon_sym_EM] = ACTIONS(249),
    [anon_sym_SUB] = ACTIONS(249),
    [anon_sym_ESC] = ACTIONS(249),
    [anon_sym_FS] = ACTIONS(249),
    [anon_sym_GS] = ACTIONS(249),
    [anon_sym_RS] = ACTIONS(249),
    [anon_sym_US] = ACTIONS(249),
    [anon_sym_SP] = ACTIONS(249),
    [anon_sym_DEL] = ACTIONS(249),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_BANG] = ACTIONS(251),
    [anon_sym__] = ACTIONS(251),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(251),
    [sym__ascii_large] = ACTIONS(251),
    [anon_sym_POUND] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [anon_sym_PERCENT] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
    [anon_sym_1] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_QMARK] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_CARET] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
    [anon_sym_BSLASH] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [sym__space] = ACTIONS(251),
    [sym__newline] = ACTIONS(251),
    [sym__tab] = ACTIONS(251),
    [sym__vertical_tab] = ACTIONS(251),
  },
  [52] = {
    [sym__gap] = STATE(102),
    [sym__graphic] = STATE(102),
    [sym__small] = STATE(48),
    [sym__large] = STATE(48),
    [sym__symbol] = STATE(48),
    [sym__special] = STATE(48),
    [sym__escape] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(255),
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
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(259),
    [anon_sym_where] = ACTIONS(259),
    [anon_sym_import] = ACTIONS(259),
    [anon_sym_class] = ACTIONS(259),
    [anon_sym_data] = ACTIONS(259),
    [anon_sym_newtype] = ACTIONS(259),
    [anon_sym_type] = ACTIONS(259),
    [anon_sym_case] = ACTIONS(259),
    [anon_sym_default] = ACTIONS(259),
    [anon_sym_do] = ACTIONS(259),
    [anon_sym_else] = ACTIONS(259),
    [anon_sym_foreign] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
    [anon_sym_in] = ACTIONS(259),
    [anon_sym_infix] = ACTIONS(259),
    [anon_sym_infixl] = ACTIONS(259),
    [anon_sym_infixr] = ACTIONS(259),
    [anon_sym_instance] = ACTIONS(259),
    [anon_sym_let] = ACTIONS(259),
    [anon_sym_of] = ACTIONS(259),
    [anon_sym_then] = ACTIONS(259),
    [anon_sym__] = ACTIONS(259),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym__integer_literal] = ACTIONS(259),
    [sym__octal_literal] = ACTIONS(259),
    [sym__hexidecimal_literal] = ACTIONS(259),
  },
  [54] = {
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
    [aux_sym_program_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(263),
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
  [55] = {
    [sym_export] = STATE(106),
    [sym__identifier] = STATE(107),
    [anon_sym_RPAREN] = ACTIONS(265),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [anon_sym_where] = ACTIONS(267),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [sym_import_specification] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_where] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(271),
    [anon_sym_as] = ACTIONS(273),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(271),
    [anon_sym_data] = ACTIONS(271),
    [anon_sym_newtype] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(271),
    [anon_sym_case] = ACTIONS(271),
    [anon_sym_default] = ACTIONS(271),
    [anon_sym_do] = ACTIONS(271),
    [anon_sym_else] = ACTIONS(271),
    [anon_sym_foreign] = ACTIONS(271),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_in] = ACTIONS(271),
    [anon_sym_infix] = ACTIONS(271),
    [anon_sym_infixl] = ACTIONS(271),
    [anon_sym_infixr] = ACTIONS(271),
    [anon_sym_instance] = ACTIONS(271),
    [anon_sym_let] = ACTIONS(271),
    [anon_sym_of] = ACTIONS(271),
    [anon_sym_then] = ACTIONS(271),
    [anon_sym__] = ACTIONS(271),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym__integer_literal] = ACTIONS(271),
    [sym__octal_literal] = ACTIONS(271),
    [sym__hexidecimal_literal] = ACTIONS(271),
  },
  [58] = {
    [sym__identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(277),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [sym__identifier] = STATE(113),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(279),
    [sym_comment] = ACTIONS(26),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(271),
    [anon_sym_where] = ACTIONS(271),
    [anon_sym_import] = ACTIONS(271),
    [anon_sym_class] = ACTIONS(271),
    [anon_sym_data] = ACTIONS(271),
    [anon_sym_newtype] = ACTIONS(271),
    [anon_sym_type] = ACTIONS(271),
    [anon_sym_case] = ACTIONS(271),
    [anon_sym_default] = ACTIONS(271),
    [anon_sym_do] = ACTIONS(271),
    [anon_sym_else] = ACTIONS(271),
    [anon_sym_foreign] = ACTIONS(271),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_in] = ACTIONS(271),
    [anon_sym_infix] = ACTIONS(271),
    [anon_sym_infixl] = ACTIONS(271),
    [anon_sym_infixr] = ACTIONS(271),
    [anon_sym_instance] = ACTIONS(271),
    [anon_sym_let] = ACTIONS(271),
    [anon_sym_of] = ACTIONS(271),
    [anon_sym_then] = ACTIONS(271),
    [anon_sym__] = ACTIONS(271),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [sym__integer_literal] = ACTIONS(271),
    [sym__octal_literal] = ACTIONS(271),
    [sym__hexidecimal_literal] = ACTIONS(271),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [aux_sym_context_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(283),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [sym__identifier] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(164),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [anon_sym_where] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [anon_sym_where] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(285),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(26),
  },
  [67] = {
    [sym__identifier] = STATE(72),
    [anon_sym_where] = ACTIONS(287),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(26),
  },
  [68] = {
    [sym_variable_identifier] = ACTIONS(289),
    [sym_constructor_identifier] = ACTIONS(291),
    [sym_module_identifier] = ACTIONS(291),
    [sym_comment] = ACTIONS(26),
  },
  [69] = {
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(119),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_EQ_GT] = ACTIONS(293),
    [sym_comment] = ACTIONS(26),
  },
  [71] = {
    [anon_sym_LBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(26),
  },
  [72] = {
    [anon_sym_where] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(299),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [73] = {
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
  [74] = {
    [sym__identifier] = STATE(121),
    [aux_sym_type_class_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_module] = ACTIONS(177),
    [anon_sym_where] = ACTIONS(177),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(177),
    [anon_sym_data] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_deriving] = ACTIONS(177),
    [anon_sym_newtype] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(177),
    [anon_sym_default] = ACTIONS(177),
    [anon_sym_do] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_foreign] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_in] = ACTIONS(177),
    [anon_sym_infix] = ACTIONS(177),
    [anon_sym_infixl] = ACTIONS(177),
    [anon_sym_infixr] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_of] = ACTIONS(177),
    [anon_sym_then] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym__integer_literal] = ACTIONS(177),
    [sym__octal_literal] = ACTIONS(177),
    [sym__hexidecimal_literal] = ACTIONS(177),
  },
  [75] = {
    [sym_constructors] = STATE(123),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(124),
    [sym__identifier] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_where] = ACTIONS(303),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_data] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(303),
    [anon_sym_do] = ACTIONS(303),
    [anon_sym_else] = ACTIONS(303),
    [anon_sym_foreign] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_in] = ACTIONS(303),
    [anon_sym_infix] = ACTIONS(303),
    [anon_sym_infixl] = ACTIONS(303),
    [anon_sym_infixr] = ACTIONS(303),
    [anon_sym_instance] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_of] = ACTIONS(303),
    [anon_sym_then] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym__integer_literal] = ACTIONS(303),
    [sym__octal_literal] = ACTIONS(303),
    [sym__hexidecimal_literal] = ACTIONS(303),
  },
  [76] = {
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
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_module] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(162),
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_data] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_EQ_GT] = ACTIONS(293),
    [anon_sym_deriving] = ACTIONS(162),
    [anon_sym_newtype] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(285),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [anon_sym_case] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_do] = ACTIONS(162),
    [anon_sym_else] = ACTIONS(162),
    [anon_sym_foreign] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_infix] = ACTIONS(162),
    [anon_sym_infixl] = ACTIONS(162),
    [anon_sym_infixr] = ACTIONS(162),
    [anon_sym_instance] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_of] = ACTIONS(162),
    [anon_sym_then] = ACTIONS(162),
    [anon_sym__] = ACTIONS(162),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(162),
    [sym__octal_literal] = ACTIONS(162),
    [sym__hexidecimal_literal] = ACTIONS(162),
  },
  [78] = {
    [sym__identifier] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_module] = ACTIONS(313),
    [anon_sym_where] = ACTIONS(313),
    [anon_sym_import] = ACTIONS(313),
    [anon_sym_class] = ACTIONS(313),
    [anon_sym_data] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_deriving] = ACTIONS(313),
    [anon_sym_newtype] = ACTIONS(313),
    [anon_sym_type] = ACTIONS(313),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(313),
    [anon_sym_default] = ACTIONS(313),
    [anon_sym_do] = ACTIONS(313),
    [anon_sym_else] = ACTIONS(313),
    [anon_sym_foreign] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(313),
    [anon_sym_in] = ACTIONS(313),
    [anon_sym_infix] = ACTIONS(313),
    [anon_sym_infixl] = ACTIONS(313),
    [anon_sym_infixr] = ACTIONS(313),
    [anon_sym_instance] = ACTIONS(313),
    [anon_sym_let] = ACTIONS(313),
    [anon_sym_of] = ACTIONS(313),
    [anon_sym_then] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym__integer_literal] = ACTIONS(313),
    [sym__octal_literal] = ACTIONS(313),
    [sym__hexidecimal_literal] = ACTIONS(313),
  },
  [79] = {
    [sym_constructors] = STATE(123),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(124),
    [sym__identifier] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_where] = ACTIONS(303),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_data] = ACTIONS(303),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(303),
    [anon_sym_do] = ACTIONS(303),
    [anon_sym_else] = ACTIONS(303),
    [anon_sym_foreign] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_in] = ACTIONS(303),
    [anon_sym_infix] = ACTIONS(303),
    [anon_sym_infixl] = ACTIONS(303),
    [anon_sym_infixr] = ACTIONS(303),
    [anon_sym_instance] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_of] = ACTIONS(303),
    [anon_sym_then] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym__integer_literal] = ACTIONS(303),
    [sym__octal_literal] = ACTIONS(303),
    [sym__hexidecimal_literal] = ACTIONS(303),
  },
  [80] = {
    [sym__identifier] = STATE(127),
    [anon_sym_LPAREN] = ACTIONS(317),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [sym_deriving] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_where] = ACTIONS(303),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_data] = ACTIONS(303),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_case] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(303),
    [anon_sym_do] = ACTIONS(303),
    [anon_sym_else] = ACTIONS(303),
    [anon_sym_foreign] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_in] = ACTIONS(303),
    [anon_sym_infix] = ACTIONS(303),
    [anon_sym_infixl] = ACTIONS(303),
    [anon_sym_infixr] = ACTIONS(303),
    [anon_sym_instance] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_of] = ACTIONS(303),
    [anon_sym_then] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym__integer_literal] = ACTIONS(303),
    [sym__octal_literal] = ACTIONS(303),
    [sym__hexidecimal_literal] = ACTIONS(303),
  },
  [82] = {
    [aux_sym_constructors_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_module] = ACTIONS(321),
    [anon_sym_where] = ACTIONS(321),
    [anon_sym_import] = ACTIONS(321),
    [anon_sym_class] = ACTIONS(321),
    [anon_sym_data] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_deriving] = ACTIONS(321),
    [anon_sym_newtype] = ACTIONS(321),
    [anon_sym_type] = ACTIONS(321),
    [anon_sym_case] = ACTIONS(321),
    [anon_sym_default] = ACTIONS(321),
    [anon_sym_do] = ACTIONS(321),
    [anon_sym_else] = ACTIONS(321),
    [anon_sym_foreign] = ACTIONS(321),
    [anon_sym_if] = ACTIONS(321),
    [anon_sym_in] = ACTIONS(321),
    [anon_sym_infix] = ACTIONS(321),
    [anon_sym_infixl] = ACTIONS(321),
    [anon_sym_infixr] = ACTIONS(321),
    [anon_sym_instance] = ACTIONS(321),
    [anon_sym_let] = ACTIONS(321),
    [anon_sym_of] = ACTIONS(321),
    [anon_sym_then] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_module] = ACTIONS(303),
    [anon_sym_where] = ACTIONS(303),
    [anon_sym_import] = ACTIONS(303),
    [anon_sym_class] = ACTIONS(303),
    [anon_sym_data] = ACTIONS(303),
    [anon_sym_newtype] = ACTIONS(303),
    [anon_sym_type] = ACTIONS(303),
    [anon_sym_case] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(303),
    [anon_sym_do] = ACTIONS(303),
    [anon_sym_else] = ACTIONS(303),
    [anon_sym_foreign] = ACTIONS(303),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_in] = ACTIONS(303),
    [anon_sym_infix] = ACTIONS(303),
    [anon_sym_infixl] = ACTIONS(303),
    [anon_sym_infixr] = ACTIONS(303),
    [anon_sym_instance] = ACTIONS(303),
    [anon_sym_let] = ACTIONS(303),
    [anon_sym_of] = ACTIONS(303),
    [anon_sym_then] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym__integer_literal] = ACTIONS(303),
    [sym__octal_literal] = ACTIONS(303),
    [sym__hexidecimal_literal] = ACTIONS(303),
  },
  [84] = {
    [sym_fields] = STATE(132),
    [sym_strict] = STATE(133),
    [sym__identifier] = STATE(133),
    [aux_sym_constructor_repeat1] = STATE(134),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_module] = ACTIONS(329),
    [anon_sym_where] = ACTIONS(329),
    [anon_sym_import] = ACTIONS(329),
    [anon_sym_class] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_data] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_deriving] = ACTIONS(329),
    [anon_sym_newtype] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_type] = ACTIONS(329),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(329),
    [anon_sym_default] = ACTIONS(329),
    [anon_sym_do] = ACTIONS(329),
    [anon_sym_else] = ACTIONS(329),
    [anon_sym_foreign] = ACTIONS(329),
    [anon_sym_if] = ACTIONS(329),
    [anon_sym_in] = ACTIONS(329),
    [anon_sym_infix] = ACTIONS(329),
    [anon_sym_infixl] = ACTIONS(329),
    [anon_sym_infixr] = ACTIONS(329),
    [anon_sym_instance] = ACTIONS(329),
    [anon_sym_let] = ACTIONS(329),
    [anon_sym_of] = ACTIONS(329),
    [anon_sym_then] = ACTIONS(329),
    [anon_sym__] = ACTIONS(329),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [sym__integer_literal] = ACTIONS(329),
    [sym__octal_literal] = ACTIONS(329),
    [sym__hexidecimal_literal] = ACTIONS(329),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(26),
  },
  [86] = {
    [sym__identifier] = STATE(135),
    [anon_sym_EQ] = ACTIONS(313),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [87] = {
    [sym_new_constructor] = STATE(137),
    [sym_constructor_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [sym__identifier] = STATE(139),
    [aux_sym_type_class_repeat1] = STATE(140),
    [sym_variable_identifier] = ACTIONS(339),
    [sym_constructor_identifier] = ACTIONS(341),
    [sym_module_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(26),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_module] = ACTIONS(345),
    [anon_sym_where] = ACTIONS(345),
    [anon_sym_import] = ACTIONS(345),
    [anon_sym_class] = ACTIONS(345),
    [anon_sym_data] = ACTIONS(345),
    [anon_sym_newtype] = ACTIONS(345),
    [anon_sym_type] = ACTIONS(345),
    [anon_sym_case] = ACTIONS(345),
    [anon_sym_default] = ACTIONS(345),
    [anon_sym_do] = ACTIONS(345),
    [anon_sym_else] = ACTIONS(345),
    [anon_sym_foreign] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(345),
    [anon_sym_in] = ACTIONS(345),
    [anon_sym_infix] = ACTIONS(345),
    [anon_sym_infixl] = ACTIONS(345),
    [anon_sym_infixr] = ACTIONS(345),
    [anon_sym_instance] = ACTIONS(345),
    [anon_sym_let] = ACTIONS(345),
    [anon_sym_of] = ACTIONS(345),
    [anon_sym_then] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym__integer_literal] = ACTIONS(345),
    [sym__octal_literal] = ACTIONS(345),
    [sym__hexidecimal_literal] = ACTIONS(345),
  },
  [90] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(349),
  },
  [91] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(351),
  },
  [92] = {
    [sym__cntrl] = STATE(142),
    [anon_sym__] = ACTIONS(353),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
  },
  [93] = {
    [aux_sym__escape_repeat1] = STATE(144),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
  },
  [94] = {
    [aux_sym__escape_repeat2] = STATE(146),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(357),
  },
  [95] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(359),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_BANG] = ACTIONS(361),
    [anon_sym__] = ACTIONS(361),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(361),
    [sym__ascii_large] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_1] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [sym__space] = ACTIONS(361),
    [sym__newline] = ACTIONS(361),
    [sym__tab] = ACTIONS(361),
    [sym__vertical_tab] = ACTIONS(361),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_BANG] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(363),
    [sym__ascii_large] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(363),
    [anon_sym_DOLLAR] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(363),
    [anon_sym_AMP] = ACTIONS(363),
    [anon_sym_1] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(363),
    [anon_sym_CARET] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_BSLASH] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [sym__space] = ACTIONS(363),
    [sym__newline] = ACTIONS(363),
    [sym__tab] = ACTIONS(363),
    [sym__vertical_tab] = ACTIONS(363),
  },
  [98] = {
    [sym__cntrl] = STATE(148),
    [anon_sym__] = ACTIONS(365),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
  },
  [99] = {
    [aux_sym__escape_repeat1] = STATE(150),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(367),
  },
  [100] = {
    [aux_sym__escape_repeat2] = STATE(152),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(369),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym__] = ACTIONS(371),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(371),
    [sym__ascii_large] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(371),
    [anon_sym_1] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym_TILDE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [sym__space] = ACTIONS(371),
    [sym__newline] = ACTIONS(371),
    [sym__tab] = ACTIONS(371),
    [sym__vertical_tab] = ACTIONS(371),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(373),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(373),
    [sym__ascii_large] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_1] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [sym__space] = ACTIONS(373),
    [sym__newline] = ACTIONS(373),
    [sym__tab] = ACTIONS(373),
    [sym__vertical_tab] = ACTIONS(373),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_module] = ACTIONS(377),
    [anon_sym_where] = ACTIONS(377),
    [anon_sym_import] = ACTIONS(377),
    [anon_sym_class] = ACTIONS(377),
    [anon_sym_data] = ACTIONS(377),
    [anon_sym_newtype] = ACTIONS(377),
    [anon_sym_type] = ACTIONS(377),
    [anon_sym_case] = ACTIONS(377),
    [anon_sym_default] = ACTIONS(377),
    [anon_sym_do] = ACTIONS(377),
    [anon_sym_else] = ACTIONS(377),
    [anon_sym_foreign] = ACTIONS(377),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_in] = ACTIONS(377),
    [anon_sym_infix] = ACTIONS(377),
    [anon_sym_infixl] = ACTIONS(377),
    [anon_sym_infixr] = ACTIONS(377),
    [anon_sym_instance] = ACTIONS(377),
    [anon_sym_let] = ACTIONS(377),
    [anon_sym_of] = ACTIONS(377),
    [anon_sym_then] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [sym__integer_literal] = ACTIONS(377),
    [sym__octal_literal] = ACTIONS(377),
    [sym__hexidecimal_literal] = ACTIONS(377),
  },
  [104] = {
    [sym__statement] = STATE(53),
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
    [ts_builtin_sym_end] = ACTIONS(381),
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
  [105] = {
    [anon_sym_where] = ACTIONS(383),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [aux_sym_module_exports_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(387),
    [sym_comment] = ACTIONS(26),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym_comment] = ACTIONS(26),
  },
  [108] = {
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
    [aux_sym_program_repeat1] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(393),
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
  [109] = {
    [sym__identifier] = STATE(158),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(397),
    [anon_sym_where] = ACTIONS(397),
    [anon_sym_import] = ACTIONS(397),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_data] = ACTIONS(397),
    [anon_sym_newtype] = ACTIONS(397),
    [anon_sym_type] = ACTIONS(397),
    [anon_sym_case] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_else] = ACTIONS(397),
    [anon_sym_foreign] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_in] = ACTIONS(397),
    [anon_sym_infix] = ACTIONS(397),
    [anon_sym_infixl] = ACTIONS(397),
    [anon_sym_infixr] = ACTIONS(397),
    [anon_sym_instance] = ACTIONS(397),
    [anon_sym_let] = ACTIONS(397),
    [anon_sym_of] = ACTIONS(397),
    [anon_sym_then] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym__integer_literal] = ACTIONS(397),
    [sym__octal_literal] = ACTIONS(397),
    [sym__hexidecimal_literal] = ACTIONS(397),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_module] = ACTIONS(403),
    [anon_sym_where] = ACTIONS(403),
    [anon_sym_import] = ACTIONS(403),
    [anon_sym_class] = ACTIONS(403),
    [anon_sym_data] = ACTIONS(403),
    [anon_sym_newtype] = ACTIONS(403),
    [anon_sym_type] = ACTIONS(403),
    [anon_sym_case] = ACTIONS(403),
    [anon_sym_default] = ACTIONS(403),
    [anon_sym_do] = ACTIONS(403),
    [anon_sym_else] = ACTIONS(403),
    [anon_sym_foreign] = ACTIONS(403),
    [anon_sym_if] = ACTIONS(403),
    [anon_sym_in] = ACTIONS(403),
    [anon_sym_infix] = ACTIONS(403),
    [anon_sym_infixl] = ACTIONS(403),
    [anon_sym_infixr] = ACTIONS(403),
    [anon_sym_instance] = ACTIONS(403),
    [anon_sym_let] = ACTIONS(403),
    [anon_sym_of] = ACTIONS(403),
    [anon_sym_then] = ACTIONS(403),
    [anon_sym__] = ACTIONS(403),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym__integer_literal] = ACTIONS(403),
    [sym__octal_literal] = ACTIONS(403),
    [sym__hexidecimal_literal] = ACTIONS(403),
  },
  [112] = {
    [aux_sym_import_specification_repeat1] = STATE(162),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [sym_import_specification] = STATE(163),
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(397),
    [anon_sym_where] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(397),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(397),
    [anon_sym_data] = ACTIONS(397),
    [anon_sym_newtype] = ACTIONS(397),
    [anon_sym_type] = ACTIONS(397),
    [anon_sym_case] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_do] = ACTIONS(397),
    [anon_sym_else] = ACTIONS(397),
    [anon_sym_foreign] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_in] = ACTIONS(397),
    [anon_sym_infix] = ACTIONS(397),
    [anon_sym_infixl] = ACTIONS(397),
    [anon_sym_infixr] = ACTIONS(397),
    [anon_sym_instance] = ACTIONS(397),
    [anon_sym_let] = ACTIONS(397),
    [anon_sym_of] = ACTIONS(397),
    [anon_sym_then] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym__integer_literal] = ACTIONS(397),
    [sym__octal_literal] = ACTIONS(397),
    [sym__hexidecimal_literal] = ACTIONS(397),
  },
  [114] = {
    [sym__identifier] = STATE(164),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [sym_class] = STATE(165),
    [sym__identifier] = STATE(64),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [anon_sym_EQ_GT] = ACTIONS(413),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [anon_sym_LBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym__identifier] = STATE(135),
    [anon_sym_RPAREN] = ACTIONS(421),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_module] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(162),
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_data] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_deriving] = ACTIONS(162),
    [anon_sym_newtype] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(285),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [anon_sym_case] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_do] = ACTIONS(162),
    [anon_sym_else] = ACTIONS(162),
    [anon_sym_foreign] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_infix] = ACTIONS(162),
    [anon_sym_infixl] = ACTIONS(162),
    [anon_sym_infixr] = ACTIONS(162),
    [anon_sym_instance] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_of] = ACTIONS(162),
    [anon_sym_then] = ACTIONS(162),
    [anon_sym__] = ACTIONS(162),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(162),
    [sym__octal_literal] = ACTIONS(162),
    [sym__hexidecimal_literal] = ACTIONS(162),
  },
  [122] = {
    [sym_constructors] = STATE(172),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(173),
    [sym__identifier] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_module] = ACTIONS(427),
    [anon_sym_where] = ACTIONS(427),
    [anon_sym_import] = ACTIONS(427),
    [anon_sym_class] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(427),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(427),
    [anon_sym_type] = ACTIONS(427),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(427),
    [anon_sym_do] = ACTIONS(427),
    [anon_sym_else] = ACTIONS(427),
    [anon_sym_foreign] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_in] = ACTIONS(427),
    [anon_sym_infix] = ACTIONS(427),
    [anon_sym_infixl] = ACTIONS(427),
    [anon_sym_infixr] = ACTIONS(427),
    [anon_sym_instance] = ACTIONS(427),
    [anon_sym_let] = ACTIONS(427),
    [anon_sym_of] = ACTIONS(427),
    [anon_sym_then] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym__integer_literal] = ACTIONS(427),
    [sym__octal_literal] = ACTIONS(427),
    [sym__hexidecimal_literal] = ACTIONS(427),
  },
  [123] = {
    [sym_deriving] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_module] = ACTIONS(427),
    [anon_sym_where] = ACTIONS(427),
    [anon_sym_import] = ACTIONS(427),
    [anon_sym_class] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(427),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(427),
    [anon_sym_type] = ACTIONS(427),
    [anon_sym_case] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(427),
    [anon_sym_do] = ACTIONS(427),
    [anon_sym_else] = ACTIONS(427),
    [anon_sym_foreign] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_in] = ACTIONS(427),
    [anon_sym_infix] = ACTIONS(427),
    [anon_sym_infixl] = ACTIONS(427),
    [anon_sym_infixr] = ACTIONS(427),
    [anon_sym_instance] = ACTIONS(427),
    [anon_sym_let] = ACTIONS(427),
    [anon_sym_of] = ACTIONS(427),
    [anon_sym_then] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym__integer_literal] = ACTIONS(427),
    [sym__octal_literal] = ACTIONS(427),
    [sym__hexidecimal_literal] = ACTIONS(427),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_module] = ACTIONS(427),
    [anon_sym_where] = ACTIONS(427),
    [anon_sym_import] = ACTIONS(427),
    [anon_sym_class] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(427),
    [anon_sym_newtype] = ACTIONS(427),
    [anon_sym_type] = ACTIONS(427),
    [anon_sym_case] = ACTIONS(427),
    [anon_sym_default] = ACTIONS(427),
    [anon_sym_do] = ACTIONS(427),
    [anon_sym_else] = ACTIONS(427),
    [anon_sym_foreign] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(427),
    [anon_sym_in] = ACTIONS(427),
    [anon_sym_infix] = ACTIONS(427),
    [anon_sym_infixl] = ACTIONS(427),
    [anon_sym_infixr] = ACTIONS(427),
    [anon_sym_instance] = ACTIONS(427),
    [anon_sym_let] = ACTIONS(427),
    [anon_sym_of] = ACTIONS(427),
    [anon_sym_then] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [sym__integer_literal] = ACTIONS(427),
    [sym__octal_literal] = ACTIONS(427),
    [sym__hexidecimal_literal] = ACTIONS(427),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_module] = ACTIONS(297),
    [anon_sym_where] = ACTIONS(297),
    [anon_sym_import] = ACTIONS(297),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_data] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_deriving] = ACTIONS(297),
    [anon_sym_newtype] = ACTIONS(297),
    [anon_sym_type] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(299),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [anon_sym_case] = ACTIONS(297),
    [anon_sym_default] = ACTIONS(297),
    [anon_sym_do] = ACTIONS(297),
    [anon_sym_else] = ACTIONS(297),
    [anon_sym_foreign] = ACTIONS(297),
    [anon_sym_if] = ACTIONS(297),
    [anon_sym_in] = ACTIONS(297),
    [anon_sym_infix] = ACTIONS(297),
    [anon_sym_infixl] = ACTIONS(297),
    [anon_sym_infixr] = ACTIONS(297),
    [anon_sym_instance] = ACTIONS(297),
    [anon_sym_let] = ACTIONS(297),
    [anon_sym_of] = ACTIONS(297),
    [anon_sym_then] = ACTIONS(297),
    [anon_sym__] = ACTIONS(297),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [126] = {
    [sym__identifier] = STATE(174),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_module] = ACTIONS(435),
    [anon_sym_where] = ACTIONS(435),
    [anon_sym_import] = ACTIONS(435),
    [anon_sym_class] = ACTIONS(435),
    [anon_sym_data] = ACTIONS(435),
    [anon_sym_newtype] = ACTIONS(435),
    [anon_sym_type] = ACTIONS(435),
    [anon_sym_case] = ACTIONS(435),
    [anon_sym_default] = ACTIONS(435),
    [anon_sym_do] = ACTIONS(435),
    [anon_sym_else] = ACTIONS(435),
    [anon_sym_foreign] = ACTIONS(435),
    [anon_sym_if] = ACTIONS(435),
    [anon_sym_in] = ACTIONS(435),
    [anon_sym_infix] = ACTIONS(435),
    [anon_sym_infixl] = ACTIONS(435),
    [anon_sym_infixr] = ACTIONS(435),
    [anon_sym_instance] = ACTIONS(435),
    [anon_sym_let] = ACTIONS(435),
    [anon_sym_of] = ACTIONS(435),
    [anon_sym_then] = ACTIONS(435),
    [anon_sym__] = ACTIONS(435),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [sym__integer_literal] = ACTIONS(435),
    [sym__octal_literal] = ACTIONS(435),
    [sym__hexidecimal_literal] = ACTIONS(435),
  },
  [128] = {
    [sym_constructor] = STATE(175),
    [sym__identifier] = STATE(84),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_module] = ACTIONS(441),
    [anon_sym_where] = ACTIONS(441),
    [anon_sym_import] = ACTIONS(441),
    [anon_sym_class] = ACTIONS(441),
    [anon_sym_data] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_deriving] = ACTIONS(441),
    [anon_sym_newtype] = ACTIONS(441),
    [anon_sym_type] = ACTIONS(441),
    [anon_sym_case] = ACTIONS(441),
    [anon_sym_default] = ACTIONS(441),
    [anon_sym_do] = ACTIONS(441),
    [anon_sym_else] = ACTIONS(441),
    [anon_sym_foreign] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_in] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_instance] = ACTIONS(441),
    [anon_sym_let] = ACTIONS(441),
    [anon_sym_of] = ACTIONS(441),
    [anon_sym_then] = ACTIONS(441),
    [anon_sym__] = ACTIONS(441),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym__integer_literal] = ACTIONS(441),
    [sym__octal_literal] = ACTIONS(441),
    [sym__hexidecimal_literal] = ACTIONS(441),
  },
  [130] = {
    [sym_field] = STATE(178),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym__identifier] = STATE(179),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_module] = ACTIONS(451),
    [anon_sym_where] = ACTIONS(451),
    [anon_sym_import] = ACTIONS(451),
    [anon_sym_class] = ACTIONS(451),
    [anon_sym_data] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_deriving] = ACTIONS(451),
    [anon_sym_newtype] = ACTIONS(451),
    [anon_sym_type] = ACTIONS(451),
    [anon_sym_case] = ACTIONS(451),
    [anon_sym_default] = ACTIONS(451),
    [anon_sym_do] = ACTIONS(451),
    [anon_sym_else] = ACTIONS(451),
    [anon_sym_foreign] = ACTIONS(451),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_in] = ACTIONS(451),
    [anon_sym_infix] = ACTIONS(451),
    [anon_sym_infixl] = ACTIONS(451),
    [anon_sym_infixr] = ACTIONS(451),
    [anon_sym_instance] = ACTIONS(451),
    [anon_sym_let] = ACTIONS(451),
    [anon_sym_of] = ACTIONS(451),
    [anon_sym_then] = ACTIONS(451),
    [anon_sym__] = ACTIONS(451),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym__integer_literal] = ACTIONS(451),
    [sym__octal_literal] = ACTIONS(451),
    [sym__hexidecimal_literal] = ACTIONS(451),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_module] = ACTIONS(457),
    [anon_sym_where] = ACTIONS(457),
    [anon_sym_import] = ACTIONS(457),
    [anon_sym_class] = ACTIONS(457),
    [anon_sym_data] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_deriving] = ACTIONS(457),
    [anon_sym_newtype] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_type] = ACTIONS(457),
    [sym_variable_identifier] = ACTIONS(459),
    [sym_constructor_identifier] = ACTIONS(459),
    [sym_module_identifier] = ACTIONS(459),
    [anon_sym_case] = ACTIONS(457),
    [anon_sym_default] = ACTIONS(457),
    [anon_sym_do] = ACTIONS(457),
    [anon_sym_else] = ACTIONS(457),
    [anon_sym_foreign] = ACTIONS(457),
    [anon_sym_if] = ACTIONS(457),
    [anon_sym_in] = ACTIONS(457),
    [anon_sym_infix] = ACTIONS(457),
    [anon_sym_infixl] = ACTIONS(457),
    [anon_sym_infixr] = ACTIONS(457),
    [anon_sym_instance] = ACTIONS(457),
    [anon_sym_let] = ACTIONS(457),
    [anon_sym_of] = ACTIONS(457),
    [anon_sym_then] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [sym__integer_literal] = ACTIONS(457),
    [sym__octal_literal] = ACTIONS(457),
    [sym__hexidecimal_literal] = ACTIONS(457),
  },
  [134] = {
    [sym_strict] = STATE(180),
    [sym__identifier] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_module] = ACTIONS(451),
    [anon_sym_where] = ACTIONS(451),
    [anon_sym_import] = ACTIONS(451),
    [anon_sym_class] = ACTIONS(451),
    [anon_sym_data] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_deriving] = ACTIONS(451),
    [anon_sym_newtype] = ACTIONS(451),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_type] = ACTIONS(451),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(451),
    [anon_sym_default] = ACTIONS(451),
    [anon_sym_do] = ACTIONS(451),
    [anon_sym_else] = ACTIONS(451),
    [anon_sym_foreign] = ACTIONS(451),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_in] = ACTIONS(451),
    [anon_sym_infix] = ACTIONS(451),
    [anon_sym_infixl] = ACTIONS(451),
    [anon_sym_infixr] = ACTIONS(451),
    [anon_sym_instance] = ACTIONS(451),
    [anon_sym_let] = ACTIONS(451),
    [anon_sym_of] = ACTIONS(451),
    [anon_sym_then] = ACTIONS(451),
    [anon_sym__] = ACTIONS(451),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym__integer_literal] = ACTIONS(451),
    [sym__octal_literal] = ACTIONS(451),
    [sym__hexidecimal_literal] = ACTIONS(451),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(297),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [sym_fields] = STATE(181),
    [sym__identifier] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(331),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_deriving] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_module] = ACTIONS(463),
    [anon_sym_where] = ACTIONS(463),
    [anon_sym_import] = ACTIONS(463),
    [anon_sym_class] = ACTIONS(463),
    [anon_sym_data] = ACTIONS(463),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(463),
    [anon_sym_type] = ACTIONS(463),
    [anon_sym_case] = ACTIONS(463),
    [anon_sym_default] = ACTIONS(463),
    [anon_sym_do] = ACTIONS(463),
    [anon_sym_else] = ACTIONS(463),
    [anon_sym_foreign] = ACTIONS(463),
    [anon_sym_if] = ACTIONS(463),
    [anon_sym_in] = ACTIONS(463),
    [anon_sym_infix] = ACTIONS(463),
    [anon_sym_infixl] = ACTIONS(463),
    [anon_sym_infixr] = ACTIONS(463),
    [anon_sym_instance] = ACTIONS(463),
    [anon_sym_let] = ACTIONS(463),
    [anon_sym_of] = ACTIONS(463),
    [anon_sym_then] = ACTIONS(463),
    [anon_sym__] = ACTIONS(463),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym__integer_literal] = ACTIONS(463),
    [sym__octal_literal] = ACTIONS(463),
    [sym__hexidecimal_literal] = ACTIONS(463),
  },
  [138] = {
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
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_module] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(162),
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_data] = ACTIONS(162),
    [anon_sym_newtype] = ACTIONS(162),
    [anon_sym_type] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(285),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [anon_sym_case] = ACTIONS(162),
    [anon_sym_default] = ACTIONS(162),
    [anon_sym_do] = ACTIONS(162),
    [anon_sym_else] = ACTIONS(162),
    [anon_sym_foreign] = ACTIONS(162),
    [anon_sym_if] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(162),
    [anon_sym_infix] = ACTIONS(162),
    [anon_sym_infixl] = ACTIONS(162),
    [anon_sym_infixr] = ACTIONS(162),
    [anon_sym_instance] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_of] = ACTIONS(162),
    [anon_sym_then] = ACTIONS(162),
    [anon_sym__] = ACTIONS(162),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(162),
    [sym__octal_literal] = ACTIONS(162),
    [sym__hexidecimal_literal] = ACTIONS(162),
  },
  [140] = {
    [sym__identifier] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_module] = ACTIONS(469),
    [anon_sym_where] = ACTIONS(469),
    [anon_sym_import] = ACTIONS(469),
    [anon_sym_class] = ACTIONS(469),
    [anon_sym_data] = ACTIONS(469),
    [anon_sym_newtype] = ACTIONS(469),
    [anon_sym_type] = ACTIONS(469),
    [sym_variable_identifier] = ACTIONS(341),
    [sym_constructor_identifier] = ACTIONS(341),
    [sym_module_identifier] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(469),
    [anon_sym_default] = ACTIONS(469),
    [anon_sym_do] = ACTIONS(469),
    [anon_sym_else] = ACTIONS(469),
    [anon_sym_foreign] = ACTIONS(469),
    [anon_sym_if] = ACTIONS(469),
    [anon_sym_in] = ACTIONS(469),
    [anon_sym_infix] = ACTIONS(469),
    [anon_sym_infixl] = ACTIONS(469),
    [anon_sym_infixr] = ACTIONS(469),
    [anon_sym_instance] = ACTIONS(469),
    [anon_sym_let] = ACTIONS(469),
    [anon_sym_of] = ACTIONS(469),
    [anon_sym_then] = ACTIONS(469),
    [anon_sym__] = ACTIONS(469),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [sym__integer_literal] = ACTIONS(469),
    [sym__octal_literal] = ACTIONS(469),
    [sym__hexidecimal_literal] = ACTIONS(469),
  },
  [141] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(473),
  },
  [142] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(475),
  },
  [143] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(477),
  },
  [144] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(481),
  },
  [145] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(483),
  },
  [146] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(485),
  },
  [147] = {
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym__] = ACTIONS(487),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(487),
    [sym__ascii_large] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_1] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_TILDE] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_BSLASH] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [sym__space] = ACTIONS(487),
    [sym__newline] = ACTIONS(487),
    [sym__tab] = ACTIONS(487),
    [sym__vertical_tab] = ACTIONS(487),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(489),
    [anon_sym__] = ACTIONS(489),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(489),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(489),
    [sym__ascii_large] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(489),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_AMP] = ACTIONS(489),
    [anon_sym_1] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_QMARK] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_CARET] = ACTIONS(489),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_BSLASH] = ACTIONS(489),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [sym__space] = ACTIONS(489),
    [sym__newline] = ACTIONS(489),
    [sym__tab] = ACTIONS(489),
    [sym__vertical_tab] = ACTIONS(489),
  },
  [149] = {
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym__] = ACTIONS(491),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(491),
    [sym__ascii_large] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_1] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_BQUOTE] = ACTIONS(491),
    [sym__space] = ACTIONS(491),
    [sym__newline] = ACTIONS(491),
    [sym__tab] = ACTIONS(491),
    [sym__vertical_tab] = ACTIONS(491),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(491),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(493),
    [sym__ascii_large] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_1] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_CARET] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_BSLASH] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [sym__space] = ACTIONS(493),
    [sym__newline] = ACTIONS(493),
    [sym__tab] = ACTIONS(493),
    [sym__vertical_tab] = ACTIONS(493),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(495),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_BANG] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(497),
    [sym__ascii_large] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_DOLLAR] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_1] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(497),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_BSLASH] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(497),
    [sym__space] = ACTIONS(497),
    [sym__newline] = ACTIONS(497),
    [sym__tab] = ACTIONS(497),
    [sym__vertical_tab] = ACTIONS(497),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(497),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_BANG] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(493),
    [sym__ascii_large] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(493),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
    [anon_sym_1] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(493),
    [anon_sym_SLASH] = ACTIONS(493),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_CARET] = ACTIONS(493),
    [anon_sym_DASH] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_BSLASH] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [sym__space] = ACTIONS(493),
    [sym__newline] = ACTIONS(493),
    [sym__tab] = ACTIONS(493),
    [sym__vertical_tab] = ACTIONS(493),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(499),
  },
  [153] = {
    [sym_export] = STATE(188),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [anon_sym_where] = ACTIONS(501),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(505),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [sym__identifier] = STATE(192),
    [anon_sym_DOT_DOT] = ACTIONS(507),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [sym__statement] = STATE(53),
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
    [ts_builtin_sym_end] = ACTIONS(509),
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
  [158] = {
    [sym_import_specification] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_module] = ACTIONS(513),
    [anon_sym_where] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(513),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(513),
    [anon_sym_data] = ACTIONS(513),
    [anon_sym_newtype] = ACTIONS(513),
    [anon_sym_type] = ACTIONS(513),
    [anon_sym_case] = ACTIONS(513),
    [anon_sym_default] = ACTIONS(513),
    [anon_sym_do] = ACTIONS(513),
    [anon_sym_else] = ACTIONS(513),
    [anon_sym_foreign] = ACTIONS(513),
    [anon_sym_if] = ACTIONS(513),
    [anon_sym_in] = ACTIONS(513),
    [anon_sym_infix] = ACTIONS(513),
    [anon_sym_infixl] = ACTIONS(513),
    [anon_sym_infixr] = ACTIONS(513),
    [anon_sym_instance] = ACTIONS(513),
    [anon_sym_let] = ACTIONS(513),
    [anon_sym_of] = ACTIONS(513),
    [anon_sym_then] = ACTIONS(513),
    [anon_sym__] = ACTIONS(513),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym__integer_literal] = ACTIONS(513),
    [sym__octal_literal] = ACTIONS(513),
    [sym__hexidecimal_literal] = ACTIONS(513),
  },
  [159] = {
    [sym__identifier] = STATE(195),
    [anon_sym_DOT_DOT] = ACTIONS(517),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [sym__identifier] = STATE(196),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_module] = ACTIONS(521),
    [anon_sym_where] = ACTIONS(521),
    [anon_sym_import] = ACTIONS(521),
    [anon_sym_class] = ACTIONS(521),
    [anon_sym_data] = ACTIONS(521),
    [anon_sym_newtype] = ACTIONS(521),
    [anon_sym_type] = ACTIONS(521),
    [anon_sym_case] = ACTIONS(521),
    [anon_sym_default] = ACTIONS(521),
    [anon_sym_do] = ACTIONS(521),
    [anon_sym_else] = ACTIONS(521),
    [anon_sym_foreign] = ACTIONS(521),
    [anon_sym_if] = ACTIONS(521),
    [anon_sym_in] = ACTIONS(521),
    [anon_sym_infix] = ACTIONS(521),
    [anon_sym_infixl] = ACTIONS(521),
    [anon_sym_infixr] = ACTIONS(521),
    [anon_sym_instance] = ACTIONS(521),
    [anon_sym_let] = ACTIONS(521),
    [anon_sym_of] = ACTIONS(521),
    [anon_sym_then] = ACTIONS(521),
    [anon_sym__] = ACTIONS(521),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym__integer_literal] = ACTIONS(521),
    [sym__octal_literal] = ACTIONS(521),
    [sym__hexidecimal_literal] = ACTIONS(521),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_module] = ACTIONS(513),
    [anon_sym_where] = ACTIONS(513),
    [anon_sym_import] = ACTIONS(513),
    [anon_sym_class] = ACTIONS(513),
    [anon_sym_data] = ACTIONS(513),
    [anon_sym_newtype] = ACTIONS(513),
    [anon_sym_type] = ACTIONS(513),
    [anon_sym_case] = ACTIONS(513),
    [anon_sym_default] = ACTIONS(513),
    [anon_sym_do] = ACTIONS(513),
    [anon_sym_else] = ACTIONS(513),
    [anon_sym_foreign] = ACTIONS(513),
    [anon_sym_if] = ACTIONS(513),
    [anon_sym_in] = ACTIONS(513),
    [anon_sym_infix] = ACTIONS(513),
    [anon_sym_infixl] = ACTIONS(513),
    [anon_sym_infixr] = ACTIONS(513),
    [anon_sym_instance] = ACTIONS(513),
    [anon_sym_let] = ACTIONS(513),
    [anon_sym_of] = ACTIONS(513),
    [anon_sym_then] = ACTIONS(513),
    [anon_sym__] = ACTIONS(513),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym__integer_literal] = ACTIONS(513),
    [sym__octal_literal] = ACTIONS(513),
    [sym__hexidecimal_literal] = ACTIONS(513),
  },
  [164] = {
    [aux_sym_import_specification_repeat1] = STATE(200),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [sym_variable_identifier] = ACTIONS(533),
    [sym_constructor_identifier] = ACTIONS(535),
    [sym_module_identifier] = ACTIONS(535),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym_class] = STATE(201),
    [sym__identifier] = STATE(64),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [anon_sym_EQ_GT] = ACTIONS(537),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_EQ_GT] = ACTIONS(541),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(545),
    [anon_sym_where] = ACTIONS(545),
    [anon_sym_import] = ACTIONS(545),
    [anon_sym_class] = ACTIONS(545),
    [anon_sym_data] = ACTIONS(545),
    [anon_sym_newtype] = ACTIONS(545),
    [anon_sym_type] = ACTIONS(545),
    [anon_sym_case] = ACTIONS(545),
    [anon_sym_default] = ACTIONS(545),
    [anon_sym_do] = ACTIONS(545),
    [anon_sym_else] = ACTIONS(545),
    [anon_sym_foreign] = ACTIONS(545),
    [anon_sym_if] = ACTIONS(545),
    [anon_sym_in] = ACTIONS(545),
    [anon_sym_infix] = ACTIONS(545),
    [anon_sym_infixl] = ACTIONS(545),
    [anon_sym_infixr] = ACTIONS(545),
    [anon_sym_instance] = ACTIONS(545),
    [anon_sym_let] = ACTIONS(545),
    [anon_sym_of] = ACTIONS(545),
    [anon_sym_then] = ACTIONS(545),
    [anon_sym__] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym__integer_literal] = ACTIONS(545),
    [sym__octal_literal] = ACTIONS(545),
    [sym__hexidecimal_literal] = ACTIONS(545),
  },
  [172] = {
    [sym_deriving] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(551),
    [anon_sym_where] = ACTIONS(551),
    [anon_sym_import] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_data] = ACTIONS(551),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(551),
    [anon_sym_type] = ACTIONS(551),
    [anon_sym_case] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_do] = ACTIONS(551),
    [anon_sym_else] = ACTIONS(551),
    [anon_sym_foreign] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_in] = ACTIONS(551),
    [anon_sym_infix] = ACTIONS(551),
    [anon_sym_infixl] = ACTIONS(551),
    [anon_sym_infixr] = ACTIONS(551),
    [anon_sym_instance] = ACTIONS(551),
    [anon_sym_let] = ACTIONS(551),
    [anon_sym_of] = ACTIONS(551),
    [anon_sym_then] = ACTIONS(551),
    [anon_sym__] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(551),
    [anon_sym_where] = ACTIONS(551),
    [anon_sym_import] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_data] = ACTIONS(551),
    [anon_sym_newtype] = ACTIONS(551),
    [anon_sym_type] = ACTIONS(551),
    [anon_sym_case] = ACTIONS(551),
    [anon_sym_default] = ACTIONS(551),
    [anon_sym_do] = ACTIONS(551),
    [anon_sym_else] = ACTIONS(551),
    [anon_sym_foreign] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_in] = ACTIONS(551),
    [anon_sym_infix] = ACTIONS(551),
    [anon_sym_infixl] = ACTIONS(551),
    [anon_sym_infixr] = ACTIONS(551),
    [anon_sym_instance] = ACTIONS(551),
    [anon_sym_let] = ACTIONS(551),
    [anon_sym_of] = ACTIONS(551),
    [anon_sym_then] = ACTIONS(551),
    [anon_sym__] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [174] = {
    [aux_sym_export_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [anon_sym_module] = ACTIONS(561),
    [anon_sym_where] = ACTIONS(561),
    [anon_sym_import] = ACTIONS(561),
    [anon_sym_class] = ACTIONS(561),
    [anon_sym_data] = ACTIONS(561),
    [anon_sym_PIPE] = ACTIONS(561),
    [anon_sym_deriving] = ACTIONS(561),
    [anon_sym_newtype] = ACTIONS(561),
    [anon_sym_type] = ACTIONS(561),
    [anon_sym_case] = ACTIONS(561),
    [anon_sym_default] = ACTIONS(561),
    [anon_sym_do] = ACTIONS(561),
    [anon_sym_else] = ACTIONS(561),
    [anon_sym_foreign] = ACTIONS(561),
    [anon_sym_if] = ACTIONS(561),
    [anon_sym_in] = ACTIONS(561),
    [anon_sym_infix] = ACTIONS(561),
    [anon_sym_infixl] = ACTIONS(561),
    [anon_sym_infixr] = ACTIONS(561),
    [anon_sym_instance] = ACTIONS(561),
    [anon_sym_let] = ACTIONS(561),
    [anon_sym_of] = ACTIONS(561),
    [anon_sym_then] = ACTIONS(561),
    [anon_sym__] = ACTIONS(561),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym__integer_literal] = ACTIONS(561),
    [sym__octal_literal] = ACTIONS(561),
    [sym__hexidecimal_literal] = ACTIONS(561),
  },
  [176] = {
    [sym_constructor] = STATE(208),
    [sym__identifier] = STATE(84),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [aux_sym_field_repeat1] = STATE(211),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_COLON_COLON] = ACTIONS(567),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [aux_sym_fields_repeat1] = STATE(214),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [anon_sym_module] = ACTIONS(575),
    [anon_sym_where] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_import] = ACTIONS(575),
    [anon_sym_class] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_data] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_deriving] = ACTIONS(575),
    [anon_sym_newtype] = ACTIONS(575),
    [anon_sym_BANG] = ACTIONS(575),
    [anon_sym_type] = ACTIONS(575),
    [sym_variable_identifier] = ACTIONS(577),
    [sym_constructor_identifier] = ACTIONS(577),
    [sym_module_identifier] = ACTIONS(577),
    [anon_sym_case] = ACTIONS(575),
    [anon_sym_default] = ACTIONS(575),
    [anon_sym_do] = ACTIONS(575),
    [anon_sym_else] = ACTIONS(575),
    [anon_sym_foreign] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(575),
    [anon_sym_in] = ACTIONS(575),
    [anon_sym_infix] = ACTIONS(575),
    [anon_sym_infixl] = ACTIONS(575),
    [anon_sym_infixr] = ACTIONS(575),
    [anon_sym_instance] = ACTIONS(575),
    [anon_sym_let] = ACTIONS(575),
    [anon_sym_of] = ACTIONS(575),
    [anon_sym_then] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym__integer_literal] = ACTIONS(575),
    [sym__octal_literal] = ACTIONS(575),
    [sym__hexidecimal_literal] = ACTIONS(575),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_module] = ACTIONS(581),
    [anon_sym_where] = ACTIONS(581),
    [anon_sym_import] = ACTIONS(581),
    [anon_sym_class] = ACTIONS(581),
    [anon_sym_data] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_deriving] = ACTIONS(581),
    [anon_sym_newtype] = ACTIONS(581),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_type] = ACTIONS(581),
    [sym_variable_identifier] = ACTIONS(583),
    [sym_constructor_identifier] = ACTIONS(583),
    [sym_module_identifier] = ACTIONS(583),
    [anon_sym_case] = ACTIONS(581),
    [anon_sym_default] = ACTIONS(581),
    [anon_sym_do] = ACTIONS(581),
    [anon_sym_else] = ACTIONS(581),
    [anon_sym_foreign] = ACTIONS(581),
    [anon_sym_if] = ACTIONS(581),
    [anon_sym_in] = ACTIONS(581),
    [anon_sym_infix] = ACTIONS(581),
    [anon_sym_infixl] = ACTIONS(581),
    [anon_sym_infixr] = ACTIONS(581),
    [anon_sym_instance] = ACTIONS(581),
    [anon_sym_let] = ACTIONS(581),
    [anon_sym_of] = ACTIONS(581),
    [anon_sym_then] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [sym__integer_literal] = ACTIONS(581),
    [sym__octal_literal] = ACTIONS(581),
    [sym__hexidecimal_literal] = ACTIONS(581),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_module] = ACTIONS(587),
    [anon_sym_where] = ACTIONS(587),
    [anon_sym_import] = ACTIONS(587),
    [anon_sym_class] = ACTIONS(587),
    [anon_sym_data] = ACTIONS(587),
    [anon_sym_deriving] = ACTIONS(587),
    [anon_sym_newtype] = ACTIONS(587),
    [anon_sym_type] = ACTIONS(587),
    [anon_sym_case] = ACTIONS(587),
    [anon_sym_default] = ACTIONS(587),
    [anon_sym_do] = ACTIONS(587),
    [anon_sym_else] = ACTIONS(587),
    [anon_sym_foreign] = ACTIONS(587),
    [anon_sym_if] = ACTIONS(587),
    [anon_sym_in] = ACTIONS(587),
    [anon_sym_infix] = ACTIONS(587),
    [anon_sym_infixl] = ACTIONS(587),
    [anon_sym_infixr] = ACTIONS(587),
    [anon_sym_instance] = ACTIONS(587),
    [anon_sym_let] = ACTIONS(587),
    [anon_sym_of] = ACTIONS(587),
    [anon_sym_then] = ACTIONS(587),
    [anon_sym__] = ACTIONS(587),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [sym__integer_literal] = ACTIONS(587),
    [sym__octal_literal] = ACTIONS(587),
    [sym__hexidecimal_literal] = ACTIONS(587),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [anon_sym_module] = ACTIONS(593),
    [anon_sym_where] = ACTIONS(593),
    [anon_sym_import] = ACTIONS(593),
    [anon_sym_class] = ACTIONS(593),
    [anon_sym_data] = ACTIONS(593),
    [anon_sym_newtype] = ACTIONS(593),
    [anon_sym_type] = ACTIONS(593),
    [anon_sym_case] = ACTIONS(593),
    [anon_sym_default] = ACTIONS(593),
    [anon_sym_do] = ACTIONS(593),
    [anon_sym_else] = ACTIONS(593),
    [anon_sym_foreign] = ACTIONS(593),
    [anon_sym_if] = ACTIONS(593),
    [anon_sym_in] = ACTIONS(593),
    [anon_sym_infix] = ACTIONS(593),
    [anon_sym_infixl] = ACTIONS(593),
    [anon_sym_infixr] = ACTIONS(593),
    [anon_sym_instance] = ACTIONS(593),
    [anon_sym_let] = ACTIONS(593),
    [anon_sym_of] = ACTIONS(593),
    [anon_sym_then] = ACTIONS(593),
    [anon_sym__] = ACTIONS(593),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym__integer_literal] = ACTIONS(593),
    [sym__octal_literal] = ACTIONS(593),
    [sym__hexidecimal_literal] = ACTIONS(593),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_module] = ACTIONS(297),
    [anon_sym_where] = ACTIONS(297),
    [anon_sym_import] = ACTIONS(297),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_data] = ACTIONS(297),
    [anon_sym_newtype] = ACTIONS(297),
    [anon_sym_type] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(299),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [anon_sym_case] = ACTIONS(297),
    [anon_sym_default] = ACTIONS(297),
    [anon_sym_do] = ACTIONS(297),
    [anon_sym_else] = ACTIONS(297),
    [anon_sym_foreign] = ACTIONS(297),
    [anon_sym_if] = ACTIONS(297),
    [anon_sym_in] = ACTIONS(297),
    [anon_sym_infix] = ACTIONS(297),
    [anon_sym_infixl] = ACTIONS(297),
    [anon_sym_infixr] = ACTIONS(297),
    [anon_sym_instance] = ACTIONS(297),
    [anon_sym_let] = ACTIONS(297),
    [anon_sym_of] = ACTIONS(297),
    [anon_sym_then] = ACTIONS(297),
    [anon_sym__] = ACTIONS(297),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym__integer_literal] = ACTIONS(297),
    [sym__octal_literal] = ACTIONS(297),
    [sym__hexidecimal_literal] = ACTIONS(297),
  },
  [184] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(597),
  },
  [185] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(599),
  },
  [186] = {
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_BANG] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(601),
    [sym__ascii_large] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
    [anon_sym_1] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_SLASH] = ACTIONS(601),
    [anon_sym_LT] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_AT] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(601),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_BSLASH] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [sym__space] = ACTIONS(601),
    [sym__newline] = ACTIONS(601),
    [sym__tab] = ACTIONS(601),
    [sym__vertical_tab] = ACTIONS(601),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(601),
  },
  [187] = {
    [anon_sym_LPAREN] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_BANG] = ACTIONS(603),
    [anon_sym__] = ACTIONS(603),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(603),
    [sym__ascii_large] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
    [anon_sym_1] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_SLASH] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_QMARK] = ACTIONS(603),
    [anon_sym_AT] = ACTIONS(603),
    [anon_sym_CARET] = ACTIONS(603),
    [anon_sym_DASH] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_BSLASH] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_RBRACK] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(603),
    [sym__space] = ACTIONS(603),
    [sym__newline] = ACTIONS(603),
    [sym__tab] = ACTIONS(603),
    [sym__vertical_tab] = ACTIONS(603),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(603),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [sym_export] = STATE(215),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [anon_sym_where] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(609),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [aux_sym_export_repeat1] = STATE(217),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(609),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [anon_sym_module] = ACTIONS(613),
    [anon_sym_where] = ACTIONS(613),
    [anon_sym_import] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(613),
    [anon_sym_data] = ACTIONS(613),
    [anon_sym_newtype] = ACTIONS(613),
    [anon_sym_type] = ACTIONS(613),
    [anon_sym_case] = ACTIONS(613),
    [anon_sym_default] = ACTIONS(613),
    [anon_sym_do] = ACTIONS(613),
    [anon_sym_else] = ACTIONS(613),
    [anon_sym_foreign] = ACTIONS(613),
    [anon_sym_if] = ACTIONS(613),
    [anon_sym_in] = ACTIONS(613),
    [anon_sym_infix] = ACTIONS(613),
    [anon_sym_infixl] = ACTIONS(613),
    [anon_sym_infixr] = ACTIONS(613),
    [anon_sym_instance] = ACTIONS(613),
    [anon_sym_let] = ACTIONS(613),
    [anon_sym_of] = ACTIONS(613),
    [anon_sym_then] = ACTIONS(613),
    [anon_sym__] = ACTIONS(613),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(613),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [sym__integer_literal] = ACTIONS(613),
    [sym__octal_literal] = ACTIONS(613),
    [sym__hexidecimal_literal] = ACTIONS(613),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [aux_sym_export_repeat1] = STATE(219),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [sym__identifier] = STATE(221),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [anon_sym_module] = ACTIONS(625),
    [anon_sym_where] = ACTIONS(625),
    [anon_sym_import] = ACTIONS(625),
    [anon_sym_class] = ACTIONS(625),
    [anon_sym_data] = ACTIONS(625),
    [anon_sym_newtype] = ACTIONS(625),
    [anon_sym_type] = ACTIONS(625),
    [anon_sym_case] = ACTIONS(625),
    [anon_sym_default] = ACTIONS(625),
    [anon_sym_do] = ACTIONS(625),
    [anon_sym_else] = ACTIONS(625),
    [anon_sym_foreign] = ACTIONS(625),
    [anon_sym_if] = ACTIONS(625),
    [anon_sym_in] = ACTIONS(625),
    [anon_sym_infix] = ACTIONS(625),
    [anon_sym_infixl] = ACTIONS(625),
    [anon_sym_infixr] = ACTIONS(625),
    [anon_sym_instance] = ACTIONS(625),
    [anon_sym_let] = ACTIONS(625),
    [anon_sym_of] = ACTIONS(625),
    [anon_sym_then] = ACTIONS(625),
    [anon_sym__] = ACTIONS(625),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [sym__integer_literal] = ACTIONS(625),
    [sym__octal_literal] = ACTIONS(625),
    [sym__hexidecimal_literal] = ACTIONS(625),
  },
  [199] = {
    [sym__identifier] = STATE(223),
    [anon_sym_DOT_DOT] = ACTIONS(629),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(631),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(633),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
    [sym_variable_identifier] = ACTIONS(635),
    [sym_constructor_identifier] = ACTIONS(637),
    [sym_module_identifier] = ACTIONS(637),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [anon_sym_module] = ACTIONS(641),
    [anon_sym_where] = ACTIONS(641),
    [anon_sym_import] = ACTIONS(641),
    [anon_sym_class] = ACTIONS(641),
    [anon_sym_data] = ACTIONS(641),
    [anon_sym_newtype] = ACTIONS(641),
    [anon_sym_type] = ACTIONS(641),
    [anon_sym_case] = ACTIONS(641),
    [anon_sym_default] = ACTIONS(641),
    [anon_sym_do] = ACTIONS(641),
    [anon_sym_else] = ACTIONS(641),
    [anon_sym_foreign] = ACTIONS(641),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_in] = ACTIONS(641),
    [anon_sym_infix] = ACTIONS(641),
    [anon_sym_infixl] = ACTIONS(641),
    [anon_sym_infixr] = ACTIONS(641),
    [anon_sym_instance] = ACTIONS(641),
    [anon_sym_let] = ACTIONS(641),
    [anon_sym_of] = ACTIONS(641),
    [anon_sym_then] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(643),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [sym__integer_literal] = ACTIONS(641),
    [sym__octal_literal] = ACTIONS(641),
    [sym__hexidecimal_literal] = ACTIONS(641),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [anon_sym_module] = ACTIONS(647),
    [anon_sym_where] = ACTIONS(647),
    [anon_sym_import] = ACTIONS(647),
    [anon_sym_class] = ACTIONS(647),
    [anon_sym_data] = ACTIONS(647),
    [anon_sym_newtype] = ACTIONS(647),
    [anon_sym_type] = ACTIONS(647),
    [anon_sym_case] = ACTIONS(647),
    [anon_sym_default] = ACTIONS(647),
    [anon_sym_do] = ACTIONS(647),
    [anon_sym_else] = ACTIONS(647),
    [anon_sym_foreign] = ACTIONS(647),
    [anon_sym_if] = ACTIONS(647),
    [anon_sym_in] = ACTIONS(647),
    [anon_sym_infix] = ACTIONS(647),
    [anon_sym_infixl] = ACTIONS(647),
    [anon_sym_infixr] = ACTIONS(647),
    [anon_sym_instance] = ACTIONS(647),
    [anon_sym_let] = ACTIONS(647),
    [anon_sym_of] = ACTIONS(647),
    [anon_sym_then] = ACTIONS(647),
    [anon_sym__] = ACTIONS(647),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(649),
    [anon_sym_SQUOTE] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [sym__integer_literal] = ACTIONS(647),
    [sym__octal_literal] = ACTIONS(647),
    [sym__hexidecimal_literal] = ACTIONS(647),
  },
  [205] = {
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [anon_sym_module] = ACTIONS(653),
    [anon_sym_where] = ACTIONS(653),
    [anon_sym_import] = ACTIONS(653),
    [anon_sym_class] = ACTIONS(653),
    [anon_sym_data] = ACTIONS(653),
    [anon_sym_newtype] = ACTIONS(653),
    [anon_sym_type] = ACTIONS(653),
    [anon_sym_case] = ACTIONS(653),
    [anon_sym_default] = ACTIONS(653),
    [anon_sym_do] = ACTIONS(653),
    [anon_sym_else] = ACTIONS(653),
    [anon_sym_foreign] = ACTIONS(653),
    [anon_sym_if] = ACTIONS(653),
    [anon_sym_in] = ACTIONS(653),
    [anon_sym_infix] = ACTIONS(653),
    [anon_sym_infixl] = ACTIONS(653),
    [anon_sym_infixr] = ACTIONS(653),
    [anon_sym_instance] = ACTIONS(653),
    [anon_sym_let] = ACTIONS(653),
    [anon_sym_of] = ACTIONS(653),
    [anon_sym_then] = ACTIONS(653),
    [anon_sym__] = ACTIONS(653),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(655),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym__integer_literal] = ACTIONS(653),
    [sym__octal_literal] = ACTIONS(653),
    [sym__hexidecimal_literal] = ACTIONS(653),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [anon_sym_module] = ACTIONS(663),
    [anon_sym_where] = ACTIONS(663),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_class] = ACTIONS(663),
    [anon_sym_data] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_deriving] = ACTIONS(663),
    [anon_sym_newtype] = ACTIONS(663),
    [anon_sym_type] = ACTIONS(663),
    [anon_sym_case] = ACTIONS(663),
    [anon_sym_default] = ACTIONS(663),
    [anon_sym_do] = ACTIONS(663),
    [anon_sym_else] = ACTIONS(663),
    [anon_sym_foreign] = ACTIONS(663),
    [anon_sym_if] = ACTIONS(663),
    [anon_sym_in] = ACTIONS(663),
    [anon_sym_infix] = ACTIONS(663),
    [anon_sym_infixl] = ACTIONS(663),
    [anon_sym_infixr] = ACTIONS(663),
    [anon_sym_instance] = ACTIONS(663),
    [anon_sym_let] = ACTIONS(663),
    [anon_sym_of] = ACTIONS(663),
    [anon_sym_then] = ACTIONS(663),
    [anon_sym__] = ACTIONS(663),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym__integer_literal] = ACTIONS(663),
    [sym__octal_literal] = ACTIONS(663),
    [sym__hexidecimal_literal] = ACTIONS(663),
  },
  [209] = {
    [sym_variable_identifier] = ACTIONS(667),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [sym_strict] = STATE(230),
    [sym__identifier] = STATE(230),
    [anon_sym_BANG] = ACTIONS(669),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_COLON_COLON] = ACTIONS(673),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [sym_field] = STATE(233),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [anon_sym_module] = ACTIONS(677),
    [anon_sym_where] = ACTIONS(677),
    [anon_sym_import] = ACTIONS(677),
    [anon_sym_class] = ACTIONS(677),
    [anon_sym_data] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(677),
    [anon_sym_deriving] = ACTIONS(677),
    [anon_sym_newtype] = ACTIONS(677),
    [anon_sym_type] = ACTIONS(677),
    [anon_sym_case] = ACTIONS(677),
    [anon_sym_default] = ACTIONS(677),
    [anon_sym_do] = ACTIONS(677),
    [anon_sym_else] = ACTIONS(677),
    [anon_sym_foreign] = ACTIONS(677),
    [anon_sym_if] = ACTIONS(677),
    [anon_sym_in] = ACTIONS(677),
    [anon_sym_infix] = ACTIONS(677),
    [anon_sym_infixl] = ACTIONS(677),
    [anon_sym_infixr] = ACTIONS(677),
    [anon_sym_instance] = ACTIONS(677),
    [anon_sym_let] = ACTIONS(677),
    [anon_sym_of] = ACTIONS(677),
    [anon_sym_then] = ACTIONS(677),
    [anon_sym__] = ACTIONS(677),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(679),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [anon_sym_DQUOTE] = ACTIONS(677),
    [sym__integer_literal] = ACTIONS(677),
    [sym__octal_literal] = ACTIONS(677),
    [sym__hexidecimal_literal] = ACTIONS(677),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_RBRACE] = ACTIONS(683),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(689),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [aux_sym_import_specification_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(691),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [sym__identifier] = STATE(241),
    [anon_sym_DOT_DOT] = ACTIONS(695),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [aux_sym_export_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_module] = ACTIONS(703),
    [anon_sym_where] = ACTIONS(703),
    [anon_sym_import] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_data] = ACTIONS(703),
    [anon_sym_newtype] = ACTIONS(703),
    [anon_sym_type] = ACTIONS(703),
    [anon_sym_case] = ACTIONS(703),
    [anon_sym_default] = ACTIONS(703),
    [anon_sym_do] = ACTIONS(703),
    [anon_sym_else] = ACTIONS(703),
    [anon_sym_foreign] = ACTIONS(703),
    [anon_sym_if] = ACTIONS(703),
    [anon_sym_in] = ACTIONS(703),
    [anon_sym_infix] = ACTIONS(703),
    [anon_sym_infixl] = ACTIONS(703),
    [anon_sym_infixr] = ACTIONS(703),
    [anon_sym_instance] = ACTIONS(703),
    [anon_sym_let] = ACTIONS(703),
    [anon_sym_of] = ACTIONS(703),
    [anon_sym_then] = ACTIONS(703),
    [anon_sym__] = ACTIONS(703),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(703),
    [sym__integer_literal] = ACTIONS(703),
    [sym__octal_literal] = ACTIONS(703),
    [sym__hexidecimal_literal] = ACTIONS(703),
  },
  [225] = {
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [sym__identifier] = STATE(244),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(711),
    [anon_sym_where] = ACTIONS(711),
    [anon_sym_import] = ACTIONS(711),
    [anon_sym_class] = ACTIONS(711),
    [anon_sym_data] = ACTIONS(711),
    [anon_sym_newtype] = ACTIONS(711),
    [anon_sym_type] = ACTIONS(711),
    [anon_sym_case] = ACTIONS(711),
    [anon_sym_default] = ACTIONS(711),
    [anon_sym_do] = ACTIONS(711),
    [anon_sym_else] = ACTIONS(711),
    [anon_sym_foreign] = ACTIONS(711),
    [anon_sym_if] = ACTIONS(711),
    [anon_sym_in] = ACTIONS(711),
    [anon_sym_infix] = ACTIONS(711),
    [anon_sym_infixl] = ACTIONS(711),
    [anon_sym_infixr] = ACTIONS(711),
    [anon_sym_instance] = ACTIONS(711),
    [anon_sym_let] = ACTIONS(711),
    [anon_sym_of] = ACTIONS(711),
    [anon_sym_then] = ACTIONS(711),
    [anon_sym__] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(713),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [sym__integer_literal] = ACTIONS(711),
    [sym__octal_literal] = ACTIONS(711),
    [sym__hexidecimal_literal] = ACTIONS(711),
  },
  [228] = {
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(715),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [sym__identifier] = STATE(179),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [sym_variable_identifier] = ACTIONS(719),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [sym_strict] = STATE(246),
    [sym__identifier] = STATE(246),
    [anon_sym_BANG] = ACTIONS(669),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RBRACE] = ACTIONS(721),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [sym_field] = STATE(247),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_module] = ACTIONS(725),
    [anon_sym_where] = ACTIONS(725),
    [anon_sym_import] = ACTIONS(725),
    [anon_sym_class] = ACTIONS(725),
    [anon_sym_data] = ACTIONS(725),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_deriving] = ACTIONS(725),
    [anon_sym_newtype] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [anon_sym_case] = ACTIONS(725),
    [anon_sym_default] = ACTIONS(725),
    [anon_sym_do] = ACTIONS(725),
    [anon_sym_else] = ACTIONS(725),
    [anon_sym_foreign] = ACTIONS(725),
    [anon_sym_if] = ACTIONS(725),
    [anon_sym_in] = ACTIONS(725),
    [anon_sym_infix] = ACTIONS(725),
    [anon_sym_infixl] = ACTIONS(725),
    [anon_sym_infixr] = ACTIONS(725),
    [anon_sym_instance] = ACTIONS(725),
    [anon_sym_let] = ACTIONS(725),
    [anon_sym_of] = ACTIONS(725),
    [anon_sym_then] = ACTIONS(725),
    [anon_sym__] = ACTIONS(725),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [sym__integer_literal] = ACTIONS(725),
    [sym__octal_literal] = ACTIONS(725),
    [sym__hexidecimal_literal] = ACTIONS(725),
  },
  [236] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [anon_sym_module] = ACTIONS(733),
    [anon_sym_where] = ACTIONS(733),
    [anon_sym_import] = ACTIONS(733),
    [anon_sym_class] = ACTIONS(733),
    [anon_sym_data] = ACTIONS(733),
    [anon_sym_newtype] = ACTIONS(733),
    [anon_sym_type] = ACTIONS(733),
    [anon_sym_case] = ACTIONS(733),
    [anon_sym_default] = ACTIONS(733),
    [anon_sym_do] = ACTIONS(733),
    [anon_sym_else] = ACTIONS(733),
    [anon_sym_foreign] = ACTIONS(733),
    [anon_sym_if] = ACTIONS(733),
    [anon_sym_in] = ACTIONS(733),
    [anon_sym_infix] = ACTIONS(733),
    [anon_sym_infixl] = ACTIONS(733),
    [anon_sym_infixr] = ACTIONS(733),
    [anon_sym_instance] = ACTIONS(733),
    [anon_sym_let] = ACTIONS(733),
    [anon_sym_of] = ACTIONS(733),
    [anon_sym_then] = ACTIONS(733),
    [anon_sym__] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(735),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(733),
    [sym__integer_literal] = ACTIONS(733),
    [sym__octal_literal] = ACTIONS(733),
    [sym__hexidecimal_literal] = ACTIONS(733),
  },
  [238] = {
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [aux_sym_import_specification_repeat1] = STATE(249),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [aux_sym_export_repeat1] = STATE(251),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [sym__identifier] = STATE(253),
    [anon_sym_DOT_DOT] = ACTIONS(741),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(743),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(745),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_COLON_COLON] = ACTIONS(747),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_RBRACE] = ACTIONS(751),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [anon_sym_module] = ACTIONS(755),
    [anon_sym_where] = ACTIONS(755),
    [anon_sym_import] = ACTIONS(755),
    [anon_sym_class] = ACTIONS(755),
    [anon_sym_data] = ACTIONS(755),
    [anon_sym_newtype] = ACTIONS(755),
    [anon_sym_type] = ACTIONS(755),
    [anon_sym_case] = ACTIONS(755),
    [anon_sym_default] = ACTIONS(755),
    [anon_sym_do] = ACTIONS(755),
    [anon_sym_else] = ACTIONS(755),
    [anon_sym_foreign] = ACTIONS(755),
    [anon_sym_if] = ACTIONS(755),
    [anon_sym_in] = ACTIONS(755),
    [anon_sym_infix] = ACTIONS(755),
    [anon_sym_infixl] = ACTIONS(755),
    [anon_sym_infixr] = ACTIONS(755),
    [anon_sym_instance] = ACTIONS(755),
    [anon_sym_let] = ACTIONS(755),
    [anon_sym_of] = ACTIONS(755),
    [anon_sym_then] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(761),
    [sym_comment] = ACTIONS(26),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [aux_sym_export_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [aux_sym_import_specification_repeat1] = STATE(258),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(765),
    [anon_sym_module] = ACTIONS(767),
    [anon_sym_where] = ACTIONS(767),
    [anon_sym_import] = ACTIONS(767),
    [anon_sym_class] = ACTIONS(767),
    [anon_sym_data] = ACTIONS(767),
    [anon_sym_newtype] = ACTIONS(767),
    [anon_sym_type] = ACTIONS(767),
    [anon_sym_case] = ACTIONS(767),
    [anon_sym_default] = ACTIONS(767),
    [anon_sym_do] = ACTIONS(767),
    [anon_sym_else] = ACTIONS(767),
    [anon_sym_foreign] = ACTIONS(767),
    [anon_sym_if] = ACTIONS(767),
    [anon_sym_in] = ACTIONS(767),
    [anon_sym_infix] = ACTIONS(767),
    [anon_sym_infixl] = ACTIONS(767),
    [anon_sym_infixr] = ACTIONS(767),
    [anon_sym_instance] = ACTIONS(767),
    [anon_sym_let] = ACTIONS(767),
    [anon_sym_of] = ACTIONS(767),
    [anon_sym_then] = ACTIONS(767),
    [anon_sym__] = ACTIONS(767),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(769),
    [anon_sym_SQUOTE] = ACTIONS(767),
    [anon_sym_DQUOTE] = ACTIONS(767),
    [sym__integer_literal] = ACTIONS(767),
    [sym__octal_literal] = ACTIONS(767),
    [sym__hexidecimal_literal] = ACTIONS(767),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(775),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [sym_comment] = ACTIONS(26),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(779),
    [anon_sym_module] = ACTIONS(781),
    [anon_sym_where] = ACTIONS(781),
    [anon_sym_import] = ACTIONS(781),
    [anon_sym_class] = ACTIONS(781),
    [anon_sym_data] = ACTIONS(781),
    [anon_sym_newtype] = ACTIONS(781),
    [anon_sym_type] = ACTIONS(781),
    [anon_sym_case] = ACTIONS(781),
    [anon_sym_default] = ACTIONS(781),
    [anon_sym_do] = ACTIONS(781),
    [anon_sym_else] = ACTIONS(781),
    [anon_sym_foreign] = ACTIONS(781),
    [anon_sym_if] = ACTIONS(781),
    [anon_sym_in] = ACTIONS(781),
    [anon_sym_infix] = ACTIONS(781),
    [anon_sym_infixl] = ACTIONS(781),
    [anon_sym_infixr] = ACTIONS(781),
    [anon_sym_instance] = ACTIONS(781),
    [anon_sym_let] = ACTIONS(781),
    [anon_sym_of] = ACTIONS(781),
    [anon_sym_then] = ACTIONS(781),
    [anon_sym__] = ACTIONS(781),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(783),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(781),
    [sym__integer_literal] = ACTIONS(781),
    [sym__octal_literal] = ACTIONS(781),
    [sym__hexidecimal_literal] = ACTIONS(781),
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
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
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
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [166] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true), SHIFT(20),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
