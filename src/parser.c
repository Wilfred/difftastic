#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 286
#define SYMBOL_COUNT 181
#define ALIAS_COUNT 3
#define TOKEN_COUNT 124
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
  anon_sym_COLON_COLON = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_data = 16,
  anon_sym_EQ = 17,
  anon_sym_EQ_GT = 18,
  anon_sym_PIPE = 19,
  anon_sym_deriving = 20,
  anon_sym_newtype = 21,
  anon_sym_BANG = 22,
  anon_sym_type = 23,
  sym_variable_identifier = 24,
  sym_constructor_identifier = 25,
  sym_module_identifier = 26,
  anon_sym_case = 27,
  anon_sym_default = 28,
  anon_sym_do = 29,
  anon_sym_else = 30,
  anon_sym_foreign = 31,
  anon_sym_if = 32,
  anon_sym_in = 33,
  anon_sym_infix = 34,
  anon_sym_infixl = 35,
  anon_sym_infixr = 36,
  anon_sym_instance = 37,
  anon_sym_let = 38,
  anon_sym_of = 39,
  anon_sym_then = 40,
  anon_sym__ = 41,
  sym_comment = 42,
  sym_float = 43,
  anon_sym_SQUOTE = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 46,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 47,
  sym__ascii_large = 48,
  anon_sym_POUND = 49,
  anon_sym_DOLLAR = 50,
  anon_sym_PERCENT = 51,
  anon_sym_AMP = 52,
  anon_sym_1 = 53,
  anon_sym_PLUS = 54,
  anon_sym_DOT = 55,
  anon_sym_SLASH = 56,
  anon_sym_LT = 57,
  anon_sym_GT = 58,
  anon_sym_QMARK = 59,
  anon_sym_AT = 60,
  anon_sym_CARET = 61,
  anon_sym_DASH = 62,
  anon_sym_TILDE = 63,
  anon_sym_COLON = 64,
  anon_sym_BSLASH = 65,
  anon_sym_SEMI = 66,
  anon_sym_LBRACK = 67,
  anon_sym_RBRACK = 68,
  anon_sym_BQUOTE = 69,
  sym__space = 70,
  sym__newline = 71,
  sym__tab = 72,
  sym__vertical_tab = 73,
  anon_sym_x = 74,
  anon_sym_X = 75,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 76,
  anon_sym_o = 77,
  anon_sym_O = 78,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 79,
  anon_sym_a = 80,
  anon_sym_b = 81,
  anon_sym_f = 82,
  anon_sym_n = 83,
  anon_sym_r = 84,
  anon_sym_t = 85,
  anon_sym_v = 86,
  anon_sym_NUL = 87,
  anon_sym_SOH = 88,
  anon_sym_STX = 89,
  anon_sym_ETX = 90,
  anon_sym_EOT = 91,
  anon_sym_ENQ = 92,
  anon_sym_ACK = 93,
  anon_sym_BEL = 94,
  anon_sym_BS = 95,
  anon_sym_HT = 96,
  anon_sym_LF = 97,
  anon_sym_VT = 98,
  anon_sym_FF = 99,
  anon_sym_CR = 100,
  anon_sym_SO = 101,
  anon_sym_SI = 102,
  anon_sym_DLE = 103,
  anon_sym_DC1 = 104,
  anon_sym_DC2 = 105,
  anon_sym_DC3 = 106,
  anon_sym_DC4 = 107,
  anon_sym_NAK = 108,
  anon_sym_SYN = 109,
  anon_sym_ETB = 110,
  anon_sym_CAN = 111,
  anon_sym_EM = 112,
  anon_sym_SUB = 113,
  anon_sym_ESC = 114,
  anon_sym_FS = 115,
  anon_sym_GS = 116,
  anon_sym_RS = 117,
  anon_sym_US = 118,
  anon_sym_SP = 119,
  anon_sym_DEL = 120,
  sym__integer_literal = 121,
  sym__octal_literal = 122,
  sym__hexidecimal_literal = 123,
  sym_program = 124,
  sym__statement = 125,
  sym_module = 126,
  sym_module_exports = 127,
  sym_export = 128,
  sym_import = 129,
  sym_import_specification = 130,
  sym__top_level_declaration = 131,
  sym_type_class = 132,
  sym_type_class_body = 133,
  sym__general_declaration = 134,
  sym_type_signature = 135,
  sym__type = 136,
  sym_algebraic_datatype = 137,
  sym_context = 138,
  sym_class = 139,
  sym_constructors = 140,
  sym_constructor = 141,
  sym_deriving = 142,
  sym_newtype = 143,
  sym_new_constructor = 144,
  sym_fields = 145,
  sym_field = 146,
  sym_strict = 147,
  sym_type_synonym = 148,
  sym__literal = 149,
  sym__identifier = 150,
  sym_simple_type = 151,
  sym_reserved_identifier = 152,
  sym_integer = 153,
  sym_char = 154,
  sym_string = 155,
  sym__gap = 156,
  sym__graphic = 157,
  sym__small = 158,
  sym__large = 159,
  sym__symbol = 160,
  sym__special = 161,
  sym__escape = 162,
  sym__char_escape = 163,
  sym__ascii = 164,
  sym__cntrl = 165,
  aux_sym_program_repeat1 = 166,
  aux_sym_module_exports_repeat1 = 167,
  aux_sym_export_repeat1 = 168,
  aux_sym_import_specification_repeat1 = 169,
  aux_sym_type_class_repeat1 = 170,
  aux_sym_type_class_body_repeat1 = 171,
  aux_sym__type_repeat1 = 172,
  aux_sym_context_repeat1 = 173,
  aux_sym_constructors_repeat1 = 174,
  aux_sym_constructor_repeat1 = 175,
  aux_sym_fields_repeat1 = 176,
  aux_sym_field_repeat1 = 177,
  aux_sym_string_repeat1 = 178,
  aux_sym__escape_repeat1 = 179,
  aux_sym__escape_repeat2 = 180,
  alias_sym_module_body = 181,
  alias_sym_type_constructor = 182,
  alias_sym_type_variable = 183,
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
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [anon_sym_deriving] = "deriving",
  [anon_sym_newtype] = "newtype",
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
  [sym_type_class_body] = "type_class_body",
  [sym__general_declaration] = "_general_declaration",
  [sym_type_signature] = "type_signature",
  [sym__type] = "_type",
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
  [aux_sym_type_class_body_repeat1] = "type_class_body_repeat1",
  [aux_sym__type_repeat1] = "_type_repeat1",
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [sym_type_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym__general_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
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
  [aux_sym_type_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_repeat1] = {
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
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(92);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(104);
      if (lookahead == '.')
        ADVANCE(106);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(109);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
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
        ADVANCE(27);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(68);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
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
      if (lookahead == '>')
        ADVANCE(26);
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
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(53);
      if (lookahead == 'O')
        ADVANCE(54);
      if (lookahead == 'P')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(59);
      if (lookahead == 'Y')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      if (lookahead == '+')
        ADVANCE(85);
      if (lookahead == '-')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(92);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(104);
      if (lookahead == '.')
        ADVANCE(106);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(109);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'K')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 127:
      if (lookahead == 'L')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(132);
      if (lookahead == 'O')
        ADVANCE(133);
      if (lookahead == 'P')
        ADVANCE(135);
      if (lookahead == 'T')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'Y')
        ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 136:
      if (lookahead == 'X')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 138:
      if (lookahead == 'B')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 140:
      if (lookahead == 'N')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 147:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '+')
        ADVANCE(164);
      if (lookahead == '-')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(165);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 169:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(265);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(273);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(359);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(170);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(178);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(234);
      if (lookahead == 'm')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'o')
        ADVANCE(250);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'w')
        ADVANCE(259);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(264);
      ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'O')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(173);
      if (lookahead == 'x')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 175:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 177:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'l')
        ADVANCE(183);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 180:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead == 'r')
        ADVANCE(197);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(193);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'v')
        ADVANCE(199);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(200);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(201);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(202);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(205);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(209);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(213);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(214);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(218);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(219);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(225);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(229);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(230);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(232);
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
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(235);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(236);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(238);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(239);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(240);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(241);
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
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(245);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(246);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(247);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(248);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(251);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(253);
      if (lookahead == 'y')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(257);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(258);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(262);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(264);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(264);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 265:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(265);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(273);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(359);
      END_STATE();
    case 266:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(268);
      if (lookahead == 'X')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(268);
      if (lookahead == 'x')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(269);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(271);
      END_STATE();
    case 272:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 273:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 274:
      if (lookahead == 'a')
        ADVANCE(275);
      if (lookahead == 'l')
        ADVANCE(278);
      END_STATE();
    case 275:
      if (lookahead == 's')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 278:
      if (lookahead == 'a')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 's')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(286);
      if (lookahead == 'o')
        ADVANCE(298);
      END_STATE();
    case 283:
      if (lookahead == 't')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'a')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 286:
      if (lookahead == 'f')
        ADVANCE(287);
      if (lookahead == 'r')
        ADVANCE(292);
      END_STATE();
    case 287:
      if (lookahead == 'a')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'u')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'l')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 't')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 292:
      if (lookahead == 'i')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'v')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'n')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'g')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 299:
      if (lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 's')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 303:
      if (lookahead == 'o')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'r')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'e')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'i')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'g')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'n')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 310:
      if (lookahead == 'f')
        ADVANCE(311);
      if (lookahead == 'm')
        ADVANCE(312);
      if (lookahead == 'n')
        ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 312:
      if (lookahead == 'p')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'o')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'r')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 't')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'f')
        ADVANCE(318);
      if (lookahead == 's')
        ADVANCE(323);
      END_STATE();
    case 318:
      if (lookahead == 'i')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'x')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(321);
      if (lookahead == 'r')
        ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 323:
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'n')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'c')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'e')
        ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 329:
      if (lookahead == 'e')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 332:
      if (lookahead == 'o')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'd')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'u')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'l')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'e')
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 338:
      if (lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'w')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 't')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'y')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'p')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'e')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_newtype);
      END_STATE();
    case 345:
      if (lookahead == 'f')
        ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 347:
      if (lookahead == 'h')
        ADVANCE(348);
      if (lookahead == 'y')
        ADVANCE(351);
      END_STATE();
    case 348:
      if (lookahead == 'e')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'n')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 351:
      if (lookahead == 'p')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'e')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 354:
      if (lookahead == 'h')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'e')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'r')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'e')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(359);
      if (lookahead == '.')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(359);
      END_STATE();
    case 360:
      if (lookahead == '\n')
        ADVANCE(361);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(396);
      if (lookahead == 'q')
        ADVANCE(397);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(360);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 361:
      if (lookahead == '\n')
        ADVANCE(361);
      if (lookahead == '\r')
        ADVANCE(361);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(376);
      if (lookahead == 'q')
        ADVANCE(377);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == ')')
        ADVANCE(363);
      if (lookahead == ',')
        ADVANCE(364);
      if (lookahead == '-')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == ')')
        ADVANCE(363);
      if (lookahead == ',')
        ADVANCE(364);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '>')
        ADVANCE(366);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == ')')
        ADVANCE(363);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead == '}')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(369);
      END_STATE();
    case 372:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(375);
      END_STATE();
    case 373:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == ']')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(387);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '\n')
        ADVANCE(361);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(396);
      if (lookahead == 'q')
        ADVANCE(397);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(360);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 389:
      if (lookahead == ')')
        ADVANCE(390);
      if (lookahead == ',')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(392);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 391:
      if (lookahead == ')')
        ADVANCE(390);
      if (lookahead == ',')
        ADVANCE(391);
      END_STATE();
    case 392:
      if (lookahead == '>')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == ')')
        ADVANCE(390);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 396:
      if (lookahead == 'n')
        SKIP(360);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'u')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'l')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'd')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(407);
      if (lookahead == '.')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(407);
      END_STATE();
    case 408:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(494);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(408);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 409:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '\r')
        ADVANCE(409);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(410);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(411);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(363);
      if (lookahead == ',')
        ADVANCE(364);
      if (lookahead == '-')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == 'l')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(422);
      if (lookahead == 'e')
        ADVANCE(425);
      if (lookahead == 'o')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(444);
      if (lookahead == 'm')
        ADVANCE(445);
      if (lookahead == 'n')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(451);
      if (lookahead == 's')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(454);
      if (lookahead == 'r')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(481);
      if (lookahead == 'y')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(494);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(408);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(390);
      if (lookahead == ',')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(392);
      END_STATE();
    case 494:
      if (lookahead == 'n')
        SKIP(408);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(497);
      if (lookahead == 'l')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 's')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 's')
        ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 's')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(505);
      if (lookahead == 'e')
        ADVANCE(508);
      if (lookahead == 'o')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'u')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'l')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'l')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 's')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'o')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'r')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'g')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'n')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(528);
      if (lookahead == 'n')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'p')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'o')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'r')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(534);
      if (lookahead == 's')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'x')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'l')
        ADVANCE(537);
      if (lookahead == 'r')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'n')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'c')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'o')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'd')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'u')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'l')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'w')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 't')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'y')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'p')
        ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'h')
        ADVANCE(564);
      if (lookahead == 'y')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'n')
        ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'p')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'h')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'r')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'e')
        ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 575:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(579);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(575);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 576:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '(')
        ADVANCE(410);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(577);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(576);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(576);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(579);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(575);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 579:
      if (lookahead == 'n')
        SKIP(575);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(585);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '.')
        ADVANCE(586);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 581:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(582);
      if (lookahead == ':')
        ADVANCE(583);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(584);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(581);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      if (lookahead == '\n')
        ADVANCE(581);
      if (lookahead == '\r')
        ADVANCE(585);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '.')
        ADVANCE(586);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(580);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 586:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 587:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 588:
      if (lookahead == 'n')
        SKIP(580);
      END_STATE();
    case 589:
      if (lookahead == '\t')
        SKIP(589);
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 590:
      if (lookahead == '\t')
        ADVANCE(590);
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(591);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(595);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(590);
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == ' ')
        ADVANCE(591);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(595);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(590);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '\t')
        SKIP(589);
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 604:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(607);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == ' ')
        ADVANCE(609);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(607);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == ' ')
        ADVANCE(609);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      if (lookahead == '\t')
        ADVANCE(607);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == ' ')
        ADVANCE(609);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(607);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == ' ')
        ADVANCE(609);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(608);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(606);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 612:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(625);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(627);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(612);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 613:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(613);
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
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(614);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(615);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(617);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(234);
      if (lookahead == 'm')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'o')
        ADVANCE(250);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'w')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(613);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 614:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(613);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(616);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(618);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(619);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(620);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(621);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(622);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(613);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(625);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(282);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(627);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(612);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 624:
      if (lookahead == 'n')
        SKIP(612);
      END_STATE();
    case 625:
      if (lookahead == 's')
        ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 627:
      if (lookahead == 'i')
        ADVANCE(628);
      END_STATE();
    case 628:
      if (lookahead == 'd')
        ADVANCE(629);
      END_STATE();
    case 629:
      if (lookahead == 'i')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'n')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'g')
        ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 633:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(634);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(625);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(640);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(627);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(633);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 634:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(634);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(635);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(615);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(636);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(617);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(234);
      if (lookahead == 'm')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead == 'o')
        ADVANCE(250);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'w')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(634);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 635:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(637);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(634);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(625);
      if (lookahead == 'c')
        ADVANCE(274);
      if (lookahead == 'd')
        ADVANCE(640);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(627);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'l')
        ADVANCE(329);
      if (lookahead == 'm')
        ADVANCE(332);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead == 'o')
        ADVANCE(345);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(633);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 639:
      if (lookahead == 'n')
        SKIP(633);
      END_STATE();
    case 640:
      if (lookahead == 'a')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(641);
      if (lookahead == 'o')
        ADVANCE(298);
      END_STATE();
    case 641:
      if (lookahead == 'f')
        ADVANCE(287);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(410);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(644);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 646:
      if (lookahead == 'n')
        SKIP(642);
      END_STATE();
    case 647:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(650);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 648:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(649);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(650);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 651:
      if (lookahead == 'n')
        SKIP(647);
      END_STATE();
    case 652:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(652);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 653:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(410);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(654);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(655);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(653);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(422);
      if (lookahead == 'e')
        ADVANCE(656);
      if (lookahead == 'o')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(426);
      if (lookahead == 'r')
        ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(493);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(652);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 664:
      if (lookahead == 'n')
        SKIP(652);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(505);
      if (lookahead == 'e')
        ADVANCE(666);
      if (lookahead == 'o')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'r')
        ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'v')
        ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'i')
        ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'n')
        ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(398);
      if (lookahead == 'g')
        ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      END_STATE();
    case 673:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(674);
      if (lookahead == '\r')
        ADVANCE(676);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(677);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(673);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 674:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(674);
      if (lookahead == '\r')
        ADVANCE(674);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(675);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(655);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(674);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(674);
      if (lookahead == '\r')
        ADVANCE(676);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(677);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(673);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 677:
      if (lookahead == 'n')
        SKIP(673);
      END_STATE();
    case 678:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == 'A')
        ADVANCE(732);
      if (lookahead == 'B')
        ADVANCE(735);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(753);
      if (lookahead == 'F')
        ADVANCE(764);
      if (lookahead == 'G')
        ADVANCE(767);
      if (lookahead == 'H')
        ADVANCE(768);
      if (lookahead == 'L')
        ADVANCE(769);
      if (lookahead == 'N')
        ADVANCE(770);
      if (lookahead == 'O')
        ADVANCE(771);
      if (lookahead == 'R')
        ADVANCE(772);
      if (lookahead == 'S')
        ADVANCE(773);
      if (lookahead == 'U')
        ADVANCE(774);
      if (lookahead == 'V')
        ADVANCE(775);
      if (lookahead == 'X')
        ADVANCE(776);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(777);
      if (lookahead == 'b')
        ADVANCE(778);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(780);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(678);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      END_STATE();
    case 679:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(679);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == 'A')
        ADVANCE(680);
      if (lookahead == 'B')
        ADVANCE(683);
      if (lookahead == 'C')
        ADVANCE(687);
      if (lookahead == 'D')
        ADVANCE(691);
      if (lookahead == 'E')
        ADVANCE(701);
      if (lookahead == 'F')
        ADVANCE(712);
      if (lookahead == 'G')
        ADVANCE(715);
      if (lookahead == 'H')
        ADVANCE(716);
      if (lookahead == 'L')
        ADVANCE(717);
      if (lookahead == 'N')
        ADVANCE(718);
      if (lookahead == 'O')
        ADVANCE(719);
      if (lookahead == 'R')
        ADVANCE(720);
      if (lookahead == 'S')
        ADVANCE(721);
      if (lookahead == 'U')
        ADVANCE(722);
      if (lookahead == 'V')
        ADVANCE(723);
      if (lookahead == 'X')
        ADVANCE(724);
      if (lookahead == '\\')
        ADVANCE(725);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(726);
      if (lookahead == 'b')
        ADVANCE(727);
      if (lookahead == 'f')
        ADVANCE(728);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(729);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(686);
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
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(688);
      if (lookahead == 'R')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(689);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(692);
      if (lookahead == 'E')
        ADVANCE(697);
      if (lookahead == 'L')
        ADVANCE(699);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(693);
      if (lookahead == '2')
        ADVANCE(694);
      if (lookahead == '3')
        ADVANCE(695);
      if (lookahead == '4')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(698);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(700);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(702);
      if (lookahead == 'N')
        ADVANCE(703);
      if (lookahead == 'O')
        ADVANCE(705);
      if (lookahead == 'S')
        ADVANCE(707);
      if (lookahead == 'T')
        ADVANCE(709);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(704);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(706);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(708);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(710);
      if (lookahead == 'X')
        ADVANCE(711);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(713);
      if (lookahead == 'S')
        ADVANCE(714);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 716:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 717:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 718:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 720:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 721:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(53);
      if (lookahead == 'O')
        ADVANCE(54);
      if (lookahead == 'P')
        ADVANCE(56);
      if (lookahead == 'T')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(59);
      if (lookahead == 'Y')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 722:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 723:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 731:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == 'A')
        ADVANCE(732);
      if (lookahead == 'B')
        ADVANCE(735);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(753);
      if (lookahead == 'F')
        ADVANCE(764);
      if (lookahead == 'G')
        ADVANCE(767);
      if (lookahead == 'H')
        ADVANCE(768);
      if (lookahead == 'L')
        ADVANCE(769);
      if (lookahead == 'N')
        ADVANCE(770);
      if (lookahead == 'O')
        ADVANCE(771);
      if (lookahead == 'R')
        ADVANCE(772);
      if (lookahead == 'S')
        ADVANCE(773);
      if (lookahead == 'U')
        ADVANCE(774);
      if (lookahead == 'V')
        ADVANCE(775);
      if (lookahead == 'X')
        ADVANCE(776);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(777);
      if (lookahead == 'b')
        ADVANCE(778);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(780);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(678);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      END_STATE();
    case 732:
      if (lookahead == 'C')
        ADVANCE(733);
      END_STATE();
    case 733:
      if (lookahead == 'K')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 735:
      if (lookahead == 'E')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(738);
      END_STATE();
    case 736:
      if (lookahead == 'L')
        ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 739:
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'R')
        ADVANCE(742);
      END_STATE();
    case 740:
      if (lookahead == 'N')
        ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 743:
      if (lookahead == 'C')
        ADVANCE(744);
      if (lookahead == 'E')
        ADVANCE(749);
      if (lookahead == 'L')
        ADVANCE(751);
      END_STATE();
    case 744:
      if (lookahead == '1')
        ADVANCE(745);
      if (lookahead == '2')
        ADVANCE(746);
      if (lookahead == '3')
        ADVANCE(747);
      if (lookahead == '4')
        ADVANCE(748);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 749:
      if (lookahead == 'L')
        ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 751:
      if (lookahead == 'E')
        ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 753:
      if (lookahead == 'M')
        ADVANCE(754);
      if (lookahead == 'N')
        ADVANCE(755);
      if (lookahead == 'O')
        ADVANCE(757);
      if (lookahead == 'S')
        ADVANCE(759);
      if (lookahead == 'T')
        ADVANCE(761);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 755:
      if (lookahead == 'Q')
        ADVANCE(756);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 757:
      if (lookahead == 'T')
        ADVANCE(758);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 759:
      if (lookahead == 'C')
        ADVANCE(760);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 761:
      if (lookahead == 'B')
        ADVANCE(762);
      if (lookahead == 'X')
        ADVANCE(763);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 764:
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'S')
        ADVANCE(766);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 767:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 768:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 769:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 770:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 772:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 773:
      if (lookahead == 'I')
        ADVANCE(132);
      if (lookahead == 'O')
        ADVANCE(133);
      if (lookahead == 'P')
        ADVANCE(135);
      if (lookahead == 'T')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'Y')
        ADVANCE(140);
      END_STATE();
    case 774:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 775:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 782:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(795);
      if (lookahead == 'B')
        ADVANCE(796);
      if (lookahead == 'C')
        ADVANCE(797);
      if (lookahead == 'D')
        ADVANCE(798);
      if (lookahead == 'E')
        ADVANCE(799);
      if (lookahead == 'F')
        ADVANCE(800);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(771);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(776);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(777);
      if (lookahead == 'b')
        ADVANCE(778);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(780);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(781);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(784);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == ' ')
        ADVANCE(786);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
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
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(719);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(724);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(793);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(726);
      if (lookahead == 'b')
        ADVANCE(727);
      if (lookahead == 'f')
        ADVANCE(728);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(729);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(730);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(784);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == ' ')
        ADVANCE(786);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
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
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(719);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(724);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(793);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(726);
      if (lookahead == 'b')
        ADVANCE(727);
      if (lookahead == 'f')
        ADVANCE(728);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(729);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(730);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      if (lookahead == '\t')
        ADVANCE(784);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == ' ')
        ADVANCE(786);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
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
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(719);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(724);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(793);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(726);
      if (lookahead == 'b')
        ADVANCE(727);
      if (lookahead == 'f')
        ADVANCE(728);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(729);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(730);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(784);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == ' ')
        ADVANCE(786);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
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
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(719);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(724);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(793);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(726);
      if (lookahead == 'b')
        ADVANCE(727);
      if (lookahead == 'f')
        ADVANCE(728);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(729);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(730);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(596);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(688);
      if (lookahead == 'R')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(692);
      if (lookahead == 'E')
        ADVANCE(697);
      if (lookahead == 'L')
        ADVANCE(699);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(702);
      if (lookahead == 'N')
        ADVANCE(703);
      if (lookahead == 'O')
        ADVANCE(705);
      if (lookahead == 'S')
        ADVANCE(707);
      if (lookahead == 'T')
        ADVANCE(709);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(713);
      if (lookahead == 'S')
        ADVANCE(714);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(785);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(795);
      if (lookahead == 'B')
        ADVANCE(796);
      if (lookahead == 'C')
        ADVANCE(797);
      if (lookahead == 'D')
        ADVANCE(798);
      if (lookahead == 'E')
        ADVANCE(799);
      if (lookahead == 'F')
        ADVANCE(800);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(771);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(776);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(777);
      if (lookahead == 'b')
        ADVANCE(778);
      if (lookahead == 'f')
        ADVANCE(779);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(780);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(781);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(603);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(733);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(738);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'R')
        ADVANCE(742);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(744);
      if (lookahead == 'E')
        ADVANCE(749);
      if (lookahead == 'L')
        ADVANCE(751);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(754);
      if (lookahead == 'N')
        ADVANCE(755);
      if (lookahead == 'O')
        ADVANCE(757);
      if (lookahead == 'S')
        ADVANCE(759);
      if (lookahead == 'T')
        ADVANCE(761);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(765);
      if (lookahead == 'S')
        ADVANCE(766);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(801);
      END_STATE();
    case 802:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(802);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == ':')
        ADVANCE(583);
      if (lookahead == '=')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(803);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(802);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(802);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ':')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(801);
      END_STATE();
    case 805:
      if (lookahead == 'n')
        SKIP(801);
      END_STATE();
    case 806:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(806);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 807:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(808);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(655);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(807);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 808:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(807);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(806);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 810:
      if (lookahead == 'n')
        SKIP(806);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(817);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(812);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
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
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(814);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(814);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(817);
      END_STATE();
    case 816:
      if (lookahead == 'n')
        SKIP(811);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(817);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(819);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(820);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(819);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(828);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '\\')
        ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(825);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(823);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(828);
      END_STATE();
    case 827:
      if (lookahead == 'n')
        SKIP(822);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 829:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(829);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(835);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '\\')
        ADVANCE(831);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(832);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 831:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(830);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(830);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(829);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(835);
      END_STATE();
    case 834:
      if (lookahead == 'n')
        SKIP(829);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 836:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(836);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 837:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(838);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(837);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 838:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(837);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 839:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(837);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(836);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 840:
      if (lookahead == 'n')
        SKIP(836);
      END_STATE();
    case 841:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(843);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == ' ')
        ADVANCE(845);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(846);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(843);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == ' ')
        ADVANCE(845);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(846);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '\t')
        ADVANCE(843);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == ' ')
        ADVANCE(845);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(846);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(843);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == ' ')
        ADVANCE(845);
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
        ADVANCE(592);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(594);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(368);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(846);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(844);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 847:
      if (lookahead == '\t')
        ADVANCE(605);
      if (lookahead == '\n')
        ADVANCE(842);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(847);
      if (lookahead == ' ')
        ADVANCE(598);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '.')
        ADVANCE(600);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(601);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(395);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 848:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(852);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(848);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 849:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(849);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(362);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(369);
      if (lookahead == '\\')
        ADVANCE(850);
      if (lookahead == '_')
        ADVANCE(412);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead == 'd')
        ADVANCE(655);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead == 'm')
        ADVANCE(465);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(487);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(849);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(387);
      ADVANCE(8);
      END_STATE();
    case 850:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(849);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 851:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '0')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(375);
      if (lookahead == '\\')
        SKIP(852);
      if (lookahead == '_')
        ADVANCE(495);
      if (lookahead == 'c')
        ADVANCE(496);
      if (lookahead == 'd')
        ADVANCE(665);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(545);
      if (lookahead == 'm')
        ADVANCE(548);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(563);
      if (lookahead == 'w')
        ADVANCE(570);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(848);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(407);
      END_STATE();
    case 852:
      if (lookahead == 'n')
        SKIP(848);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 360},
  [5] = {.lex_state = 408},
  [6] = {.lex_state = 575},
  [7] = {.lex_state = 580},
  [8] = {.lex_state = 580},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 589},
  [11] = {.lex_state = 604},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 169},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 580},
  [20] = {.lex_state = 612},
  [21] = {.lex_state = 633},
  [22] = {.lex_state = 580},
  [23] = {.lex_state = 642},
  [24] = {.lex_state = 580},
  [25] = {.lex_state = 169},
  [26] = {.lex_state = 642},
  [27] = {.lex_state = 647},
  [28] = {.lex_state = 652},
  [29] = {.lex_state = 580},
  [30] = {.lex_state = 652},
  [31] = {.lex_state = 673},
  [32] = {.lex_state = 580},
  [33] = {.lex_state = 580},
  [34] = {.lex_state = 360},
  [35] = {.lex_state = 360},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 678},
  [43] = {.lex_state = 604},
  [44] = {.lex_state = 604},
  [45] = {.lex_state = 604},
  [46] = {.lex_state = 604},
  [47] = {.lex_state = 169},
  [48] = {.lex_state = 604},
  [49] = {.lex_state = 604},
  [50] = {.lex_state = 782},
  [51] = {.lex_state = 604},
  [52] = {.lex_state = 604},
  [53] = {.lex_state = 169},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 580},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 633},
  [58] = {.lex_state = 580},
  [59] = {.lex_state = 580},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 575},
  [63] = {.lex_state = 801},
  [64] = {.lex_state = 575},
  [65] = {.lex_state = 647},
  [66] = {.lex_state = 647},
  [67] = {.lex_state = 647},
  [68] = {.lex_state = 580},
  [69] = {.lex_state = 580},
  [70] = {.lex_state = 801},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 647},
  [73] = {.lex_state = 673},
  [74] = {.lex_state = 673},
  [75] = {.lex_state = 673},
  [76] = {.lex_state = 806},
  [77] = {.lex_state = 806},
  [78] = {.lex_state = 673},
  [79] = {.lex_state = 673},
  [80] = {.lex_state = 575},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 169},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 673},
  [85] = {.lex_state = 580},
  [86] = {.lex_state = 580},
  [87] = {.lex_state = 811},
  [88] = {.lex_state = 580},
  [89] = {.lex_state = 169},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 818},
  [93] = {.lex_state = 822},
  [94] = {.lex_state = 829},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 604},
  [97] = {.lex_state = 604},
  [98] = {.lex_state = 818},
  [99] = {.lex_state = 822},
  [100] = {.lex_state = 829},
  [101] = {.lex_state = 604},
  [102] = {.lex_state = 604},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 169},
  [106] = {.lex_state = 801},
  [107] = {.lex_state = 801},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 580},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 801},
  [113] = {.lex_state = 633},
  [114] = {.lex_state = 580},
  [115] = {.lex_state = 580},
  [116] = {.lex_state = 169},
  [117] = {.lex_state = 801},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 580},
  [120] = {.lex_state = 580},
  [121] = {.lex_state = 673},
  [122] = {.lex_state = 673},
  [123] = {.lex_state = 169},
  [124] = {.lex_state = 169},
  [125] = {.lex_state = 673},
  [126] = {.lex_state = 580},
  [127] = {.lex_state = 169},
  [128] = {.lex_state = 580},
  [129] = {.lex_state = 169},
  [130] = {.lex_state = 575},
  [131] = {.lex_state = 580},
  [132] = {.lex_state = 169},
  [133] = {.lex_state = 673},
  [134] = {.lex_state = 673},
  [135] = {.lex_state = 580},
  [136] = {.lex_state = 580},
  [137] = {.lex_state = 169},
  [138] = {.lex_state = 836},
  [139] = {.lex_state = 169},
  [140] = {.lex_state = 836},
  [141] = {.lex_state = 836},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 822},
  [145] = {.lex_state = 822},
  [146] = {.lex_state = 829},
  [147] = {.lex_state = 829},
  [148] = {.lex_state = 604},
  [149] = {.lex_state = 604},
  [150] = {.lex_state = 604},
  [151] = {.lex_state = 604},
  [152] = {.lex_state = 841},
  [153] = {.lex_state = 841},
  [154] = {.lex_state = 580},
  [155] = {.lex_state = 169},
  [156] = {.lex_state = 801},
  [157] = {.lex_state = 580},
  [158] = {.lex_state = 169},
  [159] = {.lex_state = 633},
  [160] = {.lex_state = 580},
  [161] = {.lex_state = 580},
  [162] = {.lex_state = 169},
  [163] = {.lex_state = 801},
  [164] = {.lex_state = 169},
  [165] = {.lex_state = 801},
  [166] = {.lex_state = 801},
  [167] = {.lex_state = 580},
  [168] = {.lex_state = 580},
  [169] = {.lex_state = 169},
  [170] = {.lex_state = 580},
  [171] = {.lex_state = 801},
  [172] = {.lex_state = 169},
  [173] = {.lex_state = 360},
  [174] = {.lex_state = 580},
  [175] = {.lex_state = 580},
  [176] = {.lex_state = 580},
  [177] = {.lex_state = 580},
  [178] = {.lex_state = 169},
  [179] = {.lex_state = 169},
  [180] = {.lex_state = 801},
  [181] = {.lex_state = 169},
  [182] = {.lex_state = 580},
  [183] = {.lex_state = 801},
  [184] = {.lex_state = 801},
  [185] = {.lex_state = 848},
  [186] = {.lex_state = 673},
  [187] = {.lex_state = 169},
  [188] = {.lex_state = 169},
  [189] = {.lex_state = 580},
  [190] = {.lex_state = 836},
  [191] = {.lex_state = 169},
  [192] = {.lex_state = 822},
  [193] = {.lex_state = 829},
  [194] = {.lex_state = 604},
  [195] = {.lex_state = 841},
  [196] = {.lex_state = 801},
  [197] = {.lex_state = 580},
  [198] = {.lex_state = 169},
  [199] = {.lex_state = 360},
  [200] = {.lex_state = 801},
  [201] = {.lex_state = 169},
  [202] = {.lex_state = 360},
  [203] = {.lex_state = 801},
  [204] = {.lex_state = 801},
  [205] = {.lex_state = 580},
  [206] = {.lex_state = 169},
  [207] = {.lex_state = 580},
  [208] = {.lex_state = 801},
  [209] = {.lex_state = 801},
  [210] = {.lex_state = 580},
  [211] = {.lex_state = 169},
  [212] = {.lex_state = 360},
  [213] = {.lex_state = 575},
  [214] = {.lex_state = 580},
  [215] = {.lex_state = 169},
  [216] = {.lex_state = 580},
  [217] = {.lex_state = 169},
  [218] = {.lex_state = 801},
  [219] = {.lex_state = 169},
  [220] = {.lex_state = 575},
  [221] = {.lex_state = 580},
  [222] = {.lex_state = 801},
  [223] = {.lex_state = 575},
  [224] = {.lex_state = 169},
  [225] = {.lex_state = 801},
  [226] = {.lex_state = 169},
  [227] = {.lex_state = 580},
  [228] = {.lex_state = 801},
  [229] = {.lex_state = 801},
  [230] = {.lex_state = 801},
  [231] = {.lex_state = 801},
  [232] = {.lex_state = 801},
  [233] = {.lex_state = 580},
  [234] = {.lex_state = 801},
  [235] = {.lex_state = 360},
  [236] = {.lex_state = 801},
  [237] = {.lex_state = 169},
  [238] = {.lex_state = 169},
  [239] = {.lex_state = 580},
  [240] = {.lex_state = 580},
  [241] = {.lex_state = 575},
  [242] = {.lex_state = 580},
  [243] = {.lex_state = 801},
  [244] = {.lex_state = 580},
  [245] = {.lex_state = 169},
  [246] = {.lex_state = 801},
  [247] = {.lex_state = 580},
  [248] = {.lex_state = 801},
  [249] = {.lex_state = 575},
  [250] = {.lex_state = 580},
  [251] = {.lex_state = 801},
  [252] = {.lex_state = 575},
  [253] = {.lex_state = 169},
  [254] = {.lex_state = 169},
  [255] = {.lex_state = 801},
  [256] = {.lex_state = 169},
  [257] = {.lex_state = 801},
  [258] = {.lex_state = 801},
  [259] = {.lex_state = 360},
  [260] = {.lex_state = 801},
  [261] = {.lex_state = 580},
  [262] = {.lex_state = 801},
  [263] = {.lex_state = 580},
  [264] = {.lex_state = 580},
  [265] = {.lex_state = 580},
  [266] = {.lex_state = 801},
  [267] = {.lex_state = 801},
  [268] = {.lex_state = 801},
  [269] = {.lex_state = 801},
  [270] = {.lex_state = 169},
  [271] = {.lex_state = 801},
  [272] = {.lex_state = 801},
  [273] = {.lex_state = 801},
  [274] = {.lex_state = 360},
  [275] = {.lex_state = 801},
  [276] = {.lex_state = 801},
  [277] = {.lex_state = 580},
  [278] = {.lex_state = 580},
  [279] = {.lex_state = 169},
  [280] = {.lex_state = 801},
  [281] = {.lex_state = 801},
  [282] = {.lex_state = 801},
  [283] = {.lex_state = 580},
  [284] = {.lex_state = 801},
  [285] = {.lex_state = 169},
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
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
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
    [anon_sym_DASH_GT] = ACTIONS(136),
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
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_COLON_COLON] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
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
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
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
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_COLON_COLON] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
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
    [sym__type] = STATE(139),
    [sym__identifier] = STATE(140),
    [aux_sym_type_class_repeat1] = STATE(141),
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
    [sym__cntrl] = STATE(143),
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
    [aux_sym__escape_repeat1] = STATE(145),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(355),
  },
  [94] = {
    [aux_sym__escape_repeat2] = STATE(147),
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
    [sym__cntrl] = STATE(149),
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
    [aux_sym__escape_repeat1] = STATE(151),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(367),
  },
  [100] = {
    [aux_sym__escape_repeat2] = STATE(153),
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
    [aux_sym_module_exports_repeat1] = STATE(156),
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
    [aux_sym_program_repeat1] = STATE(158),
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
    [sym__identifier] = STATE(159),
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
    [aux_sym_import_specification_repeat1] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [sym_import_specification] = STATE(164),
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
    [sym__identifier] = STATE(165),
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [sym_class] = STATE(166),
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
    [sym_type_class_body] = STATE(173),
    [sym__general_declaration] = STATE(174),
    [sym_type_signature] = STATE(175),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(176),
    [aux_sym_type_class_body_repeat1] = STATE(177),
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
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
    [sym_constructors] = STATE(178),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(179),
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
    [sym_deriving] = STATE(179),
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
    [sym__identifier] = STATE(180),
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
    [sym_constructor] = STATE(181),
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
    [sym_field] = STATE(184),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym__identifier] = STATE(185),
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
    [sym_strict] = STATE(186),
    [sym__identifier] = STATE(186),
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
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(297),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [sym_fields] = STATE(187),
    [sym__identifier] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(331),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_deriving] = STATE(188),
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
    [anon_sym_DASH_GT] = ACTIONS(136),
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
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_module] = ACTIONS(469),
    [anon_sym_where] = ACTIONS(469),
    [anon_sym_import] = ACTIONS(469),
    [anon_sym_class] = ACTIONS(469),
    [anon_sym_data] = ACTIONS(469),
    [anon_sym_newtype] = ACTIONS(469),
    [anon_sym_type] = ACTIONS(469),
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
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_module] = ACTIONS(162),
    [anon_sym_where] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(162),
    [anon_sym_class] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
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
  [141] = {
    [sym__identifier] = STATE(190),
    [aux_sym__type_repeat1] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_module] = ACTIONS(475),
    [anon_sym_where] = ACTIONS(475),
    [anon_sym_import] = ACTIONS(475),
    [anon_sym_class] = ACTIONS(475),
    [anon_sym_DASH_GT] = ACTIONS(477),
    [anon_sym_data] = ACTIONS(475),
    [anon_sym_newtype] = ACTIONS(475),
    [anon_sym_type] = ACTIONS(475),
    [sym_variable_identifier] = ACTIONS(341),
    [sym_constructor_identifier] = ACTIONS(341),
    [sym_module_identifier] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(475),
    [anon_sym_default] = ACTIONS(475),
    [anon_sym_do] = ACTIONS(475),
    [anon_sym_else] = ACTIONS(475),
    [anon_sym_foreign] = ACTIONS(475),
    [anon_sym_if] = ACTIONS(475),
    [anon_sym_in] = ACTIONS(475),
    [anon_sym_infix] = ACTIONS(475),
    [anon_sym_infixl] = ACTIONS(475),
    [anon_sym_infixr] = ACTIONS(475),
    [anon_sym_instance] = ACTIONS(475),
    [anon_sym_let] = ACTIONS(475),
    [anon_sym_of] = ACTIONS(475),
    [anon_sym_then] = ACTIONS(475),
    [anon_sym__] = ACTIONS(475),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(479),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [sym__integer_literal] = ACTIONS(475),
    [sym__octal_literal] = ACTIONS(475),
    [sym__hexidecimal_literal] = ACTIONS(475),
  },
  [142] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(481),
  },
  [143] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(483),
  },
  [144] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(485),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(485),
  },
  [145] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(489),
  },
  [146] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(491),
  },
  [147] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(493),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [anon_sym__] = ACTIONS(495),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(495),
    [sym__ascii_large] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_AMP] = ACTIONS(495),
    [anon_sym_1] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
    [anon_sym_CARET] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_BSLASH] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [anon_sym_BQUOTE] = ACTIONS(495),
    [sym__space] = ACTIONS(495),
    [sym__newline] = ACTIONS(495),
    [sym__tab] = ACTIONS(495),
    [sym__vertical_tab] = ACTIONS(495),
  },
  [149] = {
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
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_BANG] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(499),
    [sym__ascii_large] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(499),
    [anon_sym_DOLLAR] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_1] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(499),
    [anon_sym_CARET] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_BSLASH] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [sym__space] = ACTIONS(499),
    [sym__newline] = ACTIONS(499),
    [sym__tab] = ACTIONS(499),
    [sym__vertical_tab] = ACTIONS(499),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(499),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_BANG] = ACTIONS(501),
    [anon_sym__] = ACTIONS(501),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(501),
    [sym__ascii_large] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(501),
    [anon_sym_CARET] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [sym__space] = ACTIONS(501),
    [sym__newline] = ACTIONS(501),
    [sym__tab] = ACTIONS(501),
    [sym__vertical_tab] = ACTIONS(501),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(503),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_EQ] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_BANG] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(505),
    [sym__ascii_large] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
    [anon_sym_1] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_SLASH] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_QMARK] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
    [anon_sym_CARET] = ACTIONS(505),
    [anon_sym_DASH] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [anon_sym_BSLASH] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym__space] = ACTIONS(505),
    [sym__newline] = ACTIONS(505),
    [sym__tab] = ACTIONS(505),
    [sym__vertical_tab] = ACTIONS(505),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(505),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_BANG] = ACTIONS(501),
    [anon_sym__] = ACTIONS(501),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(501),
    [sym__ascii_large] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_PERCENT] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
    [anon_sym_1] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_SLASH] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_QMARK] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(501),
    [anon_sym_CARET] = ACTIONS(501),
    [anon_sym_DASH] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_BSLASH] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [sym__space] = ACTIONS(501),
    [sym__newline] = ACTIONS(501),
    [sym__tab] = ACTIONS(501),
    [sym__vertical_tab] = ACTIONS(501),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(507),
  },
  [154] = {
    [sym_export] = STATE(196),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_where] = ACTIONS(509),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(513),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [sym__identifier] = STATE(200),
    [anon_sym_DOT_DOT] = ACTIONS(515),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
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
    [ts_builtin_sym_end] = ACTIONS(517),
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
  [159] = {
    [sym_import_specification] = STATE(201),
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_module] = ACTIONS(521),
    [anon_sym_where] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(521),
    [anon_sym_hiding] = ACTIONS(148),
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
  [160] = {
    [sym__identifier] = STATE(203),
    [anon_sym_DOT_DOT] = ACTIONS(525),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [sym__identifier] = STATE(204),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [anon_sym_module] = ACTIONS(529),
    [anon_sym_where] = ACTIONS(529),
    [anon_sym_import] = ACTIONS(529),
    [anon_sym_class] = ACTIONS(529),
    [anon_sym_data] = ACTIONS(529),
    [anon_sym_newtype] = ACTIONS(529),
    [anon_sym_type] = ACTIONS(529),
    [anon_sym_case] = ACTIONS(529),
    [anon_sym_default] = ACTIONS(529),
    [anon_sym_do] = ACTIONS(529),
    [anon_sym_else] = ACTIONS(529),
    [anon_sym_foreign] = ACTIONS(529),
    [anon_sym_if] = ACTIONS(529),
    [anon_sym_in] = ACTIONS(529),
    [anon_sym_infix] = ACTIONS(529),
    [anon_sym_infixl] = ACTIONS(529),
    [anon_sym_infixr] = ACTIONS(529),
    [anon_sym_instance] = ACTIONS(529),
    [anon_sym_let] = ACTIONS(529),
    [anon_sym_of] = ACTIONS(529),
    [anon_sym_then] = ACTIONS(529),
    [anon_sym__] = ACTIONS(529),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym__integer_literal] = ACTIONS(529),
    [sym__octal_literal] = ACTIONS(529),
    [sym__hexidecimal_literal] = ACTIONS(529),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
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
  [165] = {
    [aux_sym_import_specification_repeat1] = STATE(208),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym_variable_identifier] = ACTIONS(541),
    [sym_constructor_identifier] = ACTIONS(543),
    [sym_module_identifier] = ACTIONS(543),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [sym_class] = STATE(209),
    [sym__identifier] = STATE(64),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_EQ_GT] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [sym_type_class_body] = STATE(212),
    [sym__general_declaration] = STATE(174),
    [sym_type_signature] = STATE(175),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(176),
    [aux_sym_type_class_body_repeat1] = STATE(177),
    [anon_sym_RBRACE] = ACTIONS(547),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_EQ_GT] = ACTIONS(549),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_module] = ACTIONS(553),
    [anon_sym_where] = ACTIONS(553),
    [anon_sym_import] = ACTIONS(553),
    [anon_sym_class] = ACTIONS(553),
    [anon_sym_data] = ACTIONS(553),
    [anon_sym_newtype] = ACTIONS(553),
    [anon_sym_type] = ACTIONS(553),
    [anon_sym_case] = ACTIONS(553),
    [anon_sym_default] = ACTIONS(553),
    [anon_sym_do] = ACTIONS(553),
    [anon_sym_else] = ACTIONS(553),
    [anon_sym_foreign] = ACTIONS(553),
    [anon_sym_if] = ACTIONS(553),
    [anon_sym_in] = ACTIONS(553),
    [anon_sym_infix] = ACTIONS(553),
    [anon_sym_infixl] = ACTIONS(553),
    [anon_sym_infixr] = ACTIONS(553),
    [anon_sym_instance] = ACTIONS(553),
    [anon_sym_let] = ACTIONS(553),
    [anon_sym_of] = ACTIONS(553),
    [anon_sym_then] = ACTIONS(553),
    [anon_sym__] = ACTIONS(553),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [sym__integer_literal] = ACTIONS(553),
    [sym__octal_literal] = ACTIONS(553),
    [sym__hexidecimal_literal] = ACTIONS(553),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_variable_identifier] = ACTIONS(557),
    [sym_constructor_identifier] = ACTIONS(559),
    [sym_module_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [anon_sym_RBRACE] = ACTIONS(561),
    [sym_variable_identifier] = ACTIONS(561),
    [sym_constructor_identifier] = ACTIONS(563),
    [sym_module_identifier] = ACTIONS(563),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [sym__identifier] = STATE(135),
    [anon_sym_COLON_COLON] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [sym__general_declaration] = STATE(214),
    [sym_type_signature] = STATE(175),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(176),
    [anon_sym_RBRACE] = ACTIONS(567),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [sym_deriving] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_where] = ACTIONS(571),
    [anon_sym_import] = ACTIONS(571),
    [anon_sym_class] = ACTIONS(571),
    [anon_sym_data] = ACTIONS(571),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_case] = ACTIONS(571),
    [anon_sym_default] = ACTIONS(571),
    [anon_sym_do] = ACTIONS(571),
    [anon_sym_else] = ACTIONS(571),
    [anon_sym_foreign] = ACTIONS(571),
    [anon_sym_if] = ACTIONS(571),
    [anon_sym_in] = ACTIONS(571),
    [anon_sym_infix] = ACTIONS(571),
    [anon_sym_infixl] = ACTIONS(571),
    [anon_sym_infixr] = ACTIONS(571),
    [anon_sym_instance] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_of] = ACTIONS(571),
    [anon_sym_then] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym__integer_literal] = ACTIONS(571),
    [sym__octal_literal] = ACTIONS(571),
    [sym__hexidecimal_literal] = ACTIONS(571),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(571),
    [anon_sym_where] = ACTIONS(571),
    [anon_sym_import] = ACTIONS(571),
    [anon_sym_class] = ACTIONS(571),
    [anon_sym_data] = ACTIONS(571),
    [anon_sym_newtype] = ACTIONS(571),
    [anon_sym_type] = ACTIONS(571),
    [anon_sym_case] = ACTIONS(571),
    [anon_sym_default] = ACTIONS(571),
    [anon_sym_do] = ACTIONS(571),
    [anon_sym_else] = ACTIONS(571),
    [anon_sym_foreign] = ACTIONS(571),
    [anon_sym_if] = ACTIONS(571),
    [anon_sym_in] = ACTIONS(571),
    [anon_sym_infix] = ACTIONS(571),
    [anon_sym_infixl] = ACTIONS(571),
    [anon_sym_infixr] = ACTIONS(571),
    [anon_sym_instance] = ACTIONS(571),
    [anon_sym_let] = ACTIONS(571),
    [anon_sym_of] = ACTIONS(571),
    [anon_sym_then] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym__integer_literal] = ACTIONS(571),
    [sym__octal_literal] = ACTIONS(571),
    [sym__hexidecimal_literal] = ACTIONS(571),
  },
  [180] = {
    [aux_sym_export_repeat1] = STATE(218),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(577),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_module] = ACTIONS(581),
    [anon_sym_where] = ACTIONS(581),
    [anon_sym_import] = ACTIONS(581),
    [anon_sym_class] = ACTIONS(581),
    [anon_sym_data] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_deriving] = ACTIONS(581),
    [anon_sym_newtype] = ACTIONS(581),
    [anon_sym_type] = ACTIONS(581),
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
  [182] = {
    [sym_constructor] = STATE(219),
    [sym__identifier] = STATE(84),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [aux_sym_field_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(587),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [aux_sym_fields_repeat1] = STATE(225),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [anon_sym_module] = ACTIONS(595),
    [anon_sym_where] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_import] = ACTIONS(595),
    [anon_sym_class] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_data] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(595),
    [anon_sym_deriving] = ACTIONS(595),
    [anon_sym_newtype] = ACTIONS(595),
    [anon_sym_BANG] = ACTIONS(595),
    [anon_sym_type] = ACTIONS(595),
    [sym_variable_identifier] = ACTIONS(597),
    [sym_constructor_identifier] = ACTIONS(597),
    [sym_module_identifier] = ACTIONS(597),
    [anon_sym_case] = ACTIONS(595),
    [anon_sym_default] = ACTIONS(595),
    [anon_sym_do] = ACTIONS(595),
    [anon_sym_else] = ACTIONS(595),
    [anon_sym_foreign] = ACTIONS(595),
    [anon_sym_if] = ACTIONS(595),
    [anon_sym_in] = ACTIONS(595),
    [anon_sym_infix] = ACTIONS(595),
    [anon_sym_infixl] = ACTIONS(595),
    [anon_sym_infixr] = ACTIONS(595),
    [anon_sym_instance] = ACTIONS(595),
    [anon_sym_let] = ACTIONS(595),
    [anon_sym_of] = ACTIONS(595),
    [anon_sym_then] = ACTIONS(595),
    [anon_sym__] = ACTIONS(595),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [sym__integer_literal] = ACTIONS(595),
    [sym__octal_literal] = ACTIONS(595),
    [sym__hexidecimal_literal] = ACTIONS(595),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_module] = ACTIONS(601),
    [anon_sym_where] = ACTIONS(601),
    [anon_sym_import] = ACTIONS(601),
    [anon_sym_class] = ACTIONS(601),
    [anon_sym_data] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_deriving] = ACTIONS(601),
    [anon_sym_newtype] = ACTIONS(601),
    [anon_sym_BANG] = ACTIONS(601),
    [anon_sym_type] = ACTIONS(601),
    [sym_variable_identifier] = ACTIONS(603),
    [sym_constructor_identifier] = ACTIONS(603),
    [sym_module_identifier] = ACTIONS(603),
    [anon_sym_case] = ACTIONS(601),
    [anon_sym_default] = ACTIONS(601),
    [anon_sym_do] = ACTIONS(601),
    [anon_sym_else] = ACTIONS(601),
    [anon_sym_foreign] = ACTIONS(601),
    [anon_sym_if] = ACTIONS(601),
    [anon_sym_in] = ACTIONS(601),
    [anon_sym_infix] = ACTIONS(601),
    [anon_sym_infixl] = ACTIONS(601),
    [anon_sym_infixr] = ACTIONS(601),
    [anon_sym_instance] = ACTIONS(601),
    [anon_sym_let] = ACTIONS(601),
    [anon_sym_of] = ACTIONS(601),
    [anon_sym_then] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_module] = ACTIONS(607),
    [anon_sym_where] = ACTIONS(607),
    [anon_sym_import] = ACTIONS(607),
    [anon_sym_class] = ACTIONS(607),
    [anon_sym_data] = ACTIONS(607),
    [anon_sym_deriving] = ACTIONS(607),
    [anon_sym_newtype] = ACTIONS(607),
    [anon_sym_type] = ACTIONS(607),
    [anon_sym_case] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(607),
    [anon_sym_do] = ACTIONS(607),
    [anon_sym_else] = ACTIONS(607),
    [anon_sym_foreign] = ACTIONS(607),
    [anon_sym_if] = ACTIONS(607),
    [anon_sym_in] = ACTIONS(607),
    [anon_sym_infix] = ACTIONS(607),
    [anon_sym_infixl] = ACTIONS(607),
    [anon_sym_infixr] = ACTIONS(607),
    [anon_sym_instance] = ACTIONS(607),
    [anon_sym_let] = ACTIONS(607),
    [anon_sym_of] = ACTIONS(607),
    [anon_sym_then] = ACTIONS(607),
    [anon_sym__] = ACTIONS(607),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(607),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym__integer_literal] = ACTIONS(607),
    [sym__octal_literal] = ACTIONS(607),
    [sym__hexidecimal_literal] = ACTIONS(607),
  },
  [188] = {
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
  [189] = {
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_module] = ACTIONS(297),
    [anon_sym_where] = ACTIONS(297),
    [anon_sym_import] = ACTIONS(297),
    [anon_sym_class] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
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
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [anon_sym_module] = ACTIONS(619),
    [anon_sym_where] = ACTIONS(619),
    [anon_sym_import] = ACTIONS(619),
    [anon_sym_class] = ACTIONS(619),
    [anon_sym_DASH_GT] = ACTIONS(621),
    [anon_sym_data] = ACTIONS(619),
    [anon_sym_newtype] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_case] = ACTIONS(619),
    [anon_sym_default] = ACTIONS(619),
    [anon_sym_do] = ACTIONS(619),
    [anon_sym_else] = ACTIONS(619),
    [anon_sym_foreign] = ACTIONS(619),
    [anon_sym_if] = ACTIONS(619),
    [anon_sym_in] = ACTIONS(619),
    [anon_sym_infix] = ACTIONS(619),
    [anon_sym_infixl] = ACTIONS(619),
    [anon_sym_infixr] = ACTIONS(619),
    [anon_sym_instance] = ACTIONS(619),
    [anon_sym_let] = ACTIONS(619),
    [anon_sym_of] = ACTIONS(619),
    [anon_sym_then] = ACTIONS(619),
    [anon_sym__] = ACTIONS(619),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym__integer_literal] = ACTIONS(619),
    [sym__octal_literal] = ACTIONS(619),
    [sym__hexidecimal_literal] = ACTIONS(619),
  },
  [192] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(625),
  },
  [193] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(627),
  },
  [194] = {
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_LBRACE] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_EQ] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym__] = ACTIONS(629),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(629),
    [sym__ascii_large] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_1] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_QMARK] = ACTIONS(629),
    [anon_sym_AT] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_BSLASH] = ACTIONS(629),
    [anon_sym_SEMI] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [anon_sym_BQUOTE] = ACTIONS(629),
    [sym__space] = ACTIONS(629),
    [sym__newline] = ACTIONS(629),
    [sym__tab] = ACTIONS(629),
    [sym__vertical_tab] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(629),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [anon_sym_RPAREN] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_EQ] = ACTIONS(631),
    [anon_sym_PIPE] = ACTIONS(631),
    [anon_sym_BANG] = ACTIONS(631),
    [anon_sym__] = ACTIONS(631),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(631),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(631),
    [sym__ascii_large] = ACTIONS(631),
    [anon_sym_POUND] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(631),
    [anon_sym_PERCENT] = ACTIONS(631),
    [anon_sym_AMP] = ACTIONS(631),
    [anon_sym_1] = ACTIONS(631),
    [anon_sym_PLUS] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym_SLASH] = ACTIONS(631),
    [anon_sym_LT] = ACTIONS(631),
    [anon_sym_GT] = ACTIONS(631),
    [anon_sym_QMARK] = ACTIONS(631),
    [anon_sym_AT] = ACTIONS(631),
    [anon_sym_CARET] = ACTIONS(631),
    [anon_sym_DASH] = ACTIONS(631),
    [anon_sym_TILDE] = ACTIONS(631),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_BSLASH] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(631),
    [anon_sym_LBRACK] = ACTIONS(631),
    [anon_sym_RBRACK] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(631),
    [sym__space] = ACTIONS(631),
    [sym__newline] = ACTIONS(631),
    [sym__tab] = ACTIONS(631),
    [sym__vertical_tab] = ACTIONS(631),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(631),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(633),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [sym_export] = STATE(228),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [anon_sym_where] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(637),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [aux_sym_export_repeat1] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(637),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
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
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(645),
    [sym_comment] = ACTIONS(26),
  },
  [203] = {
    [aux_sym_export_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(645),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_RPAREN] = ACTIONS(649),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [sym__identifier] = STATE(234),
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
    [sym__identifier] = STATE(236),
    [anon_sym_DOT_DOT] = ACTIONS(657),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(659),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [sym_variable_identifier] = ACTIONS(663),
    [sym_constructor_identifier] = ACTIONS(665),
    [sym_module_identifier] = ACTIONS(665),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(667),
    [anon_sym_module] = ACTIONS(669),
    [anon_sym_where] = ACTIONS(669),
    [anon_sym_import] = ACTIONS(669),
    [anon_sym_class] = ACTIONS(669),
    [anon_sym_data] = ACTIONS(669),
    [anon_sym_newtype] = ACTIONS(669),
    [anon_sym_type] = ACTIONS(669),
    [anon_sym_case] = ACTIONS(669),
    [anon_sym_default] = ACTIONS(669),
    [anon_sym_do] = ACTIONS(669),
    [anon_sym_else] = ACTIONS(669),
    [anon_sym_foreign] = ACTIONS(669),
    [anon_sym_if] = ACTIONS(669),
    [anon_sym_in] = ACTIONS(669),
    [anon_sym_infix] = ACTIONS(669),
    [anon_sym_infixl] = ACTIONS(669),
    [anon_sym_infixr] = ACTIONS(669),
    [anon_sym_instance] = ACTIONS(669),
    [anon_sym_let] = ACTIONS(669),
    [anon_sym_of] = ACTIONS(669),
    [anon_sym_then] = ACTIONS(669),
    [anon_sym__] = ACTIONS(669),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(671),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__integer_literal] = ACTIONS(669),
    [sym__octal_literal] = ACTIONS(669),
    [sym__hexidecimal_literal] = ACTIONS(669),
  },
  [212] = {
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_comment] = ACTIONS(26),
  },
  [213] = {
    [sym__type] = STATE(239),
    [sym_context] = STATE(240),
    [sym_class] = STATE(25),
    [sym__identifier] = STATE(241),
    [aux_sym_type_class_repeat1] = STATE(242),
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [anon_sym_RBRACE] = ACTIONS(675),
    [sym_variable_identifier] = ACTIONS(675),
    [sym_constructor_identifier] = ACTIONS(677),
    [sym_module_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(26),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(681),
    [anon_sym_where] = ACTIONS(681),
    [anon_sym_import] = ACTIONS(681),
    [anon_sym_class] = ACTIONS(681),
    [anon_sym_data] = ACTIONS(681),
    [anon_sym_newtype] = ACTIONS(681),
    [anon_sym_type] = ACTIONS(681),
    [anon_sym_case] = ACTIONS(681),
    [anon_sym_default] = ACTIONS(681),
    [anon_sym_do] = ACTIONS(681),
    [anon_sym_else] = ACTIONS(681),
    [anon_sym_foreign] = ACTIONS(681),
    [anon_sym_if] = ACTIONS(681),
    [anon_sym_in] = ACTIONS(681),
    [anon_sym_infix] = ACTIONS(681),
    [anon_sym_infixl] = ACTIONS(681),
    [anon_sym_infixr] = ACTIONS(681),
    [anon_sym_instance] = ACTIONS(681),
    [anon_sym_let] = ACTIONS(681),
    [anon_sym_of] = ACTIONS(681),
    [anon_sym_then] = ACTIONS(681),
    [anon_sym__] = ACTIONS(681),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(683),
    [anon_sym_SQUOTE] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym__integer_literal] = ACTIONS(681),
    [sym__octal_literal] = ACTIONS(681),
    [sym__hexidecimal_literal] = ACTIONS(681),
  },
  [216] = {
    [sym__identifier] = STATE(243),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(685),
    [anon_sym_module] = ACTIONS(687),
    [anon_sym_where] = ACTIONS(687),
    [anon_sym_import] = ACTIONS(687),
    [anon_sym_class] = ACTIONS(687),
    [anon_sym_data] = ACTIONS(687),
    [anon_sym_newtype] = ACTIONS(687),
    [anon_sym_type] = ACTIONS(687),
    [anon_sym_case] = ACTIONS(687),
    [anon_sym_default] = ACTIONS(687),
    [anon_sym_do] = ACTIONS(687),
    [anon_sym_else] = ACTIONS(687),
    [anon_sym_foreign] = ACTIONS(687),
    [anon_sym_if] = ACTIONS(687),
    [anon_sym_in] = ACTIONS(687),
    [anon_sym_infix] = ACTIONS(687),
    [anon_sym_infixl] = ACTIONS(687),
    [anon_sym_infixr] = ACTIONS(687),
    [anon_sym_instance] = ACTIONS(687),
    [anon_sym_let] = ACTIONS(687),
    [anon_sym_of] = ACTIONS(687),
    [anon_sym_then] = ACTIONS(687),
    [anon_sym__] = ACTIONS(687),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym__integer_literal] = ACTIONS(687),
    [sym__octal_literal] = ACTIONS(687),
    [sym__hexidecimal_literal] = ACTIONS(687),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym_comment] = ACTIONS(26),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_module] = ACTIONS(697),
    [anon_sym_where] = ACTIONS(697),
    [anon_sym_import] = ACTIONS(697),
    [anon_sym_class] = ACTIONS(697),
    [anon_sym_data] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_deriving] = ACTIONS(697),
    [anon_sym_newtype] = ACTIONS(697),
    [anon_sym_type] = ACTIONS(697),
    [anon_sym_case] = ACTIONS(697),
    [anon_sym_default] = ACTIONS(697),
    [anon_sym_do] = ACTIONS(697),
    [anon_sym_else] = ACTIONS(697),
    [anon_sym_foreign] = ACTIONS(697),
    [anon_sym_if] = ACTIONS(697),
    [anon_sym_in] = ACTIONS(697),
    [anon_sym_infix] = ACTIONS(697),
    [anon_sym_infixl] = ACTIONS(697),
    [anon_sym_infixr] = ACTIONS(697),
    [anon_sym_instance] = ACTIONS(697),
    [anon_sym_let] = ACTIONS(697),
    [anon_sym_of] = ACTIONS(697),
    [anon_sym_then] = ACTIONS(697),
    [anon_sym__] = ACTIONS(697),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(699),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [sym__integer_literal] = ACTIONS(697),
    [sym__octal_literal] = ACTIONS(697),
    [sym__hexidecimal_literal] = ACTIONS(697),
  },
  [220] = {
    [sym_variable_identifier] = ACTIONS(701),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [sym_strict] = STATE(248),
    [sym__identifier] = STATE(248),
    [anon_sym_BANG] = ACTIONS(703),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_COLON_COLON] = ACTIONS(707),
    [sym_comment] = ACTIONS(26),
  },
  [223] = {
    [sym_field] = STATE(251),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(711),
    [anon_sym_where] = ACTIONS(711),
    [anon_sym_import] = ACTIONS(711),
    [anon_sym_class] = ACTIONS(711),
    [anon_sym_data] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(711),
    [anon_sym_deriving] = ACTIONS(711),
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
  [225] = {
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_module] = ACTIONS(721),
    [anon_sym_where] = ACTIONS(721),
    [anon_sym_import] = ACTIONS(721),
    [anon_sym_class] = ACTIONS(721),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [anon_sym_data] = ACTIONS(721),
    [anon_sym_newtype] = ACTIONS(721),
    [anon_sym_type] = ACTIONS(721),
    [anon_sym_case] = ACTIONS(721),
    [anon_sym_default] = ACTIONS(721),
    [anon_sym_do] = ACTIONS(721),
    [anon_sym_else] = ACTIONS(721),
    [anon_sym_foreign] = ACTIONS(721),
    [anon_sym_if] = ACTIONS(721),
    [anon_sym_in] = ACTIONS(721),
    [anon_sym_infix] = ACTIONS(721),
    [anon_sym_infixl] = ACTIONS(721),
    [anon_sym_infixr] = ACTIONS(721),
    [anon_sym_instance] = ACTIONS(721),
    [anon_sym_let] = ACTIONS(721),
    [anon_sym_of] = ACTIONS(721),
    [anon_sym_then] = ACTIONS(721),
    [anon_sym__] = ACTIONS(721),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(721),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym__integer_literal] = ACTIONS(721),
    [sym__octal_literal] = ACTIONS(721),
    [sym__hexidecimal_literal] = ACTIONS(721),
  },
  [227] = {
    [sym__identifier] = STATE(254),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(725),
    [sym_comment] = ACTIONS(26),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(727),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_comment] = ACTIONS(26),
  },
  [231] = {
    [aux_sym_import_specification_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [sym__identifier] = STATE(260),
    [anon_sym_DOT_DOT] = ACTIONS(735),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [anon_sym_LPAREN] = ACTIONS(737),
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
  },
  [236] = {
    [aux_sym_export_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [anon_sym_module] = ACTIONS(743),
    [anon_sym_where] = ACTIONS(743),
    [anon_sym_import] = ACTIONS(743),
    [anon_sym_class] = ACTIONS(743),
    [anon_sym_data] = ACTIONS(743),
    [anon_sym_newtype] = ACTIONS(743),
    [anon_sym_type] = ACTIONS(743),
    [anon_sym_case] = ACTIONS(743),
    [anon_sym_default] = ACTIONS(743),
    [anon_sym_do] = ACTIONS(743),
    [anon_sym_else] = ACTIONS(743),
    [anon_sym_foreign] = ACTIONS(743),
    [anon_sym_if] = ACTIONS(743),
    [anon_sym_in] = ACTIONS(743),
    [anon_sym_infix] = ACTIONS(743),
    [anon_sym_infixl] = ACTIONS(743),
    [anon_sym_infixr] = ACTIONS(743),
    [anon_sym_instance] = ACTIONS(743),
    [anon_sym_let] = ACTIONS(743),
    [anon_sym_of] = ACTIONS(743),
    [anon_sym_then] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(745),
    [anon_sym_SQUOTE] = ACTIONS(743),
    [anon_sym_DQUOTE] = ACTIONS(743),
    [sym__integer_literal] = ACTIONS(743),
    [sym__octal_literal] = ACTIONS(743),
    [sym__hexidecimal_literal] = ACTIONS(743),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(747),
    [anon_sym_module] = ACTIONS(749),
    [anon_sym_where] = ACTIONS(749),
    [anon_sym_import] = ACTIONS(749),
    [anon_sym_class] = ACTIONS(749),
    [anon_sym_data] = ACTIONS(749),
    [anon_sym_newtype] = ACTIONS(749),
    [anon_sym_type] = ACTIONS(749),
    [anon_sym_case] = ACTIONS(749),
    [anon_sym_default] = ACTIONS(749),
    [anon_sym_do] = ACTIONS(749),
    [anon_sym_else] = ACTIONS(749),
    [anon_sym_foreign] = ACTIONS(749),
    [anon_sym_if] = ACTIONS(749),
    [anon_sym_in] = ACTIONS(749),
    [anon_sym_infix] = ACTIONS(749),
    [anon_sym_infixl] = ACTIONS(749),
    [anon_sym_infixr] = ACTIONS(749),
    [anon_sym_instance] = ACTIONS(749),
    [anon_sym_let] = ACTIONS(749),
    [anon_sym_of] = ACTIONS(749),
    [anon_sym_then] = ACTIONS(749),
    [anon_sym__] = ACTIONS(749),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(751),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [sym__integer_literal] = ACTIONS(749),
    [sym__octal_literal] = ACTIONS(749),
    [sym__hexidecimal_literal] = ACTIONS(749),
  },
  [239] = {
    [anon_sym_RBRACE] = ACTIONS(753),
    [sym_variable_identifier] = ACTIONS(753),
    [sym_constructor_identifier] = ACTIONS(755),
    [sym_module_identifier] = ACTIONS(755),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [sym__type] = STATE(263),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(242),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [sym__identifier] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(757),
    [sym_constructor_identifier] = ACTIONS(166),
    [sym_module_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [sym__identifier] = STATE(135),
    [aux_sym__type_repeat1] = STATE(265),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_DASH_GT] = ACTIONS(760),
    [sym_variable_identifier] = ACTIONS(475),
    [sym_constructor_identifier] = ACTIONS(479),
    [sym_module_identifier] = ACTIONS(479),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(762),
    [anon_sym_RPAREN] = ACTIONS(762),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [sym__identifier] = STATE(266),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
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
  [246] = {
    [anon_sym_COMMA] = ACTIONS(770),
    [anon_sym_COLON_COLON] = ACTIONS(770),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [sym__identifier] = STATE(185),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(772),
    [sym_comment] = ACTIONS(26),
  },
  [249] = {
    [sym_variable_identifier] = ACTIONS(774),
    [sym_comment] = ACTIONS(26),
  },
  [250] = {
    [sym_strict] = STATE(268),
    [sym__identifier] = STATE(268),
    [anon_sym_BANG] = ACTIONS(703),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(776),
    [sym_comment] = ACTIONS(26),
  },
  [252] = {
    [sym_field] = STATE(269),
    [sym_variable_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(778),
    [anon_sym_module] = ACTIONS(780),
    [anon_sym_where] = ACTIONS(780),
    [anon_sym_import] = ACTIONS(780),
    [anon_sym_class] = ACTIONS(780),
    [anon_sym_data] = ACTIONS(780),
    [anon_sym_PIPE] = ACTIONS(780),
    [anon_sym_deriving] = ACTIONS(780),
    [anon_sym_newtype] = ACTIONS(780),
    [anon_sym_type] = ACTIONS(780),
    [anon_sym_case] = ACTIONS(780),
    [anon_sym_default] = ACTIONS(780),
    [anon_sym_do] = ACTIONS(780),
    [anon_sym_else] = ACTIONS(780),
    [anon_sym_foreign] = ACTIONS(780),
    [anon_sym_if] = ACTIONS(780),
    [anon_sym_in] = ACTIONS(780),
    [anon_sym_infix] = ACTIONS(780),
    [anon_sym_infixl] = ACTIONS(780),
    [anon_sym_infixr] = ACTIONS(780),
    [anon_sym_instance] = ACTIONS(780),
    [anon_sym_let] = ACTIONS(780),
    [anon_sym_of] = ACTIONS(780),
    [anon_sym_then] = ACTIONS(780),
    [anon_sym__] = ACTIONS(780),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(782),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [sym__integer_literal] = ACTIONS(780),
    [sym__octal_literal] = ACTIONS(780),
    [sym__hexidecimal_literal] = ACTIONS(780),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(784),
    [anon_sym_module] = ACTIONS(786),
    [anon_sym_where] = ACTIONS(786),
    [anon_sym_import] = ACTIONS(786),
    [anon_sym_class] = ACTIONS(786),
    [anon_sym_DASH_GT] = ACTIONS(786),
    [anon_sym_data] = ACTIONS(786),
    [anon_sym_newtype] = ACTIONS(786),
    [anon_sym_type] = ACTIONS(786),
    [anon_sym_case] = ACTIONS(786),
    [anon_sym_default] = ACTIONS(786),
    [anon_sym_do] = ACTIONS(786),
    [anon_sym_else] = ACTIONS(786),
    [anon_sym_foreign] = ACTIONS(786),
    [anon_sym_if] = ACTIONS(786),
    [anon_sym_in] = ACTIONS(786),
    [anon_sym_infix] = ACTIONS(786),
    [anon_sym_infixl] = ACTIONS(786),
    [anon_sym_infixr] = ACTIONS(786),
    [anon_sym_instance] = ACTIONS(786),
    [anon_sym_let] = ACTIONS(786),
    [anon_sym_of] = ACTIONS(786),
    [anon_sym_then] = ACTIONS(786),
    [anon_sym__] = ACTIONS(786),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(788),
    [anon_sym_SQUOTE] = ACTIONS(786),
    [anon_sym_DQUOTE] = ACTIONS(786),
    [sym__integer_literal] = ACTIONS(786),
    [sym__octal_literal] = ACTIONS(786),
    [sym__hexidecimal_literal] = ACTIONS(786),
  },
  [255] = {
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RPAREN] = ACTIONS(790),
    [sym_comment] = ACTIONS(26),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(792),
    [anon_sym_module] = ACTIONS(794),
    [anon_sym_where] = ACTIONS(794),
    [anon_sym_import] = ACTIONS(794),
    [anon_sym_class] = ACTIONS(794),
    [anon_sym_data] = ACTIONS(794),
    [anon_sym_newtype] = ACTIONS(794),
    [anon_sym_type] = ACTIONS(794),
    [anon_sym_case] = ACTIONS(794),
    [anon_sym_default] = ACTIONS(794),
    [anon_sym_do] = ACTIONS(794),
    [anon_sym_else] = ACTIONS(794),
    [anon_sym_foreign] = ACTIONS(794),
    [anon_sym_if] = ACTIONS(794),
    [anon_sym_in] = ACTIONS(794),
    [anon_sym_infix] = ACTIONS(794),
    [anon_sym_infixl] = ACTIONS(794),
    [anon_sym_infixr] = ACTIONS(794),
    [anon_sym_instance] = ACTIONS(794),
    [anon_sym_let] = ACTIONS(794),
    [anon_sym_of] = ACTIONS(794),
    [anon_sym_then] = ACTIONS(794),
    [anon_sym__] = ACTIONS(794),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(796),
    [anon_sym_SQUOTE] = ACTIONS(794),
    [anon_sym_DQUOTE] = ACTIONS(794),
    [sym__integer_literal] = ACTIONS(794),
    [sym__octal_literal] = ACTIONS(794),
    [sym__hexidecimal_literal] = ACTIONS(794),
  },
  [257] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [aux_sym_import_specification_repeat1] = STATE(271),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(26),
  },
  [260] = {
    [aux_sym_export_repeat1] = STATE(273),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(26),
  },
  [261] = {
    [sym__identifier] = STATE(275),
    [anon_sym_DOT_DOT] = ACTIONS(802),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [262] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(804),
    [sym_comment] = ACTIONS(26),
  },
  [263] = {
    [anon_sym_RBRACE] = ACTIONS(806),
    [sym_variable_identifier] = ACTIONS(806),
    [sym_constructor_identifier] = ACTIONS(808),
    [sym_module_identifier] = ACTIONS(808),
    [sym_comment] = ACTIONS(26),
  },
  [264] = {
    [sym__identifier] = STATE(277),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [265] = {
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_DASH_GT] = ACTIONS(810),
    [sym_variable_identifier] = ACTIONS(619),
    [sym_constructor_identifier] = ACTIONS(623),
    [sym_module_identifier] = ACTIONS(623),
    [sym_comment] = ACTIONS(26),
  },
  [266] = {
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
    [sym_comment] = ACTIONS(26),
  },
  [267] = {
    [anon_sym_COMMA] = ACTIONS(814),
    [anon_sym_COLON_COLON] = ACTIONS(814),
    [sym_comment] = ACTIONS(26),
  },
  [268] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [sym_comment] = ACTIONS(26),
  },
  [269] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RBRACE] = ACTIONS(818),
    [sym_comment] = ACTIONS(26),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [anon_sym_module] = ACTIONS(822),
    [anon_sym_where] = ACTIONS(822),
    [anon_sym_import] = ACTIONS(822),
    [anon_sym_class] = ACTIONS(822),
    [anon_sym_data] = ACTIONS(822),
    [anon_sym_newtype] = ACTIONS(822),
    [anon_sym_type] = ACTIONS(822),
    [anon_sym_case] = ACTIONS(822),
    [anon_sym_default] = ACTIONS(822),
    [anon_sym_do] = ACTIONS(822),
    [anon_sym_else] = ACTIONS(822),
    [anon_sym_foreign] = ACTIONS(822),
    [anon_sym_if] = ACTIONS(822),
    [anon_sym_in] = ACTIONS(822),
    [anon_sym_infix] = ACTIONS(822),
    [anon_sym_infixl] = ACTIONS(822),
    [anon_sym_infixr] = ACTIONS(822),
    [anon_sym_instance] = ACTIONS(822),
    [anon_sym_let] = ACTIONS(822),
    [anon_sym_of] = ACTIONS(822),
    [anon_sym_then] = ACTIONS(822),
    [anon_sym__] = ACTIONS(822),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(824),
    [anon_sym_SQUOTE] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [sym__integer_literal] = ACTIONS(822),
    [sym__octal_literal] = ACTIONS(822),
    [sym__hexidecimal_literal] = ACTIONS(822),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(26),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(828),
    [anon_sym_RPAREN] = ACTIONS(828),
    [sym_comment] = ACTIONS(26),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(26),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(26),
  },
  [275] = {
    [aux_sym_export_repeat1] = STATE(281),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(26),
  },
  [276] = {
    [aux_sym_import_specification_repeat1] = STATE(282),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(26),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [sym_variable_identifier] = ACTIONS(721),
    [sym_constructor_identifier] = ACTIONS(723),
    [sym_module_identifier] = ACTIONS(723),
    [sym_comment] = ACTIONS(26),
  },
  [278] = {
    [sym__identifier] = STATE(283),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [279] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [anon_sym_module] = ACTIONS(834),
    [anon_sym_where] = ACTIONS(834),
    [anon_sym_import] = ACTIONS(834),
    [anon_sym_class] = ACTIONS(834),
    [anon_sym_data] = ACTIONS(834),
    [anon_sym_newtype] = ACTIONS(834),
    [anon_sym_type] = ACTIONS(834),
    [anon_sym_case] = ACTIONS(834),
    [anon_sym_default] = ACTIONS(834),
    [anon_sym_do] = ACTIONS(834),
    [anon_sym_else] = ACTIONS(834),
    [anon_sym_foreign] = ACTIONS(834),
    [anon_sym_if] = ACTIONS(834),
    [anon_sym_in] = ACTIONS(834),
    [anon_sym_infix] = ACTIONS(834),
    [anon_sym_infixl] = ACTIONS(834),
    [anon_sym_infixr] = ACTIONS(834),
    [anon_sym_instance] = ACTIONS(834),
    [anon_sym_let] = ACTIONS(834),
    [anon_sym_of] = ACTIONS(834),
    [anon_sym_then] = ACTIONS(834),
    [anon_sym__] = ACTIONS(834),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(836),
    [anon_sym_SQUOTE] = ACTIONS(834),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [sym__integer_literal] = ACTIONS(834),
    [sym__octal_literal] = ACTIONS(834),
    [sym__hexidecimal_literal] = ACTIONS(834),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(838),
    [anon_sym_RPAREN] = ACTIONS(838),
    [sym_comment] = ACTIONS(26),
  },
  [281] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(840),
    [sym_comment] = ACTIONS(26),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym_comment] = ACTIONS(26),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(786),
    [anon_sym_DASH_GT] = ACTIONS(786),
    [sym_variable_identifier] = ACTIONS(786),
    [sym_constructor_identifier] = ACTIONS(788),
    [sym_module_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(26),
  },
  [284] = {
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(26),
  },
  [285] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [anon_sym_module] = ACTIONS(848),
    [anon_sym_where] = ACTIONS(848),
    [anon_sym_import] = ACTIONS(848),
    [anon_sym_class] = ACTIONS(848),
    [anon_sym_data] = ACTIONS(848),
    [anon_sym_newtype] = ACTIONS(848),
    [anon_sym_type] = ACTIONS(848),
    [anon_sym_case] = ACTIONS(848),
    [anon_sym_default] = ACTIONS(848),
    [anon_sym_do] = ACTIONS(848),
    [anon_sym_else] = ACTIONS(848),
    [anon_sym_foreign] = ACTIONS(848),
    [anon_sym_if] = ACTIONS(848),
    [anon_sym_in] = ACTIONS(848),
    [anon_sym_infix] = ACTIONS(848),
    [anon_sym_infixl] = ACTIONS(848),
    [anon_sym_infixr] = ACTIONS(848),
    [anon_sym_instance] = ACTIONS(848),
    [anon_sym_let] = ACTIONS(848),
    [anon_sym_of] = ACTIONS(848),
    [anon_sym_then] = ACTIONS(848),
    [anon_sym__] = ACTIONS(848),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(850),
    [anon_sym_SQUOTE] = ACTIONS(848),
    [anon_sym_DQUOTE] = ACTIONS(848),
    [sym__integer_literal] = ACTIONS(848),
    [sym__octal_literal] = ACTIONS(848),
    [sym__hexidecimal_literal] = ACTIONS(848),
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
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
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
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_body, 1),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 2),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 2),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 7),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [757] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true), SHIFT(20),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 3),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [796] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [836] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
