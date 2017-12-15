#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 247
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
        ADVANCE(267);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(274);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(275);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
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
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(183);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(194);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(168);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
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
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(177);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead == '}')
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(177);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(180);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(182);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(187);
      if (lookahead == 'l')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(254);
      if (lookahead == 'y')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(265);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(265);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 267:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(168);
      if (lookahead == '\r')
        ADVANCE(267);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(274);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(275);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 268:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(160);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'O')
        ADVANCE(270);
      if (lookahead == 'X')
        ADVANCE(272);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == 'o')
        ADVANCE(270);
      if (lookahead == 'x')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(271);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(273);
      END_STATE();
    case 274:
      if (lookahead == '>')
        ADVANCE(112);
      END_STATE();
    case 275:
      if (lookahead == 'n')
        SKIP(167);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(287);
      if (lookahead == 'e')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'u')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'o')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'r')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'g')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'm')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'p')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'o')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'r')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'x')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'r')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'c')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'o')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'u')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'w')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 't')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'y')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'p')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'h')
        ADVANCE(346);
      if (lookahead == 'y')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'p')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'h')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'r')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(358);
      if (lookahead == '.')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(358);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '\\')
        SKIP(370);
      if (lookahead == 'w')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(359);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(360);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '\\')
        ADVANCE(362);
      if (lookahead == 'w')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(266);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '\\')
        SKIP(370);
      if (lookahead == 'w')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(359);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(358);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 370:
      if (lookahead == 'n')
        SKIP(359);
      END_STATE();
    case 371:
      if (lookahead == 'h')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'r')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'e')
        ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 376:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == 'q')
        ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 377:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(378);
      if (lookahead == 'q')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == 'q')
        ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(376);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 389:
      if (lookahead == 'n')
        SKIP(376);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'u')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'l')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '.')
        ADVANCE(404);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 400:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '.')
        ADVANCE(401);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(402);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '.')
        ADVANCE(404);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 404:
      if (lookahead == '.')
        ADVANCE(105);
      END_STATE();
    case 405:
      if (lookahead == 'n')
        SKIP(399);
      END_STATE();
    case 406:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(407);
      if (lookahead == '\r')
        ADVANCE(409);
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
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
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
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(406);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 407:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(407);
      if (lookahead == '\r')
        ADVANCE(407);
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
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(408);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(194);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(407);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
      ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(407);
      if (lookahead == '\r')
        ADVANCE(409);
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
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
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
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(406);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 410:
      if (lookahead == 'n')
        SKIP(406);
      END_STATE();
    case 411:
      if (lookahead == '\t')
        SKIP(411);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 412:
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(416);
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
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(413);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(416);
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
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '\t')
        SKIP(411);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 424:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(431);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(427);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(428);
      if (lookahead == ' ')
        ADVANCE(429);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(430);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(427);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(428);
      if (lookahead == ' ')
        ADVANCE(429);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(430);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      if (lookahead == '\t')
        ADVANCE(427);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(428);
      if (lookahead == ' ')
        ADVANCE(429);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(430);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(427);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(428);
      if (lookahead == ' ')
        ADVANCE(429);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(430);
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
        ADVANCE(417);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(428);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(426);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(431);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 432:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == '\r')
        ADVANCE(443);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(444);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(447);
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
        SKIP(432);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 433:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == '\r')
        ADVANCE(433);
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
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'a')
        ADVANCE(435);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(194);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'h')
        ADVANCE(437);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
      ADVANCE(8);
      END_STATE();
    case 434:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(433);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(433);
      if (lookahead == '\r')
        ADVANCE(443);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(444);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(447);
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
        SKIP(432);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 444:
      if (lookahead == 'n')
        SKIP(432);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 's')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'g')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 453:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(465);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(453);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 454:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '!')
        ADVANCE(9);
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
        ADVANCE(361);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(455);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '{')
        ADVANCE(76);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
      ADVANCE(8);
      END_STATE();
    case 455:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(454);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'o')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(199);
      if (lookahead == 'r')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(185);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(454);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '!')
        ADVANCE(92);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(465);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '{')
        ADVANCE(154);
      if (lookahead == '|')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(453);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 465:
      if (lookahead == 'n')
        SKIP(453);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'a')
        ADVANCE(287);
      if (lookahead == 'e')
        ADVANCE(467);
      if (lookahead == 'o')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(291);
      if (lookahead == 'r')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'v')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'i')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(277);
      if (lookahead == 'g')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(527);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == 'A')
        ADVANCE(528);
      if (lookahead == 'B')
        ADVANCE(531);
      if (lookahead == 'C')
        ADVANCE(535);
      if (lookahead == 'D')
        ADVANCE(539);
      if (lookahead == 'E')
        ADVANCE(549);
      if (lookahead == 'F')
        ADVANCE(560);
      if (lookahead == 'G')
        ADVANCE(563);
      if (lookahead == 'H')
        ADVANCE(564);
      if (lookahead == 'L')
        ADVANCE(565);
      if (lookahead == 'N')
        ADVANCE(566);
      if (lookahead == 'O')
        ADVANCE(567);
      if (lookahead == 'R')
        ADVANCE(568);
      if (lookahead == 'S')
        ADVANCE(569);
      if (lookahead == 'U')
        ADVANCE(570);
      if (lookahead == 'V')
        ADVANCE(571);
      if (lookahead == 'X')
        ADVANCE(572);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(573);
      if (lookahead == 'b')
        ADVANCE(574);
      if (lookahead == 'f')
        ADVANCE(575);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(576);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == 'A')
        ADVANCE(476);
      if (lookahead == 'B')
        ADVANCE(479);
      if (lookahead == 'C')
        ADVANCE(483);
      if (lookahead == 'D')
        ADVANCE(487);
      if (lookahead == 'E')
        ADVANCE(497);
      if (lookahead == 'F')
        ADVANCE(508);
      if (lookahead == 'G')
        ADVANCE(511);
      if (lookahead == 'H')
        ADVANCE(512);
      if (lookahead == 'L')
        ADVANCE(513);
      if (lookahead == 'N')
        ADVANCE(514);
      if (lookahead == 'O')
        ADVANCE(515);
      if (lookahead == 'R')
        ADVANCE(516);
      if (lookahead == 'S')
        ADVANCE(517);
      if (lookahead == 'U')
        ADVANCE(518);
      if (lookahead == 'V')
        ADVANCE(519);
      if (lookahead == 'X')
        ADVANCE(520);
      if (lookahead == '\\')
        ADVANCE(521);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(525);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(478);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(480);
      if (lookahead == 'S')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(484);
      if (lookahead == 'R')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(488);
      if (lookahead == 'E')
        ADVANCE(493);
      if (lookahead == 'L')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(489);
      if (lookahead == '2')
        ADVANCE(490);
      if (lookahead == '3')
        ADVANCE(491);
      if (lookahead == '4')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(498);
      if (lookahead == 'N')
        ADVANCE(499);
      if (lookahead == 'O')
        ADVANCE(501);
      if (lookahead == 'S')
        ADVANCE(503);
      if (lookahead == 'T')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(500);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(502);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(506);
      if (lookahead == 'X')
        ADVANCE(507);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(509);
      if (lookahead == 'S')
        ADVANCE(510);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
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
    case 518:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(65);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(475);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(527);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(97);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == 'A')
        ADVANCE(528);
      if (lookahead == 'B')
        ADVANCE(531);
      if (lookahead == 'C')
        ADVANCE(535);
      if (lookahead == 'D')
        ADVANCE(539);
      if (lookahead == 'E')
        ADVANCE(549);
      if (lookahead == 'F')
        ADVANCE(560);
      if (lookahead == 'G')
        ADVANCE(563);
      if (lookahead == 'H')
        ADVANCE(564);
      if (lookahead == 'L')
        ADVANCE(565);
      if (lookahead == 'N')
        ADVANCE(566);
      if (lookahead == 'O')
        ADVANCE(567);
      if (lookahead == 'R')
        ADVANCE(568);
      if (lookahead == 'S')
        ADVANCE(569);
      if (lookahead == 'U')
        ADVANCE(570);
      if (lookahead == 'V')
        ADVANCE(571);
      if (lookahead == 'X')
        ADVANCE(572);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(573);
      if (lookahead == 'b')
        ADVANCE(574);
      if (lookahead == 'f')
        ADVANCE(575);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(576);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      END_STATE();
    case 528:
      if (lookahead == 'C')
        ADVANCE(529);
      END_STATE();
    case 529:
      if (lookahead == 'K')
        ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 531:
      if (lookahead == 'E')
        ADVANCE(532);
      if (lookahead == 'S')
        ADVANCE(534);
      END_STATE();
    case 532:
      if (lookahead == 'L')
        ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 535:
      if (lookahead == 'A')
        ADVANCE(536);
      if (lookahead == 'R')
        ADVANCE(538);
      END_STATE();
    case 536:
      if (lookahead == 'N')
        ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 539:
      if (lookahead == 'C')
        ADVANCE(540);
      if (lookahead == 'E')
        ADVANCE(545);
      if (lookahead == 'L')
        ADVANCE(547);
      END_STATE();
    case 540:
      if (lookahead == '1')
        ADVANCE(541);
      if (lookahead == '2')
        ADVANCE(542);
      if (lookahead == '3')
        ADVANCE(543);
      if (lookahead == '4')
        ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 545:
      if (lookahead == 'L')
        ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 547:
      if (lookahead == 'E')
        ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 549:
      if (lookahead == 'M')
        ADVANCE(550);
      if (lookahead == 'N')
        ADVANCE(551);
      if (lookahead == 'O')
        ADVANCE(553);
      if (lookahead == 'S')
        ADVANCE(555);
      if (lookahead == 'T')
        ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 551:
      if (lookahead == 'Q')
        ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 553:
      if (lookahead == 'T')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 555:
      if (lookahead == 'C')
        ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 557:
      if (lookahead == 'B')
        ADVANCE(558);
      if (lookahead == 'X')
        ADVANCE(559);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 560:
      if (lookahead == 'F')
        ADVANCE(561);
      if (lookahead == 'S')
        ADVANCE(562);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 563:
      if (lookahead == 'S')
        ADVANCE(117);
      END_STATE();
    case 564:
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 565:
      if (lookahead == 'F')
        ADVANCE(121);
      END_STATE();
    case 566:
      if (lookahead == 'A')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(125);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 568:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 569:
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
    case 570:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 571:
      if (lookahead == 'T')
        ADVANCE(143);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 578:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'A')
        ADVANCE(591);
      if (lookahead == 'B')
        ADVANCE(592);
      if (lookahead == 'C')
        ADVANCE(593);
      if (lookahead == 'D')
        ADVANCE(594);
      if (lookahead == 'E')
        ADVANCE(595);
      if (lookahead == 'F')
        ADVANCE(596);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(567);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(572);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(573);
      if (lookahead == 'b')
        ADVANCE(574);
      if (lookahead == 'f')
        ADVANCE(575);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(576);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(577);
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
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(580);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(582);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(583);
      if (lookahead == 'B')
        ADVANCE(584);
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'D')
        ADVANCE(586);
      if (lookahead == 'E')
        ADVANCE(587);
      if (lookahead == 'F')
        ADVANCE(588);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(515);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(520);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(589);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(525);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(526);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(580);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(582);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(583);
      if (lookahead == 'B')
        ADVANCE(584);
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'D')
        ADVANCE(586);
      if (lookahead == 'E')
        ADVANCE(587);
      if (lookahead == 'F')
        ADVANCE(588);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(515);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(520);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(589);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(525);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(526);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '\t')
        ADVANCE(580);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(582);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(583);
      if (lookahead == 'B')
        ADVANCE(584);
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'D')
        ADVANCE(586);
      if (lookahead == 'E')
        ADVANCE(587);
      if (lookahead == 'F')
        ADVANCE(588);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(515);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(520);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(589);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(525);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(526);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(580);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(582);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == 'A')
        ADVANCE(583);
      if (lookahead == 'B')
        ADVANCE(584);
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'D')
        ADVANCE(586);
      if (lookahead == 'E')
        ADVANCE(587);
      if (lookahead == 'F')
        ADVANCE(588);
      if (lookahead == 'G')
        ADVANCE(38);
      if (lookahead == 'H')
        ADVANCE(40);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead == 'N')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(515);
      if (lookahead == 'R')
        ADVANCE(49);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(62);
      if (lookahead == 'V')
        ADVANCE(64);
      if (lookahead == 'X')
        ADVANCE(520);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(589);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'b')
        ADVANCE(523);
      if (lookahead == 'f')
        ADVANCE(524);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(525);
      if (lookahead == 'r')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == 'v')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(526);
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
        ADVANCE(417);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(480);
      if (lookahead == 'S')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(484);
      if (lookahead == 'R')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(488);
      if (lookahead == 'E')
        ADVANCE(493);
      if (lookahead == 'L')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(498);
      if (lookahead == 'N')
        ADVANCE(499);
      if (lookahead == 'O')
        ADVANCE(501);
      if (lookahead == 'S')
        ADVANCE(503);
      if (lookahead == 'T')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(509);
      if (lookahead == 'S')
        ADVANCE(510);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(581);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == 'A')
        ADVANCE(591);
      if (lookahead == 'B')
        ADVANCE(592);
      if (lookahead == 'C')
        ADVANCE(593);
      if (lookahead == 'D')
        ADVANCE(594);
      if (lookahead == 'E')
        ADVANCE(595);
      if (lookahead == 'F')
        ADVANCE(596);
      if (lookahead == 'G')
        ADVANCE(116);
      if (lookahead == 'H')
        ADVANCE(118);
      if (lookahead == 'L')
        ADVANCE(120);
      if (lookahead == 'N')
        ADVANCE(122);
      if (lookahead == 'O')
        ADVANCE(567);
      if (lookahead == 'R')
        ADVANCE(127);
      if (lookahead == 'S')
        ADVANCE(129);
      if (lookahead == 'U')
        ADVANCE(140);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(572);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '`')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(573);
      if (lookahead == 'b')
        ADVANCE(574);
      if (lookahead == 'f')
        ADVANCE(575);
      if (lookahead == 'n')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(576);
      if (lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == 'v')
        ADVANCE(153);
      if (lookahead == 'x')
        ADVANCE(577);
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
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(529);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(532);
      if (lookahead == 'S')
        ADVANCE(534);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(536);
      if (lookahead == 'R')
        ADVANCE(538);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(540);
      if (lookahead == 'E')
        ADVANCE(545);
      if (lookahead == 'L')
        ADVANCE(547);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(550);
      if (lookahead == 'N')
        ADVANCE(551);
      if (lookahead == 'O')
        ADVANCE(553);
      if (lookahead == 'S')
        ADVANCE(555);
      if (lookahead == 'T')
        ADVANCE(557);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(561);
      if (lookahead == 'S')
        ADVANCE(562);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == ':')
        ADVANCE(602);
      if (lookahead == '=')
        ADVANCE(274);
      if (lookahead == '\\')
        SKIP(603);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(597);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == ':')
        ADVANCE(599);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '\\')
        ADVANCE(600);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(598);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 599:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(598);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(598);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == ')')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == ':')
        ADVANCE(602);
      if (lookahead == '=')
        ADVANCE(274);
      if (lookahead == '\\')
        SKIP(603);
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(597);
      END_STATE();
    case 602:
      if (lookahead == ':')
        ADVANCE(108);
      END_STATE();
    case 603:
      if (lookahead == 'n')
        SKIP(597);
      END_STATE();
    case 604:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(607);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(608);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
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
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(606);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(605);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(607);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(608);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 608:
      if (lookahead == 'n')
        SKIP(604);
      END_STATE();
    case 609:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(609);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(615);
      END_STATE();
    case 610:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(610);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(610);
      if (('A' <= lookahead && lookahead <= 'Z'))
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
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(612);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(612);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(609);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(615);
      END_STATE();
    case 614:
      if (lookahead == 'n')
        SKIP(609);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(615);
      END_STATE();
    case 616:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(619);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(616);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 617:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(618);
      if (lookahead == ']')
        ADVANCE(68);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == '_')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(617);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      if (lookahead == '\n')
        ADVANCE(617);
      if (lookahead == '\r')
        ADVANCE(619);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(146);
      if (lookahead == '^')
        ADVANCE(147);
      if (lookahead == '_')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(616);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(624);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(625);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(626);
      END_STATE();
    case 621:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(621);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(621);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(624);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(625);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(626);
      END_STATE();
    case 625:
      if (lookahead == 'n')
        SKIP(620);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 627:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(633);
      END_STATE();
    case 628:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(633);
      END_STATE();
    case 632:
      if (lookahead == 'n')
        SKIP(627);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 634:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(447);
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
        SKIP(634);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 635:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
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
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(194);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'h')
        ADVANCE(437);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == 'f')
        ADVANCE(301);
      if (lookahead == 'h')
        ADVANCE(447);
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
        SKIP(634);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 638:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 639:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(641);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == ' ')
        ADVANCE(643);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(644);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(641);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == ' ')
        ADVANCE(643);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(644);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '\t')
        ADVANCE(641);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == ' ')
        ADVANCE(643);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(644);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(641);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(642);
      if (lookahead == ' ')
        ADVANCE(643);
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
        ADVANCE(414);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(415);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(361);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(644);
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
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == 11)
        ADVANCE(90);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == ' ')
        ADVANCE(419);
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
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(106);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(109);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(369);
      if (lookahead == '>')
        ADVANCE(113);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '@')
        ADVANCE(115);
      if (lookahead == '[')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(422);
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
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(166);
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
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(650);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(646);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
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
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(169);
      if (lookahead == '0')
        ADVANCE(170);
      if (lookahead == '[')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(648);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == 'f')
        ADVANCE(209);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(235);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(244);
      if (lookahead == 'o')
        ADVANCE(251);
      if (lookahead == 't')
        ADVANCE(253);
      if (lookahead == 'w')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(647);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(265);
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
      if (lookahead == ',')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(268);
      if (lookahead == '0')
        ADVANCE(269);
      if (lookahead == '[')
        ADVANCE(182);
      if (lookahead == '\\')
        SKIP(650);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(278);
      if (lookahead == 'd')
        ADVANCE(466);
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
      if (lookahead == '}')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(646);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(357);
      END_STATE();
    case 650:
      if (lookahead == 'n')
        SKIP(646);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 167},
  [2] = {.lex_state = 359},
  [3] = {.lex_state = 167},
  [4] = {.lex_state = 376},
  [5] = {.lex_state = 399},
  [6] = {.lex_state = 399},
  [7] = {.lex_state = 399},
  [8] = {.lex_state = 406},
  [9] = {.lex_state = 167},
  [10] = {.lex_state = 411},
  [11] = {.lex_state = 424},
  [12] = {.lex_state = 167},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 167},
  [15] = {.lex_state = 167},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 167},
  [18] = {.lex_state = 359},
  [19] = {.lex_state = 399},
  [20] = {.lex_state = 432},
  [21] = {.lex_state = 432},
  [22] = {.lex_state = 399},
  [23] = {.lex_state = 453},
  [24] = {.lex_state = 399},
  [25] = {.lex_state = 167},
  [26] = {.lex_state = 453},
  [27] = {.lex_state = 453},
  [28] = {.lex_state = 399},
  [29] = {.lex_state = 399},
  [30] = {.lex_state = 359},
  [31] = {.lex_state = 359},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 474},
  [39] = {.lex_state = 424},
  [40] = {.lex_state = 424},
  [41] = {.lex_state = 424},
  [42] = {.lex_state = 424},
  [43] = {.lex_state = 167},
  [44] = {.lex_state = 424},
  [45] = {.lex_state = 424},
  [46] = {.lex_state = 578},
  [47] = {.lex_state = 424},
  [48] = {.lex_state = 424},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 167},
  [51] = {.lex_state = 399},
  [52] = {.lex_state = 359},
  [53] = {.lex_state = 432},
  [54] = {.lex_state = 399},
  [55] = {.lex_state = 399},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 597},
  [59] = {.lex_state = 399},
  [60] = {.lex_state = 453},
  [61] = {.lex_state = 453},
  [62] = {.lex_state = 399},
  [63] = {.lex_state = 399},
  [64] = {.lex_state = 604},
  [65] = {.lex_state = 604},
  [66] = {.lex_state = 453},
  [67] = {.lex_state = 453},
  [68] = {.lex_state = 399},
  [69] = {.lex_state = 453},
  [70] = {.lex_state = 453},
  [71] = {.lex_state = 167},
  [72] = {.lex_state = 453},
  [73] = {.lex_state = 399},
  [74] = {.lex_state = 399},
  [75] = {.lex_state = 609},
  [76] = {.lex_state = 399},
  [77] = {.lex_state = 167},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 616},
  [81] = {.lex_state = 620},
  [82] = {.lex_state = 627},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 424},
  [85] = {.lex_state = 424},
  [86] = {.lex_state = 616},
  [87] = {.lex_state = 620},
  [88] = {.lex_state = 627},
  [89] = {.lex_state = 424},
  [90] = {.lex_state = 424},
  [91] = {.lex_state = 167},
  [92] = {.lex_state = 167},
  [93] = {.lex_state = 359},
  [94] = {.lex_state = 597},
  [95] = {.lex_state = 597},
  [96] = {.lex_state = 167},
  [97] = {.lex_state = 399},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 597},
  [101] = {.lex_state = 634},
  [102] = {.lex_state = 634},
  [103] = {.lex_state = 399},
  [104] = {.lex_state = 399},
  [105] = {.lex_state = 167},
  [106] = {.lex_state = 597},
  [107] = {.lex_state = 597},
  [108] = {.lex_state = 453},
  [109] = {.lex_state = 453},
  [110] = {.lex_state = 453},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 597},
  [113] = {.lex_state = 453},
  [114] = {.lex_state = 399},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 399},
  [117] = {.lex_state = 453},
  [118] = {.lex_state = 399},
  [119] = {.lex_state = 399},
  [120] = {.lex_state = 453},
  [121] = {.lex_state = 453},
  [122] = {.lex_state = 453},
  [123] = {.lex_state = 399},
  [124] = {.lex_state = 399},
  [125] = {.lex_state = 453},
  [126] = {.lex_state = 167},
  [127] = {.lex_state = 167},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 620},
  [131] = {.lex_state = 620},
  [132] = {.lex_state = 627},
  [133] = {.lex_state = 627},
  [134] = {.lex_state = 424},
  [135] = {.lex_state = 424},
  [136] = {.lex_state = 424},
  [137] = {.lex_state = 424},
  [138] = {.lex_state = 639},
  [139] = {.lex_state = 639},
  [140] = {.lex_state = 399},
  [141] = {.lex_state = 359},
  [142] = {.lex_state = 597},
  [143] = {.lex_state = 399},
  [144] = {.lex_state = 167},
  [145] = {.lex_state = 634},
  [146] = {.lex_state = 399},
  [147] = {.lex_state = 399},
  [148] = {.lex_state = 167},
  [149] = {.lex_state = 597},
  [150] = {.lex_state = 167},
  [151] = {.lex_state = 597},
  [152] = {.lex_state = 597},
  [153] = {.lex_state = 399},
  [154] = {.lex_state = 399},
  [155] = {.lex_state = 167},
  [156] = {.lex_state = 453},
  [157] = {.lex_state = 167},
  [158] = {.lex_state = 399},
  [159] = {.lex_state = 597},
  [160] = {.lex_state = 597},
  [161] = {.lex_state = 597},
  [162] = {.lex_state = 453},
  [163] = {.lex_state = 399},
  [164] = {.lex_state = 597},
  [165] = {.lex_state = 597},
  [166] = {.lex_state = 646},
  [167] = {.lex_state = 453},
  [168] = {.lex_state = 453},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 167},
  [171] = {.lex_state = 620},
  [172] = {.lex_state = 627},
  [173] = {.lex_state = 424},
  [174] = {.lex_state = 639},
  [175] = {.lex_state = 597},
  [176] = {.lex_state = 399},
  [177] = {.lex_state = 359},
  [178] = {.lex_state = 359},
  [179] = {.lex_state = 597},
  [180] = {.lex_state = 167},
  [181] = {.lex_state = 359},
  [182] = {.lex_state = 597},
  [183] = {.lex_state = 597},
  [184] = {.lex_state = 399},
  [185] = {.lex_state = 167},
  [186] = {.lex_state = 399},
  [187] = {.lex_state = 597},
  [188] = {.lex_state = 597},
  [189] = {.lex_state = 399},
  [190] = {.lex_state = 167},
  [191] = {.lex_state = 597},
  [192] = {.lex_state = 399},
  [193] = {.lex_state = 597},
  [194] = {.lex_state = 167},
  [195] = {.lex_state = 597},
  [196] = {.lex_state = 453},
  [197] = {.lex_state = 399},
  [198] = {.lex_state = 399},
  [199] = {.lex_state = 597},
  [200] = {.lex_state = 399},
  [201] = {.lex_state = 453},
  [202] = {.lex_state = 597},
  [203] = {.lex_state = 597},
  [204] = {.lex_state = 597},
  [205] = {.lex_state = 597},
  [206] = {.lex_state = 597},
  [207] = {.lex_state = 597},
  [208] = {.lex_state = 399},
  [209] = {.lex_state = 597},
  [210] = {.lex_state = 359},
  [211] = {.lex_state = 597},
  [212] = {.lex_state = 167},
  [213] = {.lex_state = 597},
  [214] = {.lex_state = 167},
  [215] = {.lex_state = 597},
  [216] = {.lex_state = 399},
  [217] = {.lex_state = 597},
  [218] = {.lex_state = 399},
  [219] = {.lex_state = 399},
  [220] = {.lex_state = 597},
  [221] = {.lex_state = 399},
  [222] = {.lex_state = 453},
  [223] = {.lex_state = 597},
  [224] = {.lex_state = 167},
  [225] = {.lex_state = 597},
  [226] = {.lex_state = 597},
  [227] = {.lex_state = 359},
  [228] = {.lex_state = 597},
  [229] = {.lex_state = 399},
  [230] = {.lex_state = 597},
  [231] = {.lex_state = 597},
  [232] = {.lex_state = 597},
  [233] = {.lex_state = 597},
  [234] = {.lex_state = 167},
  [235] = {.lex_state = 597},
  [236] = {.lex_state = 597},
  [237] = {.lex_state = 597},
  [238] = {.lex_state = 359},
  [239] = {.lex_state = 597},
  [240] = {.lex_state = 597},
  [241] = {.lex_state = 167},
  [242] = {.lex_state = 597},
  [243] = {.lex_state = 597},
  [244] = {.lex_state = 597},
  [245] = {.lex_state = 597},
  [246] = {.lex_state = 167},
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
    [sym_context] = STATE(24),
    [sym_class] = STATE(25),
    [sym__identifier] = STATE(26),
    [sym_simple_type] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym__identifier] = STATE(29),
    [sym_simple_type] = STATE(30),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(29),
    [sym_simple_type] = STATE(31),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_module] = ACTIONS(66),
    [anon_sym_where] = ACTIONS(66),
    [anon_sym_import] = ACTIONS(66),
    [anon_sym_data] = ACTIONS(66),
    [anon_sym_newtype] = ACTIONS(66),
    [anon_sym_type] = ACTIONS(66),
    [sym_variable_identifier] = ACTIONS(68),
    [sym_constructor_identifier] = ACTIONS(68),
    [sym_module_identifier] = ACTIONS(68),
    [anon_sym_case] = ACTIONS(66),
    [anon_sym_class] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(66),
    [anon_sym_do] = ACTIONS(66),
    [anon_sym_else] = ACTIONS(66),
    [anon_sym_foreign] = ACTIONS(66),
    [anon_sym_if] = ACTIONS(66),
    [anon_sym_in] = ACTIONS(66),
    [anon_sym_infix] = ACTIONS(66),
    [anon_sym_infixl] = ACTIONS(66),
    [anon_sym_infixr] = ACTIONS(66),
    [anon_sym_instance] = ACTIONS(66),
    [anon_sym_let] = ACTIONS(66),
    [anon_sym_of] = ACTIONS(66),
    [anon_sym_then] = ACTIONS(66),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [sym__integer_literal] = ACTIONS(66),
    [sym__octal_literal] = ACTIONS(66),
    [sym__hexidecimal_literal] = ACTIONS(66),
  },
  [10] = {
    [sym__graphic] = STATE(35),
    [sym__small] = STATE(36),
    [sym__large] = STATE(36),
    [sym__symbol] = STATE(36),
    [sym__special] = STATE(36),
    [sym__escape] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(72),
    [anon_sym__] = ACTIONS(74),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(74),
    [sym__ascii_large] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_AMP] = ACTIONS(72),
    [anon_sym_1] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DOT] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_AT] = ACTIONS(72),
    [anon_sym_CARET] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_TILDE] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [sym__space] = ACTIONS(78),
  },
  [11] = {
    [sym__gap] = STATE(42),
    [sym__graphic] = STATE(42),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(42),
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym__] = ACTIONS(90),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(90),
    [sym__ascii_large] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_DOLLAR] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_1] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [sym__space] = ACTIONS(102),
    [sym__newline] = ACTIONS(102),
    [sym__tab] = ACTIONS(102),
    [sym__vertical_tab] = ACTIONS(102),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_import] = ACTIONS(106),
    [anon_sym_data] = ACTIONS(106),
    [anon_sym_newtype] = ACTIONS(106),
    [anon_sym_type] = ACTIONS(106),
    [sym_variable_identifier] = ACTIONS(108),
    [sym_constructor_identifier] = ACTIONS(108),
    [sym_module_identifier] = ACTIONS(108),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym__integer_literal] = ACTIONS(106),
    [sym__octal_literal] = ACTIONS(106),
    [sym__hexidecimal_literal] = ACTIONS(106),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_where] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_data] = ACTIONS(114),
    [anon_sym_newtype] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [sym_variable_identifier] = ACTIONS(116),
    [sym_constructor_identifier] = ACTIONS(116),
    [sym_module_identifier] = ACTIONS(116),
    [anon_sym_case] = ACTIONS(114),
    [anon_sym_class] = ACTIONS(114),
    [anon_sym_default] = ACTIONS(114),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym__integer_literal] = ACTIONS(114),
    [sym__octal_literal] = ACTIONS(114),
    [sym__hexidecimal_literal] = ACTIONS(114),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_where] = ACTIONS(120),
    [anon_sym_import] = ACTIONS(120),
    [anon_sym_data] = ACTIONS(120),
    [anon_sym_newtype] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [sym_variable_identifier] = ACTIONS(122),
    [sym_constructor_identifier] = ACTIONS(122),
    [sym_module_identifier] = ACTIONS(122),
    [anon_sym_case] = ACTIONS(120),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym__integer_literal] = ACTIONS(120),
    [sym__octal_literal] = ACTIONS(120),
    [sym__hexidecimal_literal] = ACTIONS(120),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_module] = ACTIONS(126),
    [anon_sym_where] = ACTIONS(126),
    [anon_sym_import] = ACTIONS(126),
    [anon_sym_data] = ACTIONS(126),
    [anon_sym_newtype] = ACTIONS(126),
    [anon_sym_type] = ACTIONS(126),
    [sym_variable_identifier] = ACTIONS(128),
    [sym_constructor_identifier] = ACTIONS(128),
    [sym_module_identifier] = ACTIONS(128),
    [anon_sym_case] = ACTIONS(126),
    [anon_sym_class] = ACTIONS(126),
    [anon_sym_default] = ACTIONS(126),
    [anon_sym_do] = ACTIONS(126),
    [anon_sym_else] = ACTIONS(126),
    [anon_sym_foreign] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(126),
    [anon_sym_in] = ACTIONS(126),
    [anon_sym_infix] = ACTIONS(126),
    [anon_sym_infixl] = ACTIONS(126),
    [anon_sym_infixr] = ACTIONS(126),
    [anon_sym_instance] = ACTIONS(126),
    [anon_sym_let] = ACTIONS(126),
    [anon_sym_of] = ACTIONS(126),
    [anon_sym_then] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym__integer_literal] = ACTIONS(126),
    [sym__octal_literal] = ACTIONS(126),
    [sym__hexidecimal_literal] = ACTIONS(126),
  },
  [17] = {
    [sym__statement] = STATE(49),
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
    [ts_builtin_sym_end] = ACTIONS(130),
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
    [sym_module_exports] = STATE(52),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__identifier] = STATE(53),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_as] = ACTIONS(60),
    [anon_sym_hiding] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [21] = {
    [sym_import_specification] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_module] = ACTIONS(140),
    [anon_sym_where] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(140),
    [anon_sym_as] = ACTIONS(144),
    [anon_sym_hiding] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_newtype] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(140),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(140),
    [anon_sym_default] = ACTIONS(140),
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
    [anon_sym_of] = ACTIONS(140),
    [anon_sym_then] = ACTIONS(140),
    [anon_sym__] = ACTIONS(140),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__integer_literal] = ACTIONS(140),
    [sym__octal_literal] = ACTIONS(140),
    [sym__hexidecimal_literal] = ACTIONS(140),
  },
  [22] = {
    [sym_class] = STATE(58),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_deriving] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [24] = {
    [sym__identifier] = STATE(60),
    [sym_simple_type] = STATE(61),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [anon_sym_EQ_GT] = ACTIONS(150),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [sym__identifier] = STATE(65),
    [aux_sym_type_synonym_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(154),
    [anon_sym_where] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_import] = ACTIONS(154),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_deriving] = ACTIONS(154),
    [anon_sym_newtype] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
    [anon_sym_case] = ACTIONS(154),
    [anon_sym_class] = ACTIONS(154),
    [anon_sym_default] = ACTIONS(154),
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
    [sym_float] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym__integer_literal] = ACTIONS(154),
    [sym__octal_literal] = ACTIONS(154),
    [sym__hexidecimal_literal] = ACTIONS(154),
  },
  [27] = {
    [sym_constructors] = STATE(69),
    [sym_constructor] = STATE(70),
    [sym_deriving] = STATE(71),
    [sym__identifier] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_module] = ACTIONS(164),
    [anon_sym_where] = ACTIONS(164),
    [anon_sym_import] = ACTIONS(164),
    [anon_sym_data] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(164),
    [anon_sym_type] = ACTIONS(164),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(164),
    [anon_sym_class] = ACTIONS(164),
    [anon_sym_default] = ACTIONS(164),
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
    [anon_sym_of] = ACTIONS(164),
    [anon_sym_then] = ACTIONS(164),
    [anon_sym__] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [sym__identifier] = STATE(73),
    [aux_sym_type_synonym_repeat1] = STATE(74),
    [anon_sym_EQ] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [anon_sym_EQ] = ACTIONS(172),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(174),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(176),
  },
  [33] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(178),
  },
  [34] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(180),
  },
  [35] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(182),
  },
  [36] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(184),
  },
  [37] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(186),
  },
  [38] = {
    [sym__char_escape] = STATE(79),
    [sym__ascii] = STATE(79),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_x] = ACTIONS(194),
    [anon_sym_X] = ACTIONS(194),
    [anon_sym_o] = ACTIONS(196),
    [anon_sym_O] = ACTIONS(196),
    [anon_sym_a] = ACTIONS(188),
    [anon_sym_b] = ACTIONS(188),
    [anon_sym_f] = ACTIONS(188),
    [anon_sym_n] = ACTIONS(188),
    [anon_sym_r] = ACTIONS(188),
    [anon_sym_t] = ACTIONS(188),
    [anon_sym_v] = ACTIONS(188),
    [anon_sym_NUL] = ACTIONS(198),
    [anon_sym_SOH] = ACTIONS(198),
    [anon_sym_STX] = ACTIONS(198),
    [anon_sym_ETX] = ACTIONS(198),
    [anon_sym_EOT] = ACTIONS(198),
    [anon_sym_ENQ] = ACTIONS(198),
    [anon_sym_ACK] = ACTIONS(198),
    [anon_sym_BEL] = ACTIONS(198),
    [anon_sym_BS] = ACTIONS(198),
    [anon_sym_HT] = ACTIONS(198),
    [anon_sym_LF] = ACTIONS(198),
    [anon_sym_VT] = ACTIONS(198),
    [anon_sym_FF] = ACTIONS(198),
    [anon_sym_CR] = ACTIONS(198),
    [anon_sym_SO] = ACTIONS(198),
    [anon_sym_SI] = ACTIONS(198),
    [anon_sym_DLE] = ACTIONS(198),
    [anon_sym_DC1] = ACTIONS(198),
    [anon_sym_DC2] = ACTIONS(198),
    [anon_sym_DC3] = ACTIONS(198),
    [anon_sym_DC4] = ACTIONS(198),
    [anon_sym_NAK] = ACTIONS(198),
    [anon_sym_SYN] = ACTIONS(198),
    [anon_sym_ETB] = ACTIONS(198),
    [anon_sym_CAN] = ACTIONS(198),
    [anon_sym_EM] = ACTIONS(198),
    [anon_sym_SUB] = ACTIONS(198),
    [anon_sym_ESC] = ACTIONS(198),
    [anon_sym_FS] = ACTIONS(198),
    [anon_sym_GS] = ACTIONS(198),
    [anon_sym_RS] = ACTIONS(198),
    [anon_sym_US] = ACTIONS(198),
    [anon_sym_SP] = ACTIONS(198),
    [anon_sym_DEL] = ACTIONS(198),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_BANG] = ACTIONS(200),
    [anon_sym__] = ACTIONS(200),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(200),
    [sym__ascii_large] = ACTIONS(200),
    [anon_sym_POUND] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(200),
    [anon_sym_PERCENT] = ACTIONS(200),
    [anon_sym_AMP] = ACTIONS(200),
    [anon_sym_1] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(200),
    [anon_sym_LT] = ACTIONS(200),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_QMARK] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(200),
    [anon_sym_DASH] = ACTIONS(200),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_COLON] = ACTIONS(200),
    [anon_sym_BSLASH] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_BQUOTE] = ACTIONS(200),
    [sym__space] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
    [sym__tab] = ACTIONS(200),
    [sym__vertical_tab] = ACTIONS(200),
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
    [sym_comment] = ACTIONS(76),
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
    [sym_comment] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(76),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_module] = ACTIONS(210),
    [anon_sym_where] = ACTIONS(210),
    [anon_sym_import] = ACTIONS(210),
    [anon_sym_data] = ACTIONS(210),
    [anon_sym_newtype] = ACTIONS(210),
    [anon_sym_type] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(212),
    [sym_constructor_identifier] = ACTIONS(212),
    [sym_module_identifier] = ACTIONS(212),
    [anon_sym_case] = ACTIONS(210),
    [anon_sym_class] = ACTIONS(210),
    [anon_sym_default] = ACTIONS(210),
    [anon_sym_do] = ACTIONS(210),
    [anon_sym_else] = ACTIONS(210),
    [anon_sym_foreign] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(210),
    [anon_sym_in] = ACTIONS(210),
    [anon_sym_infix] = ACTIONS(210),
    [anon_sym_infixl] = ACTIONS(210),
    [anon_sym_infixr] = ACTIONS(210),
    [anon_sym_instance] = ACTIONS(210),
    [anon_sym_let] = ACTIONS(210),
    [anon_sym_of] = ACTIONS(210),
    [anon_sym_then] = ACTIONS(210),
    [anon_sym__] = ACTIONS(210),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(214),
    [sym__ascii_large] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(214),
    [anon_sym_1] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_QMARK] = ACTIONS(214),
    [anon_sym_AT] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_BSLASH] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_BQUOTE] = ACTIONS(214),
    [sym__space] = ACTIONS(214),
    [sym__newline] = ACTIONS(214),
    [sym__tab] = ACTIONS(214),
    [sym__vertical_tab] = ACTIONS(214),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym_comment] = ACTIONS(76),
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
  [46] = {
    [sym__char_escape] = STATE(85),
    [sym__ascii] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_BANG] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(202),
    [sym__ascii_large] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_1] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [sym__space] = ACTIONS(202),
    [sym__newline] = ACTIONS(202),
    [sym__tab] = ACTIONS(202),
    [sym__vertical_tab] = ACTIONS(202),
    [anon_sym_x] = ACTIONS(224),
    [anon_sym_X] = ACTIONS(224),
    [anon_sym_o] = ACTIONS(226),
    [anon_sym_O] = ACTIONS(226),
    [anon_sym_a] = ACTIONS(218),
    [anon_sym_b] = ACTIONS(218),
    [anon_sym_f] = ACTIONS(218),
    [anon_sym_n] = ACTIONS(218),
    [anon_sym_r] = ACTIONS(218),
    [anon_sym_t] = ACTIONS(218),
    [anon_sym_v] = ACTIONS(218),
    [anon_sym_NUL] = ACTIONS(228),
    [anon_sym_SOH] = ACTIONS(228),
    [anon_sym_STX] = ACTIONS(228),
    [anon_sym_ETX] = ACTIONS(228),
    [anon_sym_EOT] = ACTIONS(228),
    [anon_sym_ENQ] = ACTIONS(228),
    [anon_sym_ACK] = ACTIONS(228),
    [anon_sym_BEL] = ACTIONS(228),
    [anon_sym_BS] = ACTIONS(228),
    [anon_sym_HT] = ACTIONS(228),
    [anon_sym_LF] = ACTIONS(228),
    [anon_sym_VT] = ACTIONS(228),
    [anon_sym_FF] = ACTIONS(228),
    [anon_sym_CR] = ACTIONS(228),
    [anon_sym_SO] = ACTIONS(228),
    [anon_sym_SI] = ACTIONS(228),
    [anon_sym_DLE] = ACTIONS(228),
    [anon_sym_DC1] = ACTIONS(228),
    [anon_sym_DC2] = ACTIONS(228),
    [anon_sym_DC3] = ACTIONS(228),
    [anon_sym_DC4] = ACTIONS(228),
    [anon_sym_NAK] = ACTIONS(228),
    [anon_sym_SYN] = ACTIONS(228),
    [anon_sym_ETB] = ACTIONS(228),
    [anon_sym_CAN] = ACTIONS(228),
    [anon_sym_EM] = ACTIONS(228),
    [anon_sym_SUB] = ACTIONS(228),
    [anon_sym_ESC] = ACTIONS(228),
    [anon_sym_FS] = ACTIONS(228),
    [anon_sym_GS] = ACTIONS(228),
    [anon_sym_RS] = ACTIONS(228),
    [anon_sym_US] = ACTIONS(228),
    [anon_sym_SP] = ACTIONS(228),
    [anon_sym_DEL] = ACTIONS(228),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(76),
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
    [sym__gap] = STATE(90),
    [sym__graphic] = STATE(90),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym__] = ACTIONS(90),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(90),
    [sym__ascii_large] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_DOLLAR] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_1] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_TILDE] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [sym__space] = ACTIONS(102),
    [sym__newline] = ACTIONS(102),
    [sym__tab] = ACTIONS(102),
    [sym__vertical_tab] = ACTIONS(102),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_module] = ACTIONS(238),
    [anon_sym_where] = ACTIONS(238),
    [anon_sym_import] = ACTIONS(238),
    [anon_sym_data] = ACTIONS(238),
    [anon_sym_newtype] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(240),
    [sym_constructor_identifier] = ACTIONS(240),
    [sym_module_identifier] = ACTIONS(240),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
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
    [sym_float] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [sym__integer_literal] = ACTIONS(238),
    [sym__octal_literal] = ACTIONS(238),
    [sym__hexidecimal_literal] = ACTIONS(238),
  },
  [50] = {
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
    [aux_sym_program_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(242),
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
  [51] = {
    [sym_export] = STATE(94),
    [sym__identifier] = STATE(95),
    [anon_sym_RPAREN] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [anon_sym_where] = ACTIONS(248),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [sym_import_specification] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_module] = ACTIONS(252),
    [anon_sym_where] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(252),
    [anon_sym_as] = ACTIONS(254),
    [anon_sym_hiding] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(252),
    [anon_sym_newtype] = ACTIONS(252),
    [anon_sym_type] = ACTIONS(252),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(252),
    [anon_sym_class] = ACTIONS(252),
    [anon_sym_default] = ACTIONS(252),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [sym__integer_literal] = ACTIONS(252),
    [sym__octal_literal] = ACTIONS(252),
    [sym__hexidecimal_literal] = ACTIONS(252),
  },
  [54] = {
    [sym__identifier] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(258),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [sym__identifier] = STATE(102),
    [sym_variable_identifier] = ACTIONS(260),
    [sym_constructor_identifier] = ACTIONS(262),
    [sym_module_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_module] = ACTIONS(252),
    [anon_sym_where] = ACTIONS(252),
    [anon_sym_import] = ACTIONS(252),
    [anon_sym_data] = ACTIONS(252),
    [anon_sym_newtype] = ACTIONS(252),
    [anon_sym_type] = ACTIONS(252),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(252),
    [anon_sym_class] = ACTIONS(252),
    [anon_sym_default] = ACTIONS(252),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [sym__integer_literal] = ACTIONS(252),
    [sym__octal_literal] = ACTIONS(252),
    [sym__hexidecimal_literal] = ACTIONS(252),
  },
  [58] = {
    [aux_sym_context_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym_comment] = ACTIONS(26),
  },
  [59] = {
    [sym__identifier] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(156),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [60] = {
    [sym__identifier] = STATE(108),
    [aux_sym_type_synonym_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(154),
    [anon_sym_where] = ACTIONS(154),
    [anon_sym_import] = ACTIONS(154),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_deriving] = ACTIONS(154),
    [anon_sym_newtype] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(154),
    [anon_sym_class] = ACTIONS(154),
    [anon_sym_default] = ACTIONS(154),
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
    [sym_float] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym__integer_literal] = ACTIONS(154),
    [sym__octal_literal] = ACTIONS(154),
    [sym__hexidecimal_literal] = ACTIONS(154),
  },
  [61] = {
    [sym_constructors] = STATE(110),
    [sym_constructor] = STATE(70),
    [sym_deriving] = STATE(111),
    [sym__identifier] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
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
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [62] = {
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [sym__identifier] = STATE(112),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_EQ_GT] = ACTIONS(60),
    [anon_sym_deriving] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [65] = {
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [66] = {
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
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [sym__integer_literal] = ACTIONS(292),
    [sym__octal_literal] = ACTIONS(292),
    [sym__hexidecimal_literal] = ACTIONS(292),
  },
  [67] = {
    [sym_constructors] = STATE(110),
    [sym_constructor] = STATE(70),
    [sym_deriving] = STATE(111),
    [sym__identifier] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
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
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [68] = {
    [sym__identifier] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(296),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [69] = {
    [sym_deriving] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(276),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_module_identifier] = ACTIONS(276),
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
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [70] = {
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
    [sym_variable_identifier] = ACTIONS(304),
    [sym_constructor_identifier] = ACTIONS(304),
    [sym_module_identifier] = ACTIONS(304),
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
    [sym_float] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__integer_literal] = ACTIONS(300),
    [sym__octal_literal] = ACTIONS(300),
    [sym__hexidecimal_literal] = ACTIONS(300),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(276),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_module_identifier] = ACTIONS(276),
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
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [72] = {
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
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__integer_literal] = ACTIONS(308),
    [sym__octal_literal] = ACTIONS(308),
    [sym__hexidecimal_literal] = ACTIONS(308),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_module_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(26),
  },
  [74] = {
    [sym__identifier] = STATE(123),
    [anon_sym_EQ] = ACTIONS(292),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [75] = {
    [sym_new_constructor] = STATE(125),
    [sym_constructor_identifier] = ACTIONS(316),
    [sym_comment] = ACTIONS(26),
  },
  [76] = {
    [sym__identifier] = STATE(126),
    [aux_sym_type_synonym_repeat1] = STATE(127),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_where] = ACTIONS(320),
    [anon_sym_import] = ACTIONS(320),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_newtype] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(322),
    [sym_constructor_identifier] = ACTIONS(322),
    [sym_module_identifier] = ACTIONS(322),
    [anon_sym_case] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
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
    [sym_float] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [sym__integer_literal] = ACTIONS(320),
    [sym__octal_literal] = ACTIONS(320),
    [sym__hexidecimal_literal] = ACTIONS(320),
  },
  [78] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(324),
  },
  [79] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(326),
  },
  [80] = {
    [sym__cntrl] = STATE(129),
    [anon_sym__] = ACTIONS(328),
    [sym_comment] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
  },
  [81] = {
    [aux_sym__escape_repeat1] = STATE(131),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(330),
  },
  [82] = {
    [aux_sym__escape_repeat2] = STATE(133),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(332),
  },
  [83] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(334),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(336),
    [sym__ascii_large] = ACTIONS(336),
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
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_BSLASH] = ACTIONS(336),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_BQUOTE] = ACTIONS(336),
    [sym__space] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
    [sym__tab] = ACTIONS(336),
    [sym__vertical_tab] = ACTIONS(336),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(338),
    [sym__ascii_large] = ACTIONS(338),
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
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [sym__space] = ACTIONS(338),
    [sym__newline] = ACTIONS(338),
    [sym__tab] = ACTIONS(338),
    [sym__vertical_tab] = ACTIONS(338),
  },
  [86] = {
    [sym__cntrl] = STATE(135),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
  },
  [87] = {
    [aux_sym__escape_repeat1] = STATE(137),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(342),
  },
  [88] = {
    [aux_sym__escape_repeat2] = STATE(139),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(344),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym__] = ACTIONS(346),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(346),
    [sym__ascii_large] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_1] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_BSLASH] = ACTIONS(346),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_BQUOTE] = ACTIONS(346),
    [sym__space] = ACTIONS(346),
    [sym__newline] = ACTIONS(346),
    [sym__tab] = ACTIONS(346),
    [sym__vertical_tab] = ACTIONS(346),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(348),
    [sym__ascii_large] = ACTIONS(348),
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
  [91] = {
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
  [92] = {
    [sym__statement] = STATE(49),
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
    [ts_builtin_sym_end] = ACTIONS(356),
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
  [93] = {
    [anon_sym_where] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [aux_sym_module_exports_repeat1] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
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
    [aux_sym_program_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(368),
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
  [97] = {
    [sym__identifier] = STATE(145),
    [sym_variable_identifier] = ACTIONS(260),
    [sym_constructor_identifier] = ACTIONS(262),
    [sym_module_identifier] = ACTIONS(262),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
    [anon_sym_import] = ACTIONS(372),
    [anon_sym_data] = ACTIONS(372),
    [anon_sym_newtype] = ACTIONS(372),
    [anon_sym_type] = ACTIONS(372),
    [sym_variable_identifier] = ACTIONS(374),
    [sym_constructor_identifier] = ACTIONS(374),
    [sym_module_identifier] = ACTIONS(374),
    [anon_sym_case] = ACTIONS(372),
    [anon_sym_class] = ACTIONS(372),
    [anon_sym_default] = ACTIONS(372),
    [anon_sym_do] = ACTIONS(372),
    [anon_sym_else] = ACTIONS(372),
    [anon_sym_foreign] = ACTIONS(372),
    [anon_sym_if] = ACTIONS(372),
    [anon_sym_in] = ACTIONS(372),
    [anon_sym_infix] = ACTIONS(372),
    [anon_sym_infixl] = ACTIONS(372),
    [anon_sym_infixr] = ACTIONS(372),
    [anon_sym_instance] = ACTIONS(372),
    [anon_sym_let] = ACTIONS(372),
    [anon_sym_of] = ACTIONS(372),
    [anon_sym_then] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym__integer_literal] = ACTIONS(372),
    [sym__octal_literal] = ACTIONS(372),
    [sym__hexidecimal_literal] = ACTIONS(372),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_module] = ACTIONS(378),
    [anon_sym_where] = ACTIONS(378),
    [anon_sym_import] = ACTIONS(378),
    [anon_sym_data] = ACTIONS(378),
    [anon_sym_newtype] = ACTIONS(378),
    [anon_sym_type] = ACTIONS(378),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(380),
    [sym_module_identifier] = ACTIONS(380),
    [anon_sym_case] = ACTIONS(378),
    [anon_sym_class] = ACTIONS(378),
    [anon_sym_default] = ACTIONS(378),
    [anon_sym_do] = ACTIONS(378),
    [anon_sym_else] = ACTIONS(378),
    [anon_sym_foreign] = ACTIONS(378),
    [anon_sym_if] = ACTIONS(378),
    [anon_sym_in] = ACTIONS(378),
    [anon_sym_infix] = ACTIONS(378),
    [anon_sym_infixl] = ACTIONS(378),
    [anon_sym_infixr] = ACTIONS(378),
    [anon_sym_instance] = ACTIONS(378),
    [anon_sym_let] = ACTIONS(378),
    [anon_sym_of] = ACTIONS(378),
    [anon_sym_then] = ACTIONS(378),
    [anon_sym__] = ACTIONS(378),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(380),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [sym__integer_literal] = ACTIONS(378),
    [sym__octal_literal] = ACTIONS(378),
    [sym__hexidecimal_literal] = ACTIONS(378),
  },
  [100] = {
    [aux_sym_import_specification_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(26),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_hiding] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [102] = {
    [sym_import_specification] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_where] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(372),
    [anon_sym_hiding] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(372),
    [anon_sym_newtype] = ACTIONS(372),
    [anon_sym_type] = ACTIONS(372),
    [sym_variable_identifier] = ACTIONS(374),
    [sym_constructor_identifier] = ACTIONS(374),
    [sym_module_identifier] = ACTIONS(374),
    [anon_sym_case] = ACTIONS(372),
    [anon_sym_class] = ACTIONS(372),
    [anon_sym_default] = ACTIONS(372),
    [anon_sym_do] = ACTIONS(372),
    [anon_sym_else] = ACTIONS(372),
    [anon_sym_foreign] = ACTIONS(372),
    [anon_sym_if] = ACTIONS(372),
    [anon_sym_in] = ACTIONS(372),
    [anon_sym_infix] = ACTIONS(372),
    [anon_sym_infixl] = ACTIONS(372),
    [anon_sym_infixr] = ACTIONS(372),
    [anon_sym_instance] = ACTIONS(372),
    [anon_sym_let] = ACTIONS(372),
    [anon_sym_of] = ACTIONS(372),
    [anon_sym_then] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym__integer_literal] = ACTIONS(372),
    [sym__octal_literal] = ACTIONS(372),
    [sym__hexidecimal_literal] = ACTIONS(372),
  },
  [103] = {
    [sym__identifier] = STATE(151),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [104] = {
    [sym_class] = STATE(152),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [105] = {
    [anon_sym_EQ_GT] = ACTIONS(388),
    [sym_comment] = ACTIONS(26),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(26),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [sym_comment] = ACTIONS(26),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [109] = {
    [sym_constructors] = STATE(156),
    [sym_constructor] = STATE(70),
    [sym_deriving] = STATE(157),
    [sym__identifier] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_data] = ACTIONS(396),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(396),
    [anon_sym_class] = ACTIONS(396),
    [anon_sym_default] = ACTIONS(396),
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
  [110] = {
    [sym_deriving] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_data] = ACTIONS(396),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_constructor_identifier] = ACTIONS(398),
    [sym_module_identifier] = ACTIONS(398),
    [anon_sym_case] = ACTIONS(396),
    [anon_sym_class] = ACTIONS(396),
    [anon_sym_default] = ACTIONS(396),
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
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_data] = ACTIONS(396),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_constructor_identifier] = ACTIONS(398),
    [sym_module_identifier] = ACTIONS(398),
    [anon_sym_case] = ACTIONS(396),
    [anon_sym_class] = ACTIONS(396),
    [anon_sym_default] = ACTIONS(396),
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
  [112] = {
    [aux_sym_export_repeat1] = STATE(160),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(406),
    [anon_sym_where] = ACTIONS(406),
    [anon_sym_import] = ACTIONS(406),
    [anon_sym_data] = ACTIONS(406),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_deriving] = ACTIONS(406),
    [anon_sym_newtype] = ACTIONS(406),
    [anon_sym_type] = ACTIONS(406),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [anon_sym_case] = ACTIONS(406),
    [anon_sym_class] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(406),
    [anon_sym_do] = ACTIONS(406),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_foreign] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
    [anon_sym_infix] = ACTIONS(406),
    [anon_sym_infixl] = ACTIONS(406),
    [anon_sym_infixr] = ACTIONS(406),
    [anon_sym_instance] = ACTIONS(406),
    [anon_sym_let] = ACTIONS(406),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_then] = ACTIONS(406),
    [anon_sym__] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [sym__integer_literal] = ACTIONS(406),
    [sym__octal_literal] = ACTIONS(406),
    [sym__hexidecimal_literal] = ACTIONS(406),
  },
  [114] = {
    [sym__identifier] = STATE(161),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(412),
    [anon_sym_where] = ACTIONS(412),
    [anon_sym_import] = ACTIONS(412),
    [anon_sym_data] = ACTIONS(412),
    [anon_sym_newtype] = ACTIONS(412),
    [anon_sym_type] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(414),
    [sym_constructor_identifier] = ACTIONS(414),
    [sym_module_identifier] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(414),
    [anon_sym_SQUOTE] = ACTIONS(412),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [sym__integer_literal] = ACTIONS(412),
    [sym__octal_literal] = ACTIONS(412),
    [sym__hexidecimal_literal] = ACTIONS(412),
  },
  [116] = {
    [sym_constructor] = STATE(162),
    [sym__identifier] = STATE(72),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_module] = ACTIONS(418),
    [anon_sym_where] = ACTIONS(418),
    [anon_sym_import] = ACTIONS(418),
    [anon_sym_data] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_deriving] = ACTIONS(418),
    [anon_sym_newtype] = ACTIONS(418),
    [anon_sym_type] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(422),
    [sym_constructor_identifier] = ACTIONS(422),
    [sym_module_identifier] = ACTIONS(422),
    [anon_sym_case] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(418),
    [anon_sym_default] = ACTIONS(418),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(422),
    [anon_sym_SQUOTE] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [sym__integer_literal] = ACTIONS(418),
    [sym__octal_literal] = ACTIONS(418),
    [sym__hexidecimal_literal] = ACTIONS(418),
  },
  [118] = {
    [sym_field] = STATE(165),
    [sym_variable_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym__identifier] = STATE(166),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [anon_sym_module] = ACTIONS(428),
    [anon_sym_where] = ACTIONS(428),
    [anon_sym_import] = ACTIONS(428),
    [anon_sym_data] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_deriving] = ACTIONS(428),
    [anon_sym_newtype] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [sym_variable_identifier] = ACTIONS(430),
    [sym_constructor_identifier] = ACTIONS(430),
    [sym_module_identifier] = ACTIONS(430),
    [anon_sym_case] = ACTIONS(428),
    [anon_sym_class] = ACTIONS(428),
    [anon_sym_default] = ACTIONS(428),
    [anon_sym_do] = ACTIONS(428),
    [anon_sym_else] = ACTIONS(428),
    [anon_sym_foreign] = ACTIONS(428),
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_in] = ACTIONS(428),
    [anon_sym_infix] = ACTIONS(428),
    [anon_sym_infixl] = ACTIONS(428),
    [anon_sym_infixr] = ACTIONS(428),
    [anon_sym_instance] = ACTIONS(428),
    [anon_sym_let] = ACTIONS(428),
    [anon_sym_of] = ACTIONS(428),
    [anon_sym_then] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(430),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(428),
    [sym__octal_literal] = ACTIONS(428),
    [sym__hexidecimal_literal] = ACTIONS(428),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(434),
    [anon_sym_where] = ACTIONS(434),
    [anon_sym_import] = ACTIONS(434),
    [anon_sym_data] = ACTIONS(434),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_deriving] = ACTIONS(434),
    [anon_sym_newtype] = ACTIONS(434),
    [anon_sym_BANG] = ACTIONS(434),
    [anon_sym_type] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(436),
    [sym_constructor_identifier] = ACTIONS(436),
    [sym_module_identifier] = ACTIONS(436),
    [anon_sym_case] = ACTIONS(434),
    [anon_sym_class] = ACTIONS(434),
    [anon_sym_default] = ACTIONS(434),
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
    [anon_sym_of] = ACTIONS(434),
    [anon_sym_then] = ACTIONS(434),
    [anon_sym__] = ACTIONS(434),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [sym__integer_literal] = ACTIONS(434),
    [sym__octal_literal] = ACTIONS(434),
    [sym__hexidecimal_literal] = ACTIONS(434),
  },
  [122] = {
    [sym_strict] = STATE(167),
    [sym__identifier] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(426),
    [anon_sym_module] = ACTIONS(428),
    [anon_sym_where] = ACTIONS(428),
    [anon_sym_import] = ACTIONS(428),
    [anon_sym_data] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(428),
    [anon_sym_deriving] = ACTIONS(428),
    [anon_sym_newtype] = ACTIONS(428),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(428),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(428),
    [anon_sym_class] = ACTIONS(428),
    [anon_sym_default] = ACTIONS(428),
    [anon_sym_do] = ACTIONS(428),
    [anon_sym_else] = ACTIONS(428),
    [anon_sym_foreign] = ACTIONS(428),
    [anon_sym_if] = ACTIONS(428),
    [anon_sym_in] = ACTIONS(428),
    [anon_sym_infix] = ACTIONS(428),
    [anon_sym_infixl] = ACTIONS(428),
    [anon_sym_infixr] = ACTIONS(428),
    [anon_sym_instance] = ACTIONS(428),
    [anon_sym_let] = ACTIONS(428),
    [anon_sym_of] = ACTIONS(428),
    [anon_sym_then] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(430),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(428),
    [sym__octal_literal] = ACTIONS(428),
    [sym__hexidecimal_literal] = ACTIONS(428),
  },
  [123] = {
    [anon_sym_EQ] = ACTIONS(406),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [sym_fields] = STATE(168),
    [sym__identifier] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [sym_deriving] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
    [anon_sym_import] = ACTIONS(440),
    [anon_sym_data] = ACTIONS(440),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(440),
    [anon_sym_type] = ACTIONS(440),
    [sym_variable_identifier] = ACTIONS(442),
    [sym_constructor_identifier] = ACTIONS(442),
    [sym_module_identifier] = ACTIONS(442),
    [anon_sym_case] = ACTIONS(440),
    [anon_sym_class] = ACTIONS(440),
    [anon_sym_default] = ACTIONS(440),
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
  [126] = {
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
  },
  [127] = {
    [sym__identifier] = STATE(170),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(446),
    [anon_sym_where] = ACTIONS(446),
    [anon_sym_import] = ACTIONS(446),
    [anon_sym_data] = ACTIONS(446),
    [anon_sym_newtype] = ACTIONS(446),
    [anon_sym_type] = ACTIONS(446),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(446),
    [anon_sym_class] = ACTIONS(446),
    [anon_sym_default] = ACTIONS(446),
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
    [anon_sym_of] = ACTIONS(446),
    [anon_sym_then] = ACTIONS(446),
    [anon_sym__] = ACTIONS(446),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(446),
    [sym__integer_literal] = ACTIONS(446),
    [sym__octal_literal] = ACTIONS(446),
    [sym__hexidecimal_literal] = ACTIONS(446),
  },
  [128] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(450),
  },
  [129] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(452),
  },
  [130] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(454),
  },
  [131] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(458),
  },
  [132] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(460),
  },
  [133] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(462),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_BANG] = ACTIONS(464),
    [anon_sym__] = ACTIONS(464),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(464),
    [sym__ascii_large] = ACTIONS(464),
    [anon_sym_POUND] = ACTIONS(464),
    [anon_sym_DOLLAR] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(464),
    [anon_sym_AMP] = ACTIONS(464),
    [anon_sym_1] = ACTIONS(464),
    [anon_sym_PLUS] = ACTIONS(464),
    [anon_sym_DOT] = ACTIONS(464),
    [anon_sym_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [anon_sym_QMARK] = ACTIONS(464),
    [anon_sym_AT] = ACTIONS(464),
    [anon_sym_CARET] = ACTIONS(464),
    [anon_sym_DASH] = ACTIONS(464),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_BSLASH] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_BQUOTE] = ACTIONS(464),
    [sym__space] = ACTIONS(464),
    [sym__newline] = ACTIONS(464),
    [sym__tab] = ACTIONS(464),
    [sym__vertical_tab] = ACTIONS(464),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_BANG] = ACTIONS(466),
    [anon_sym__] = ACTIONS(466),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(466),
    [sym__ascii_large] = ACTIONS(466),
    [anon_sym_POUND] = ACTIONS(466),
    [anon_sym_DOLLAR] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(466),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_1] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(466),
    [anon_sym_SLASH] = ACTIONS(466),
    [anon_sym_LT] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [anon_sym_QMARK] = ACTIONS(466),
    [anon_sym_AT] = ACTIONS(466),
    [anon_sym_CARET] = ACTIONS(466),
    [anon_sym_DASH] = ACTIONS(466),
    [anon_sym_TILDE] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(466),
    [anon_sym_BSLASH] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [anon_sym_BQUOTE] = ACTIONS(466),
    [sym__space] = ACTIONS(466),
    [sym__newline] = ACTIONS(466),
    [sym__tab] = ACTIONS(466),
    [sym__vertical_tab] = ACTIONS(466),
  },
  [136] = {
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(468),
    [anon_sym_BANG] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [sym_comment] = ACTIONS(76),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(468),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_BANG] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [sym_comment] = ACTIONS(76),
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
    [sym_comment] = ACTIONS(76),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(474),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_BANG] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [sym_comment] = ACTIONS(76),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(476),
  },
  [140] = {
    [sym_export] = STATE(175),
    [sym__identifier] = STATE(95),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [anon_sym_where] = ACTIONS(478),
    [sym_comment] = ACTIONS(26),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [sym__identifier] = STATE(179),
    [anon_sym_DOT_DOT] = ACTIONS(484),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [sym__statement] = STATE(49),
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
    [ts_builtin_sym_end] = ACTIONS(486),
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
  [145] = {
    [sym_import_specification] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_module] = ACTIONS(490),
    [anon_sym_where] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(490),
    [anon_sym_hiding] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(490),
    [anon_sym_newtype] = ACTIONS(490),
    [anon_sym_type] = ACTIONS(490),
    [sym_variable_identifier] = ACTIONS(492),
    [sym_constructor_identifier] = ACTIONS(492),
    [sym_module_identifier] = ACTIONS(492),
    [anon_sym_case] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(492),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [anon_sym_DQUOTE] = ACTIONS(490),
    [sym__integer_literal] = ACTIONS(490),
    [sym__octal_literal] = ACTIONS(490),
    [sym__hexidecimal_literal] = ACTIONS(490),
  },
  [146] = {
    [sym__identifier] = STATE(182),
    [anon_sym_DOT_DOT] = ACTIONS(494),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [sym__identifier] = STATE(183),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_module] = ACTIONS(498),
    [anon_sym_where] = ACTIONS(498),
    [anon_sym_import] = ACTIONS(498),
    [anon_sym_data] = ACTIONS(498),
    [anon_sym_newtype] = ACTIONS(498),
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
  [149] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(504),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_module] = ACTIONS(490),
    [anon_sym_where] = ACTIONS(490),
    [anon_sym_import] = ACTIONS(490),
    [anon_sym_data] = ACTIONS(490),
    [anon_sym_newtype] = ACTIONS(490),
    [anon_sym_type] = ACTIONS(490),
    [sym_variable_identifier] = ACTIONS(492),
    [sym_constructor_identifier] = ACTIONS(492),
    [sym_module_identifier] = ACTIONS(492),
    [anon_sym_case] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(492),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [anon_sym_DQUOTE] = ACTIONS(490),
    [sym__integer_literal] = ACTIONS(490),
    [sym__octal_literal] = ACTIONS(490),
    [sym__hexidecimal_literal] = ACTIONS(490),
  },
  [151] = {
    [aux_sym_import_specification_repeat1] = STATE(187),
    [anon_sym_LPAREN] = ACTIONS(506),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(504),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [sym_variable_identifier] = ACTIONS(510),
    [sym_constructor_identifier] = ACTIONS(512),
    [sym_module_identifier] = ACTIONS(512),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [sym_class] = STATE(188),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_EQ_GT] = ACTIONS(514),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [sym_deriving] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_module] = ACTIONS(518),
    [anon_sym_where] = ACTIONS(518),
    [anon_sym_import] = ACTIONS(518),
    [anon_sym_data] = ACTIONS(518),
    [anon_sym_deriving] = ACTIONS(168),
    [anon_sym_newtype] = ACTIONS(518),
    [anon_sym_type] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(520),
    [sym_constructor_identifier] = ACTIONS(520),
    [sym_module_identifier] = ACTIONS(520),
    [anon_sym_case] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_default] = ACTIONS(518),
    [anon_sym_do] = ACTIONS(518),
    [anon_sym_else] = ACTIONS(518),
    [anon_sym_foreign] = ACTIONS(518),
    [anon_sym_if] = ACTIONS(518),
    [anon_sym_in] = ACTIONS(518),
    [anon_sym_infix] = ACTIONS(518),
    [anon_sym_infixl] = ACTIONS(518),
    [anon_sym_infixr] = ACTIONS(518),
    [anon_sym_instance] = ACTIONS(518),
    [anon_sym_let] = ACTIONS(518),
    [anon_sym_of] = ACTIONS(518),
    [anon_sym_then] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [sym__integer_literal] = ACTIONS(518),
    [sym__octal_literal] = ACTIONS(518),
    [sym__hexidecimal_literal] = ACTIONS(518),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_module] = ACTIONS(518),
    [anon_sym_where] = ACTIONS(518),
    [anon_sym_import] = ACTIONS(518),
    [anon_sym_data] = ACTIONS(518),
    [anon_sym_newtype] = ACTIONS(518),
    [anon_sym_type] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(520),
    [sym_constructor_identifier] = ACTIONS(520),
    [sym_module_identifier] = ACTIONS(520),
    [anon_sym_case] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_default] = ACTIONS(518),
    [anon_sym_do] = ACTIONS(518),
    [anon_sym_else] = ACTIONS(518),
    [anon_sym_foreign] = ACTIONS(518),
    [anon_sym_if] = ACTIONS(518),
    [anon_sym_in] = ACTIONS(518),
    [anon_sym_infix] = ACTIONS(518),
    [anon_sym_infixl] = ACTIONS(518),
    [anon_sym_infixr] = ACTIONS(518),
    [anon_sym_instance] = ACTIONS(518),
    [anon_sym_let] = ACTIONS(518),
    [anon_sym_of] = ACTIONS(518),
    [anon_sym_then] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [sym__integer_literal] = ACTIONS(518),
    [sym__octal_literal] = ACTIONS(518),
    [sym__hexidecimal_literal] = ACTIONS(518),
  },
  [158] = {
    [sym__identifier] = STATE(191),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_EQ_GT] = ACTIONS(522),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(526),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [aux_sym_export_repeat1] = STATE(195),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_module] = ACTIONS(532),
    [anon_sym_where] = ACTIONS(532),
    [anon_sym_import] = ACTIONS(532),
    [anon_sym_data] = ACTIONS(532),
    [anon_sym_PIPE] = ACTIONS(532),
    [anon_sym_deriving] = ACTIONS(532),
    [anon_sym_newtype] = ACTIONS(532),
    [anon_sym_type] = ACTIONS(532),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_constructor_identifier] = ACTIONS(534),
    [sym_module_identifier] = ACTIONS(534),
    [anon_sym_case] = ACTIONS(532),
    [anon_sym_class] = ACTIONS(532),
    [anon_sym_default] = ACTIONS(532),
    [anon_sym_do] = ACTIONS(532),
    [anon_sym_else] = ACTIONS(532),
    [anon_sym_foreign] = ACTIONS(532),
    [anon_sym_if] = ACTIONS(532),
    [anon_sym_in] = ACTIONS(532),
    [anon_sym_infix] = ACTIONS(532),
    [anon_sym_infixl] = ACTIONS(532),
    [anon_sym_infixr] = ACTIONS(532),
    [anon_sym_instance] = ACTIONS(532),
    [anon_sym_let] = ACTIONS(532),
    [anon_sym_of] = ACTIONS(532),
    [anon_sym_then] = ACTIONS(532),
    [anon_sym__] = ACTIONS(532),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [sym__integer_literal] = ACTIONS(532),
    [sym__octal_literal] = ACTIONS(532),
    [sym__hexidecimal_literal] = ACTIONS(532),
  },
  [163] = {
    [sym_constructor] = STATE(196),
    [sym__identifier] = STATE(72),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [aux_sym_field_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_COLON_COLON] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [aux_sym_fields_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(542),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_module] = ACTIONS(546),
    [anon_sym_where] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_import] = ACTIONS(546),
    [anon_sym_data] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(546),
    [anon_sym_deriving] = ACTIONS(546),
    [anon_sym_newtype] = ACTIONS(546),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_BANG] = ACTIONS(546),
    [anon_sym_type] = ACTIONS(546),
    [sym_variable_identifier] = ACTIONS(548),
    [sym_constructor_identifier] = ACTIONS(548),
    [sym_module_identifier] = ACTIONS(548),
    [anon_sym_case] = ACTIONS(546),
    [anon_sym_class] = ACTIONS(546),
    [anon_sym_default] = ACTIONS(546),
    [anon_sym_do] = ACTIONS(546),
    [anon_sym_else] = ACTIONS(546),
    [anon_sym_foreign] = ACTIONS(546),
    [anon_sym_if] = ACTIONS(546),
    [anon_sym_in] = ACTIONS(546),
    [anon_sym_infix] = ACTIONS(546),
    [anon_sym_infixl] = ACTIONS(546),
    [anon_sym_infixr] = ACTIONS(546),
    [anon_sym_instance] = ACTIONS(546),
    [anon_sym_let] = ACTIONS(546),
    [anon_sym_of] = ACTIONS(546),
    [anon_sym_then] = ACTIONS(546),
    [anon_sym__] = ACTIONS(546),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(546),
    [sym__integer_literal] = ACTIONS(546),
    [sym__octal_literal] = ACTIONS(546),
    [sym__hexidecimal_literal] = ACTIONS(546),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_module] = ACTIONS(552),
    [anon_sym_where] = ACTIONS(552),
    [anon_sym_import] = ACTIONS(552),
    [anon_sym_data] = ACTIONS(552),
    [anon_sym_PIPE] = ACTIONS(552),
    [anon_sym_deriving] = ACTIONS(552),
    [anon_sym_newtype] = ACTIONS(552),
    [anon_sym_BANG] = ACTIONS(552),
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
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [anon_sym_module] = ACTIONS(558),
    [anon_sym_where] = ACTIONS(558),
    [anon_sym_import] = ACTIONS(558),
    [anon_sym_data] = ACTIONS(558),
    [anon_sym_deriving] = ACTIONS(558),
    [anon_sym_newtype] = ACTIONS(558),
    [anon_sym_type] = ACTIONS(558),
    [sym_variable_identifier] = ACTIONS(560),
    [sym_constructor_identifier] = ACTIONS(560),
    [sym_module_identifier] = ACTIONS(560),
    [anon_sym_case] = ACTIONS(558),
    [anon_sym_class] = ACTIONS(558),
    [anon_sym_default] = ACTIONS(558),
    [anon_sym_do] = ACTIONS(558),
    [anon_sym_else] = ACTIONS(558),
    [anon_sym_foreign] = ACTIONS(558),
    [anon_sym_if] = ACTIONS(558),
    [anon_sym_in] = ACTIONS(558),
    [anon_sym_infix] = ACTIONS(558),
    [anon_sym_infixl] = ACTIONS(558),
    [anon_sym_infixr] = ACTIONS(558),
    [anon_sym_instance] = ACTIONS(558),
    [anon_sym_let] = ACTIONS(558),
    [anon_sym_of] = ACTIONS(558),
    [anon_sym_then] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(560),
    [anon_sym_SQUOTE] = ACTIONS(558),
    [anon_sym_DQUOTE] = ACTIONS(558),
    [sym__integer_literal] = ACTIONS(558),
    [sym__octal_literal] = ACTIONS(558),
    [sym__hexidecimal_literal] = ACTIONS(558),
  },
  [169] = {
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
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_module] = ACTIONS(406),
    [anon_sym_where] = ACTIONS(406),
    [anon_sym_import] = ACTIONS(406),
    [anon_sym_data] = ACTIONS(406),
    [anon_sym_newtype] = ACTIONS(406),
    [anon_sym_type] = ACTIONS(406),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [anon_sym_case] = ACTIONS(406),
    [anon_sym_class] = ACTIONS(406),
    [anon_sym_default] = ACTIONS(406),
    [anon_sym_do] = ACTIONS(406),
    [anon_sym_else] = ACTIONS(406),
    [anon_sym_foreign] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(406),
    [anon_sym_in] = ACTIONS(406),
    [anon_sym_infix] = ACTIONS(406),
    [anon_sym_infixl] = ACTIONS(406),
    [anon_sym_infixr] = ACTIONS(406),
    [anon_sym_instance] = ACTIONS(406),
    [anon_sym_let] = ACTIONS(406),
    [anon_sym_of] = ACTIONS(406),
    [anon_sym_then] = ACTIONS(406),
    [anon_sym__] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [sym__integer_literal] = ACTIONS(406),
    [sym__octal_literal] = ACTIONS(406),
    [sym__hexidecimal_literal] = ACTIONS(406),
  },
  [171] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(568),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(568),
  },
  [172] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(570),
  },
  [173] = {
    [anon_sym_LPAREN] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_BANG] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(572),
    [anon_sym_DQUOTE] = ACTIONS(572),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(572),
    [sym__ascii_large] = ACTIONS(572),
    [anon_sym_POUND] = ACTIONS(572),
    [anon_sym_DOLLAR] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(572),
    [anon_sym_1] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_QMARK] = ACTIONS(572),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym_BSLASH] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(572),
    [sym__space] = ACTIONS(572),
    [sym__newline] = ACTIONS(572),
    [sym__tab] = ACTIONS(572),
    [sym__vertical_tab] = ACTIONS(572),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(572),
  },
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_EQ] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_BANG] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [sym_comment] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(574),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(574),
    [sym__ascii_large] = ACTIONS(574),
    [anon_sym_POUND] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_1] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_QMARK] = ACTIONS(574),
    [anon_sym_AT] = ACTIONS(574),
    [anon_sym_CARET] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_TILDE] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__space] = ACTIONS(574),
    [sym__newline] = ACTIONS(574),
    [sym__tab] = ACTIONS(574),
    [sym__vertical_tab] = ACTIONS(574),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(574),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_RPAREN] = ACTIONS(576),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [sym_export] = STATE(203),
    [sym__identifier] = STATE(95),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [anon_sym_where] = ACTIONS(578),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [aux_sym_export_repeat1] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_module] = ACTIONS(584),
    [anon_sym_where] = ACTIONS(584),
    [anon_sym_import] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_newtype] = ACTIONS(584),
    [anon_sym_type] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_constructor_identifier] = ACTIONS(586),
    [sym_module_identifier] = ACTIONS(586),
    [anon_sym_case] = ACTIONS(584),
    [anon_sym_class] = ACTIONS(584),
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
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [aux_sym_export_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_COMMA] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [sym__identifier] = STATE(209),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [anon_sym_module] = ACTIONS(596),
    [anon_sym_where] = ACTIONS(596),
    [anon_sym_import] = ACTIONS(596),
    [anon_sym_data] = ACTIONS(596),
    [anon_sym_newtype] = ACTIONS(596),
    [anon_sym_type] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(598),
    [sym_constructor_identifier] = ACTIONS(598),
    [sym_module_identifier] = ACTIONS(598),
    [anon_sym_case] = ACTIONS(596),
    [anon_sym_class] = ACTIONS(596),
    [anon_sym_default] = ACTIONS(596),
    [anon_sym_do] = ACTIONS(596),
    [anon_sym_else] = ACTIONS(596),
    [anon_sym_foreign] = ACTIONS(596),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_in] = ACTIONS(596),
    [anon_sym_infix] = ACTIONS(596),
    [anon_sym_infixl] = ACTIONS(596),
    [anon_sym_infixr] = ACTIONS(596),
    [anon_sym_instance] = ACTIONS(596),
    [anon_sym_let] = ACTIONS(596),
    [anon_sym_of] = ACTIONS(596),
    [anon_sym_then] = ACTIONS(596),
    [anon_sym__] = ACTIONS(596),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [sym__integer_literal] = ACTIONS(596),
    [sym__octal_literal] = ACTIONS(596),
    [sym__hexidecimal_literal] = ACTIONS(596),
  },
  [186] = {
    [sym__identifier] = STATE(211),
    [anon_sym_DOT_DOT] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(602),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [sym_variable_identifier] = ACTIONS(606),
    [sym_constructor_identifier] = ACTIONS(608),
    [sym_module_identifier] = ACTIONS(608),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [anon_sym_module] = ACTIONS(612),
    [anon_sym_where] = ACTIONS(612),
    [anon_sym_import] = ACTIONS(612),
    [anon_sym_data] = ACTIONS(612),
    [anon_sym_newtype] = ACTIONS(612),
    [anon_sym_type] = ACTIONS(612),
    [sym_variable_identifier] = ACTIONS(614),
    [sym_constructor_identifier] = ACTIONS(614),
    [sym_module_identifier] = ACTIONS(614),
    [anon_sym_case] = ACTIONS(612),
    [anon_sym_class] = ACTIONS(612),
    [anon_sym_default] = ACTIONS(612),
    [anon_sym_do] = ACTIONS(612),
    [anon_sym_else] = ACTIONS(612),
    [anon_sym_foreign] = ACTIONS(612),
    [anon_sym_if] = ACTIONS(612),
    [anon_sym_in] = ACTIONS(612),
    [anon_sym_infix] = ACTIONS(612),
    [anon_sym_infixl] = ACTIONS(612),
    [anon_sym_infixr] = ACTIONS(612),
    [anon_sym_instance] = ACTIONS(612),
    [anon_sym_let] = ACTIONS(612),
    [anon_sym_of] = ACTIONS(612),
    [anon_sym_then] = ACTIONS(612),
    [anon_sym__] = ACTIONS(612),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(612),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym__integer_literal] = ACTIONS(612),
    [sym__octal_literal] = ACTIONS(612),
    [sym__hexidecimal_literal] = ACTIONS(612),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_EQ_GT] = ACTIONS(618),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
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
  [195] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(628),
    [anon_sym_module] = ACTIONS(630),
    [anon_sym_where] = ACTIONS(630),
    [anon_sym_import] = ACTIONS(630),
    [anon_sym_data] = ACTIONS(630),
    [anon_sym_PIPE] = ACTIONS(630),
    [anon_sym_deriving] = ACTIONS(630),
    [anon_sym_newtype] = ACTIONS(630),
    [anon_sym_type] = ACTIONS(630),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_constructor_identifier] = ACTIONS(632),
    [sym_module_identifier] = ACTIONS(632),
    [anon_sym_case] = ACTIONS(630),
    [anon_sym_class] = ACTIONS(630),
    [anon_sym_default] = ACTIONS(630),
    [anon_sym_do] = ACTIONS(630),
    [anon_sym_else] = ACTIONS(630),
    [anon_sym_foreign] = ACTIONS(630),
    [anon_sym_if] = ACTIONS(630),
    [anon_sym_in] = ACTIONS(630),
    [anon_sym_infix] = ACTIONS(630),
    [anon_sym_infixl] = ACTIONS(630),
    [anon_sym_infixr] = ACTIONS(630),
    [anon_sym_instance] = ACTIONS(630),
    [anon_sym_let] = ACTIONS(630),
    [anon_sym_of] = ACTIONS(630),
    [anon_sym_then] = ACTIONS(630),
    [anon_sym__] = ACTIONS(630),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(632),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [sym__integer_literal] = ACTIONS(630),
    [sym__octal_literal] = ACTIONS(630),
    [sym__hexidecimal_literal] = ACTIONS(630),
  },
  [197] = {
    [sym_variable_identifier] = ACTIONS(634),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [sym_strict] = STATE(217),
    [sym__identifier] = STATE(217),
    [anon_sym_BANG] = ACTIONS(636),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_COLON_COLON] = ACTIONS(640),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [sym_field] = STATE(220),
    [sym_variable_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_module] = ACTIONS(644),
    [anon_sym_where] = ACTIONS(644),
    [anon_sym_import] = ACTIONS(644),
    [anon_sym_data] = ACTIONS(644),
    [anon_sym_PIPE] = ACTIONS(644),
    [anon_sym_deriving] = ACTIONS(644),
    [anon_sym_newtype] = ACTIONS(644),
    [anon_sym_type] = ACTIONS(644),
    [sym_variable_identifier] = ACTIONS(646),
    [sym_constructor_identifier] = ACTIONS(646),
    [sym_module_identifier] = ACTIONS(646),
    [anon_sym_case] = ACTIONS(644),
    [anon_sym_class] = ACTIONS(644),
    [anon_sym_default] = ACTIONS(644),
    [anon_sym_do] = ACTIONS(644),
    [anon_sym_else] = ACTIONS(644),
    [anon_sym_foreign] = ACTIONS(644),
    [anon_sym_if] = ACTIONS(644),
    [anon_sym_in] = ACTIONS(644),
    [anon_sym_infix] = ACTIONS(644),
    [anon_sym_infixl] = ACTIONS(644),
    [anon_sym_infixr] = ACTIONS(644),
    [anon_sym_instance] = ACTIONS(644),
    [anon_sym_let] = ACTIONS(644),
    [anon_sym_of] = ACTIONS(644),
    [anon_sym_then] = ACTIONS(644),
    [anon_sym__] = ACTIONS(644),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [sym__integer_literal] = ACTIONS(644),
    [sym__octal_literal] = ACTIONS(644),
    [sym__hexidecimal_literal] = ACTIONS(644),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(648),
    [anon_sym_RBRACE] = ACTIONS(650),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [aux_sym_import_specification_repeat1] = STATE(225),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [sym__identifier] = STATE(228),
    [anon_sym_DOT_DOT] = ACTIONS(662),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [anon_sym_LPAREN] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(666),
    [anon_sym_RPAREN] = ACTIONS(666),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [aux_sym_export_repeat1] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_module] = ACTIONS(670),
    [anon_sym_where] = ACTIONS(670),
    [anon_sym_import] = ACTIONS(670),
    [anon_sym_data] = ACTIONS(670),
    [anon_sym_newtype] = ACTIONS(670),
    [anon_sym_type] = ACTIONS(670),
    [sym_variable_identifier] = ACTIONS(672),
    [sym_constructor_identifier] = ACTIONS(672),
    [sym_module_identifier] = ACTIONS(672),
    [anon_sym_case] = ACTIONS(670),
    [anon_sym_class] = ACTIONS(670),
    [anon_sym_default] = ACTIONS(670),
    [anon_sym_do] = ACTIONS(670),
    [anon_sym_else] = ACTIONS(670),
    [anon_sym_foreign] = ACTIONS(670),
    [anon_sym_if] = ACTIONS(670),
    [anon_sym_in] = ACTIONS(670),
    [anon_sym_infix] = ACTIONS(670),
    [anon_sym_infixl] = ACTIONS(670),
    [anon_sym_infixr] = ACTIONS(670),
    [anon_sym_instance] = ACTIONS(670),
    [anon_sym_let] = ACTIONS(670),
    [anon_sym_of] = ACTIONS(670),
    [anon_sym_then] = ACTIONS(670),
    [anon_sym__] = ACTIONS(670),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(672),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [sym__integer_literal] = ACTIONS(670),
    [sym__octal_literal] = ACTIONS(670),
    [sym__hexidecimal_literal] = ACTIONS(670),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_module] = ACTIONS(678),
    [anon_sym_where] = ACTIONS(678),
    [anon_sym_import] = ACTIONS(678),
    [anon_sym_data] = ACTIONS(678),
    [anon_sym_newtype] = ACTIONS(678),
    [anon_sym_type] = ACTIONS(678),
    [sym_variable_identifier] = ACTIONS(680),
    [sym_constructor_identifier] = ACTIONS(680),
    [sym_module_identifier] = ACTIONS(680),
    [anon_sym_case] = ACTIONS(678),
    [anon_sym_class] = ACTIONS(678),
    [anon_sym_default] = ACTIONS(678),
    [anon_sym_do] = ACTIONS(678),
    [anon_sym_else] = ACTIONS(678),
    [anon_sym_foreign] = ACTIONS(678),
    [anon_sym_if] = ACTIONS(678),
    [anon_sym_in] = ACTIONS(678),
    [anon_sym_infix] = ACTIONS(678),
    [anon_sym_infixl] = ACTIONS(678),
    [anon_sym_infixr] = ACTIONS(678),
    [anon_sym_instance] = ACTIONS(678),
    [anon_sym_let] = ACTIONS(678),
    [anon_sym_of] = ACTIONS(678),
    [anon_sym_then] = ACTIONS(678),
    [anon_sym__] = ACTIONS(678),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [sym__integer_literal] = ACTIONS(678),
    [sym__octal_literal] = ACTIONS(678),
    [sym__hexidecimal_literal] = ACTIONS(678),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_COLON_COLON] = ACTIONS(682),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [sym__identifier] = STATE(166),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(684),
    [sym_comment] = ACTIONS(26),
  },
  [218] = {
    [sym_variable_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [sym_strict] = STATE(232),
    [sym__identifier] = STATE(232),
    [anon_sym_BANG] = ACTIONS(636),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_RBRACE] = ACTIONS(688),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [sym_field] = STATE(233),
    [sym_variable_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(690),
    [anon_sym_module] = ACTIONS(692),
    [anon_sym_where] = ACTIONS(692),
    [anon_sym_import] = ACTIONS(692),
    [anon_sym_data] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(692),
    [anon_sym_deriving] = ACTIONS(692),
    [anon_sym_newtype] = ACTIONS(692),
    [anon_sym_type] = ACTIONS(692),
    [sym_variable_identifier] = ACTIONS(694),
    [sym_constructor_identifier] = ACTIONS(694),
    [sym_module_identifier] = ACTIONS(694),
    [anon_sym_case] = ACTIONS(692),
    [anon_sym_class] = ACTIONS(692),
    [anon_sym_default] = ACTIONS(692),
    [anon_sym_do] = ACTIONS(692),
    [anon_sym_else] = ACTIONS(692),
    [anon_sym_foreign] = ACTIONS(692),
    [anon_sym_if] = ACTIONS(692),
    [anon_sym_in] = ACTIONS(692),
    [anon_sym_infix] = ACTIONS(692),
    [anon_sym_infixl] = ACTIONS(692),
    [anon_sym_infixr] = ACTIONS(692),
    [anon_sym_instance] = ACTIONS(692),
    [anon_sym_let] = ACTIONS(692),
    [anon_sym_of] = ACTIONS(692),
    [anon_sym_then] = ACTIONS(692),
    [anon_sym__] = ACTIONS(692),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(694),
    [anon_sym_SQUOTE] = ACTIONS(692),
    [anon_sym_DQUOTE] = ACTIONS(692),
    [sym__integer_literal] = ACTIONS(692),
    [sym__octal_literal] = ACTIONS(692),
    [sym__hexidecimal_literal] = ACTIONS(692),
  },
  [223] = {
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(698),
    [anon_sym_module] = ACTIONS(700),
    [anon_sym_where] = ACTIONS(700),
    [anon_sym_import] = ACTIONS(700),
    [anon_sym_data] = ACTIONS(700),
    [anon_sym_newtype] = ACTIONS(700),
    [anon_sym_type] = ACTIONS(700),
    [sym_variable_identifier] = ACTIONS(702),
    [sym_constructor_identifier] = ACTIONS(702),
    [sym_module_identifier] = ACTIONS(702),
    [anon_sym_case] = ACTIONS(700),
    [anon_sym_class] = ACTIONS(700),
    [anon_sym_default] = ACTIONS(700),
    [anon_sym_do] = ACTIONS(700),
    [anon_sym_else] = ACTIONS(700),
    [anon_sym_foreign] = ACTIONS(700),
    [anon_sym_if] = ACTIONS(700),
    [anon_sym_in] = ACTIONS(700),
    [anon_sym_infix] = ACTIONS(700),
    [anon_sym_infixl] = ACTIONS(700),
    [anon_sym_infixr] = ACTIONS(700),
    [anon_sym_instance] = ACTIONS(700),
    [anon_sym_let] = ACTIONS(700),
    [anon_sym_of] = ACTIONS(700),
    [anon_sym_then] = ACTIONS(700),
    [anon_sym__] = ACTIONS(700),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(702),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [sym__integer_literal] = ACTIONS(700),
    [sym__octal_literal] = ACTIONS(700),
    [sym__hexidecimal_literal] = ACTIONS(700),
  },
  [225] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [aux_sym_import_specification_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_comment] = ACTIONS(26),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [aux_sym_export_repeat1] = STATE(237),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [sym__identifier] = STATE(239),
    [anon_sym_DOT_DOT] = ACTIONS(708),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_COLON_COLON] = ACTIONS(712),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(714),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_RBRACE] = ACTIONS(716),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_module] = ACTIONS(720),
    [anon_sym_where] = ACTIONS(720),
    [anon_sym_import] = ACTIONS(720),
    [anon_sym_data] = ACTIONS(720),
    [anon_sym_newtype] = ACTIONS(720),
    [anon_sym_type] = ACTIONS(720),
    [sym_variable_identifier] = ACTIONS(722),
    [sym_constructor_identifier] = ACTIONS(722),
    [sym_module_identifier] = ACTIONS(722),
    [anon_sym_case] = ACTIONS(720),
    [anon_sym_class] = ACTIONS(720),
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
  [235] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(726),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(26),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [aux_sym_export_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [aux_sym_import_specification_repeat1] = STATE(244),
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [ts_builtin_sym_end] = ACTIONS(730),
    [anon_sym_module] = ACTIONS(732),
    [anon_sym_where] = ACTIONS(732),
    [anon_sym_import] = ACTIONS(732),
    [anon_sym_data] = ACTIONS(732),
    [anon_sym_newtype] = ACTIONS(732),
    [anon_sym_type] = ACTIONS(732),
    [sym_variable_identifier] = ACTIONS(734),
    [sym_constructor_identifier] = ACTIONS(734),
    [sym_module_identifier] = ACTIONS(734),
    [anon_sym_case] = ACTIONS(732),
    [anon_sym_class] = ACTIONS(732),
    [anon_sym_default] = ACTIONS(732),
    [anon_sym_do] = ACTIONS(732),
    [anon_sym_else] = ACTIONS(732),
    [anon_sym_foreign] = ACTIONS(732),
    [anon_sym_if] = ACTIONS(732),
    [anon_sym_in] = ACTIONS(732),
    [anon_sym_infix] = ACTIONS(732),
    [anon_sym_infixl] = ACTIONS(732),
    [anon_sym_infixr] = ACTIONS(732),
    [anon_sym_instance] = ACTIONS(732),
    [anon_sym_let] = ACTIONS(732),
    [anon_sym_of] = ACTIONS(732),
    [anon_sym_then] = ACTIONS(732),
    [anon_sym__] = ACTIONS(732),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(734),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(732),
    [sym__integer_literal] = ACTIONS(732),
    [sym__octal_literal] = ACTIONS(732),
    [sym__hexidecimal_literal] = ACTIONS(732),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(736),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(738),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(740),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(742),
    [anon_sym_RPAREN] = ACTIONS(742),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(744),
    [anon_sym_module] = ACTIONS(746),
    [anon_sym_where] = ACTIONS(746),
    [anon_sym_import] = ACTIONS(746),
    [anon_sym_data] = ACTIONS(746),
    [anon_sym_newtype] = ACTIONS(746),
    [anon_sym_type] = ACTIONS(746),
    [sym_variable_identifier] = ACTIONS(748),
    [sym_constructor_identifier] = ACTIONS(748),
    [sym_module_identifier] = ACTIONS(748),
    [anon_sym_case] = ACTIONS(746),
    [anon_sym_class] = ACTIONS(746),
    [anon_sym_default] = ACTIONS(746),
    [anon_sym_do] = ACTIONS(746),
    [anon_sym_else] = ACTIONS(746),
    [anon_sym_foreign] = ACTIONS(746),
    [anon_sym_if] = ACTIONS(746),
    [anon_sym_in] = ACTIONS(746),
    [anon_sym_infix] = ACTIONS(746),
    [anon_sym_infixl] = ACTIONS(746),
    [anon_sym_infixr] = ACTIONS(746),
    [anon_sym_instance] = ACTIONS(746),
    [anon_sym_let] = ACTIONS(746),
    [anon_sym_of] = ACTIONS(746),
    [anon_sym_then] = ACTIONS(746),
    [anon_sym__] = ACTIONS(746),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(748),
    [anon_sym_SQUOTE] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(746),
    [sym__integer_literal] = ACTIONS(746),
    [sym__octal_literal] = ACTIONS(746),
    [sym__hexidecimal_literal] = ACTIONS(746),
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
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
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
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1, .fragile = true),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4, .fragile = true),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4, .fragile = true),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4, .fragile = true),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2, .fragile = true),
  [430] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [614] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 5),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [694] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [722] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [748] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
