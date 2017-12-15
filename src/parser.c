#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 248
#define SYMBOL_COUNT 173
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
  anon_sym_data = 11,
  anon_sym_EQ = 12,
  anon_sym_EQ_GT = 13,
  anon_sym_PIPE = 14,
  anon_sym_deriving = 15,
  anon_sym_newtype = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_BANG = 20,
  anon_sym_type = 21,
  sym_variable_identifier = 22,
  sym_constructor_identifier = 23,
  sym_module_identifier = 24,
  anon_sym_case = 25,
  anon_sym_class = 26,
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
  sym_algebraic_datatype = 131,
  sym_context = 132,
  sym_class = 133,
  sym_constructors = 134,
  sym_constructor = 135,
  sym_deriving = 136,
  sym_newtype = 137,
  sym_new_constructor = 138,
  sym_fields = 139,
  sym_field = 140,
  sym_strict = 141,
  sym_type_synonym = 142,
  sym__literal = 143,
  sym__identifier = 144,
  sym_simple_type = 145,
  sym_reserved_identifier = 146,
  sym_integer = 147,
  sym_char = 148,
  sym_string = 149,
  sym__gap = 150,
  sym__graphic = 151,
  sym__small = 152,
  sym__large = 153,
  sym__symbol = 154,
  sym__special = 155,
  sym__escape = 156,
  sym__char_escape = 157,
  sym__ascii = 158,
  sym__cntrl = 159,
  aux_sym_program_repeat1 = 160,
  aux_sym_module_exports_repeat1 = 161,
  aux_sym_export_repeat1 = 162,
  aux_sym_import_specification_repeat1 = 163,
  aux_sym_context_repeat1 = 164,
  aux_sym_constructors_repeat1 = 165,
  aux_sym_constructor_repeat1 = 166,
  aux_sym_fields_repeat1 = 167,
  aux_sym_field_repeat1 = 168,
  aux_sym_type_synonym_repeat1 = 169,
  aux_sym_string_repeat1 = 170,
  aux_sym__escape_repeat1 = 171,
  aux_sym__escape_repeat2 = 172,
  alias_sym_module_body = 173,
  alias_sym_type_constructor = 174,
  alias_sym_type_variable = 175,
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
  [anon_sym_EQ_GT] = "=>",
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
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
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
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(408);
      if (lookahead == '(')
        ADVANCE(409);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(404);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 405:
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(405);
      if (lookahead == '(')
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\r')
        ADVANCE(408);
      if (lookahead == '(')
        ADVANCE(409);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(404);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(387);
      if (lookahead == ',')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(389);
      END_STATE();
    case 410:
      if (lookahead == 'n')
        SKIP(404);
      END_STATE();
    case 411:
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '.')
        ADVANCE(416);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(417);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 412:
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '.')
        ADVANCE(413);
      if (lookahead == '=')
        ADVANCE(365);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(414);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '.')
        ADVANCE(416);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(417);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(411);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 416:
      if (lookahead == '.')
        ADVANCE(105);
      END_STATE();
    case 417:
      if (lookahead == 'n')
        SKIP(411);
      END_STATE();
    case 418:
      if (lookahead == '\t')
        SKIP(418);
      if (lookahead == '\n')
        ADVANCE(419);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 419:
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(419);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == ' ')
        ADVANCE(420);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(423);
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
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(419);
      if (lookahead == '\n')
        ADVANCE(419);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == ' ')
        ADVANCE(420);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(423);
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
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      if (lookahead == '\t')
        SKIP(418);
      if (lookahead == '\n')
        ADVANCE(419);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 431:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(438);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(434);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == ' ')
        ADVANCE(436);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(437);
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
        ADVANCE(424);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(434);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == ' ')
        ADVANCE(436);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(437);
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
        ADVANCE(424);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      if (lookahead == '\t')
        ADVANCE(434);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == ' ')
        ADVANCE(436);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(437);
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
        ADVANCE(424);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(434);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == ' ')
        ADVANCE(436);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(437);
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
        ADVANCE(424);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(435);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(438);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 439:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(440);
      if (lookahead == '\r')
        ADVANCE(450);
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
        SKIP(451);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(452);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(454);
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
        SKIP(439);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 440:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(440);
      if (lookahead == '\r')
        ADVANCE(440);
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
        ADVANCE(441);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(442);
      if (lookahead == 'c')
        ADVANCE(177);
      if (lookahead == 'd')
        ADVANCE(185);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(444);
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
        ADVANCE(440);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      ADVANCE(8);
      END_STATE();
    case 441:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(440);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(443);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(445);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(446);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(448);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(449);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(440);
      if (lookahead == '\r')
        ADVANCE(450);
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
        SKIP(451);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(452);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(454);
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
        SKIP(439);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 451:
      if (lookahead == 'n')
        SKIP(439);
      END_STATE();
    case 452:
      if (lookahead == 's')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 454:
      if (lookahead == 'i')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'd')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'i')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'n')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'g')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 460:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(465);
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
        SKIP(466);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(452);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(467);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(454);
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
        SKIP(460);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 461:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(461);
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
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(442);
      if (lookahead == 'c')
        ADVANCE(177);
      if (lookahead == 'd')
        ADVANCE(463);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(206);
      if (lookahead == 'h')
        ADVANCE(444);
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
        ADVANCE(461);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      ADVANCE(8);
      END_STATE();
    case 462:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(461);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(201);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\r')
        ADVANCE(465);
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
        SKIP(466);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == 'a')
        ADVANCE(452);
      if (lookahead == 'c')
        ADVANCE(272);
      if (lookahead == 'd')
        ADVANCE(467);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(454);
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
        SKIP(460);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 466:
      if (lookahead == 'n')
        SKIP(460);
      END_STATE();
    case 467:
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead == 'e')
        ADVANCE(468);
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 468:
      if (lookahead == 'f')
        ADVANCE(285);
      END_STATE();
    case 469:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(558);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(409);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(559);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 470:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(470);
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
        ADVANCE(471);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead == 'c')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(509);
      if (lookahead == 'l')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead == 'o')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(546);
      if (lookahead == 'w')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 471:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(470);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
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
    case 473:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(474);
      if (lookahead == 'l')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
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
    case 477:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
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
    case 481:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(482);
      if (lookahead == 'e')
        ADVANCE(485);
      if (lookahead == 'o')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 't')
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
      if (lookahead == 'a')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
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
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(486);
      if (lookahead == 'r')
        ADVANCE(491);
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
      if (lookahead == 'a')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
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
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
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
    case 497:
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
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
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
    case 502:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
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
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(510);
      if (lookahead == 'm')
        ADVANCE(511);
      if (lookahead == 'n')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
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
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
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
    case 516:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(517);
      if (lookahead == 's')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(520);
      if (lookahead == 'r')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
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
    case 521:
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
    case 522:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
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
    case 528:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
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
    case 531:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
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
    case 537:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
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
    case 544:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
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
    case 546:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(547);
      if (lookahead == 'y')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
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
    case 550:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
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
    case 553:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
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
    case 558:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(558);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(409);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '0')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(391);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(559);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 559:
      if (lookahead == 'n')
        SKIP(469);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym__);
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
      if (lookahead == 'a')
        ADVANCE(562);
      if (lookahead == 'l')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(563);
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
      if (lookahead == 'e')
        ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'a')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
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
      if (lookahead == 's')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(394);
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
      if (lookahead == 'a')
        ADVANCE(570);
      if (lookahead == 'e')
        ADVANCE(573);
      if (lookahead == 'o')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(574);
      if (lookahead == 'r')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'v')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 's')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'g')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'm')
        ADVANCE(599);
      if (lookahead == 'n')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(605);
      if (lookahead == 's')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'x')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(608);
      if (lookahead == 'r')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'c')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'o')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'd')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'u')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'l')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'w')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 't')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'y')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'h')
        ADVANCE(635);
      if (lookahead == 'y')
        ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'n')
        ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'p')
        ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'h')
        ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'r')
        ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 646:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(647);
      if (lookahead == '\r')
        ADVANCE(649);
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
        SKIP(650);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(646);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 647:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(647);
      if (lookahead == '\r')
        ADVANCE(647);
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
        ADVANCE(648);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead == 'c')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(509);
      if (lookahead == 'l')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead == 'o')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(546);
      if (lookahead == 'w')
        ADVANCE(553);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(647);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(647);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(647);
      if (lookahead == '\r')
        ADVANCE(649);
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
        SKIP(650);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(646);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 650:
      if (lookahead == 'n')
        SKIP(646);
      END_STATE();
    case 651:
      if (lookahead == '\n')
        ADVANCE(652);
      if (lookahead == '\r')
        ADVANCE(704);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(705);
      if (lookahead == 'B')
        ADVANCE(708);
      if (lookahead == 'C')
        ADVANCE(712);
      if (lookahead == 'D')
        ADVANCE(716);
      if (lookahead == 'E')
        ADVANCE(726);
      if (lookahead == 'F')
        ADVANCE(737);
      if (lookahead == 'G')
        ADVANCE(740);
      if (lookahead == 'H')
        ADVANCE(741);
      if (lookahead == 'L')
        ADVANCE(742);
      if (lookahead == 'N')
        ADVANCE(743);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'R')
        ADVANCE(745);
      if (lookahead == 'S')
        ADVANCE(746);
      if (lookahead == 'U')
        ADVANCE(747);
      if (lookahead == 'V')
        ADVANCE(748);
      if (lookahead == 'X')
        ADVANCE(749);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(750);
      if (lookahead == 'b')
        ADVANCE(751);
      if (lookahead == 'f')
        ADVANCE(752);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(753);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(651);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(430);
      END_STATE();
    case 652:
      if (lookahead == '\n')
        ADVANCE(652);
      if (lookahead == '\r')
        ADVANCE(652);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == 'A')
        ADVANCE(653);
      if (lookahead == 'B')
        ADVANCE(656);
      if (lookahead == 'C')
        ADVANCE(660);
      if (lookahead == 'D')
        ADVANCE(664);
      if (lookahead == 'E')
        ADVANCE(674);
      if (lookahead == 'F')
        ADVANCE(685);
      if (lookahead == 'G')
        ADVANCE(688);
      if (lookahead == 'H')
        ADVANCE(689);
      if (lookahead == 'L')
        ADVANCE(690);
      if (lookahead == 'N')
        ADVANCE(691);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'R')
        ADVANCE(693);
      if (lookahead == 'S')
        ADVANCE(694);
      if (lookahead == 'U')
        ADVANCE(695);
      if (lookahead == 'V')
        ADVANCE(696);
      if (lookahead == 'X')
        ADVANCE(697);
      if (lookahead == '\\')
        ADVANCE(698);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(699);
      if (lookahead == 'b')
        ADVANCE(700);
      if (lookahead == 'f')
        ADVANCE(701);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(702);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(424);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(657);
      if (lookahead == 'S')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(661);
      if (lookahead == 'R')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(665);
      if (lookahead == 'E')
        ADVANCE(670);
      if (lookahead == 'L')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(666);
      if (lookahead == '2')
        ADVANCE(667);
      if (lookahead == '3')
        ADVANCE(668);
      if (lookahead == '4')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(675);
      if (lookahead == 'N')
        ADVANCE(676);
      if (lookahead == 'O')
        ADVANCE(678);
      if (lookahead == 'S')
        ADVANCE(680);
      if (lookahead == 'T')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(683);
      if (lookahead == 'X')
        ADVANCE(684);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(686);
      if (lookahead == 'S')
        ADVANCE(687);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
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
    case 695:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '\n')
        ADVANCE(652);
      if (lookahead == '\r')
        ADVANCE(704);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == 'A')
        ADVANCE(705);
      if (lookahead == 'B')
        ADVANCE(708);
      if (lookahead == 'C')
        ADVANCE(712);
      if (lookahead == 'D')
        ADVANCE(716);
      if (lookahead == 'E')
        ADVANCE(726);
      if (lookahead == 'F')
        ADVANCE(737);
      if (lookahead == 'G')
        ADVANCE(740);
      if (lookahead == 'H')
        ADVANCE(741);
      if (lookahead == 'L')
        ADVANCE(742);
      if (lookahead == 'N')
        ADVANCE(743);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'R')
        ADVANCE(745);
      if (lookahead == 'S')
        ADVANCE(746);
      if (lookahead == 'U')
        ADVANCE(747);
      if (lookahead == 'V')
        ADVANCE(748);
      if (lookahead == 'X')
        ADVANCE(749);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(750);
      if (lookahead == 'b')
        ADVANCE(751);
      if (lookahead == 'f')
        ADVANCE(752);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(753);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(651);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(430);
      END_STATE();
    case 705:
      if (lookahead == 'C')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'K')
        ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 708:
      if (lookahead == 'E')
        ADVANCE(709);
      if (lookahead == 'S')
        ADVANCE(711);
      END_STATE();
    case 709:
      if (lookahead == 'L')
        ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 712:
      if (lookahead == 'A')
        ADVANCE(713);
      if (lookahead == 'R')
        ADVANCE(715);
      END_STATE();
    case 713:
      if (lookahead == 'N')
        ADVANCE(714);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 716:
      if (lookahead == 'C')
        ADVANCE(717);
      if (lookahead == 'E')
        ADVANCE(722);
      if (lookahead == 'L')
        ADVANCE(724);
      END_STATE();
    case 717:
      if (lookahead == '1')
        ADVANCE(718);
      if (lookahead == '2')
        ADVANCE(719);
      if (lookahead == '3')
        ADVANCE(720);
      if (lookahead == '4')
        ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 722:
      if (lookahead == 'L')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 724:
      if (lookahead == 'E')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 726:
      if (lookahead == 'M')
        ADVANCE(727);
      if (lookahead == 'N')
        ADVANCE(728);
      if (lookahead == 'O')
        ADVANCE(730);
      if (lookahead == 'S')
        ADVANCE(732);
      if (lookahead == 'T')
        ADVANCE(734);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 728:
      if (lookahead == 'Q')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 730:
      if (lookahead == 'T')
        ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 732:
      if (lookahead == 'C')
        ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 734:
      if (lookahead == 'B')
        ADVANCE(735);
      if (lookahead == 'X')
        ADVANCE(736);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 737:
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'S')
        ADVANCE(739);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 740:
      if (lookahead == 'S')
        ADVANCE(117);
      END_STATE();
    case 741:
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 742:
      if (lookahead == 'F')
        ADVANCE(121);
      END_STATE();
    case 743:
      if (lookahead == 'A')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(125);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 745:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 746:
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
    case 747:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 748:
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 755:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(768);
      if (lookahead == 'B')
        ADVANCE(769);
      if (lookahead == 'C')
        ADVANCE(770);
      if (lookahead == 'D')
        ADVANCE(771);
      if (lookahead == 'E')
        ADVANCE(772);
      if (lookahead == 'F')
        ADVANCE(773);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(749);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(750);
      if (lookahead == 'b')
        ADVANCE(751);
      if (lookahead == 'f')
        ADVANCE(752);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(753);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(754);
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
        ADVANCE(430);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(757);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(758);
      if (lookahead == ' ')
        ADVANCE(759);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(760);
      if (lookahead == 'B')
        ADVANCE(761);
      if (lookahead == 'C')
        ADVANCE(762);
      if (lookahead == 'D')
        ADVANCE(763);
      if (lookahead == 'E')
        ADVANCE(764);
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(697);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(766);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(699);
      if (lookahead == 'b')
        ADVANCE(700);
      if (lookahead == 'f')
        ADVANCE(701);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(702);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(703);
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
        ADVANCE(424);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(757);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(758);
      if (lookahead == ' ')
        ADVANCE(759);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(760);
      if (lookahead == 'B')
        ADVANCE(761);
      if (lookahead == 'C')
        ADVANCE(762);
      if (lookahead == 'D')
        ADVANCE(763);
      if (lookahead == 'E')
        ADVANCE(764);
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(697);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(766);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(699);
      if (lookahead == 'b')
        ADVANCE(700);
      if (lookahead == 'f')
        ADVANCE(701);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(702);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(703);
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
        ADVANCE(424);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      if (lookahead == '\t')
        ADVANCE(757);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(758);
      if (lookahead == ' ')
        ADVANCE(759);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(760);
      if (lookahead == 'B')
        ADVANCE(761);
      if (lookahead == 'C')
        ADVANCE(762);
      if (lookahead == 'D')
        ADVANCE(763);
      if (lookahead == 'E')
        ADVANCE(764);
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(697);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(766);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(699);
      if (lookahead == 'b')
        ADVANCE(700);
      if (lookahead == 'f')
        ADVANCE(701);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(702);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(703);
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
        ADVANCE(424);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(757);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(758);
      if (lookahead == ' ')
        ADVANCE(759);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(760);
      if (lookahead == 'B')
        ADVANCE(761);
      if (lookahead == 'C')
        ADVANCE(762);
      if (lookahead == 'D')
        ADVANCE(763);
      if (lookahead == 'E')
        ADVANCE(764);
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(692);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(697);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(766);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(699);
      if (lookahead == 'b')
        ADVANCE(700);
      if (lookahead == 'f')
        ADVANCE(701);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(702);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(703);
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
        ADVANCE(424);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(657);
      if (lookahead == 'S')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(661);
      if (lookahead == 'R')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(665);
      if (lookahead == 'E')
        ADVANCE(670);
      if (lookahead == 'L')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(675);
      if (lookahead == 'N')
        ADVANCE(676);
      if (lookahead == 'O')
        ADVANCE(678);
      if (lookahead == 'S')
        ADVANCE(680);
      if (lookahead == 'T')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(686);
      if (lookahead == 'S')
        ADVANCE(687);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(758);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(768);
      if (lookahead == 'B')
        ADVANCE(769);
      if (lookahead == 'C')
        ADVANCE(770);
      if (lookahead == 'D')
        ADVANCE(771);
      if (lookahead == 'E')
        ADVANCE(772);
      if (lookahead == 'F')
        ADVANCE(773);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(744);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(749);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(750);
      if (lookahead == 'b')
        ADVANCE(751);
      if (lookahead == 'f')
        ADVANCE(752);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(753);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(754);
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
        ADVANCE(430);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(706);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(709);
      if (lookahead == 'S')
        ADVANCE(711);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(713);
      if (lookahead == 'R')
        ADVANCE(715);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(717);
      if (lookahead == 'E')
        ADVANCE(722);
      if (lookahead == 'L')
        ADVANCE(724);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(727);
      if (lookahead == 'N')
        ADVANCE(728);
      if (lookahead == 'O')
        ADVANCE(730);
      if (lookahead == 'S')
        ADVANCE(732);
      if (lookahead == 'T')
        ADVANCE(734);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'S')
        ADVANCE(739);
      END_STATE();
    case 774:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(779);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(780);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(774);
      END_STATE();
    case 775:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(775);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == ':')
        ADVANCE(776);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(775);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(775);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(775);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(779);
      if (lookahead == '=')
        ADVANCE(270);
      if (lookahead == '\\')
        SKIP(780);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(774);
      END_STATE();
    case 779:
      if (lookahead == ':')
        ADVANCE(108);
      END_STATE();
    case 780:
      if (lookahead == 'n')
        SKIP(774);
      END_STATE();
    case 781:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(784);
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
        SKIP(785);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 782:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(782);
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
        ADVANCE(783);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead == 'c')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(509);
      if (lookahead == 'l')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead == 'o')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(546);
      if (lookahead == 'w')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 783:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(782);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(784);
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
        SKIP(785);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 785:
      if (lookahead == 'n')
        SKIP(781);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(791);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(792);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(360);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(788);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(787);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(789);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '(')
        ADVANCE(386);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(372);
      if (lookahead == '\\')
        SKIP(791);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(792);
      END_STATE();
    case 791:
      if (lookahead == 'n')
        SKIP(786);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(792);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(795);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(803);
      END_STATE();
    case 798:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(800);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(798);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(803);
      END_STATE();
    case 802:
      if (lookahead == 'n')
        SKIP(797);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(804);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(810);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(805);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(807);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 806:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(805);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(804);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(810);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(804);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 811:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(816);
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
        SKIP(817);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(818);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 812:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(812);
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
        ADVANCE(813);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead == 'c')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(814);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(509);
      if (lookahead == 'l')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead == 'o')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(546);
      if (lookahead == 'w')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(812);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(482);
      if (lookahead == 'e')
        ADVANCE(815);
      if (lookahead == 'o')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 816:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(816);
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
        SKIP(817);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(818);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 817:
      if (lookahead == 'n')
        SKIP(811);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(570);
      if (lookahead == 'e')
        ADVANCE(819);
      if (lookahead == 'o')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(394);
      if (lookahead == 'f')
        ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      END_STATE();
    case 820:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(822);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ' ')
        ADVANCE(824);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(825);
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
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(822);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ' ')
        ADVANCE(824);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(825);
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
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 823:
      if (lookahead == '\t')
        ADVANCE(822);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ' ')
        ADVANCE(824);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(825);
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
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(822);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ' ')
        ADVANCE(824);
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
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(422);
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
        ADVANCE(825);
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
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(823);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(428);
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
        ADVANCE(429);
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
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 827:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
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
        SKIP(831);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 828:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(828);
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
        ADVANCE(829);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead == 'c')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'f')
        ADVANCE(502);
      if (lookahead == 'i')
        ADVANCE(509);
      if (lookahead == 'l')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead == 'o')
        ADVANCE(544);
      if (lookahead == 't')
        ADVANCE(546);
      if (lookahead == 'w')
        ADVANCE(553);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(828);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(384);
      ADVANCE(8);
      END_STATE();
    case 829:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(828);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(828);
      if (lookahead == '\r')
        ADVANCE(830);
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
        SKIP(831);
      if (lookahead == '_')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'f')
        ADVANCE(590);
      if (lookahead == 'i')
        ADVANCE(597);
      if (lookahead == 'l')
        ADVANCE(616);
      if (lookahead == 'm')
        ADVANCE(619);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead == 'o')
        ADVANCE(632);
      if (lookahead == 't')
        ADVANCE(634);
      if (lookahead == 'w')
        ADVANCE(641);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(827);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(403);
      END_STATE();
    case 831:
      if (lookahead == 'n')
        SKIP(827);
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
  [6] = {.lex_state = 411},
  [7] = {.lex_state = 411},
  [8] = {.lex_state = 167},
  [9] = {.lex_state = 418},
  [10] = {.lex_state = 431},
  [11] = {.lex_state = 167},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 167},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 411},
  [19] = {.lex_state = 439},
  [20] = {.lex_state = 460},
  [21] = {.lex_state = 411},
  [22] = {.lex_state = 469},
  [23] = {.lex_state = 411},
  [24] = {.lex_state = 167},
  [25] = {.lex_state = 469},
  [26] = {.lex_state = 646},
  [27] = {.lex_state = 411},
  [28] = {.lex_state = 411},
  [29] = {.lex_state = 358},
  [30] = {.lex_state = 358},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 651},
  [38] = {.lex_state = 431},
  [39] = {.lex_state = 431},
  [40] = {.lex_state = 431},
  [41] = {.lex_state = 431},
  [42] = {.lex_state = 167},
  [43] = {.lex_state = 431},
  [44] = {.lex_state = 431},
  [45] = {.lex_state = 755},
  [46] = {.lex_state = 431},
  [47] = {.lex_state = 431},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 411},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 460},
  [53] = {.lex_state = 411},
  [54] = {.lex_state = 411},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 404},
  [58] = {.lex_state = 774},
  [59] = {.lex_state = 404},
  [60] = {.lex_state = 646},
  [61] = {.lex_state = 646},
  [62] = {.lex_state = 646},
  [63] = {.lex_state = 411},
  [64] = {.lex_state = 411},
  [65] = {.lex_state = 781},
  [66] = {.lex_state = 781},
  [67] = {.lex_state = 646},
  [68] = {.lex_state = 646},
  [69] = {.lex_state = 404},
  [70] = {.lex_state = 167},
  [71] = {.lex_state = 167},
  [72] = {.lex_state = 167},
  [73] = {.lex_state = 646},
  [74] = {.lex_state = 411},
  [75] = {.lex_state = 411},
  [76] = {.lex_state = 786},
  [77] = {.lex_state = 411},
  [78] = {.lex_state = 167},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 793},
  [82] = {.lex_state = 797},
  [83] = {.lex_state = 804},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 431},
  [86] = {.lex_state = 431},
  [87] = {.lex_state = 793},
  [88] = {.lex_state = 797},
  [89] = {.lex_state = 804},
  [90] = {.lex_state = 431},
  [91] = {.lex_state = 431},
  [92] = {.lex_state = 167},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 167},
  [95] = {.lex_state = 774},
  [96] = {.lex_state = 774},
  [97] = {.lex_state = 167},
  [98] = {.lex_state = 411},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 167},
  [101] = {.lex_state = 774},
  [102] = {.lex_state = 460},
  [103] = {.lex_state = 411},
  [104] = {.lex_state = 411},
  [105] = {.lex_state = 167},
  [106] = {.lex_state = 774},
  [107] = {.lex_state = 774},
  [108] = {.lex_state = 646},
  [109] = {.lex_state = 646},
  [110] = {.lex_state = 167},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 774},
  [113] = {.lex_state = 646},
  [114] = {.lex_state = 411},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 411},
  [117] = {.lex_state = 167},
  [118] = {.lex_state = 404},
  [119] = {.lex_state = 411},
  [120] = {.lex_state = 167},
  [121] = {.lex_state = 646},
  [122] = {.lex_state = 646},
  [123] = {.lex_state = 411},
  [124] = {.lex_state = 411},
  [125] = {.lex_state = 167},
  [126] = {.lex_state = 811},
  [127] = {.lex_state = 811},
  [128] = {.lex_state = 811},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 797},
  [132] = {.lex_state = 797},
  [133] = {.lex_state = 804},
  [134] = {.lex_state = 804},
  [135] = {.lex_state = 431},
  [136] = {.lex_state = 431},
  [137] = {.lex_state = 431},
  [138] = {.lex_state = 431},
  [139] = {.lex_state = 820},
  [140] = {.lex_state = 820},
  [141] = {.lex_state = 411},
  [142] = {.lex_state = 167},
  [143] = {.lex_state = 774},
  [144] = {.lex_state = 411},
  [145] = {.lex_state = 167},
  [146] = {.lex_state = 460},
  [147] = {.lex_state = 411},
  [148] = {.lex_state = 411},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 774},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 774},
  [153] = {.lex_state = 774},
  [154] = {.lex_state = 411},
  [155] = {.lex_state = 411},
  [156] = {.lex_state = 167},
  [157] = {.lex_state = 167},
  [158] = {.lex_state = 167},
  [159] = {.lex_state = 411},
  [160] = {.lex_state = 774},
  [161] = {.lex_state = 774},
  [162] = {.lex_state = 774},
  [163] = {.lex_state = 167},
  [164] = {.lex_state = 411},
  [165] = {.lex_state = 774},
  [166] = {.lex_state = 774},
  [167] = {.lex_state = 827},
  [168] = {.lex_state = 646},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 167},
  [171] = {.lex_state = 811},
  [172] = {.lex_state = 797},
  [173] = {.lex_state = 804},
  [174] = {.lex_state = 431},
  [175] = {.lex_state = 820},
  [176] = {.lex_state = 774},
  [177] = {.lex_state = 411},
  [178] = {.lex_state = 167},
  [179] = {.lex_state = 358},
  [180] = {.lex_state = 774},
  [181] = {.lex_state = 167},
  [182] = {.lex_state = 358},
  [183] = {.lex_state = 774},
  [184] = {.lex_state = 774},
  [185] = {.lex_state = 411},
  [186] = {.lex_state = 167},
  [187] = {.lex_state = 411},
  [188] = {.lex_state = 774},
  [189] = {.lex_state = 774},
  [190] = {.lex_state = 411},
  [191] = {.lex_state = 167},
  [192] = {.lex_state = 774},
  [193] = {.lex_state = 411},
  [194] = {.lex_state = 774},
  [195] = {.lex_state = 167},
  [196] = {.lex_state = 774},
  [197] = {.lex_state = 167},
  [198] = {.lex_state = 404},
  [199] = {.lex_state = 411},
  [200] = {.lex_state = 774},
  [201] = {.lex_state = 404},
  [202] = {.lex_state = 167},
  [203] = {.lex_state = 774},
  [204] = {.lex_state = 774},
  [205] = {.lex_state = 774},
  [206] = {.lex_state = 774},
  [207] = {.lex_state = 774},
  [208] = {.lex_state = 774},
  [209] = {.lex_state = 411},
  [210] = {.lex_state = 774},
  [211] = {.lex_state = 358},
  [212] = {.lex_state = 774},
  [213] = {.lex_state = 167},
  [214] = {.lex_state = 774},
  [215] = {.lex_state = 167},
  [216] = {.lex_state = 774},
  [217] = {.lex_state = 411},
  [218] = {.lex_state = 774},
  [219] = {.lex_state = 404},
  [220] = {.lex_state = 411},
  [221] = {.lex_state = 774},
  [222] = {.lex_state = 404},
  [223] = {.lex_state = 167},
  [224] = {.lex_state = 774},
  [225] = {.lex_state = 167},
  [226] = {.lex_state = 774},
  [227] = {.lex_state = 774},
  [228] = {.lex_state = 358},
  [229] = {.lex_state = 774},
  [230] = {.lex_state = 411},
  [231] = {.lex_state = 774},
  [232] = {.lex_state = 774},
  [233] = {.lex_state = 774},
  [234] = {.lex_state = 774},
  [235] = {.lex_state = 167},
  [236] = {.lex_state = 774},
  [237] = {.lex_state = 774},
  [238] = {.lex_state = 774},
  [239] = {.lex_state = 358},
  [240] = {.lex_state = 774},
  [241] = {.lex_state = 774},
  [242] = {.lex_state = 167},
  [243] = {.lex_state = 774},
  [244] = {.lex_state = 774},
  [245] = {.lex_state = 774},
  [246] = {.lex_state = 774},
  [247] = {.lex_state = 167},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
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
    [sym_program] = STATE(12),
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [anon_sym_case] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
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
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [4] = {
    [sym__identifier] = STATE(20),
    [anon_sym_qualified] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [sym_context] = STATE(23),
    [sym_class] = STATE(24),
    [sym__identifier] = STATE(25),
    [sym_simple_type] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(29),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(30),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [9] = {
    [sym__graphic] = STATE(34),
    [sym__small] = STATE(35),
    [sym__large] = STATE(35),
    [sym__symbol] = STATE(35),
    [sym__special] = STATE(35),
    [sym__escape] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(66),
    [sym__ascii_large] = ACTIONS(74),
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
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [sym__space] = ACTIONS(70),
  },
  [10] = {
    [sym__gap] = STATE(41),
    [sym__graphic] = STATE(41),
    [sym__small] = STATE(43),
    [sym__large] = STATE(43),
    [sym__symbol] = STATE(43),
    [sym__special] = STATE(43),
    [sym__escape] = STATE(41),
    [aux_sym_string_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym__] = ACTIONS(82),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(82),
    [sym__ascii_large] = ACTIONS(90),
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
    [anon_sym_data] = ACTIONS(98),
    [anon_sym_newtype] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_case] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
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
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(24),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_import] = ACTIONS(106),
    [anon_sym_data] = ACTIONS(106),
    [anon_sym_newtype] = ACTIONS(106),
    [anon_sym_type] = ACTIONS(106),
    [anon_sym_case] = ACTIONS(106),
    [anon_sym_class] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
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
    [anon_sym_of] = ACTIONS(106),
    [anon_sym_then] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym__integer_literal] = ACTIONS(106),
    [sym__octal_literal] = ACTIONS(106),
    [sym__hexidecimal_literal] = ACTIONS(106),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_import] = ACTIONS(112),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_newtype] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
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
    [sym_comment] = ACTIONS(24),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__integer_literal] = ACTIONS(118),
    [sym__octal_literal] = ACTIONS(118),
    [sym__hexidecimal_literal] = ACTIONS(118),
  },
  [16] = {
    [sym__statement] = STATE(48),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [17] = {
    [sym_module_exports] = STATE(51),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(24),
  },
  [18] = {
    [sym__identifier] = STATE(52),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_as] = ACTIONS(132),
    [anon_sym_hiding] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_deriving] = ACTIONS(132),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
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
    [sym_float] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [20] = {
    [sym_import_specification] = STATE(56),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__integer_literal] = ACTIONS(138),
    [sym__octal_literal] = ACTIONS(138),
    [sym__hexidecimal_literal] = ACTIONS(138),
  },
  [21] = {
    [sym_class] = STATE(58),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(150),
    [sym_module_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(24),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_deriving] = ACTIONS(132),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(134),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
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
    [sym_float] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [23] = {
    [sym__identifier] = STATE(61),
    [sym_simple_type] = STATE(62),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(24),
  },
  [24] = {
    [anon_sym_EQ_GT] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [25] = {
    [sym__identifier] = STATE(66),
    [aux_sym_type_synonym_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(160),
    [anon_sym_where] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [anon_sym_case] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(160),
    [anon_sym_default] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(160),
    [anon_sym_else] = ACTIONS(160),
    [anon_sym_foreign] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_in] = ACTIONS(160),
    [anon_sym_infix] = ACTIONS(160),
    [anon_sym_infixl] = ACTIONS(160),
    [anon_sym_infixr] = ACTIONS(160),
    [anon_sym_instance] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_of] = ACTIONS(160),
    [anon_sym_then] = ACTIONS(160),
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym__integer_literal] = ACTIONS(160),
    [sym__octal_literal] = ACTIONS(160),
    [sym__hexidecimal_literal] = ACTIONS(160),
  },
  [26] = {
    [sym_constructors] = STATE(70),
    [sym_constructor] = STATE(71),
    [sym_deriving] = STATE(72),
    [sym__identifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_module] = ACTIONS(170),
    [anon_sym_where] = ACTIONS(170),
    [anon_sym_import] = ACTIONS(170),
    [anon_sym_data] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(170),
    [anon_sym_type] = ACTIONS(170),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(170),
    [anon_sym_class] = ACTIONS(170),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym__integer_literal] = ACTIONS(170),
    [sym__octal_literal] = ACTIONS(170),
    [sym__hexidecimal_literal] = ACTIONS(170),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(24),
  },
  [28] = {
    [sym__identifier] = STATE(74),
    [aux_sym_type_synonym_repeat1] = STATE(75),
    [anon_sym_EQ] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(178),
    [sym_comment] = ACTIONS(24),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(180),
    [sym_comment] = ACTIONS(24),
  },
  [31] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(182),
  },
  [32] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(184),
  },
  [33] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(186),
  },
  [34] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(188),
  },
  [35] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(190),
  },
  [36] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(192),
  },
  [37] = {
    [sym__char_escape] = STATE(80),
    [sym__ascii] = STATE(80),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_x] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(200),
    [anon_sym_o] = ACTIONS(202),
    [anon_sym_O] = ACTIONS(202),
    [anon_sym_a] = ACTIONS(194),
    [anon_sym_b] = ACTIONS(194),
    [anon_sym_f] = ACTIONS(194),
    [anon_sym_n] = ACTIONS(194),
    [anon_sym_r] = ACTIONS(194),
    [anon_sym_t] = ACTIONS(194),
    [anon_sym_v] = ACTIONS(194),
    [anon_sym_NUL] = ACTIONS(204),
    [anon_sym_SOH] = ACTIONS(204),
    [anon_sym_STX] = ACTIONS(204),
    [anon_sym_ETX] = ACTIONS(204),
    [anon_sym_EOT] = ACTIONS(204),
    [anon_sym_ENQ] = ACTIONS(204),
    [anon_sym_ACK] = ACTIONS(204),
    [anon_sym_BEL] = ACTIONS(204),
    [anon_sym_BS] = ACTIONS(204),
    [anon_sym_HT] = ACTIONS(204),
    [anon_sym_LF] = ACTIONS(204),
    [anon_sym_VT] = ACTIONS(204),
    [anon_sym_FF] = ACTIONS(204),
    [anon_sym_CR] = ACTIONS(204),
    [anon_sym_SO] = ACTIONS(204),
    [anon_sym_SI] = ACTIONS(204),
    [anon_sym_DLE] = ACTIONS(204),
    [anon_sym_DC1] = ACTIONS(204),
    [anon_sym_DC2] = ACTIONS(204),
    [anon_sym_DC3] = ACTIONS(204),
    [anon_sym_DC4] = ACTIONS(204),
    [anon_sym_NAK] = ACTIONS(204),
    [anon_sym_SYN] = ACTIONS(204),
    [anon_sym_ETB] = ACTIONS(204),
    [anon_sym_CAN] = ACTIONS(204),
    [anon_sym_EM] = ACTIONS(204),
    [anon_sym_SUB] = ACTIONS(204),
    [anon_sym_ESC] = ACTIONS(204),
    [anon_sym_FS] = ACTIONS(204),
    [anon_sym_GS] = ACTIONS(204),
    [anon_sym_RS] = ACTIONS(204),
    [anon_sym_US] = ACTIONS(204),
    [anon_sym_SP] = ACTIONS(204),
    [anon_sym_DEL] = ACTIONS(204),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(68),
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
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(68),
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
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_BANG] = ACTIONS(210),
    [anon_sym__] = ACTIONS(210),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(210),
    [sym__ascii_large] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(210),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_QMARK] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_BQUOTE] = ACTIONS(210),
    [sym__space] = ACTIONS(210),
    [sym__newline] = ACTIONS(210),
    [sym__tab] = ACTIONS(210),
    [sym__vertical_tab] = ACTIONS(210),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(212),
    [sym__ascii_large] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_1] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [sym__space] = ACTIONS(212),
    [sym__newline] = ACTIONS(212),
    [sym__tab] = ACTIONS(212),
    [sym__vertical_tab] = ACTIONS(212),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_where] = ACTIONS(216),
    [anon_sym_import] = ACTIONS(216),
    [anon_sym_data] = ACTIONS(216),
    [anon_sym_newtype] = ACTIONS(216),
    [anon_sym_type] = ACTIONS(216),
    [anon_sym_case] = ACTIONS(216),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_default] = ACTIONS(216),
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
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [sym__integer_literal] = ACTIONS(216),
    [sym__octal_literal] = ACTIONS(216),
    [sym__hexidecimal_literal] = ACTIONS(216),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym__] = ACTIONS(220),
    [sym_comment] = ACTIONS(68),
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
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(68),
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
    [sym__char_escape] = STATE(86),
    [sym__ascii] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(224),
    [anon_sym_1] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [sym__vertical_tab] = ACTIONS(208),
    [anon_sym_x] = ACTIONS(230),
    [anon_sym_X] = ACTIONS(230),
    [anon_sym_o] = ACTIONS(232),
    [anon_sym_O] = ACTIONS(232),
    [anon_sym_a] = ACTIONS(224),
    [anon_sym_b] = ACTIONS(224),
    [anon_sym_f] = ACTIONS(224),
    [anon_sym_n] = ACTIONS(224),
    [anon_sym_r] = ACTIONS(224),
    [anon_sym_t] = ACTIONS(224),
    [anon_sym_v] = ACTIONS(224),
    [anon_sym_NUL] = ACTIONS(234),
    [anon_sym_SOH] = ACTIONS(234),
    [anon_sym_STX] = ACTIONS(234),
    [anon_sym_ETX] = ACTIONS(234),
    [anon_sym_EOT] = ACTIONS(234),
    [anon_sym_ENQ] = ACTIONS(234),
    [anon_sym_ACK] = ACTIONS(234),
    [anon_sym_BEL] = ACTIONS(234),
    [anon_sym_BS] = ACTIONS(234),
    [anon_sym_HT] = ACTIONS(234),
    [anon_sym_LF] = ACTIONS(234),
    [anon_sym_VT] = ACTIONS(234),
    [anon_sym_FF] = ACTIONS(234),
    [anon_sym_CR] = ACTIONS(234),
    [anon_sym_SO] = ACTIONS(234),
    [anon_sym_SI] = ACTIONS(234),
    [anon_sym_DLE] = ACTIONS(234),
    [anon_sym_DC1] = ACTIONS(234),
    [anon_sym_DC2] = ACTIONS(234),
    [anon_sym_DC3] = ACTIONS(234),
    [anon_sym_DC4] = ACTIONS(234),
    [anon_sym_NAK] = ACTIONS(234),
    [anon_sym_SYN] = ACTIONS(234),
    [anon_sym_ETB] = ACTIONS(234),
    [anon_sym_CAN] = ACTIONS(234),
    [anon_sym_EM] = ACTIONS(234),
    [anon_sym_SUB] = ACTIONS(234),
    [anon_sym_ESC] = ACTIONS(234),
    [anon_sym_FS] = ACTIONS(234),
    [anon_sym_GS] = ACTIONS(234),
    [anon_sym_RS] = ACTIONS(234),
    [anon_sym_US] = ACTIONS(234),
    [anon_sym_SP] = ACTIONS(234),
    [anon_sym_DEL] = ACTIONS(234),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym__] = ACTIONS(236),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(236),
    [sym__ascii_large] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_1] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_BQUOTE] = ACTIONS(236),
    [sym__space] = ACTIONS(236),
    [sym__newline] = ACTIONS(236),
    [sym__tab] = ACTIONS(236),
    [sym__vertical_tab] = ACTIONS(236),
  },
  [47] = {
    [sym__gap] = STATE(91),
    [sym__graphic] = STATE(91),
    [sym__small] = STATE(43),
    [sym__large] = STATE(43),
    [sym__symbol] = STATE(43),
    [sym__special] = STATE(43),
    [sym__escape] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym__] = ACTIONS(82),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(82),
    [sym__ascii_large] = ACTIONS(90),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_where] = ACTIONS(244),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_newtype] = ACTIONS(244),
    [anon_sym_type] = ACTIONS(244),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [sym__integer_literal] = ACTIONS(244),
    [sym__octal_literal] = ACTIONS(244),
    [sym__hexidecimal_literal] = ACTIONS(244),
  },
  [49] = {
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [50] = {
    [sym_export] = STATE(95),
    [sym__identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [51] = {
    [anon_sym_where] = ACTIONS(252),
    [sym_comment] = ACTIONS(24),
  },
  [52] = {
    [sym_import_specification] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(256),
    [anon_sym_where] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(256),
    [anon_sym_as] = ACTIONS(258),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(256),
    [anon_sym_newtype] = ACTIONS(256),
    [anon_sym_type] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_class] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
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
    [anon_sym_of] = ACTIONS(256),
    [anon_sym_then] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [sym__integer_literal] = ACTIONS(256),
    [sym__octal_literal] = ACTIONS(256),
    [sym__hexidecimal_literal] = ACTIONS(256),
  },
  [53] = {
    [sym__identifier] = STATE(101),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [54] = {
    [sym__identifier] = STATE(102),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(24),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(256),
    [anon_sym_where] = ACTIONS(256),
    [anon_sym_import] = ACTIONS(256),
    [anon_sym_data] = ACTIONS(256),
    [anon_sym_newtype] = ACTIONS(256),
    [anon_sym_type] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_class] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
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
    [anon_sym_of] = ACTIONS(256),
    [anon_sym_then] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [sym__integer_literal] = ACTIONS(256),
    [sym__octal_literal] = ACTIONS(256),
    [sym__hexidecimal_literal] = ACTIONS(256),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(24),
  },
  [58] = {
    [aux_sym_context_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [59] = {
    [sym__identifier] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_deriving] = ACTIONS(132),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(134),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
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
    [sym_float] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [61] = {
    [sym__identifier] = STATE(108),
    [aux_sym_type_synonym_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(160),
    [anon_sym_where] = ACTIONS(160),
    [anon_sym_import] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(160),
    [anon_sym_default] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(160),
    [anon_sym_else] = ACTIONS(160),
    [anon_sym_foreign] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_in] = ACTIONS(160),
    [anon_sym_infix] = ACTIONS(160),
    [anon_sym_infixl] = ACTIONS(160),
    [anon_sym_infixr] = ACTIONS(160),
    [anon_sym_instance] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_of] = ACTIONS(160),
    [anon_sym_then] = ACTIONS(160),
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym__integer_literal] = ACTIONS(160),
    [sym__octal_literal] = ACTIONS(160),
    [sym__hexidecimal_literal] = ACTIONS(160),
  },
  [62] = {
    [sym_constructors] = STATE(110),
    [sym_constructor] = STATE(71),
    [sym_deriving] = STATE(111),
    [sym__identifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [63] = {
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(24),
  },
  [64] = {
    [sym__identifier] = STATE(112),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_deriving] = ACTIONS(132),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(134),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
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
    [sym_float] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_where] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [anon_sym_deriving] = ACTIONS(284),
    [anon_sym_newtype] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_module_identifier] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(284),
    [anon_sym_class] = ACTIONS(284),
    [anon_sym_default] = ACTIONS(284),
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
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [67] = {
    [sym__identifier] = STATE(113),
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_module] = ACTIONS(292),
    [anon_sym_where] = ACTIONS(292),
    [anon_sym_import] = ACTIONS(292),
    [anon_sym_data] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_deriving] = ACTIONS(292),
    [anon_sym_newtype] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(292),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
    [anon_sym_default] = ACTIONS(292),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [sym__integer_literal] = ACTIONS(292),
    [sym__octal_literal] = ACTIONS(292),
    [sym__hexidecimal_literal] = ACTIONS(292),
  },
  [68] = {
    [sym_constructors] = STATE(110),
    [sym_constructor] = STATE(71),
    [sym_deriving] = STATE(111),
    [sym__identifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [69] = {
    [sym__identifier] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(296),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [70] = {
    [sym_deriving] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [71] = {
    [aux_sym_constructors_repeat1] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_where] = ACTIONS(300),
    [anon_sym_import] = ACTIONS(300),
    [anon_sym_data] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_deriving] = ACTIONS(300),
    [anon_sym_newtype] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(300),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__integer_literal] = ACTIONS(300),
    [sym__octal_literal] = ACTIONS(300),
    [sym__hexidecimal_literal] = ACTIONS(300),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [73] = {
    [sym_fields] = STATE(120),
    [sym_strict] = STATE(121),
    [sym__identifier] = STATE(121),
    [aux_sym_constructor_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_module] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_import] = ACTIONS(308),
    [anon_sym_data] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_deriving] = ACTIONS(308),
    [anon_sym_newtype] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(308),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(308),
    [anon_sym_class] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
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
    [sym_float] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__integer_literal] = ACTIONS(308),
    [sym__octal_literal] = ACTIONS(308),
    [sym__hexidecimal_literal] = ACTIONS(308),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_module_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(24),
  },
  [75] = {
    [sym__identifier] = STATE(123),
    [anon_sym_EQ] = ACTIONS(292),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
  },
  [76] = {
    [sym_new_constructor] = STATE(125),
    [sym_constructor_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(24),
  },
  [77] = {
    [sym__identifier] = STATE(127),
    [aux_sym_type_synonym_repeat1] = STATE(128),
    [sym_variable_identifier] = ACTIONS(318),
    [sym_constructor_identifier] = ACTIONS(320),
    [sym_module_identifier] = ACTIONS(320),
    [sym_comment] = ACTIONS(24),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_module] = ACTIONS(324),
    [anon_sym_where] = ACTIONS(324),
    [anon_sym_import] = ACTIONS(324),
    [anon_sym_data] = ACTIONS(324),
    [anon_sym_newtype] = ACTIONS(324),
    [anon_sym_type] = ACTIONS(324),
    [anon_sym_case] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
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
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [sym__integer_literal] = ACTIONS(324),
    [sym__octal_literal] = ACTIONS(324),
    [sym__hexidecimal_literal] = ACTIONS(324),
  },
  [79] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(328),
  },
  [80] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(330),
  },
  [81] = {
    [sym__cntrl] = STATE(130),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(68),
    [sym__ascii_large] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
  },
  [82] = {
    [aux_sym__escape_repeat1] = STATE(132),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(334),
  },
  [83] = {
    [aux_sym__escape_repeat2] = STATE(134),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(336),
  },
  [84] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(338),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(340),
    [sym__ascii_large] = ACTIONS(340),
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
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_BQUOTE] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_BANG] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(342),
    [sym__ascii_large] = ACTIONS(342),
    [anon_sym_POUND] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(342),
    [anon_sym_1] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_AT] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_BSLASH] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(342),
    [anon_sym_BQUOTE] = ACTIONS(342),
    [sym__space] = ACTIONS(342),
    [sym__newline] = ACTIONS(342),
    [sym__tab] = ACTIONS(342),
    [sym__vertical_tab] = ACTIONS(342),
  },
  [87] = {
    [sym__cntrl] = STATE(136),
    [anon_sym__] = ACTIONS(344),
    [sym_comment] = ACTIONS(68),
    [sym__ascii_large] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
  },
  [88] = {
    [aux_sym__escape_repeat1] = STATE(138),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(346),
  },
  [89] = {
    [aux_sym__escape_repeat2] = STATE(140),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(348),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(350),
    [sym__ascii_large] = ACTIONS(350),
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
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [sym_comment] = ACTIONS(68),
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
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_module] = ACTIONS(356),
    [anon_sym_where] = ACTIONS(356),
    [anon_sym_import] = ACTIONS(356),
    [anon_sym_data] = ACTIONS(356),
    [anon_sym_newtype] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [anon_sym_case] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_default] = ACTIONS(356),
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
    [anon_sym_of] = ACTIONS(356),
    [anon_sym_then] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [sym__integer_literal] = ACTIONS(356),
    [sym__octal_literal] = ACTIONS(356),
    [sym__hexidecimal_literal] = ACTIONS(356),
  },
  [93] = {
    [sym__statement] = STATE(48),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [94] = {
    [anon_sym_where] = ACTIONS(362),
    [sym_comment] = ACTIONS(24),
  },
  [95] = {
    [aux_sym_module_exports_repeat1] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_comment] = ACTIONS(24),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [sym_comment] = ACTIONS(24),
  },
  [97] = {
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(145),
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [98] = {
    [sym__identifier] = STATE(146),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_where] = ACTIONS(382),
    [anon_sym_import] = ACTIONS(382),
    [anon_sym_data] = ACTIONS(382),
    [anon_sym_newtype] = ACTIONS(382),
    [anon_sym_type] = ACTIONS(382),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [101] = {
    [aux_sym_import_specification_repeat1] = STATE(150),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [sym_import_specification] = STATE(151),
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [103] = {
    [sym__identifier] = STATE(152),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [104] = {
    [sym_class] = STATE(153),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(150),
    [sym_module_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(24),
  },
  [105] = {
    [anon_sym_EQ_GT] = ACTIONS(392),
    [sym_comment] = ACTIONS(24),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(24),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [sym_comment] = ACTIONS(24),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_where] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_deriving] = ACTIONS(284),
    [anon_sym_newtype] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_module_identifier] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(284),
    [anon_sym_class] = ACTIONS(284),
    [anon_sym_default] = ACTIONS(284),
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
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [109] = {
    [sym_constructors] = STATE(157),
    [sym_constructor] = STATE(71),
    [sym_deriving] = STATE(158),
    [sym__identifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_module] = ACTIONS(400),
    [anon_sym_where] = ACTIONS(400),
    [anon_sym_import] = ACTIONS(400),
    [anon_sym_data] = ACTIONS(400),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(400),
    [anon_sym_type] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(400),
    [anon_sym_class] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_do] = ACTIONS(400),
    [anon_sym_else] = ACTIONS(400),
    [anon_sym_foreign] = ACTIONS(400),
    [anon_sym_if] = ACTIONS(400),
    [anon_sym_in] = ACTIONS(400),
    [anon_sym_infix] = ACTIONS(400),
    [anon_sym_infixl] = ACTIONS(400),
    [anon_sym_infixr] = ACTIONS(400),
    [anon_sym_instance] = ACTIONS(400),
    [anon_sym_let] = ACTIONS(400),
    [anon_sym_of] = ACTIONS(400),
    [anon_sym_then] = ACTIONS(400),
    [anon_sym__] = ACTIONS(400),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [sym__integer_literal] = ACTIONS(400),
    [sym__octal_literal] = ACTIONS(400),
    [sym__hexidecimal_literal] = ACTIONS(400),
  },
  [110] = {
    [sym_deriving] = STATE(158),
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_module] = ACTIONS(400),
    [anon_sym_where] = ACTIONS(400),
    [anon_sym_import] = ACTIONS(400),
    [anon_sym_data] = ACTIONS(400),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(400),
    [anon_sym_type] = ACTIONS(400),
    [anon_sym_case] = ACTIONS(400),
    [anon_sym_class] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_do] = ACTIONS(400),
    [anon_sym_else] = ACTIONS(400),
    [anon_sym_foreign] = ACTIONS(400),
    [anon_sym_if] = ACTIONS(400),
    [anon_sym_in] = ACTIONS(400),
    [anon_sym_infix] = ACTIONS(400),
    [anon_sym_infixl] = ACTIONS(400),
    [anon_sym_infixr] = ACTIONS(400),
    [anon_sym_instance] = ACTIONS(400),
    [anon_sym_let] = ACTIONS(400),
    [anon_sym_of] = ACTIONS(400),
    [anon_sym_then] = ACTIONS(400),
    [anon_sym__] = ACTIONS(400),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [sym__integer_literal] = ACTIONS(400),
    [sym__octal_literal] = ACTIONS(400),
    [sym__hexidecimal_literal] = ACTIONS(400),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_module] = ACTIONS(400),
    [anon_sym_where] = ACTIONS(400),
    [anon_sym_import] = ACTIONS(400),
    [anon_sym_data] = ACTIONS(400),
    [anon_sym_newtype] = ACTIONS(400),
    [anon_sym_type] = ACTIONS(400),
    [anon_sym_case] = ACTIONS(400),
    [anon_sym_class] = ACTIONS(400),
    [anon_sym_default] = ACTIONS(400),
    [anon_sym_do] = ACTIONS(400),
    [anon_sym_else] = ACTIONS(400),
    [anon_sym_foreign] = ACTIONS(400),
    [anon_sym_if] = ACTIONS(400),
    [anon_sym_in] = ACTIONS(400),
    [anon_sym_infix] = ACTIONS(400),
    [anon_sym_infixl] = ACTIONS(400),
    [anon_sym_infixr] = ACTIONS(400),
    [anon_sym_instance] = ACTIONS(400),
    [anon_sym_let] = ACTIONS(400),
    [anon_sym_of] = ACTIONS(400),
    [anon_sym_then] = ACTIONS(400),
    [anon_sym__] = ACTIONS(400),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [sym__integer_literal] = ACTIONS(400),
    [sym__octal_literal] = ACTIONS(400),
    [sym__hexidecimal_literal] = ACTIONS(400),
  },
  [112] = {
    [aux_sym_export_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_where] = ACTIONS(410),
    [anon_sym_import] = ACTIONS(410),
    [anon_sym_data] = ACTIONS(410),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_deriving] = ACTIONS(410),
    [anon_sym_newtype] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_constructor_identifier] = ACTIONS(412),
    [sym_module_identifier] = ACTIONS(412),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym__integer_literal] = ACTIONS(410),
    [sym__octal_literal] = ACTIONS(410),
    [sym__hexidecimal_literal] = ACTIONS(410),
  },
  [114] = {
    [sym__identifier] = STATE(162),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [anon_sym_module] = ACTIONS(416),
    [anon_sym_where] = ACTIONS(416),
    [anon_sym_import] = ACTIONS(416),
    [anon_sym_data] = ACTIONS(416),
    [anon_sym_newtype] = ACTIONS(416),
    [anon_sym_type] = ACTIONS(416),
    [anon_sym_case] = ACTIONS(416),
    [anon_sym_class] = ACTIONS(416),
    [anon_sym_default] = ACTIONS(416),
    [anon_sym_do] = ACTIONS(416),
    [anon_sym_else] = ACTIONS(416),
    [anon_sym_foreign] = ACTIONS(416),
    [anon_sym_if] = ACTIONS(416),
    [anon_sym_in] = ACTIONS(416),
    [anon_sym_infix] = ACTIONS(416),
    [anon_sym_infixl] = ACTIONS(416),
    [anon_sym_infixr] = ACTIONS(416),
    [anon_sym_instance] = ACTIONS(416),
    [anon_sym_let] = ACTIONS(416),
    [anon_sym_of] = ACTIONS(416),
    [anon_sym_then] = ACTIONS(416),
    [anon_sym__] = ACTIONS(416),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(418),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [sym__integer_literal] = ACTIONS(416),
    [sym__octal_literal] = ACTIONS(416),
    [sym__hexidecimal_literal] = ACTIONS(416),
  },
  [116] = {
    [sym_constructor] = STATE(163),
    [sym__identifier] = STATE(73),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(24),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
    [anon_sym_import] = ACTIONS(422),
    [anon_sym_data] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_deriving] = ACTIONS(422),
    [anon_sym_newtype] = ACTIONS(422),
    [anon_sym_type] = ACTIONS(422),
    [anon_sym_case] = ACTIONS(422),
    [anon_sym_class] = ACTIONS(422),
    [anon_sym_default] = ACTIONS(422),
    [anon_sym_do] = ACTIONS(422),
    [anon_sym_else] = ACTIONS(422),
    [anon_sym_foreign] = ACTIONS(422),
    [anon_sym_if] = ACTIONS(422),
    [anon_sym_in] = ACTIONS(422),
    [anon_sym_infix] = ACTIONS(422),
    [anon_sym_infixl] = ACTIONS(422),
    [anon_sym_infixr] = ACTIONS(422),
    [anon_sym_instance] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(422),
    [anon_sym_of] = ACTIONS(422),
    [anon_sym_then] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(426),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [sym__integer_literal] = ACTIONS(422),
    [sym__octal_literal] = ACTIONS(422),
    [sym__hexidecimal_literal] = ACTIONS(422),
  },
  [118] = {
    [sym_field] = STATE(166),
    [sym_variable_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [119] = {
    [sym__identifier] = STATE(167),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(24),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_where] = ACTIONS(432),
    [anon_sym_import] = ACTIONS(432),
    [anon_sym_data] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_deriving] = ACTIONS(432),
    [anon_sym_newtype] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_case] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(432),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(434),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__integer_literal] = ACTIONS(432),
    [sym__octal_literal] = ACTIONS(432),
    [sym__hexidecimal_literal] = ACTIONS(432),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_module] = ACTIONS(438),
    [anon_sym_where] = ACTIONS(438),
    [anon_sym_import] = ACTIONS(438),
    [anon_sym_data] = ACTIONS(438),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_deriving] = ACTIONS(438),
    [anon_sym_newtype] = ACTIONS(438),
    [anon_sym_BANG] = ACTIONS(438),
    [anon_sym_type] = ACTIONS(438),
    [sym_variable_identifier] = ACTIONS(440),
    [sym_constructor_identifier] = ACTIONS(440),
    [sym_module_identifier] = ACTIONS(440),
    [anon_sym_case] = ACTIONS(438),
    [anon_sym_class] = ACTIONS(438),
    [anon_sym_default] = ACTIONS(438),
    [anon_sym_do] = ACTIONS(438),
    [anon_sym_else] = ACTIONS(438),
    [anon_sym_foreign] = ACTIONS(438),
    [anon_sym_if] = ACTIONS(438),
    [anon_sym_in] = ACTIONS(438),
    [anon_sym_infix] = ACTIONS(438),
    [anon_sym_infixl] = ACTIONS(438),
    [anon_sym_infixr] = ACTIONS(438),
    [anon_sym_instance] = ACTIONS(438),
    [anon_sym_let] = ACTIONS(438),
    [anon_sym_of] = ACTIONS(438),
    [anon_sym_then] = ACTIONS(438),
    [anon_sym__] = ACTIONS(438),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [sym__integer_literal] = ACTIONS(438),
    [sym__octal_literal] = ACTIONS(438),
    [sym__hexidecimal_literal] = ACTIONS(438),
  },
  [122] = {
    [sym_strict] = STATE(168),
    [sym__identifier] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(430),
    [anon_sym_module] = ACTIONS(432),
    [anon_sym_where] = ACTIONS(432),
    [anon_sym_import] = ACTIONS(432),
    [anon_sym_data] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_deriving] = ACTIONS(432),
    [anon_sym_newtype] = ACTIONS(432),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(432),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [anon_sym_case] = ACTIONS(432),
    [anon_sym_class] = ACTIONS(432),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(434),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__integer_literal] = ACTIONS(432),
    [sym__octal_literal] = ACTIONS(432),
    [sym__hexidecimal_literal] = ACTIONS(432),
  },
  [123] = {
    [anon_sym_EQ] = ACTIONS(410),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_constructor_identifier] = ACTIONS(412),
    [sym_module_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
  },
  [124] = {
    [sym_fields] = STATE(169),
    [sym__identifier] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [sym_deriving] = STATE(170),
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
    [anon_sym_import] = ACTIONS(444),
    [anon_sym_data] = ACTIONS(444),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(444),
    [anon_sym_type] = ACTIONS(444),
    [anon_sym_case] = ACTIONS(444),
    [anon_sym_class] = ACTIONS(444),
    [anon_sym_default] = ACTIONS(444),
    [anon_sym_do] = ACTIONS(444),
    [anon_sym_else] = ACTIONS(444),
    [anon_sym_foreign] = ACTIONS(444),
    [anon_sym_if] = ACTIONS(444),
    [anon_sym_in] = ACTIONS(444),
    [anon_sym_infix] = ACTIONS(444),
    [anon_sym_infixl] = ACTIONS(444),
    [anon_sym_infixr] = ACTIONS(444),
    [anon_sym_instance] = ACTIONS(444),
    [anon_sym_let] = ACTIONS(444),
    [anon_sym_of] = ACTIONS(444),
    [anon_sym_then] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(446),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym__integer_literal] = ACTIONS(444),
    [sym__octal_literal] = ACTIONS(444),
    [sym__hexidecimal_literal] = ACTIONS(444),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(134),
    [sym_constructor_identifier] = ACTIONS(134),
    [sym_module_identifier] = ACTIONS(134),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
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
    [sym_float] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_where] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_newtype] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_module_identifier] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(284),
    [anon_sym_class] = ACTIONS(284),
    [anon_sym_default] = ACTIONS(284),
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
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [128] = {
    [sym__identifier] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_module] = ACTIONS(450),
    [anon_sym_where] = ACTIONS(450),
    [anon_sym_import] = ACTIONS(450),
    [anon_sym_data] = ACTIONS(450),
    [anon_sym_newtype] = ACTIONS(450),
    [anon_sym_type] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(320),
    [sym_constructor_identifier] = ACTIONS(320),
    [sym_module_identifier] = ACTIONS(320),
    [anon_sym_case] = ACTIONS(450),
    [anon_sym_class] = ACTIONS(450),
    [anon_sym_default] = ACTIONS(450),
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
    [anon_sym_of] = ACTIONS(450),
    [anon_sym_then] = ACTIONS(450),
    [anon_sym__] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(452),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(450),
    [sym__integer_literal] = ACTIONS(450),
    [sym__octal_literal] = ACTIONS(450),
    [sym__hexidecimal_literal] = ACTIONS(450),
  },
  [129] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(454),
  },
  [130] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(456),
  },
  [131] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(458),
  },
  [132] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(462),
  },
  [133] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(464),
  },
  [134] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(466),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_BANG] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(468),
    [sym__ascii_large] = ACTIONS(468),
    [anon_sym_POUND] = ACTIONS(468),
    [anon_sym_DOLLAR] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(468),
    [anon_sym_AMP] = ACTIONS(468),
    [anon_sym_1] = ACTIONS(468),
    [anon_sym_PLUS] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(468),
    [anon_sym_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(468),
    [anon_sym_GT] = ACTIONS(468),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(468),
    [anon_sym_CARET] = ACTIONS(468),
    [anon_sym_DASH] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
    [anon_sym_BSLASH] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [anon_sym_BQUOTE] = ACTIONS(468),
    [sym__space] = ACTIONS(468),
    [sym__newline] = ACTIONS(468),
    [sym__tab] = ACTIONS(468),
    [sym__vertical_tab] = ACTIONS(468),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_BANG] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(470),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(470),
    [sym__ascii_large] = ACTIONS(470),
    [anon_sym_POUND] = ACTIONS(470),
    [anon_sym_DOLLAR] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(470),
    [anon_sym_AMP] = ACTIONS(470),
    [anon_sym_1] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_LT] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [anon_sym_QMARK] = ACTIONS(470),
    [anon_sym_AT] = ACTIONS(470),
    [anon_sym_CARET] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_TILDE] = ACTIONS(470),
    [anon_sym_COLON] = ACTIONS(470),
    [anon_sym_BSLASH] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_BQUOTE] = ACTIONS(470),
    [sym__space] = ACTIONS(470),
    [sym__newline] = ACTIONS(470),
    [sym__tab] = ACTIONS(470),
    [sym__vertical_tab] = ACTIONS(470),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(472),
    [anon_sym_BANG] = ACTIONS(472),
    [anon_sym__] = ACTIONS(472),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(472),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(472),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(472),
    [sym__ascii_large] = ACTIONS(472),
    [anon_sym_POUND] = ACTIONS(472),
    [anon_sym_DOLLAR] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(472),
    [anon_sym_AMP] = ACTIONS(472),
    [anon_sym_1] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(472),
    [anon_sym_LT] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_AT] = ACTIONS(472),
    [anon_sym_CARET] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_TILDE] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(472),
    [anon_sym_BSLASH] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [anon_sym_BQUOTE] = ACTIONS(472),
    [sym__space] = ACTIONS(472),
    [sym__newline] = ACTIONS(472),
    [sym__tab] = ACTIONS(472),
    [sym__vertical_tab] = ACTIONS(472),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(472),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_BANG] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(474),
    [sym__ascii_large] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(474),
    [anon_sym_DOLLAR] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_1] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_QMARK] = ACTIONS(474),
    [anon_sym_AT] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_TILDE] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_BQUOTE] = ACTIONS(474),
    [sym__space] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
    [sym__tab] = ACTIONS(474),
    [sym__vertical_tab] = ACTIONS(474),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(476),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_EQ] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(478),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_BANG] = ACTIONS(478),
    [anon_sym__] = ACTIONS(478),
    [sym_comment] = ACTIONS(68),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(478),
  },
  [140] = {
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_EQ] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_BANG] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(474),
    [sym__ascii_large] = ACTIONS(474),
    [anon_sym_POUND] = ACTIONS(474),
    [anon_sym_DOLLAR] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_1] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_QMARK] = ACTIONS(474),
    [anon_sym_AT] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_TILDE] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(474),
    [anon_sym_BSLASH] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [anon_sym_BQUOTE] = ACTIONS(474),
    [sym__space] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
    [sym__tab] = ACTIONS(474),
    [sym__vertical_tab] = ACTIONS(474),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(480),
  },
  [141] = {
    [sym_export] = STATE(176),
    [sym__identifier] = STATE(96),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [142] = {
    [anon_sym_where] = ACTIONS(482),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [sym__identifier] = STATE(180),
    [anon_sym_DOT_DOT] = ACTIONS(488),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [145] = {
    [sym__statement] = STATE(48),
    [sym_module] = STATE(14),
    [sym_import] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_algebraic_datatype] = STATE(15),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym_reserved_identifier] = STATE(14),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(490),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [146] = {
    [sym_import_specification] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_module] = ACTIONS(494),
    [anon_sym_where] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(494),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(494),
    [anon_sym_newtype] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_case] = ACTIONS(494),
    [anon_sym_class] = ACTIONS(494),
    [anon_sym_default] = ACTIONS(494),
    [anon_sym_do] = ACTIONS(494),
    [anon_sym_else] = ACTIONS(494),
    [anon_sym_foreign] = ACTIONS(494),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_in] = ACTIONS(494),
    [anon_sym_infix] = ACTIONS(494),
    [anon_sym_infixl] = ACTIONS(494),
    [anon_sym_infixr] = ACTIONS(494),
    [anon_sym_instance] = ACTIONS(494),
    [anon_sym_let] = ACTIONS(494),
    [anon_sym_of] = ACTIONS(494),
    [anon_sym_then] = ACTIONS(494),
    [anon_sym__] = ACTIONS(494),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(496),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(494),
    [sym__integer_literal] = ACTIONS(494),
    [sym__octal_literal] = ACTIONS(494),
    [sym__hexidecimal_literal] = ACTIONS(494),
  },
  [147] = {
    [sym__identifier] = STATE(183),
    [anon_sym_DOT_DOT] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [sym__identifier] = STATE(184),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_module] = ACTIONS(502),
    [anon_sym_where] = ACTIONS(502),
    [anon_sym_import] = ACTIONS(502),
    [anon_sym_data] = ACTIONS(502),
    [anon_sym_newtype] = ACTIONS(502),
    [anon_sym_type] = ACTIONS(502),
    [anon_sym_case] = ACTIONS(502),
    [anon_sym_class] = ACTIONS(502),
    [anon_sym_default] = ACTIONS(502),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [sym__integer_literal] = ACTIONS(502),
    [sym__octal_literal] = ACTIONS(502),
    [sym__hexidecimal_literal] = ACTIONS(502),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_module] = ACTIONS(494),
    [anon_sym_where] = ACTIONS(494),
    [anon_sym_import] = ACTIONS(494),
    [anon_sym_data] = ACTIONS(494),
    [anon_sym_newtype] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_case] = ACTIONS(494),
    [anon_sym_class] = ACTIONS(494),
    [anon_sym_default] = ACTIONS(494),
    [anon_sym_do] = ACTIONS(494),
    [anon_sym_else] = ACTIONS(494),
    [anon_sym_foreign] = ACTIONS(494),
    [anon_sym_if] = ACTIONS(494),
    [anon_sym_in] = ACTIONS(494),
    [anon_sym_infix] = ACTIONS(494),
    [anon_sym_infixl] = ACTIONS(494),
    [anon_sym_infixr] = ACTIONS(494),
    [anon_sym_instance] = ACTIONS(494),
    [anon_sym_let] = ACTIONS(494),
    [anon_sym_of] = ACTIONS(494),
    [anon_sym_then] = ACTIONS(494),
    [anon_sym__] = ACTIONS(494),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(496),
    [anon_sym_SQUOTE] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(494),
    [sym__integer_literal] = ACTIONS(494),
    [sym__octal_literal] = ACTIONS(494),
    [sym__hexidecimal_literal] = ACTIONS(494),
  },
  [152] = {
    [aux_sym_import_specification_repeat1] = STATE(188),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [sym_comment] = ACTIONS(24),
  },
  [154] = {
    [sym_variable_identifier] = ACTIONS(514),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(24),
  },
  [155] = {
    [sym_class] = STATE(189),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(150),
    [sym_module_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(24),
  },
  [156] = {
    [anon_sym_EQ_GT] = ACTIONS(518),
    [sym_comment] = ACTIONS(24),
  },
  [157] = {
    [sym_deriving] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_module] = ACTIONS(522),
    [anon_sym_where] = ACTIONS(522),
    [anon_sym_import] = ACTIONS(522),
    [anon_sym_data] = ACTIONS(522),
    [anon_sym_deriving] = ACTIONS(174),
    [anon_sym_newtype] = ACTIONS(522),
    [anon_sym_type] = ACTIONS(522),
    [anon_sym_case] = ACTIONS(522),
    [anon_sym_class] = ACTIONS(522),
    [anon_sym_default] = ACTIONS(522),
    [anon_sym_do] = ACTIONS(522),
    [anon_sym_else] = ACTIONS(522),
    [anon_sym_foreign] = ACTIONS(522),
    [anon_sym_if] = ACTIONS(522),
    [anon_sym_in] = ACTIONS(522),
    [anon_sym_infix] = ACTIONS(522),
    [anon_sym_infixl] = ACTIONS(522),
    [anon_sym_infixr] = ACTIONS(522),
    [anon_sym_instance] = ACTIONS(522),
    [anon_sym_let] = ACTIONS(522),
    [anon_sym_of] = ACTIONS(522),
    [anon_sym_then] = ACTIONS(522),
    [anon_sym__] = ACTIONS(522),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [sym__integer_literal] = ACTIONS(522),
    [sym__octal_literal] = ACTIONS(522),
    [sym__hexidecimal_literal] = ACTIONS(522),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_module] = ACTIONS(522),
    [anon_sym_where] = ACTIONS(522),
    [anon_sym_import] = ACTIONS(522),
    [anon_sym_data] = ACTIONS(522),
    [anon_sym_newtype] = ACTIONS(522),
    [anon_sym_type] = ACTIONS(522),
    [anon_sym_case] = ACTIONS(522),
    [anon_sym_class] = ACTIONS(522),
    [anon_sym_default] = ACTIONS(522),
    [anon_sym_do] = ACTIONS(522),
    [anon_sym_else] = ACTIONS(522),
    [anon_sym_foreign] = ACTIONS(522),
    [anon_sym_if] = ACTIONS(522),
    [anon_sym_in] = ACTIONS(522),
    [anon_sym_infix] = ACTIONS(522),
    [anon_sym_infixl] = ACTIONS(522),
    [anon_sym_infixr] = ACTIONS(522),
    [anon_sym_instance] = ACTIONS(522),
    [anon_sym_let] = ACTIONS(522),
    [anon_sym_of] = ACTIONS(522),
    [anon_sym_then] = ACTIONS(522),
    [anon_sym__] = ACTIONS(522),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [sym__integer_literal] = ACTIONS(522),
    [sym__octal_literal] = ACTIONS(522),
    [sym__hexidecimal_literal] = ACTIONS(522),
  },
  [159] = {
    [sym__identifier] = STATE(192),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_EQ_GT] = ACTIONS(526),
    [sym_comment] = ACTIONS(24),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(530),
    [sym_comment] = ACTIONS(24),
  },
  [162] = {
    [aux_sym_export_repeat1] = STATE(196),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(532),
    [sym_comment] = ACTIONS(24),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_module] = ACTIONS(536),
    [anon_sym_where] = ACTIONS(536),
    [anon_sym_import] = ACTIONS(536),
    [anon_sym_data] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(536),
    [anon_sym_deriving] = ACTIONS(536),
    [anon_sym_newtype] = ACTIONS(536),
    [anon_sym_type] = ACTIONS(536),
    [anon_sym_case] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(536),
    [sym__integer_literal] = ACTIONS(536),
    [sym__octal_literal] = ACTIONS(536),
    [sym__hexidecimal_literal] = ACTIONS(536),
  },
  [164] = {
    [sym_constructor] = STATE(197),
    [sym__identifier] = STATE(73),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [aux_sym_field_repeat1] = STATE(200),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_COLON_COLON] = ACTIONS(542),
    [sym_comment] = ACTIONS(24),
  },
  [166] = {
    [aux_sym_fields_repeat1] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(546),
    [sym_comment] = ACTIONS(24),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_module] = ACTIONS(550),
    [anon_sym_where] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_import] = ACTIONS(550),
    [anon_sym_data] = ACTIONS(550),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_deriving] = ACTIONS(550),
    [anon_sym_newtype] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_BANG] = ACTIONS(550),
    [anon_sym_type] = ACTIONS(550),
    [sym_variable_identifier] = ACTIONS(552),
    [sym_constructor_identifier] = ACTIONS(552),
    [sym_module_identifier] = ACTIONS(552),
    [anon_sym_case] = ACTIONS(550),
    [anon_sym_class] = ACTIONS(550),
    [anon_sym_default] = ACTIONS(550),
    [anon_sym_do] = ACTIONS(550),
    [anon_sym_else] = ACTIONS(550),
    [anon_sym_foreign] = ACTIONS(550),
    [anon_sym_if] = ACTIONS(550),
    [anon_sym_in] = ACTIONS(550),
    [anon_sym_infix] = ACTIONS(550),
    [anon_sym_infixl] = ACTIONS(550),
    [anon_sym_infixr] = ACTIONS(550),
    [anon_sym_instance] = ACTIONS(550),
    [anon_sym_let] = ACTIONS(550),
    [anon_sym_of] = ACTIONS(550),
    [anon_sym_then] = ACTIONS(550),
    [anon_sym__] = ACTIONS(550),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(552),
    [anon_sym_SQUOTE] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(550),
    [sym__integer_literal] = ACTIONS(550),
    [sym__octal_literal] = ACTIONS(550),
    [sym__hexidecimal_literal] = ACTIONS(550),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(554),
    [anon_sym_module] = ACTIONS(556),
    [anon_sym_where] = ACTIONS(556),
    [anon_sym_import] = ACTIONS(556),
    [anon_sym_data] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_deriving] = ACTIONS(556),
    [anon_sym_newtype] = ACTIONS(556),
    [anon_sym_BANG] = ACTIONS(556),
    [anon_sym_type] = ACTIONS(556),
    [sym_variable_identifier] = ACTIONS(558),
    [sym_constructor_identifier] = ACTIONS(558),
    [sym_module_identifier] = ACTIONS(558),
    [anon_sym_case] = ACTIONS(556),
    [anon_sym_class] = ACTIONS(556),
    [anon_sym_default] = ACTIONS(556),
    [anon_sym_do] = ACTIONS(556),
    [anon_sym_else] = ACTIONS(556),
    [anon_sym_foreign] = ACTIONS(556),
    [anon_sym_if] = ACTIONS(556),
    [anon_sym_in] = ACTIONS(556),
    [anon_sym_infix] = ACTIONS(556),
    [anon_sym_infixl] = ACTIONS(556),
    [anon_sym_infixr] = ACTIONS(556),
    [anon_sym_instance] = ACTIONS(556),
    [anon_sym_let] = ACTIONS(556),
    [anon_sym_of] = ACTIONS(556),
    [anon_sym_then] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(558),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [sym__integer_literal] = ACTIONS(556),
    [sym__octal_literal] = ACTIONS(556),
    [sym__hexidecimal_literal] = ACTIONS(556),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_module] = ACTIONS(562),
    [anon_sym_where] = ACTIONS(562),
    [anon_sym_import] = ACTIONS(562),
    [anon_sym_data] = ACTIONS(562),
    [anon_sym_deriving] = ACTIONS(562),
    [anon_sym_newtype] = ACTIONS(562),
    [anon_sym_type] = ACTIONS(562),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [sym__integer_literal] = ACTIONS(562),
    [sym__octal_literal] = ACTIONS(562),
    [sym__hexidecimal_literal] = ACTIONS(562),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_module] = ACTIONS(568),
    [anon_sym_where] = ACTIONS(568),
    [anon_sym_import] = ACTIONS(568),
    [anon_sym_data] = ACTIONS(568),
    [anon_sym_newtype] = ACTIONS(568),
    [anon_sym_type] = ACTIONS(568),
    [anon_sym_case] = ACTIONS(568),
    [anon_sym_class] = ACTIONS(568),
    [anon_sym_default] = ACTIONS(568),
    [anon_sym_do] = ACTIONS(568),
    [anon_sym_else] = ACTIONS(568),
    [anon_sym_foreign] = ACTIONS(568),
    [anon_sym_if] = ACTIONS(568),
    [anon_sym_in] = ACTIONS(568),
    [anon_sym_infix] = ACTIONS(568),
    [anon_sym_infixl] = ACTIONS(568),
    [anon_sym_infixr] = ACTIONS(568),
    [anon_sym_instance] = ACTIONS(568),
    [anon_sym_let] = ACTIONS(568),
    [anon_sym_of] = ACTIONS(568),
    [anon_sym_then] = ACTIONS(568),
    [anon_sym__] = ACTIONS(568),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(570),
    [anon_sym_SQUOTE] = ACTIONS(568),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [sym__integer_literal] = ACTIONS(568),
    [sym__octal_literal] = ACTIONS(568),
    [sym__hexidecimal_literal] = ACTIONS(568),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_where] = ACTIONS(410),
    [anon_sym_import] = ACTIONS(410),
    [anon_sym_data] = ACTIONS(410),
    [anon_sym_newtype] = ACTIONS(410),
    [anon_sym_type] = ACTIONS(410),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_constructor_identifier] = ACTIONS(412),
    [sym_module_identifier] = ACTIONS(412),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(412),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym__integer_literal] = ACTIONS(410),
    [sym__octal_literal] = ACTIONS(410),
    [sym__hexidecimal_literal] = ACTIONS(410),
  },
  [172] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(572),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(572),
  },
  [173] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(574),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(576),
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_EQ] = ACTIONS(576),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_LBRACE] = ACTIONS(576),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_BANG] = ACTIONS(576),
    [anon_sym__] = ACTIONS(576),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(576),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(576),
    [sym__ascii_large] = ACTIONS(576),
    [anon_sym_POUND] = ACTIONS(576),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_AMP] = ACTIONS(576),
    [anon_sym_1] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DOT] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(576),
    [anon_sym_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [anon_sym_TILDE] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [anon_sym_BSLASH] = ACTIONS(576),
    [anon_sym_SEMI] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [anon_sym_RBRACK] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(576),
    [sym__space] = ACTIONS(576),
    [sym__newline] = ACTIONS(576),
    [sym__tab] = ACTIONS(576),
    [sym__vertical_tab] = ACTIONS(576),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(576),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_LBRACE] = ACTIONS(578),
    [anon_sym_RBRACE] = ACTIONS(578),
    [anon_sym_BANG] = ACTIONS(578),
    [anon_sym__] = ACTIONS(578),
    [sym_comment] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(578),
    [sym__ascii_large] = ACTIONS(578),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(578),
    [anon_sym_1] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DOT] = ACTIONS(578),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_LT] = ACTIONS(578),
    [anon_sym_GT] = ACTIONS(578),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(578),
    [anon_sym_CARET] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [anon_sym_TILDE] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(578),
    [anon_sym_BSLASH] = ACTIONS(578),
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_LBRACK] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(578),
    [sym__space] = ACTIONS(578),
    [sym__newline] = ACTIONS(578),
    [sym__tab] = ACTIONS(578),
    [sym__vertical_tab] = ACTIONS(578),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(578),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(580),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(24),
  },
  [177] = {
    [sym_export] = STATE(204),
    [sym__identifier] = STATE(96),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [178] = {
    [anon_sym_where] = ACTIONS(582),
    [sym_comment] = ACTIONS(24),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(24),
  },
  [180] = {
    [aux_sym_export_repeat1] = STATE(206),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(24),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(588),
    [anon_sym_where] = ACTIONS(588),
    [anon_sym_import] = ACTIONS(588),
    [anon_sym_data] = ACTIONS(588),
    [anon_sym_newtype] = ACTIONS(588),
    [anon_sym_type] = ACTIONS(588),
    [anon_sym_case] = ACTIONS(588),
    [anon_sym_class] = ACTIONS(588),
    [anon_sym_default] = ACTIONS(588),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [sym__integer_literal] = ACTIONS(588),
    [sym__octal_literal] = ACTIONS(588),
    [sym__hexidecimal_literal] = ACTIONS(588),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(24),
  },
  [183] = {
    [aux_sym_export_repeat1] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(24),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(594),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym_comment] = ACTIONS(24),
  },
  [185] = {
    [sym__identifier] = STATE(210),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [anon_sym_module] = ACTIONS(600),
    [anon_sym_where] = ACTIONS(600),
    [anon_sym_import] = ACTIONS(600),
    [anon_sym_data] = ACTIONS(600),
    [anon_sym_newtype] = ACTIONS(600),
    [anon_sym_type] = ACTIONS(600),
    [anon_sym_case] = ACTIONS(600),
    [anon_sym_class] = ACTIONS(600),
    [anon_sym_default] = ACTIONS(600),
    [anon_sym_do] = ACTIONS(600),
    [anon_sym_else] = ACTIONS(600),
    [anon_sym_foreign] = ACTIONS(600),
    [anon_sym_if] = ACTIONS(600),
    [anon_sym_in] = ACTIONS(600),
    [anon_sym_infix] = ACTIONS(600),
    [anon_sym_infixl] = ACTIONS(600),
    [anon_sym_infixr] = ACTIONS(600),
    [anon_sym_instance] = ACTIONS(600),
    [anon_sym_let] = ACTIONS(600),
    [anon_sym_of] = ACTIONS(600),
    [anon_sym_then] = ACTIONS(600),
    [anon_sym__] = ACTIONS(600),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [187] = {
    [sym__identifier] = STATE(212),
    [anon_sym_DOT_DOT] = ACTIONS(604),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(24),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(24),
  },
  [190] = {
    [sym_variable_identifier] = ACTIONS(610),
    [sym_constructor_identifier] = ACTIONS(612),
    [sym_module_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(24),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_module] = ACTIONS(616),
    [anon_sym_where] = ACTIONS(616),
    [anon_sym_import] = ACTIONS(616),
    [anon_sym_data] = ACTIONS(616),
    [anon_sym_newtype] = ACTIONS(616),
    [anon_sym_type] = ACTIONS(616),
    [anon_sym_case] = ACTIONS(616),
    [anon_sym_class] = ACTIONS(616),
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
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [sym__integer_literal] = ACTIONS(616),
    [sym__octal_literal] = ACTIONS(616),
    [sym__hexidecimal_literal] = ACTIONS(616),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(620),
    [sym_comment] = ACTIONS(24),
  },
  [193] = {
    [sym__identifier] = STATE(214),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [194] = {
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_EQ_GT] = ACTIONS(622),
    [sym_comment] = ACTIONS(24),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(624),
    [anon_sym_module] = ACTIONS(626),
    [anon_sym_where] = ACTIONS(626),
    [anon_sym_import] = ACTIONS(626),
    [anon_sym_data] = ACTIONS(626),
    [anon_sym_newtype] = ACTIONS(626),
    [anon_sym_type] = ACTIONS(626),
    [anon_sym_case] = ACTIONS(626),
    [anon_sym_class] = ACTIONS(626),
    [anon_sym_default] = ACTIONS(626),
    [anon_sym_do] = ACTIONS(626),
    [anon_sym_else] = ACTIONS(626),
    [anon_sym_foreign] = ACTIONS(626),
    [anon_sym_if] = ACTIONS(626),
    [anon_sym_in] = ACTIONS(626),
    [anon_sym_infix] = ACTIONS(626),
    [anon_sym_infixl] = ACTIONS(626),
    [anon_sym_infixr] = ACTIONS(626),
    [anon_sym_instance] = ACTIONS(626),
    [anon_sym_let] = ACTIONS(626),
    [anon_sym_of] = ACTIONS(626),
    [anon_sym_then] = ACTIONS(626),
    [anon_sym__] = ACTIONS(626),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(628),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [sym__integer_literal] = ACTIONS(626),
    [sym__octal_literal] = ACTIONS(626),
    [sym__hexidecimal_literal] = ACTIONS(626),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_comment] = ACTIONS(24),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [anon_sym_module] = ACTIONS(634),
    [anon_sym_where] = ACTIONS(634),
    [anon_sym_import] = ACTIONS(634),
    [anon_sym_data] = ACTIONS(634),
    [anon_sym_PIPE] = ACTIONS(634),
    [anon_sym_deriving] = ACTIONS(634),
    [anon_sym_newtype] = ACTIONS(634),
    [anon_sym_type] = ACTIONS(634),
    [anon_sym_case] = ACTIONS(634),
    [anon_sym_class] = ACTIONS(634),
    [anon_sym_default] = ACTIONS(634),
    [anon_sym_do] = ACTIONS(634),
    [anon_sym_else] = ACTIONS(634),
    [anon_sym_foreign] = ACTIONS(634),
    [anon_sym_if] = ACTIONS(634),
    [anon_sym_in] = ACTIONS(634),
    [anon_sym_infix] = ACTIONS(634),
    [anon_sym_infixl] = ACTIONS(634),
    [anon_sym_infixr] = ACTIONS(634),
    [anon_sym_instance] = ACTIONS(634),
    [anon_sym_let] = ACTIONS(634),
    [anon_sym_of] = ACTIONS(634),
    [anon_sym_then] = ACTIONS(634),
    [anon_sym__] = ACTIONS(634),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(636),
    [anon_sym_SQUOTE] = ACTIONS(634),
    [anon_sym_DQUOTE] = ACTIONS(634),
    [sym__integer_literal] = ACTIONS(634),
    [sym__octal_literal] = ACTIONS(634),
    [sym__hexidecimal_literal] = ACTIONS(634),
  },
  [198] = {
    [sym_variable_identifier] = ACTIONS(638),
    [sym_comment] = ACTIONS(24),
  },
  [199] = {
    [sym_strict] = STATE(218),
    [sym__identifier] = STATE(218),
    [anon_sym_BANG] = ACTIONS(640),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_COLON_COLON] = ACTIONS(644),
    [sym_comment] = ACTIONS(24),
  },
  [201] = {
    [sym_field] = STATE(221),
    [sym_variable_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_module] = ACTIONS(648),
    [anon_sym_where] = ACTIONS(648),
    [anon_sym_import] = ACTIONS(648),
    [anon_sym_data] = ACTIONS(648),
    [anon_sym_PIPE] = ACTIONS(648),
    [anon_sym_deriving] = ACTIONS(648),
    [anon_sym_newtype] = ACTIONS(648),
    [anon_sym_type] = ACTIONS(648),
    [anon_sym_case] = ACTIONS(648),
    [anon_sym_class] = ACTIONS(648),
    [anon_sym_default] = ACTIONS(648),
    [anon_sym_do] = ACTIONS(648),
    [anon_sym_else] = ACTIONS(648),
    [anon_sym_foreign] = ACTIONS(648),
    [anon_sym_if] = ACTIONS(648),
    [anon_sym_in] = ACTIONS(648),
    [anon_sym_infix] = ACTIONS(648),
    [anon_sym_infixl] = ACTIONS(648),
    [anon_sym_infixr] = ACTIONS(648),
    [anon_sym_instance] = ACTIONS(648),
    [anon_sym_let] = ACTIONS(648),
    [anon_sym_of] = ACTIONS(648),
    [anon_sym_then] = ACTIONS(648),
    [anon_sym__] = ACTIONS(648),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym__integer_literal] = ACTIONS(648),
    [sym__octal_literal] = ACTIONS(648),
    [sym__hexidecimal_literal] = ACTIONS(648),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_RBRACE] = ACTIONS(654),
    [sym_comment] = ACTIONS(24),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym_comment] = ACTIONS(24),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(24),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(24),
  },
  [207] = {
    [aux_sym_import_specification_repeat1] = STATE(226),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(24),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(24),
  },
  [209] = {
    [sym__identifier] = STATE(229),
    [anon_sym_DOT_DOT] = ACTIONS(666),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [210] = {
    [anon_sym_LPAREN] = ACTIONS(668),
    [anon_sym_COMMA] = ACTIONS(670),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(24),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(24),
  },
  [212] = {
    [aux_sym_export_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(24),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_module] = ACTIONS(674),
    [anon_sym_where] = ACTIONS(674),
    [anon_sym_import] = ACTIONS(674),
    [anon_sym_data] = ACTIONS(674),
    [anon_sym_newtype] = ACTIONS(674),
    [anon_sym_type] = ACTIONS(674),
    [anon_sym_case] = ACTIONS(674),
    [anon_sym_class] = ACTIONS(674),
    [anon_sym_default] = ACTIONS(674),
    [anon_sym_do] = ACTIONS(674),
    [anon_sym_else] = ACTIONS(674),
    [anon_sym_foreign] = ACTIONS(674),
    [anon_sym_if] = ACTIONS(674),
    [anon_sym_in] = ACTIONS(674),
    [anon_sym_infix] = ACTIONS(674),
    [anon_sym_infixl] = ACTIONS(674),
    [anon_sym_infixr] = ACTIONS(674),
    [anon_sym_instance] = ACTIONS(674),
    [anon_sym_let] = ACTIONS(674),
    [anon_sym_of] = ACTIONS(674),
    [anon_sym_then] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(676),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [sym__integer_literal] = ACTIONS(674),
    [sym__octal_literal] = ACTIONS(674),
    [sym__hexidecimal_literal] = ACTIONS(674),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [sym_comment] = ACTIONS(24),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_module] = ACTIONS(682),
    [anon_sym_where] = ACTIONS(682),
    [anon_sym_import] = ACTIONS(682),
    [anon_sym_data] = ACTIONS(682),
    [anon_sym_newtype] = ACTIONS(682),
    [anon_sym_type] = ACTIONS(682),
    [anon_sym_case] = ACTIONS(682),
    [anon_sym_class] = ACTIONS(682),
    [anon_sym_default] = ACTIONS(682),
    [anon_sym_do] = ACTIONS(682),
    [anon_sym_else] = ACTIONS(682),
    [anon_sym_foreign] = ACTIONS(682),
    [anon_sym_if] = ACTIONS(682),
    [anon_sym_in] = ACTIONS(682),
    [anon_sym_infix] = ACTIONS(682),
    [anon_sym_infixl] = ACTIONS(682),
    [anon_sym_infixr] = ACTIONS(682),
    [anon_sym_instance] = ACTIONS(682),
    [anon_sym_let] = ACTIONS(682),
    [anon_sym_of] = ACTIONS(682),
    [anon_sym_then] = ACTIONS(682),
    [anon_sym__] = ACTIONS(682),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(684),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [sym__integer_literal] = ACTIONS(682),
    [sym__octal_literal] = ACTIONS(682),
    [sym__hexidecimal_literal] = ACTIONS(682),
  },
  [216] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_COLON_COLON] = ACTIONS(686),
    [sym_comment] = ACTIONS(24),
  },
  [217] = {
    [sym__identifier] = STATE(167),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_RBRACE] = ACTIONS(688),
    [sym_comment] = ACTIONS(24),
  },
  [219] = {
    [sym_variable_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(24),
  },
  [220] = {
    [sym_strict] = STATE(233),
    [sym__identifier] = STATE(233),
    [anon_sym_BANG] = ACTIONS(640),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RBRACE] = ACTIONS(692),
    [sym_comment] = ACTIONS(24),
  },
  [222] = {
    [sym_field] = STATE(234),
    [sym_variable_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(694),
    [anon_sym_module] = ACTIONS(696),
    [anon_sym_where] = ACTIONS(696),
    [anon_sym_import] = ACTIONS(696),
    [anon_sym_data] = ACTIONS(696),
    [anon_sym_PIPE] = ACTIONS(696),
    [anon_sym_deriving] = ACTIONS(696),
    [anon_sym_newtype] = ACTIONS(696),
    [anon_sym_type] = ACTIONS(696),
    [anon_sym_case] = ACTIONS(696),
    [anon_sym_class] = ACTIONS(696),
    [anon_sym_default] = ACTIONS(696),
    [anon_sym_do] = ACTIONS(696),
    [anon_sym_else] = ACTIONS(696),
    [anon_sym_foreign] = ACTIONS(696),
    [anon_sym_if] = ACTIONS(696),
    [anon_sym_in] = ACTIONS(696),
    [anon_sym_infix] = ACTIONS(696),
    [anon_sym_infixl] = ACTIONS(696),
    [anon_sym_infixr] = ACTIONS(696),
    [anon_sym_instance] = ACTIONS(696),
    [anon_sym_let] = ACTIONS(696),
    [anon_sym_of] = ACTIONS(696),
    [anon_sym_then] = ACTIONS(696),
    [anon_sym__] = ACTIONS(696),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(698),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [sym__integer_literal] = ACTIONS(696),
    [sym__octal_literal] = ACTIONS(696),
    [sym__hexidecimal_literal] = ACTIONS(696),
  },
  [224] = {
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [sym_comment] = ACTIONS(24),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [anon_sym_module] = ACTIONS(704),
    [anon_sym_where] = ACTIONS(704),
    [anon_sym_import] = ACTIONS(704),
    [anon_sym_data] = ACTIONS(704),
    [anon_sym_newtype] = ACTIONS(704),
    [anon_sym_type] = ACTIONS(704),
    [anon_sym_case] = ACTIONS(704),
    [anon_sym_class] = ACTIONS(704),
    [anon_sym_default] = ACTIONS(704),
    [anon_sym_do] = ACTIONS(704),
    [anon_sym_else] = ACTIONS(704),
    [anon_sym_foreign] = ACTIONS(704),
    [anon_sym_if] = ACTIONS(704),
    [anon_sym_in] = ACTIONS(704),
    [anon_sym_infix] = ACTIONS(704),
    [anon_sym_infixl] = ACTIONS(704),
    [anon_sym_infixr] = ACTIONS(704),
    [anon_sym_instance] = ACTIONS(704),
    [anon_sym_let] = ACTIONS(704),
    [anon_sym_of] = ACTIONS(704),
    [anon_sym_then] = ACTIONS(704),
    [anon_sym__] = ACTIONS(704),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(706),
    [anon_sym_SQUOTE] = ACTIONS(704),
    [anon_sym_DQUOTE] = ACTIONS(704),
    [sym__integer_literal] = ACTIONS(704),
    [sym__octal_literal] = ACTIONS(704),
    [sym__hexidecimal_literal] = ACTIONS(704),
  },
  [226] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_comment] = ACTIONS(24),
  },
  [227] = {
    [aux_sym_import_specification_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_comment] = ACTIONS(24),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(24),
  },
  [229] = {
    [aux_sym_export_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(24),
  },
  [230] = {
    [sym__identifier] = STATE(240),
    [anon_sym_DOT_DOT] = ACTIONS(712),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(24),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_COLON_COLON] = ACTIONS(716),
    [sym_comment] = ACTIONS(24),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [sym_comment] = ACTIONS(24),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(720),
    [sym_comment] = ACTIONS(24),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_module] = ACTIONS(724),
    [anon_sym_where] = ACTIONS(724),
    [anon_sym_import] = ACTIONS(724),
    [anon_sym_data] = ACTIONS(724),
    [anon_sym_newtype] = ACTIONS(724),
    [anon_sym_type] = ACTIONS(724),
    [anon_sym_case] = ACTIONS(724),
    [anon_sym_class] = ACTIONS(724),
    [anon_sym_default] = ACTIONS(724),
    [anon_sym_do] = ACTIONS(724),
    [anon_sym_else] = ACTIONS(724),
    [anon_sym_foreign] = ACTIONS(724),
    [anon_sym_if] = ACTIONS(724),
    [anon_sym_in] = ACTIONS(724),
    [anon_sym_infix] = ACTIONS(724),
    [anon_sym_infixl] = ACTIONS(724),
    [anon_sym_infixr] = ACTIONS(724),
    [anon_sym_instance] = ACTIONS(724),
    [anon_sym_let] = ACTIONS(724),
    [anon_sym_of] = ACTIONS(724),
    [anon_sym_then] = ACTIONS(724),
    [anon_sym__] = ACTIONS(724),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(726),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [sym__integer_literal] = ACTIONS(724),
    [sym__octal_literal] = ACTIONS(724),
    [sym__hexidecimal_literal] = ACTIONS(724),
  },
  [236] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(24),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(730),
    [anon_sym_RPAREN] = ACTIONS(730),
    [sym_comment] = ACTIONS(24),
  },
  [238] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(24),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(24),
  },
  [240] = {
    [aux_sym_export_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym_comment] = ACTIONS(24),
  },
  [241] = {
    [aux_sym_import_specification_repeat1] = STATE(245),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(24),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [anon_sym_module] = ACTIONS(736),
    [anon_sym_where] = ACTIONS(736),
    [anon_sym_import] = ACTIONS(736),
    [anon_sym_data] = ACTIONS(736),
    [anon_sym_newtype] = ACTIONS(736),
    [anon_sym_type] = ACTIONS(736),
    [anon_sym_case] = ACTIONS(736),
    [anon_sym_class] = ACTIONS(736),
    [anon_sym_default] = ACTIONS(736),
    [anon_sym_do] = ACTIONS(736),
    [anon_sym_else] = ACTIONS(736),
    [anon_sym_foreign] = ACTIONS(736),
    [anon_sym_if] = ACTIONS(736),
    [anon_sym_in] = ACTIONS(736),
    [anon_sym_infix] = ACTIONS(736),
    [anon_sym_infixl] = ACTIONS(736),
    [anon_sym_infixr] = ACTIONS(736),
    [anon_sym_instance] = ACTIONS(736),
    [anon_sym_let] = ACTIONS(736),
    [anon_sym_of] = ACTIONS(736),
    [anon_sym_then] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(738),
    [anon_sym_SQUOTE] = ACTIONS(736),
    [anon_sym_DQUOTE] = ACTIONS(736),
    [sym__integer_literal] = ACTIONS(736),
    [sym__octal_literal] = ACTIONS(736),
    [sym__hexidecimal_literal] = ACTIONS(736),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(740),
    [sym_comment] = ACTIONS(24),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(742),
    [sym_comment] = ACTIONS(24),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_comment] = ACTIONS(24),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(24),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(748),
    [anon_sym_module] = ACTIONS(750),
    [anon_sym_where] = ACTIONS(750),
    [anon_sym_import] = ACTIONS(750),
    [anon_sym_data] = ACTIONS(750),
    [anon_sym_newtype] = ACTIONS(750),
    [anon_sym_type] = ACTIONS(750),
    [anon_sym_case] = ACTIONS(750),
    [anon_sym_class] = ACTIONS(750),
    [anon_sym_default] = ACTIONS(750),
    [anon_sym_do] = ACTIONS(750),
    [anon_sym_else] = ACTIONS(750),
    [anon_sym_foreign] = ACTIONS(750),
    [anon_sym_if] = ACTIONS(750),
    [anon_sym_in] = ACTIONS(750),
    [anon_sym_infix] = ACTIONS(750),
    [anon_sym_infixl] = ACTIONS(750),
    [anon_sym_infixr] = ACTIONS(750),
    [anon_sym_instance] = ACTIONS(750),
    [anon_sym_let] = ACTIONS(750),
    [anon_sym_of] = ACTIONS(750),
    [anon_sym_then] = ACTIONS(750),
    [anon_sym__] = ACTIONS(750),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(752),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(750),
    [sym__integer_literal] = ACTIONS(750),
    [sym__octal_literal] = ACTIONS(750),
    [sym__hexidecimal_literal] = ACTIONS(750),
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
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
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
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 5),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [706] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
