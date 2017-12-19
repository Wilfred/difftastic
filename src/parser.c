#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 320
#define SYMBOL_COUNT 187
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
  anon_sym_infixl = 14,
  anon_sym_infixr = 15,
  anon_sym_infix = 16,
  anon_sym_BQUOTE = 17,
  anon_sym_COLON = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_data = 21,
  anon_sym_EQ = 22,
  anon_sym_EQ_GT = 23,
  anon_sym_PIPE = 24,
  anon_sym_deriving = 25,
  anon_sym_newtype = 26,
  anon_sym_BANG = 27,
  anon_sym_type = 28,
  sym_variable_identifier = 29,
  sym_constructor_identifier = 30,
  sym_module_identifier = 31,
  anon_sym_case = 32,
  anon_sym_default = 33,
  anon_sym_do = 34,
  anon_sym_else = 35,
  anon_sym_foreign = 36,
  anon_sym_if = 37,
  anon_sym_in = 38,
  anon_sym_instance = 39,
  anon_sym_let = 40,
  anon_sym_of = 41,
  anon_sym_then = 42,
  anon_sym__ = 43,
  sym_comment = 44,
  sym_float = 45,
  anon_sym_SQUOTE = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 48,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 49,
  sym__ascii_large = 50,
  anon_sym_POUND = 51,
  anon_sym_DOLLAR = 52,
  anon_sym_PERCENT = 53,
  anon_sym_AMP = 54,
  anon_sym_1 = 55,
  anon_sym_PLUS = 56,
  anon_sym_DOT = 57,
  anon_sym_SLASH = 58,
  anon_sym_LT = 59,
  anon_sym_GT = 60,
  anon_sym_QMARK = 61,
  anon_sym_AT = 62,
  anon_sym_CARET = 63,
  anon_sym_DASH = 64,
  anon_sym_TILDE = 65,
  anon_sym_BSLASH = 66,
  anon_sym_SEMI = 67,
  anon_sym_LBRACK = 68,
  anon_sym_RBRACK = 69,
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
  sym_fixity = 135,
  sym__op = 136,
  sym_variable_symbol = 137,
  sym_constructor_symbol = 138,
  sym_type_signature = 139,
  sym__type = 140,
  sym_algebraic_datatype = 141,
  sym_context = 142,
  sym_class = 143,
  sym_constructors = 144,
  sym_constructor = 145,
  sym_deriving = 146,
  sym_newtype = 147,
  sym_new_constructor = 148,
  sym_fields = 149,
  sym_field = 150,
  sym_strict = 151,
  sym_type_synonym = 152,
  sym__literal = 153,
  sym__identifier = 154,
  sym_simple_type = 155,
  sym_reserved_identifier = 156,
  sym_integer = 157,
  sym_char = 158,
  sym_string = 159,
  sym__gap = 160,
  sym__graphic = 161,
  sym__small = 162,
  sym__large = 163,
  sym__symbol = 164,
  sym__special = 165,
  sym__escape = 166,
  sym__char_escape = 167,
  sym__ascii = 168,
  sym__cntrl = 169,
  aux_sym_program_repeat1 = 170,
  aux_sym_module_exports_repeat1 = 171,
  aux_sym_export_repeat1 = 172,
  aux_sym_import_specification_repeat1 = 173,
  aux_sym_type_class_repeat1 = 174,
  aux_sym_type_class_body_repeat1 = 175,
  aux_sym_fixity_repeat1 = 176,
  aux_sym_variable_symbol_repeat1 = 177,
  aux_sym__type_repeat1 = 178,
  aux_sym_context_repeat1 = 179,
  aux_sym_constructors_repeat1 = 180,
  aux_sym_constructor_repeat1 = 181,
  aux_sym_fields_repeat1 = 182,
  aux_sym_field_repeat1 = 183,
  aux_sym_string_repeat1 = 184,
  aux_sym__escape_repeat1 = 185,
  aux_sym__escape_repeat2 = 186,
  alias_sym_module_body = 187,
  alias_sym_type_constructor = 188,
  alias_sym_type_variable = 189,
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
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_infix] = "infix",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COLON] = ":",
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
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_fixity] = "fixity",
  [sym__op] = "_op",
  [sym_variable_symbol] = "variable_symbol",
  [sym_constructor_symbol] = "constructor_symbol",
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
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
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
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_fixity] = {
    .visible = true,
    .named = true,
  },
  [sym__op] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_symbol] = {
    .visible = true,
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
  [aux_sym_fixity_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_symbol_repeat1] = {
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
        ADVANCE(260);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(268);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(349);
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
        ADVANCE(229);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == 'w')
        ADVANCE(254);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(259);
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
      if (lookahead == 's')
        ADVANCE(223);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(224);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(225);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(226);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(227);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(230);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(231);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(233);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(235);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(236);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(237);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(239);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(240);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(241);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(242);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(243);
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
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(246);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(248);
      if (lookahead == 'y')
        ADVANCE(251);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(259);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(260);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(268);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(349);
      END_STATE();
    case 261:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(263);
      if (lookahead == 'X')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(263);
      if (lookahead == 'x')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(264);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(266);
      END_STATE();
    case 267:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 268:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 269:
      if (lookahead == 'a')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(273);
      END_STATE();
    case 270:
      if (lookahead == 's')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 273:
      if (lookahead == 'a')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 's')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 's')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 277:
      if (lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'e')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(293);
      END_STATE();
    case 278:
      if (lookahead == 't')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'a')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 281:
      if (lookahead == 'f')
        ADVANCE(282);
      if (lookahead == 'r')
        ADVANCE(287);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'u')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'l')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 't')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 287:
      if (lookahead == 'i')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'v')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'i')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'n')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'g')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 294:
      if (lookahead == 'l')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 's')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'e')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 298:
      if (lookahead == 'o')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'r')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'i')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'g')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'n')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 305:
      if (lookahead == 'f')
        ADVANCE(306);
      if (lookahead == 'm')
        ADVANCE(307);
      if (lookahead == 'n')
        ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 307:
      if (lookahead == 'p')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'o')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'r')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 't')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'a')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'n')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'c')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 319:
      if (lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 't')
        ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 322:
      if (lookahead == 'o')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'd')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'u')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'l')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 328:
      if (lookahead == 'e')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'w')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'y')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'p')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'e')
        ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_newtype);
      END_STATE();
    case 335:
      if (lookahead == 'f')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 337:
      if (lookahead == 'h')
        ADVANCE(338);
      if (lookahead == 'y')
        ADVANCE(341);
      END_STATE();
    case 338:
      if (lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'n')
        ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 341:
      if (lookahead == 'p')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 344:
      if (lookahead == 'h')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'r')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(349);
      if (lookahead == '.')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == 'q')
        ADVANCE(389);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(350);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 351:
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(351);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(367);
      if (lookahead == 'q')
        ADVANCE(368);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      if (lookahead == ')')
        ADVANCE(353);
      if (lookahead == ',')
        ADVANCE(354);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == ')')
        ADVANCE(353);
      if (lookahead == ',')
        ADVANCE(354);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '>')
        ADVANCE(356);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == ')')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(360);
      END_STATE();
    case 361:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(362);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(360);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(364);
      if (lookahead == ']')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(366);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == ']')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(351);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == 'q')
        ADVANCE(389);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(350);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 380:
      if (lookahead == ')')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(382);
      if (lookahead == '-')
        ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 382:
      if (lookahead == ')')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(382);
      END_STATE();
    case 383:
      if (lookahead == '>')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == ')')
        ADVANCE(381);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 386:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 388:
      if (lookahead == 'n')
        SKIP(350);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'u')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'd')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(399);
      if (lookahead == '.')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(399);
      END_STATE();
    case 400:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(481);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
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
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(403);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(413);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(401);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(353);
      if (lookahead == ',')
        ADVANCE(354);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(406);
      if (lookahead == 'l')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == 'e')
        ADVANCE(417);
      if (lookahead == 'o')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(436);
      if (lookahead == 'm')
        ADVANCE(437);
      if (lookahead == 'n')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == 'y')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(481);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(382);
      if (lookahead == '-')
        ADVANCE(383);
      END_STATE();
    case 481:
      if (lookahead == 'n')
        SKIP(400);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(484);
      if (lookahead == 'l')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(492);
      if (lookahead == 'e')
        ADVANCE(495);
      if (lookahead == 'o')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'u')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'g')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(514);
      if (lookahead == 'm')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'c')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'd')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'u')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'w')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'y')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'h')
        ADVANCE(546);
      if (lookahead == 'y')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'h')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 557:
      if (lookahead == '\n')
        ADVANCE(558);
      if (lookahead == '\r')
        ADVANCE(560);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(557);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 558:
      if (lookahead == '\n')
        ADVANCE(558);
      if (lookahead == '\r')
        ADVANCE(558);
      if (lookahead == '(')
        ADVANCE(402);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(177);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(558);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '\n')
        ADVANCE(558);
      if (lookahead == '\r')
        ADVANCE(560);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(557);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 561:
      if (lookahead == 'n')
        SKIP(557);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(567);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(568);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(562);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(564);
      if (lookahead == ':')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(565);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(563);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(567);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(568);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(562);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 567:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 568:
      if (lookahead == 'n')
        SKIP(562);
      END_STATE();
    case 569:
      if (lookahead == '\t')
        SKIP(569);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(577);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 570:
      if (lookahead == '\t')
        ADVANCE(570);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == ' ')
        ADVANCE(571);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(575);
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
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(570);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == ' ')
        ADVANCE(571);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(575);
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
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      if (lookahead == '\t')
        SKIP(569);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(577);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 584:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == ' ')
        ADVANCE(589);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(590);
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
        ADVANCE(576);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == ' ')
        ADVANCE(589);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(590);
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
        ADVANCE(576);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == ' ')
        ADVANCE(589);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(590);
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
        ADVANCE(576);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(587);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(588);
      if (lookahead == ' ')
        ADVANCE(589);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(590);
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
        ADVANCE(576);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(588);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(586);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 592:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(603);
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
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(605);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(607);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(592);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 593:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(593);
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
        ADVANCE(594);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(595);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(597);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(229);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == 'w')
        ADVANCE(254);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(593);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 594:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(593);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(596);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(598);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 598:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 599:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(600);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(602);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(603);
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
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(605);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(607);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(592);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 604:
      if (lookahead == 'n')
        SKIP(592);
      END_STATE();
    case 605:
      if (lookahead == 's')
        ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 607:
      if (lookahead == 'i')
        ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == 'd')
        ADVANCE(609);
      END_STATE();
    case 609:
      if (lookahead == 'i')
        ADVANCE(610);
      END_STATE();
    case 610:
      if (lookahead == 'n')
        ADVANCE(611);
      END_STATE();
    case 611:
      if (lookahead == 'g')
        ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 613:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(618);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(619);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(605);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(607);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 614:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(615);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(595);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(597);
      if (lookahead == 'i')
        ADVANCE(215);
      if (lookahead == 'l')
        ADVANCE(229);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == 'w')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(614);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(617);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(618);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(619);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(605);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(607);
      if (lookahead == 'i')
        ADVANCE(305);
      if (lookahead == 'l')
        ADVANCE(319);
      if (lookahead == 'm')
        ADVANCE(322);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead == 'w')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 619:
      if (lookahead == 'n')
        SKIP(613);
      END_STATE();
    case 620:
      if (lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'e')
        ADVANCE(621);
      if (lookahead == 'o')
        ADVANCE(293);
      END_STATE();
    case 621:
      if (lookahead == 'f')
        ADVANCE(282);
      END_STATE();
    case 622:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(626);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 623:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '(')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(626);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 626:
      if (lookahead == 'n')
        SKIP(622);
      END_STATE();
    case 627:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 628:
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(629);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(628);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
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
      if (lookahead == '\n')
        ADVANCE(628);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(627);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        SKIP(627);
      END_STATE();
    case 632:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(632);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 633:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(633);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(635);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(633);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(633);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead == 'e')
        ADVANCE(636);
      if (lookahead == 'o')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(633);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(632);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 644:
      if (lookahead == 'n')
        SKIP(632);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(492);
      if (lookahead == 'e')
        ADVANCE(646);
      if (lookahead == 'o')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(496);
      if (lookahead == 'r')
        ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'v')
        ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'g')
        ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 653:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(654);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(657);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(653);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 654:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(654);
      if (lookahead == '\r')
        ADVANCE(654);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(655);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(635);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(654);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(654);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(657);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(653);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 657:
      if (lookahead == 'n')
        SKIP(653);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(659);
      if (lookahead == '\r')
        ADVANCE(711);
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
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(712);
      if (lookahead == 'B')
        ADVANCE(715);
      if (lookahead == 'C')
        ADVANCE(719);
      if (lookahead == 'D')
        ADVANCE(723);
      if (lookahead == 'E')
        ADVANCE(733);
      if (lookahead == 'F')
        ADVANCE(744);
      if (lookahead == 'G')
        ADVANCE(747);
      if (lookahead == 'H')
        ADVANCE(748);
      if (lookahead == 'L')
        ADVANCE(749);
      if (lookahead == 'N')
        ADVANCE(750);
      if (lookahead == 'O')
        ADVANCE(751);
      if (lookahead == 'R')
        ADVANCE(752);
      if (lookahead == 'S')
        ADVANCE(753);
      if (lookahead == 'U')
        ADVANCE(754);
      if (lookahead == 'V')
        ADVANCE(755);
      if (lookahead == 'X')
        ADVANCE(756);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(757);
      if (lookahead == 'b')
        ADVANCE(758);
      if (lookahead == 'f')
        ADVANCE(759);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(760);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(761);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(658);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(583);
      END_STATE();
    case 659:
      if (lookahead == '\n')
        ADVANCE(659);
      if (lookahead == '\r')
        ADVANCE(659);
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
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(660);
      if (lookahead == 'B')
        ADVANCE(663);
      if (lookahead == 'C')
        ADVANCE(667);
      if (lookahead == 'D')
        ADVANCE(671);
      if (lookahead == 'E')
        ADVANCE(681);
      if (lookahead == 'F')
        ADVANCE(692);
      if (lookahead == 'G')
        ADVANCE(695);
      if (lookahead == 'H')
        ADVANCE(696);
      if (lookahead == 'L')
        ADVANCE(697);
      if (lookahead == 'N')
        ADVANCE(698);
      if (lookahead == 'O')
        ADVANCE(699);
      if (lookahead == 'R')
        ADVANCE(700);
      if (lookahead == 'S')
        ADVANCE(701);
      if (lookahead == 'U')
        ADVANCE(702);
      if (lookahead == 'V')
        ADVANCE(703);
      if (lookahead == 'X')
        ADVANCE(704);
      if (lookahead == '\\')
        ADVANCE(705);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(706);
      if (lookahead == 'b')
        ADVANCE(707);
      if (lookahead == 'f')
        ADVANCE(708);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(709);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(710);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(576);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'S')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(668);
      if (lookahead == 'R')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(672);
      if (lookahead == 'E')
        ADVANCE(677);
      if (lookahead == 'L')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(673);
      if (lookahead == '2')
        ADVANCE(674);
      if (lookahead == '3')
        ADVANCE(675);
      if (lookahead == '4')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(682);
      if (lookahead == 'N')
        ADVANCE(683);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'S')
        ADVANCE(687);
      if (lookahead == 'T')
        ADVANCE(689);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(684);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(690);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(693);
      if (lookahead == 'S')
        ADVANCE(694);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
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
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      if (lookahead == '\n')
        ADVANCE(659);
      if (lookahead == '\r')
        ADVANCE(711);
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
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(712);
      if (lookahead == 'B')
        ADVANCE(715);
      if (lookahead == 'C')
        ADVANCE(719);
      if (lookahead == 'D')
        ADVANCE(723);
      if (lookahead == 'E')
        ADVANCE(733);
      if (lookahead == 'F')
        ADVANCE(744);
      if (lookahead == 'G')
        ADVANCE(747);
      if (lookahead == 'H')
        ADVANCE(748);
      if (lookahead == 'L')
        ADVANCE(749);
      if (lookahead == 'N')
        ADVANCE(750);
      if (lookahead == 'O')
        ADVANCE(751);
      if (lookahead == 'R')
        ADVANCE(752);
      if (lookahead == 'S')
        ADVANCE(753);
      if (lookahead == 'U')
        ADVANCE(754);
      if (lookahead == 'V')
        ADVANCE(755);
      if (lookahead == 'X')
        ADVANCE(756);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(757);
      if (lookahead == 'b')
        ADVANCE(758);
      if (lookahead == 'f')
        ADVANCE(759);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(760);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(761);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(658);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(583);
      END_STATE();
    case 712:
      if (lookahead == 'C')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'K')
        ADVANCE(714);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 715:
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'S')
        ADVANCE(718);
      END_STATE();
    case 716:
      if (lookahead == 'L')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 719:
      if (lookahead == 'A')
        ADVANCE(720);
      if (lookahead == 'R')
        ADVANCE(722);
      END_STATE();
    case 720:
      if (lookahead == 'N')
        ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 723:
      if (lookahead == 'C')
        ADVANCE(724);
      if (lookahead == 'E')
        ADVANCE(729);
      if (lookahead == 'L')
        ADVANCE(731);
      END_STATE();
    case 724:
      if (lookahead == '1')
        ADVANCE(725);
      if (lookahead == '2')
        ADVANCE(726);
      if (lookahead == '3')
        ADVANCE(727);
      if (lookahead == '4')
        ADVANCE(728);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 729:
      if (lookahead == 'L')
        ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 731:
      if (lookahead == 'E')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 733:
      if (lookahead == 'M')
        ADVANCE(734);
      if (lookahead == 'N')
        ADVANCE(735);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'S')
        ADVANCE(739);
      if (lookahead == 'T')
        ADVANCE(741);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 735:
      if (lookahead == 'Q')
        ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 737:
      if (lookahead == 'T')
        ADVANCE(738);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 739:
      if (lookahead == 'C')
        ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 741:
      if (lookahead == 'B')
        ADVANCE(742);
      if (lookahead == 'X')
        ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 744:
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'S')
        ADVANCE(746);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 747:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 748:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 749:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 750:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 752:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 753:
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
    case 754:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 755:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 762:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(774);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(775);
      if (lookahead == 'B')
        ADVANCE(776);
      if (lookahead == 'C')
        ADVANCE(777);
      if (lookahead == 'D')
        ADVANCE(778);
      if (lookahead == 'E')
        ADVANCE(779);
      if (lookahead == 'F')
        ADVANCE(780);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(751);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(756);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(757);
      if (lookahead == 'b')
        ADVANCE(758);
      if (lookahead == 'f')
        ADVANCE(759);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(760);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(761);
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
        ADVANCE(583);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(764);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(766);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(767);
      if (lookahead == 'B')
        ADVANCE(768);
      if (lookahead == 'C')
        ADVANCE(769);
      if (lookahead == 'D')
        ADVANCE(770);
      if (lookahead == 'E')
        ADVANCE(771);
      if (lookahead == 'F')
        ADVANCE(772);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(699);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(704);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(773);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(706);
      if (lookahead == 'b')
        ADVANCE(707);
      if (lookahead == 'f')
        ADVANCE(708);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(709);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(710);
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
        ADVANCE(576);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(764);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(766);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(767);
      if (lookahead == 'B')
        ADVANCE(768);
      if (lookahead == 'C')
        ADVANCE(769);
      if (lookahead == 'D')
        ADVANCE(770);
      if (lookahead == 'E')
        ADVANCE(771);
      if (lookahead == 'F')
        ADVANCE(772);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(699);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(704);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(773);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(706);
      if (lookahead == 'b')
        ADVANCE(707);
      if (lookahead == 'f')
        ADVANCE(708);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(709);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(710);
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
        ADVANCE(576);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      if (lookahead == '\t')
        ADVANCE(764);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(766);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(767);
      if (lookahead == 'B')
        ADVANCE(768);
      if (lookahead == 'C')
        ADVANCE(769);
      if (lookahead == 'D')
        ADVANCE(770);
      if (lookahead == 'E')
        ADVANCE(771);
      if (lookahead == 'F')
        ADVANCE(772);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(699);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(704);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(773);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(706);
      if (lookahead == 'b')
        ADVANCE(707);
      if (lookahead == 'f')
        ADVANCE(708);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(709);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(710);
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
        ADVANCE(576);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(764);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(766);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(767);
      if (lookahead == 'B')
        ADVANCE(768);
      if (lookahead == 'C')
        ADVANCE(769);
      if (lookahead == 'D')
        ADVANCE(770);
      if (lookahead == 'E')
        ADVANCE(771);
      if (lookahead == 'F')
        ADVANCE(772);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(699);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(704);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(773);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(706);
      if (lookahead == 'b')
        ADVANCE(707);
      if (lookahead == 'f')
        ADVANCE(708);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(709);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(710);
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
        ADVANCE(576);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'S')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(668);
      if (lookahead == 'R')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(672);
      if (lookahead == 'E')
        ADVANCE(677);
      if (lookahead == 'L')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(682);
      if (lookahead == 'N')
        ADVANCE(683);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'S')
        ADVANCE(687);
      if (lookahead == 'T')
        ADVANCE(689);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(693);
      if (lookahead == 'S')
        ADVANCE(694);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(765);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(763);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(774);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(775);
      if (lookahead == 'B')
        ADVANCE(776);
      if (lookahead == 'C')
        ADVANCE(777);
      if (lookahead == 'D')
        ADVANCE(778);
      if (lookahead == 'E')
        ADVANCE(779);
      if (lookahead == 'F')
        ADVANCE(780);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(751);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(756);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(757);
      if (lookahead == 'b')
        ADVANCE(758);
      if (lookahead == 'f')
        ADVANCE(759);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(760);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(761);
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
        ADVANCE(583);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(713);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'S')
        ADVANCE(718);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(720);
      if (lookahead == 'R')
        ADVANCE(722);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(724);
      if (lookahead == 'E')
        ADVANCE(729);
      if (lookahead == 'L')
        ADVANCE(731);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(734);
      if (lookahead == 'N')
        ADVANCE(735);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'S')
        ADVANCE(739);
      if (lookahead == 'T')
        ADVANCE(741);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'S')
        ADVANCE(746);
      END_STATE();
    case 781:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(784);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(785);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
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
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(783);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(635);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
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
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(785);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
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
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
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
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(360);
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
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
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
        ADVANCE(385);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(795);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
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
        ADVANCE(385);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == '`')
        ADVANCE(151);
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
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(799);
      if (lookahead == '`')
        ADVANCE(72);
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(802);
      if (lookahead == '`')
        ADVANCE(151);
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
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
        ADVANCE(357);
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
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
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
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(814);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(815);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(812);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(812);
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
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(814);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(815);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      END_STATE();
    case 815:
      if (lookahead == 'n')
        SKIP(811);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == 'i')
        ADVANCE(828);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(817);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(818);
      if (lookahead == 'i')
        ADVANCE(819);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(824);
      if (lookahead == 'r')
        ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == 'i')
        ADVANCE(828);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 827:
      if (lookahead == 'n')
        SKIP(816);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'x')
        ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(833);
      if (lookahead == 'r')
        ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 835:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 836:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(413);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 837:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(836);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 838:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 839:
      if (lookahead == 'n')
        SKIP(835);
      END_STATE();
    case 840:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(842);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == ' ')
        ADVANCE(844);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(845);
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
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(842);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == ' ')
        ADVANCE(844);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(845);
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
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      if (lookahead == '\t')
        ADVANCE(842);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == ' ')
        ADVANCE(844);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(845);
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
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(842);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == ' ')
        ADVANCE(844);
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
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(845);
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
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 846:
      if (lookahead == '\t')
        ADVANCE(585);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == ' ')
        ADVANCE(578);
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
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(582);
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
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(853);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(854);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(849);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(851);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(848);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(850);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(173);
      if (lookahead == 'X')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(173);
      if (lookahead == 'x')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(850);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(850);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(848);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(853);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(263);
      if (lookahead == 'X')
        ADVANCE(265);
      if (lookahead == 'o')
        ADVANCE(263);
      if (lookahead == 'x')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(854);
      END_STATE();
    case 855:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 856:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == '_')
        ADVANCE(404);
      if (lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'd')
        ADVANCE(635);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead == 'o')
        ADVANCE(465);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead == 'w')
        ADVANCE(474);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(856);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 857:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(856);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 858:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == '_')
        ADVANCE(482);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(645);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead == 'l')
        ADVANCE(527);
      if (lookahead == 'm')
        ADVANCE(530);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead == 'o')
        ADVANCE(543);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead == 'w')
        ADVANCE(552);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 859:
      if (lookahead == 'n')
        SKIP(855);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(828);
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
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(572);
      if (lookahead == '.')
        ADVANCE(573);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(574);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(819);
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
        ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(861);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(96);
      if (lookahead == '%')
        ADVANCE(97);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(579);
      if (lookahead == '.')
        ADVANCE(580);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(581);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        ADVANCE(582);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(828);
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
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(867);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == 'i')
        ADVANCE(828);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '(')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(866);
      if (lookahead == 'i')
        ADVANCE(819);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 866:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(865);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 867:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(867);
      if (lookahead == '(')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == 'i')
        ADVANCE(828);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 868:
      if (lookahead == 'n')
        SKIP(864);
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
  [4] = {.lex_state = 350},
  [5] = {.lex_state = 400},
  [6] = {.lex_state = 557},
  [7] = {.lex_state = 562},
  [8] = {.lex_state = 562},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 569},
  [11] = {.lex_state = 584},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 169},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 562},
  [20] = {.lex_state = 592},
  [21] = {.lex_state = 613},
  [22] = {.lex_state = 562},
  [23] = {.lex_state = 622},
  [24] = {.lex_state = 562},
  [25] = {.lex_state = 169},
  [26] = {.lex_state = 622},
  [27] = {.lex_state = 627},
  [28] = {.lex_state = 632},
  [29] = {.lex_state = 562},
  [30] = {.lex_state = 632},
  [31] = {.lex_state = 653},
  [32] = {.lex_state = 562},
  [33] = {.lex_state = 562},
  [34] = {.lex_state = 350},
  [35] = {.lex_state = 350},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 658},
  [43] = {.lex_state = 584},
  [44] = {.lex_state = 584},
  [45] = {.lex_state = 584},
  [46] = {.lex_state = 584},
  [47] = {.lex_state = 169},
  [48] = {.lex_state = 584},
  [49] = {.lex_state = 584},
  [50] = {.lex_state = 762},
  [51] = {.lex_state = 584},
  [52] = {.lex_state = 584},
  [53] = {.lex_state = 169},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 562},
  [56] = {.lex_state = 169},
  [57] = {.lex_state = 613},
  [58] = {.lex_state = 562},
  [59] = {.lex_state = 562},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 557},
  [63] = {.lex_state = 350},
  [64] = {.lex_state = 557},
  [65] = {.lex_state = 627},
  [66] = {.lex_state = 627},
  [67] = {.lex_state = 627},
  [68] = {.lex_state = 562},
  [69] = {.lex_state = 562},
  [70] = {.lex_state = 557},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 627},
  [73] = {.lex_state = 653},
  [74] = {.lex_state = 653},
  [75] = {.lex_state = 653},
  [76] = {.lex_state = 781},
  [77] = {.lex_state = 781},
  [78] = {.lex_state = 653},
  [79] = {.lex_state = 653},
  [80] = {.lex_state = 557},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 169},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 653},
  [85] = {.lex_state = 562},
  [86] = {.lex_state = 562},
  [87] = {.lex_state = 786},
  [88] = {.lex_state = 562},
  [89] = {.lex_state = 169},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 793},
  [93] = {.lex_state = 797},
  [94] = {.lex_state = 804},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 584},
  [97] = {.lex_state = 584},
  [98] = {.lex_state = 793},
  [99] = {.lex_state = 797},
  [100] = {.lex_state = 804},
  [101] = {.lex_state = 584},
  [102] = {.lex_state = 584},
  [103] = {.lex_state = 169},
  [104] = {.lex_state = 169},
  [105] = {.lex_state = 169},
  [106] = {.lex_state = 350},
  [107] = {.lex_state = 811},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 562},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 811},
  [113] = {.lex_state = 613},
  [114] = {.lex_state = 562},
  [115] = {.lex_state = 562},
  [116] = {.lex_state = 169},
  [117] = {.lex_state = 350},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 562},
  [120] = {.lex_state = 816},
  [121] = {.lex_state = 653},
  [122] = {.lex_state = 653},
  [123] = {.lex_state = 169},
  [124] = {.lex_state = 169},
  [125] = {.lex_state = 653},
  [126] = {.lex_state = 562},
  [127] = {.lex_state = 169},
  [128] = {.lex_state = 562},
  [129] = {.lex_state = 169},
  [130] = {.lex_state = 557},
  [131] = {.lex_state = 562},
  [132] = {.lex_state = 169},
  [133] = {.lex_state = 653},
  [134] = {.lex_state = 653},
  [135] = {.lex_state = 562},
  [136] = {.lex_state = 562},
  [137] = {.lex_state = 169},
  [138] = {.lex_state = 835},
  [139] = {.lex_state = 169},
  [140] = {.lex_state = 835},
  [141] = {.lex_state = 835},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 797},
  [145] = {.lex_state = 797},
  [146] = {.lex_state = 804},
  [147] = {.lex_state = 804},
  [148] = {.lex_state = 584},
  [149] = {.lex_state = 584},
  [150] = {.lex_state = 584},
  [151] = {.lex_state = 584},
  [152] = {.lex_state = 840},
  [153] = {.lex_state = 840},
  [154] = {.lex_state = 562},
  [155] = {.lex_state = 169},
  [156] = {.lex_state = 350},
  [157] = {.lex_state = 562},
  [158] = {.lex_state = 169},
  [159] = {.lex_state = 613},
  [160] = {.lex_state = 562},
  [161] = {.lex_state = 562},
  [162] = {.lex_state = 169},
  [163] = {.lex_state = 350},
  [164] = {.lex_state = 169},
  [165] = {.lex_state = 811},
  [166] = {.lex_state = 350},
  [167] = {.lex_state = 562},
  [168] = {.lex_state = 562},
  [169] = {.lex_state = 169},
  [170] = {.lex_state = 816},
  [171] = {.lex_state = 557},
  [172] = {.lex_state = 169},
  [173] = {.lex_state = 847},
  [174] = {.lex_state = 350},
  [175] = {.lex_state = 816},
  [176] = {.lex_state = 816},
  [177] = {.lex_state = 562},
  [178] = {.lex_state = 816},
  [179] = {.lex_state = 169},
  [180] = {.lex_state = 169},
  [181] = {.lex_state = 350},
  [182] = {.lex_state = 169},
  [183] = {.lex_state = 562},
  [184] = {.lex_state = 350},
  [185] = {.lex_state = 350},
  [186] = {.lex_state = 855},
  [187] = {.lex_state = 653},
  [188] = {.lex_state = 169},
  [189] = {.lex_state = 169},
  [190] = {.lex_state = 562},
  [191] = {.lex_state = 835},
  [192] = {.lex_state = 169},
  [193] = {.lex_state = 797},
  [194] = {.lex_state = 804},
  [195] = {.lex_state = 584},
  [196] = {.lex_state = 840},
  [197] = {.lex_state = 350},
  [198] = {.lex_state = 562},
  [199] = {.lex_state = 169},
  [200] = {.lex_state = 350},
  [201] = {.lex_state = 350},
  [202] = {.lex_state = 169},
  [203] = {.lex_state = 350},
  [204] = {.lex_state = 350},
  [205] = {.lex_state = 811},
  [206] = {.lex_state = 562},
  [207] = {.lex_state = 169},
  [208] = {.lex_state = 562},
  [209] = {.lex_state = 350},
  [210] = {.lex_state = 350},
  [211] = {.lex_state = 562},
  [212] = {.lex_state = 169},
  [213] = {.lex_state = 350},
  [214] = {.lex_state = 658},
  [215] = {.lex_state = 562},
  [216] = {.lex_state = 860},
  [217] = {.lex_state = 860},
  [218] = {.lex_state = 658},
  [219] = {.lex_state = 816},
  [220] = {.lex_state = 816},
  [221] = {.lex_state = 658},
  [222] = {.lex_state = 860},
  [223] = {.lex_state = 860},
  [224] = {.lex_state = 557},
  [225] = {.lex_state = 816},
  [226] = {.lex_state = 169},
  [227] = {.lex_state = 562},
  [228] = {.lex_state = 169},
  [229] = {.lex_state = 350},
  [230] = {.lex_state = 169},
  [231] = {.lex_state = 557},
  [232] = {.lex_state = 562},
  [233] = {.lex_state = 350},
  [234] = {.lex_state = 557},
  [235] = {.lex_state = 169},
  [236] = {.lex_state = 350},
  [237] = {.lex_state = 169},
  [238] = {.lex_state = 562},
  [239] = {.lex_state = 350},
  [240] = {.lex_state = 350},
  [241] = {.lex_state = 350},
  [242] = {.lex_state = 350},
  [243] = {.lex_state = 350},
  [244] = {.lex_state = 562},
  [245] = {.lex_state = 811},
  [246] = {.lex_state = 350},
  [247] = {.lex_state = 350},
  [248] = {.lex_state = 169},
  [249] = {.lex_state = 169},
  [250] = {.lex_state = 860},
  [251] = {.lex_state = 860},
  [252] = {.lex_state = 797},
  [253] = {.lex_state = 816},
  [254] = {.lex_state = 860},
  [255] = {.lex_state = 658},
  [256] = {.lex_state = 816},
  [257] = {.lex_state = 816},
  [258] = {.lex_state = 816},
  [259] = {.lex_state = 860},
  [260] = {.lex_state = 864},
  [261] = {.lex_state = 816},
  [262] = {.lex_state = 562},
  [263] = {.lex_state = 864},
  [264] = {.lex_state = 816},
  [265] = {.lex_state = 350},
  [266] = {.lex_state = 562},
  [267] = {.lex_state = 169},
  [268] = {.lex_state = 350},
  [269] = {.lex_state = 562},
  [270] = {.lex_state = 350},
  [271] = {.lex_state = 557},
  [272] = {.lex_state = 562},
  [273] = {.lex_state = 350},
  [274] = {.lex_state = 557},
  [275] = {.lex_state = 169},
  [276] = {.lex_state = 169},
  [277] = {.lex_state = 350},
  [278] = {.lex_state = 169},
  [279] = {.lex_state = 350},
  [280] = {.lex_state = 350},
  [281] = {.lex_state = 350},
  [282] = {.lex_state = 350},
  [283] = {.lex_state = 562},
  [284] = {.lex_state = 350},
  [285] = {.lex_state = 816},
  [286] = {.lex_state = 860},
  [287] = {.lex_state = 816},
  [288] = {.lex_state = 816},
  [289] = {.lex_state = 816},
  [290] = {.lex_state = 658},
  [291] = {.lex_state = 816},
  [292] = {.lex_state = 816},
  [293] = {.lex_state = 816},
  [294] = {.lex_state = 816},
  [295] = {.lex_state = 562},
  [296] = {.lex_state = 816},
  [297] = {.lex_state = 816},
  [298] = {.lex_state = 350},
  [299] = {.lex_state = 350},
  [300] = {.lex_state = 350},
  [301] = {.lex_state = 350},
  [302] = {.lex_state = 169},
  [303] = {.lex_state = 350},
  [304] = {.lex_state = 350},
  [305] = {.lex_state = 350},
  [306] = {.lex_state = 350},
  [307] = {.lex_state = 350},
  [308] = {.lex_state = 350},
  [309] = {.lex_state = 816},
  [310] = {.lex_state = 816},
  [311] = {.lex_state = 816},
  [312] = {.lex_state = 562},
  [313] = {.lex_state = 169},
  [314] = {.lex_state = 350},
  [315] = {.lex_state = 350},
  [316] = {.lex_state = 350},
  [317] = {.lex_state = 816},
  [318] = {.lex_state = 350},
  [319] = {.lex_state = 169},
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
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
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
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
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
    [anon_sym_BQUOTE] = ACTIONS(66),
    [anon_sym_COLON] = ACTIONS(68),
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
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
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
    [anon_sym_BQUOTE] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(84),
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
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
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
    [anon_sym_BQUOTE] = ACTIONS(136),
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
    [anon_sym_COLON_COLON] = ACTIONS(136),
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
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
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
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
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
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
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
    [anon_sym_BSLASH] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
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
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(225),
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
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
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
    [anon_sym_BQUOTE] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
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
    [anon_sym_BSLASH] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
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
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
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
    [anon_sym_BSLASH] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
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
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
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
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
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
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
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
    [anon_sym_BSLASH] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
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
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
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
    [anon_sym_BSLASH] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
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
    [anon_sym_BQUOTE] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(84),
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
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
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
    [anon_sym_COLON_COLON] = ACTIONS(162),
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
    [anon_sym_BQUOTE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
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
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
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
    [anon_sym_BQUOTE] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
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
    [anon_sym_BSLASH] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
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
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
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
    [anon_sym_BSLASH] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
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
    [anon_sym_BQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
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
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
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
    [sym_type_class_body] = STATE(174),
    [sym__general_declaration] = STATE(175),
    [sym_fixity] = STATE(176),
    [sym_type_signature] = STATE(176),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(177),
    [aux_sym_type_class_body_repeat1] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_infixl] = ACTIONS(425),
    [anon_sym_infixr] = ACTIONS(425),
    [anon_sym_infix] = ACTIONS(425),
    [sym_variable_identifier] = ACTIONS(58),
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
    [sym_constructors] = STATE(179),
    [sym_constructor] = STATE(82),
    [sym_deriving] = STATE(180),
    [sym__identifier] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_module] = ACTIONS(429),
    [anon_sym_where] = ACTIONS(429),
    [anon_sym_import] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_data] = ACTIONS(429),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(429),
    [anon_sym_type] = ACTIONS(429),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(429),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_else] = ACTIONS(429),
    [anon_sym_foreign] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_in] = ACTIONS(429),
    [anon_sym_instance] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_of] = ACTIONS(429),
    [anon_sym_then] = ACTIONS(429),
    [anon_sym__] = ACTIONS(429),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym__integer_literal] = ACTIONS(429),
    [sym__octal_literal] = ACTIONS(429),
    [sym__hexidecimal_literal] = ACTIONS(429),
  },
  [123] = {
    [sym_deriving] = STATE(180),
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_module] = ACTIONS(429),
    [anon_sym_where] = ACTIONS(429),
    [anon_sym_import] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_data] = ACTIONS(429),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(429),
    [anon_sym_type] = ACTIONS(429),
    [anon_sym_case] = ACTIONS(429),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_else] = ACTIONS(429),
    [anon_sym_foreign] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_in] = ACTIONS(429),
    [anon_sym_instance] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_of] = ACTIONS(429),
    [anon_sym_then] = ACTIONS(429),
    [anon_sym__] = ACTIONS(429),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym__integer_literal] = ACTIONS(429),
    [sym__octal_literal] = ACTIONS(429),
    [sym__hexidecimal_literal] = ACTIONS(429),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_module] = ACTIONS(429),
    [anon_sym_where] = ACTIONS(429),
    [anon_sym_import] = ACTIONS(429),
    [anon_sym_class] = ACTIONS(429),
    [anon_sym_data] = ACTIONS(429),
    [anon_sym_newtype] = ACTIONS(429),
    [anon_sym_type] = ACTIONS(429),
    [anon_sym_case] = ACTIONS(429),
    [anon_sym_default] = ACTIONS(429),
    [anon_sym_do] = ACTIONS(429),
    [anon_sym_else] = ACTIONS(429),
    [anon_sym_foreign] = ACTIONS(429),
    [anon_sym_if] = ACTIONS(429),
    [anon_sym_in] = ACTIONS(429),
    [anon_sym_instance] = ACTIONS(429),
    [anon_sym_let] = ACTIONS(429),
    [anon_sym_of] = ACTIONS(429),
    [anon_sym_then] = ACTIONS(429),
    [anon_sym__] = ACTIONS(429),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(431),
    [anon_sym_SQUOTE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym__integer_literal] = ACTIONS(429),
    [sym__octal_literal] = ACTIONS(429),
    [sym__hexidecimal_literal] = ACTIONS(429),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(433),
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
    [sym__identifier] = STATE(181),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_module] = ACTIONS(437),
    [anon_sym_where] = ACTIONS(437),
    [anon_sym_import] = ACTIONS(437),
    [anon_sym_class] = ACTIONS(437),
    [anon_sym_data] = ACTIONS(437),
    [anon_sym_newtype] = ACTIONS(437),
    [anon_sym_type] = ACTIONS(437),
    [anon_sym_case] = ACTIONS(437),
    [anon_sym_default] = ACTIONS(437),
    [anon_sym_do] = ACTIONS(437),
    [anon_sym_else] = ACTIONS(437),
    [anon_sym_foreign] = ACTIONS(437),
    [anon_sym_if] = ACTIONS(437),
    [anon_sym_in] = ACTIONS(437),
    [anon_sym_instance] = ACTIONS(437),
    [anon_sym_let] = ACTIONS(437),
    [anon_sym_of] = ACTIONS(437),
    [anon_sym_then] = ACTIONS(437),
    [anon_sym__] = ACTIONS(437),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym__integer_literal] = ACTIONS(437),
    [sym__octal_literal] = ACTIONS(437),
    [sym__hexidecimal_literal] = ACTIONS(437),
  },
  [128] = {
    [sym_constructor] = STATE(182),
    [sym__identifier] = STATE(84),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_module] = ACTIONS(443),
    [anon_sym_where] = ACTIONS(443),
    [anon_sym_import] = ACTIONS(443),
    [anon_sym_class] = ACTIONS(443),
    [anon_sym_data] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_deriving] = ACTIONS(443),
    [anon_sym_newtype] = ACTIONS(443),
    [anon_sym_type] = ACTIONS(443),
    [anon_sym_case] = ACTIONS(443),
    [anon_sym_default] = ACTIONS(443),
    [anon_sym_do] = ACTIONS(443),
    [anon_sym_else] = ACTIONS(443),
    [anon_sym_foreign] = ACTIONS(443),
    [anon_sym_if] = ACTIONS(443),
    [anon_sym_in] = ACTIONS(443),
    [anon_sym_instance] = ACTIONS(443),
    [anon_sym_let] = ACTIONS(443),
    [anon_sym_of] = ACTIONS(443),
    [anon_sym_then] = ACTIONS(443),
    [anon_sym__] = ACTIONS(443),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [sym__integer_literal] = ACTIONS(443),
    [sym__octal_literal] = ACTIONS(443),
    [sym__hexidecimal_literal] = ACTIONS(443),
  },
  [130] = {
    [sym_field] = STATE(185),
    [sym_variable_identifier] = ACTIONS(449),
    [sym_comment] = ACTIONS(26),
  },
  [131] = {
    [sym__identifier] = STATE(186),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_module] = ACTIONS(453),
    [anon_sym_where] = ACTIONS(453),
    [anon_sym_import] = ACTIONS(453),
    [anon_sym_class] = ACTIONS(453),
    [anon_sym_data] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_deriving] = ACTIONS(453),
    [anon_sym_newtype] = ACTIONS(453),
    [anon_sym_type] = ACTIONS(453),
    [anon_sym_case] = ACTIONS(453),
    [anon_sym_default] = ACTIONS(453),
    [anon_sym_do] = ACTIONS(453),
    [anon_sym_else] = ACTIONS(453),
    [anon_sym_foreign] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_instance] = ACTIONS(453),
    [anon_sym_let] = ACTIONS(453),
    [anon_sym_of] = ACTIONS(453),
    [anon_sym_then] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__integer_literal] = ACTIONS(453),
    [sym__octal_literal] = ACTIONS(453),
    [sym__hexidecimal_literal] = ACTIONS(453),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_module] = ACTIONS(459),
    [anon_sym_where] = ACTIONS(459),
    [anon_sym_import] = ACTIONS(459),
    [anon_sym_class] = ACTIONS(459),
    [anon_sym_data] = ACTIONS(459),
    [anon_sym_PIPE] = ACTIONS(459),
    [anon_sym_deriving] = ACTIONS(459),
    [anon_sym_newtype] = ACTIONS(459),
    [anon_sym_BANG] = ACTIONS(459),
    [anon_sym_type] = ACTIONS(459),
    [sym_variable_identifier] = ACTIONS(461),
    [sym_constructor_identifier] = ACTIONS(461),
    [sym_module_identifier] = ACTIONS(461),
    [anon_sym_case] = ACTIONS(459),
    [anon_sym_default] = ACTIONS(459),
    [anon_sym_do] = ACTIONS(459),
    [anon_sym_else] = ACTIONS(459),
    [anon_sym_foreign] = ACTIONS(459),
    [anon_sym_if] = ACTIONS(459),
    [anon_sym_in] = ACTIONS(459),
    [anon_sym_instance] = ACTIONS(459),
    [anon_sym_let] = ACTIONS(459),
    [anon_sym_of] = ACTIONS(459),
    [anon_sym_then] = ACTIONS(459),
    [anon_sym__] = ACTIONS(459),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym__integer_literal] = ACTIONS(459),
    [sym__octal_literal] = ACTIONS(459),
    [sym__hexidecimal_literal] = ACTIONS(459),
  },
  [134] = {
    [sym_strict] = STATE(187),
    [sym__identifier] = STATE(187),
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_module] = ACTIONS(453),
    [anon_sym_where] = ACTIONS(453),
    [anon_sym_import] = ACTIONS(453),
    [anon_sym_class] = ACTIONS(453),
    [anon_sym_data] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_deriving] = ACTIONS(453),
    [anon_sym_newtype] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_type] = ACTIONS(453),
    [sym_variable_identifier] = ACTIONS(173),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [anon_sym_case] = ACTIONS(453),
    [anon_sym_default] = ACTIONS(453),
    [anon_sym_do] = ACTIONS(453),
    [anon_sym_else] = ACTIONS(453),
    [anon_sym_foreign] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_instance] = ACTIONS(453),
    [anon_sym_let] = ACTIONS(453),
    [anon_sym_of] = ACTIONS(453),
    [anon_sym_then] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__integer_literal] = ACTIONS(453),
    [sym__octal_literal] = ACTIONS(453),
    [sym__hexidecimal_literal] = ACTIONS(453),
  },
  [135] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_COLON_COLON] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(297),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [sym_fields] = STATE(188),
    [sym__identifier] = STATE(188),
    [anon_sym_LBRACE] = ACTIONS(331),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_deriving] = STATE(189),
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_module] = ACTIONS(465),
    [anon_sym_where] = ACTIONS(465),
    [anon_sym_import] = ACTIONS(465),
    [anon_sym_class] = ACTIONS(465),
    [anon_sym_data] = ACTIONS(465),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(465),
    [anon_sym_type] = ACTIONS(465),
    [anon_sym_case] = ACTIONS(465),
    [anon_sym_default] = ACTIONS(465),
    [anon_sym_do] = ACTIONS(465),
    [anon_sym_else] = ACTIONS(465),
    [anon_sym_foreign] = ACTIONS(465),
    [anon_sym_if] = ACTIONS(465),
    [anon_sym_in] = ACTIONS(465),
    [anon_sym_instance] = ACTIONS(465),
    [anon_sym_let] = ACTIONS(465),
    [anon_sym_of] = ACTIONS(465),
    [anon_sym_then] = ACTIONS(465),
    [anon_sym__] = ACTIONS(465),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [sym__integer_literal] = ACTIONS(465),
    [sym__octal_literal] = ACTIONS(465),
    [sym__hexidecimal_literal] = ACTIONS(465),
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
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_module] = ACTIONS(471),
    [anon_sym_where] = ACTIONS(471),
    [anon_sym_import] = ACTIONS(471),
    [anon_sym_class] = ACTIONS(471),
    [anon_sym_data] = ACTIONS(471),
    [anon_sym_newtype] = ACTIONS(471),
    [anon_sym_type] = ACTIONS(471),
    [anon_sym_case] = ACTIONS(471),
    [anon_sym_default] = ACTIONS(471),
    [anon_sym_do] = ACTIONS(471),
    [anon_sym_else] = ACTIONS(471),
    [anon_sym_foreign] = ACTIONS(471),
    [anon_sym_if] = ACTIONS(471),
    [anon_sym_in] = ACTIONS(471),
    [anon_sym_instance] = ACTIONS(471),
    [anon_sym_let] = ACTIONS(471),
    [anon_sym_of] = ACTIONS(471),
    [anon_sym_then] = ACTIONS(471),
    [anon_sym__] = ACTIONS(471),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [sym__integer_literal] = ACTIONS(471),
    [sym__octal_literal] = ACTIONS(471),
    [sym__hexidecimal_literal] = ACTIONS(471),
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
    [sym__identifier] = STATE(191),
    [aux_sym__type_repeat1] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(475),
    [anon_sym_module] = ACTIONS(477),
    [anon_sym_where] = ACTIONS(477),
    [anon_sym_import] = ACTIONS(477),
    [anon_sym_class] = ACTIONS(477),
    [anon_sym_DASH_GT] = ACTIONS(479),
    [anon_sym_data] = ACTIONS(477),
    [anon_sym_newtype] = ACTIONS(477),
    [anon_sym_type] = ACTIONS(477),
    [sym_variable_identifier] = ACTIONS(341),
    [sym_constructor_identifier] = ACTIONS(341),
    [sym_module_identifier] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(477),
    [anon_sym_default] = ACTIONS(477),
    [anon_sym_do] = ACTIONS(477),
    [anon_sym_else] = ACTIONS(477),
    [anon_sym_foreign] = ACTIONS(477),
    [anon_sym_if] = ACTIONS(477),
    [anon_sym_in] = ACTIONS(477),
    [anon_sym_instance] = ACTIONS(477),
    [anon_sym_let] = ACTIONS(477),
    [anon_sym_of] = ACTIONS(477),
    [anon_sym_then] = ACTIONS(477),
    [anon_sym__] = ACTIONS(477),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym__integer_literal] = ACTIONS(477),
    [sym__octal_literal] = ACTIONS(477),
    [sym__hexidecimal_literal] = ACTIONS(477),
  },
  [142] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(483),
  },
  [143] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(485),
  },
  [144] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(487),
  },
  [145] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(491),
  },
  [146] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(493),
  },
  [147] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(495),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
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
    [anon_sym_BSLASH] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [sym__space] = ACTIONS(497),
    [sym__newline] = ACTIONS(497),
    [sym__tab] = ACTIONS(497),
    [sym__vertical_tab] = ACTIONS(497),
  },
  [149] = {
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
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
    [anon_sym_BSLASH] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [sym__space] = ACTIONS(499),
    [sym__newline] = ACTIONS(499),
    [sym__tab] = ACTIONS(499),
    [sym__vertical_tab] = ACTIONS(499),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(501),
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
    [anon_sym_BSLASH] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [sym__space] = ACTIONS(501),
    [sym__newline] = ACTIONS(501),
    [sym__tab] = ACTIONS(501),
    [sym__vertical_tab] = ACTIONS(501),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(501),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_BANG] = ACTIONS(503),
    [anon_sym__] = ACTIONS(503),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(503),
    [sym__ascii_large] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(503),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(503),
    [anon_sym_1] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_GT] = ACTIONS(503),
    [anon_sym_QMARK] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(503),
    [anon_sym_CARET] = ACTIONS(503),
    [anon_sym_DASH] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym__space] = ACTIONS(503),
    [sym__newline] = ACTIONS(503),
    [sym__tab] = ACTIONS(503),
    [sym__vertical_tab] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(505),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_BQUOTE] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym__] = ACTIONS(507),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(507),
    [sym__ascii_large] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_1] = ACTIONS(507),
    [anon_sym_PLUS] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(507),
    [anon_sym_BSLASH] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym__space] = ACTIONS(507),
    [sym__newline] = ACTIONS(507),
    [sym__tab] = ACTIONS(507),
    [sym__vertical_tab] = ACTIONS(507),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(507),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_BANG] = ACTIONS(503),
    [anon_sym__] = ACTIONS(503),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(503),
    [sym__ascii_large] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(503),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(503),
    [anon_sym_1] = ACTIONS(503),
    [anon_sym_PLUS] = ACTIONS(503),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(503),
    [anon_sym_GT] = ACTIONS(503),
    [anon_sym_QMARK] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(503),
    [anon_sym_CARET] = ACTIONS(503),
    [anon_sym_DASH] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym__space] = ACTIONS(503),
    [sym__newline] = ACTIONS(503),
    [sym__tab] = ACTIONS(503),
    [sym__vertical_tab] = ACTIONS(503),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(509),
  },
  [154] = {
    [sym_export] = STATE(197),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_where] = ACTIONS(511),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [sym__identifier] = STATE(201),
    [anon_sym_DOT_DOT] = ACTIONS(517),
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
    [ts_builtin_sym_end] = ACTIONS(519),
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
    [sym_import_specification] = STATE(202),
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_module] = ACTIONS(523),
    [anon_sym_where] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(523),
    [anon_sym_hiding] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(523),
    [anon_sym_data] = ACTIONS(523),
    [anon_sym_newtype] = ACTIONS(523),
    [anon_sym_type] = ACTIONS(523),
    [anon_sym_case] = ACTIONS(523),
    [anon_sym_default] = ACTIONS(523),
    [anon_sym_do] = ACTIONS(523),
    [anon_sym_else] = ACTIONS(523),
    [anon_sym_foreign] = ACTIONS(523),
    [anon_sym_if] = ACTIONS(523),
    [anon_sym_in] = ACTIONS(523),
    [anon_sym_instance] = ACTIONS(523),
    [anon_sym_let] = ACTIONS(523),
    [anon_sym_of] = ACTIONS(523),
    [anon_sym_then] = ACTIONS(523),
    [anon_sym__] = ACTIONS(523),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(525),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [sym__integer_literal] = ACTIONS(523),
    [sym__octal_literal] = ACTIONS(523),
    [sym__hexidecimal_literal] = ACTIONS(523),
  },
  [160] = {
    [sym__identifier] = STATE(204),
    [anon_sym_DOT_DOT] = ACTIONS(527),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [sym__identifier] = STATE(205),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_module] = ACTIONS(531),
    [anon_sym_where] = ACTIONS(531),
    [anon_sym_import] = ACTIONS(531),
    [anon_sym_class] = ACTIONS(531),
    [anon_sym_data] = ACTIONS(531),
    [anon_sym_newtype] = ACTIONS(531),
    [anon_sym_type] = ACTIONS(531),
    [anon_sym_case] = ACTIONS(531),
    [anon_sym_default] = ACTIONS(531),
    [anon_sym_do] = ACTIONS(531),
    [anon_sym_else] = ACTIONS(531),
    [anon_sym_foreign] = ACTIONS(531),
    [anon_sym_if] = ACTIONS(531),
    [anon_sym_in] = ACTIONS(531),
    [anon_sym_instance] = ACTIONS(531),
    [anon_sym_let] = ACTIONS(531),
    [anon_sym_of] = ACTIONS(531),
    [anon_sym_then] = ACTIONS(531),
    [anon_sym__] = ACTIONS(531),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(533),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [sym__integer_literal] = ACTIONS(531),
    [sym__octal_literal] = ACTIONS(531),
    [sym__hexidecimal_literal] = ACTIONS(531),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(537),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_module] = ACTIONS(523),
    [anon_sym_where] = ACTIONS(523),
    [anon_sym_import] = ACTIONS(523),
    [anon_sym_class] = ACTIONS(523),
    [anon_sym_data] = ACTIONS(523),
    [anon_sym_newtype] = ACTIONS(523),
    [anon_sym_type] = ACTIONS(523),
    [anon_sym_case] = ACTIONS(523),
    [anon_sym_default] = ACTIONS(523),
    [anon_sym_do] = ACTIONS(523),
    [anon_sym_else] = ACTIONS(523),
    [anon_sym_foreign] = ACTIONS(523),
    [anon_sym_if] = ACTIONS(523),
    [anon_sym_in] = ACTIONS(523),
    [anon_sym_instance] = ACTIONS(523),
    [anon_sym_let] = ACTIONS(523),
    [anon_sym_of] = ACTIONS(523),
    [anon_sym_then] = ACTIONS(523),
    [anon_sym__] = ACTIONS(523),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(525),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [sym__integer_literal] = ACTIONS(523),
    [sym__octal_literal] = ACTIONS(523),
    [sym__hexidecimal_literal] = ACTIONS(523),
  },
  [165] = {
    [aux_sym_import_specification_repeat1] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(537),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [sym_variable_identifier] = ACTIONS(543),
    [sym_constructor_identifier] = ACTIONS(545),
    [sym_module_identifier] = ACTIONS(545),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [sym_class] = STATE(210),
    [sym__identifier] = STATE(64),
    [sym_variable_identifier] = ACTIONS(152),
    [sym_constructor_identifier] = ACTIONS(154),
    [sym_module_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [anon_sym_EQ_GT] = ACTIONS(547),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [sym_type_class_body] = STATE(213),
    [sym__general_declaration] = STATE(175),
    [sym_fixity] = STATE(176),
    [sym_type_signature] = STATE(176),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(177),
    [aux_sym_type_class_body_repeat1] = STATE(178),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_infixl] = ACTIONS(425),
    [anon_sym_infixr] = ACTIONS(425),
    [anon_sym_infix] = ACTIONS(425),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(551),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(555),
    [anon_sym_where] = ACTIONS(555),
    [anon_sym_import] = ACTIONS(555),
    [anon_sym_class] = ACTIONS(555),
    [anon_sym_data] = ACTIONS(555),
    [anon_sym_newtype] = ACTIONS(555),
    [anon_sym_type] = ACTIONS(555),
    [anon_sym_case] = ACTIONS(555),
    [anon_sym_default] = ACTIONS(555),
    [anon_sym_do] = ACTIONS(555),
    [anon_sym_else] = ACTIONS(555),
    [anon_sym_foreign] = ACTIONS(555),
    [anon_sym_if] = ACTIONS(555),
    [anon_sym_in] = ACTIONS(555),
    [anon_sym_instance] = ACTIONS(555),
    [anon_sym_let] = ACTIONS(555),
    [anon_sym_of] = ACTIONS(555),
    [anon_sym_then] = ACTIONS(555),
    [anon_sym__] = ACTIONS(555),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [173] = {
    [sym__op] = STATE(219),
    [sym_variable_symbol] = STATE(220),
    [sym_constructor_symbol] = STATE(220),
    [sym_integer] = STATE(221),
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
    [sym__integer_literal] = ACTIONS(567),
    [sym__octal_literal] = ACTIONS(567),
    [sym__hexidecimal_literal] = ACTIONS(567),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_infixl] = ACTIONS(569),
    [anon_sym_infixr] = ACTIONS(569),
    [anon_sym_infix] = ACTIONS(569),
    [sym_variable_identifier] = ACTIONS(571),
    [sym_constructor_identifier] = ACTIONS(571),
    [sym_module_identifier] = ACTIONS(571),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_infixl] = ACTIONS(573),
    [anon_sym_infixr] = ACTIONS(573),
    [anon_sym_infix] = ACTIONS(573),
    [sym_variable_identifier] = ACTIONS(575),
    [sym_constructor_identifier] = ACTIONS(575),
    [sym_module_identifier] = ACTIONS(575),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [sym__identifier] = STATE(135),
    [anon_sym_COLON_COLON] = ACTIONS(577),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [sym__general_declaration] = STATE(225),
    [sym_fixity] = STATE(176),
    [sym_type_signature] = STATE(176),
    [sym__identifier] = STATE(85),
    [aux_sym_type_class_repeat1] = STATE(177),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_infixl] = ACTIONS(425),
    [anon_sym_infixr] = ACTIONS(425),
    [anon_sym_infix] = ACTIONS(425),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [sym_deriving] = STATE(226),
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_module] = ACTIONS(583),
    [anon_sym_where] = ACTIONS(583),
    [anon_sym_import] = ACTIONS(583),
    [anon_sym_class] = ACTIONS(583),
    [anon_sym_data] = ACTIONS(583),
    [anon_sym_deriving] = ACTIONS(189),
    [anon_sym_newtype] = ACTIONS(583),
    [anon_sym_type] = ACTIONS(583),
    [anon_sym_case] = ACTIONS(583),
    [anon_sym_default] = ACTIONS(583),
    [anon_sym_do] = ACTIONS(583),
    [anon_sym_else] = ACTIONS(583),
    [anon_sym_foreign] = ACTIONS(583),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_in] = ACTIONS(583),
    [anon_sym_instance] = ACTIONS(583),
    [anon_sym_let] = ACTIONS(583),
    [anon_sym_of] = ACTIONS(583),
    [anon_sym_then] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym__integer_literal] = ACTIONS(583),
    [sym__octal_literal] = ACTIONS(583),
    [sym__hexidecimal_literal] = ACTIONS(583),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_module] = ACTIONS(583),
    [anon_sym_where] = ACTIONS(583),
    [anon_sym_import] = ACTIONS(583),
    [anon_sym_class] = ACTIONS(583),
    [anon_sym_data] = ACTIONS(583),
    [anon_sym_newtype] = ACTIONS(583),
    [anon_sym_type] = ACTIONS(583),
    [anon_sym_case] = ACTIONS(583),
    [anon_sym_default] = ACTIONS(583),
    [anon_sym_do] = ACTIONS(583),
    [anon_sym_else] = ACTIONS(583),
    [anon_sym_foreign] = ACTIONS(583),
    [anon_sym_if] = ACTIONS(583),
    [anon_sym_in] = ACTIONS(583),
    [anon_sym_instance] = ACTIONS(583),
    [anon_sym_let] = ACTIONS(583),
    [anon_sym_of] = ACTIONS(583),
    [anon_sym_then] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym__integer_literal] = ACTIONS(583),
    [sym__octal_literal] = ACTIONS(583),
    [sym__hexidecimal_literal] = ACTIONS(583),
  },
  [181] = {
    [aux_sym_export_repeat1] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(589),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [anon_sym_module] = ACTIONS(593),
    [anon_sym_where] = ACTIONS(593),
    [anon_sym_import] = ACTIONS(593),
    [anon_sym_class] = ACTIONS(593),
    [anon_sym_data] = ACTIONS(593),
    [anon_sym_PIPE] = ACTIONS(593),
    [anon_sym_deriving] = ACTIONS(593),
    [anon_sym_newtype] = ACTIONS(593),
    [anon_sym_type] = ACTIONS(593),
    [anon_sym_case] = ACTIONS(593),
    [anon_sym_default] = ACTIONS(593),
    [anon_sym_do] = ACTIONS(593),
    [anon_sym_else] = ACTIONS(593),
    [anon_sym_foreign] = ACTIONS(593),
    [anon_sym_if] = ACTIONS(593),
    [anon_sym_in] = ACTIONS(593),
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
    [sym_constructor] = STATE(230),
    [sym__identifier] = STATE(84),
    [sym_variable_identifier] = ACTIONS(171),
    [sym_constructor_identifier] = ACTIONS(173),
    [sym_module_identifier] = ACTIONS(173),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [aux_sym_field_repeat1] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_COLON_COLON] = ACTIONS(599),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [aux_sym_fields_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(603),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_module] = ACTIONS(607),
    [anon_sym_where] = ACTIONS(607),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_import] = ACTIONS(607),
    [anon_sym_class] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_data] = ACTIONS(607),
    [anon_sym_PIPE] = ACTIONS(607),
    [anon_sym_deriving] = ACTIONS(607),
    [anon_sym_newtype] = ACTIONS(607),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_type] = ACTIONS(607),
    [sym_variable_identifier] = ACTIONS(609),
    [sym_constructor_identifier] = ACTIONS(609),
    [sym_module_identifier] = ACTIONS(609),
    [anon_sym_case] = ACTIONS(607),
    [anon_sym_default] = ACTIONS(607),
    [anon_sym_do] = ACTIONS(607),
    [anon_sym_else] = ACTIONS(607),
    [anon_sym_foreign] = ACTIONS(607),
    [anon_sym_if] = ACTIONS(607),
    [anon_sym_in] = ACTIONS(607),
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
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [anon_sym_module] = ACTIONS(613),
    [anon_sym_where] = ACTIONS(613),
    [anon_sym_import] = ACTIONS(613),
    [anon_sym_class] = ACTIONS(613),
    [anon_sym_data] = ACTIONS(613),
    [anon_sym_PIPE] = ACTIONS(613),
    [anon_sym_deriving] = ACTIONS(613),
    [anon_sym_newtype] = ACTIONS(613),
    [anon_sym_BANG] = ACTIONS(613),
    [anon_sym_type] = ACTIONS(613),
    [sym_variable_identifier] = ACTIONS(615),
    [sym_constructor_identifier] = ACTIONS(615),
    [sym_module_identifier] = ACTIONS(615),
    [anon_sym_case] = ACTIONS(613),
    [anon_sym_default] = ACTIONS(613),
    [anon_sym_do] = ACTIONS(613),
    [anon_sym_else] = ACTIONS(613),
    [anon_sym_foreign] = ACTIONS(613),
    [anon_sym_if] = ACTIONS(613),
    [anon_sym_in] = ACTIONS(613),
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
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [anon_sym_module] = ACTIONS(619),
    [anon_sym_where] = ACTIONS(619),
    [anon_sym_import] = ACTIONS(619),
    [anon_sym_class] = ACTIONS(619),
    [anon_sym_data] = ACTIONS(619),
    [anon_sym_deriving] = ACTIONS(619),
    [anon_sym_newtype] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_case] = ACTIONS(619),
    [anon_sym_default] = ACTIONS(619),
    [anon_sym_do] = ACTIONS(619),
    [anon_sym_else] = ACTIONS(619),
    [anon_sym_foreign] = ACTIONS(619),
    [anon_sym_if] = ACTIONS(619),
    [anon_sym_in] = ACTIONS(619),
    [anon_sym_instance] = ACTIONS(619),
    [anon_sym_let] = ACTIONS(619),
    [anon_sym_of] = ACTIONS(619),
    [anon_sym_then] = ACTIONS(619),
    [anon_sym__] = ACTIONS(619),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym__integer_literal] = ACTIONS(619),
    [sym__octal_literal] = ACTIONS(619),
    [sym__hexidecimal_literal] = ACTIONS(619),
  },
  [189] = {
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
  [190] = {
    [sym__identifier] = STATE(237),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(433),
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
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_module] = ACTIONS(631),
    [anon_sym_where] = ACTIONS(631),
    [anon_sym_import] = ACTIONS(631),
    [anon_sym_class] = ACTIONS(631),
    [anon_sym_DASH_GT] = ACTIONS(633),
    [anon_sym_data] = ACTIONS(631),
    [anon_sym_newtype] = ACTIONS(631),
    [anon_sym_type] = ACTIONS(631),
    [anon_sym_case] = ACTIONS(631),
    [anon_sym_default] = ACTIONS(631),
    [anon_sym_do] = ACTIONS(631),
    [anon_sym_else] = ACTIONS(631),
    [anon_sym_foreign] = ACTIONS(631),
    [anon_sym_if] = ACTIONS(631),
    [anon_sym_in] = ACTIONS(631),
    [anon_sym_instance] = ACTIONS(631),
    [anon_sym_let] = ACTIONS(631),
    [anon_sym_of] = ACTIONS(631),
    [anon_sym_then] = ACTIONS(631),
    [anon_sym__] = ACTIONS(631),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [sym__integer_literal] = ACTIONS(631),
    [sym__octal_literal] = ACTIONS(631),
    [sym__hexidecimal_literal] = ACTIONS(631),
  },
  [193] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(637),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(637),
  },
  [194] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(639),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_LBRACE] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
    [anon_sym_BQUOTE] = ACTIONS(641),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_EQ] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(641),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(641),
    [sym__ascii_large] = ACTIONS(641),
    [anon_sym_POUND] = ACTIONS(641),
    [anon_sym_DOLLAR] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(641),
    [anon_sym_1] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(641),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_AT] = ACTIONS(641),
    [anon_sym_CARET] = ACTIONS(641),
    [anon_sym_DASH] = ACTIONS(641),
    [anon_sym_TILDE] = ACTIONS(641),
    [anon_sym_BSLASH] = ACTIONS(641),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym__space] = ACTIONS(641),
    [sym__newline] = ACTIONS(641),
    [sym__tab] = ACTIONS(641),
    [sym__vertical_tab] = ACTIONS(641),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(641),
  },
  [196] = {
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_BQUOTE] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [anon_sym_EQ] = ACTIONS(643),
    [anon_sym_PIPE] = ACTIONS(643),
    [anon_sym_BANG] = ACTIONS(643),
    [anon_sym__] = ACTIONS(643),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(643),
    [sym__ascii_large] = ACTIONS(643),
    [anon_sym_POUND] = ACTIONS(643),
    [anon_sym_DOLLAR] = ACTIONS(643),
    [anon_sym_PERCENT] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_1] = ACTIONS(643),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_DOT] = ACTIONS(643),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(643),
    [anon_sym_GT] = ACTIONS(643),
    [anon_sym_QMARK] = ACTIONS(643),
    [anon_sym_AT] = ACTIONS(643),
    [anon_sym_CARET] = ACTIONS(643),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_TILDE] = ACTIONS(643),
    [anon_sym_BSLASH] = ACTIONS(643),
    [anon_sym_SEMI] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
    [sym__space] = ACTIONS(643),
    [sym__newline] = ACTIONS(643),
    [sym__tab] = ACTIONS(643),
    [sym__vertical_tab] = ACTIONS(643),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(643),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [sym_export] = STATE(239),
    [sym__identifier] = STATE(107),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [anon_sym_where] = ACTIONS(647),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(649),
    [sym_comment] = ACTIONS(26),
  },
  [201] = {
    [aux_sym_export_repeat1] = STATE(241),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(649),
    [sym_comment] = ACTIONS(26),
  },
  [202] = {
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
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [204] = {
    [aux_sym_export_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(657),
    [sym_comment] = ACTIONS(26),
  },
  [205] = {
    [anon_sym_LPAREN] = ACTIONS(659),
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [sym_comment] = ACTIONS(26),
  },
  [206] = {
    [sym__identifier] = STATE(245),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_module] = ACTIONS(665),
    [anon_sym_where] = ACTIONS(665),
    [anon_sym_import] = ACTIONS(665),
    [anon_sym_class] = ACTIONS(665),
    [anon_sym_data] = ACTIONS(665),
    [anon_sym_newtype] = ACTIONS(665),
    [anon_sym_type] = ACTIONS(665),
    [anon_sym_case] = ACTIONS(665),
    [anon_sym_default] = ACTIONS(665),
    [anon_sym_do] = ACTIONS(665),
    [anon_sym_else] = ACTIONS(665),
    [anon_sym_foreign] = ACTIONS(665),
    [anon_sym_if] = ACTIONS(665),
    [anon_sym_in] = ACTIONS(665),
    [anon_sym_instance] = ACTIONS(665),
    [anon_sym_let] = ACTIONS(665),
    [anon_sym_of] = ACTIONS(665),
    [anon_sym_then] = ACTIONS(665),
    [anon_sym__] = ACTIONS(665),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(667),
    [anon_sym_SQUOTE] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym__integer_literal] = ACTIONS(665),
    [sym__octal_literal] = ACTIONS(665),
    [sym__hexidecimal_literal] = ACTIONS(665),
  },
  [208] = {
    [sym__identifier] = STATE(247),
    [anon_sym_DOT_DOT] = ACTIONS(669),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(671),
    [sym_comment] = ACTIONS(26),
  },
  [210] = {
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [sym_comment] = ACTIONS(26),
  },
  [211] = {
    [sym_variable_identifier] = ACTIONS(675),
    [sym_constructor_identifier] = ACTIONS(677),
    [sym_module_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(26),
  },
  [212] = {
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
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(685),
    [sym_comment] = ACTIONS(26),
  },
  [214] = {
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(251),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [215] = {
    [sym__identifier] = STATE(252),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [216] = {
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(254),
    [anon_sym_COMMA] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_infixl] = ACTIONS(689),
    [anon_sym_infixr] = ACTIONS(689),
    [anon_sym_infix] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(689),
    [sym_constructor_identifier] = ACTIONS(689),
    [sym_module_identifier] = ACTIONS(689),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_infixl] = ACTIONS(223),
    [anon_sym_infixr] = ACTIONS(223),
    [anon_sym_infix] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [sym_variable_identifier] = ACTIONS(223),
    [sym_constructor_identifier] = ACTIONS(223),
    [sym_module_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(72),
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
    [anon_sym_BSLASH] = ACTIONS(223),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(104),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(104),
    [anon_sym_PERCENT] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(104),
    [anon_sym_1] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(104),
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_QMARK] = ACTIONS(104),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_CARET] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(104),
  },
  [219] = {
    [aux_sym_fixity_repeat1] = STATE(256),
    [anon_sym_COMMA] = ACTIONS(693),
    [anon_sym_RBRACE] = ACTIONS(695),
    [anon_sym_infixl] = ACTIONS(695),
    [anon_sym_infixr] = ACTIONS(695),
    [anon_sym_infix] = ACTIONS(695),
    [sym_variable_identifier] = ACTIONS(697),
    [sym_constructor_identifier] = ACTIONS(697),
    [sym_module_identifier] = ACTIONS(697),
    [sym_comment] = ACTIONS(26),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_RBRACE] = ACTIONS(699),
    [anon_sym_infixl] = ACTIONS(699),
    [anon_sym_infixr] = ACTIONS(699),
    [anon_sym_infix] = ACTIONS(699),
    [sym_variable_identifier] = ACTIONS(701),
    [sym_constructor_identifier] = ACTIONS(701),
    [sym_module_identifier] = ACTIONS(701),
    [sym_comment] = ACTIONS(26),
  },
  [221] = {
    [sym__op] = STATE(257),
    [sym_variable_symbol] = STATE(220),
    [sym_constructor_symbol] = STATE(220),
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_infixl] = ACTIONS(703),
    [anon_sym_infixr] = ACTIONS(703),
    [anon_sym_infix] = ACTIONS(703),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_EQ] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_BANG] = ACTIONS(703),
    [sym_variable_identifier] = ACTIONS(703),
    [sym_constructor_identifier] = ACTIONS(703),
    [sym_module_identifier] = ACTIONS(703),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [anon_sym_PERCENT] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
    [anon_sym_1] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_SLASH] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(703),
    [anon_sym_QMARK] = ACTIONS(703),
    [anon_sym_AT] = ACTIONS(703),
    [anon_sym_CARET] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(703),
    [anon_sym_TILDE] = ACTIONS(703),
    [anon_sym_BSLASH] = ACTIONS(703),
  },
  [223] = {
    [sym__symbol] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(705),
    [anon_sym_infixl] = ACTIONS(705),
    [anon_sym_infixr] = ACTIONS(705),
    [anon_sym_infix] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(705),
    [sym_constructor_identifier] = ACTIONS(705),
    [sym_module_identifier] = ACTIONS(705),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [224] = {
    [sym__type] = STATE(261),
    [sym_context] = STATE(262),
    [sym_class] = STATE(25),
    [sym__identifier] = STATE(263),
    [aux_sym_type_class_repeat1] = STATE(264),
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(709),
    [sym_constructor_identifier] = ACTIONS(711),
    [sym_module_identifier] = ACTIONS(711),
    [sym_comment] = ACTIONS(26),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_infixl] = ACTIONS(713),
    [anon_sym_infixr] = ACTIONS(713),
    [anon_sym_infix] = ACTIONS(713),
    [sym_variable_identifier] = ACTIONS(715),
    [sym_constructor_identifier] = ACTIONS(715),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(26),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [anon_sym_module] = ACTIONS(719),
    [anon_sym_where] = ACTIONS(719),
    [anon_sym_import] = ACTIONS(719),
    [anon_sym_class] = ACTIONS(719),
    [anon_sym_data] = ACTIONS(719),
    [anon_sym_newtype] = ACTIONS(719),
    [anon_sym_type] = ACTIONS(719),
    [anon_sym_case] = ACTIONS(719),
    [anon_sym_default] = ACTIONS(719),
    [anon_sym_do] = ACTIONS(719),
    [anon_sym_else] = ACTIONS(719),
    [anon_sym_foreign] = ACTIONS(719),
    [anon_sym_if] = ACTIONS(719),
    [anon_sym_in] = ACTIONS(719),
    [anon_sym_instance] = ACTIONS(719),
    [anon_sym_let] = ACTIONS(719),
    [anon_sym_of] = ACTIONS(719),
    [anon_sym_then] = ACTIONS(719),
    [anon_sym__] = ACTIONS(719),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(721),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym__integer_literal] = ACTIONS(719),
    [sym__octal_literal] = ACTIONS(719),
    [sym__hexidecimal_literal] = ACTIONS(719),
  },
  [227] = {
    [sym__identifier] = STATE(265),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_module] = ACTIONS(725),
    [anon_sym_where] = ACTIONS(725),
    [anon_sym_import] = ACTIONS(725),
    [anon_sym_class] = ACTIONS(725),
    [anon_sym_data] = ACTIONS(725),
    [anon_sym_newtype] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [anon_sym_case] = ACTIONS(725),
    [anon_sym_default] = ACTIONS(725),
    [anon_sym_do] = ACTIONS(725),
    [anon_sym_else] = ACTIONS(725),
    [anon_sym_foreign] = ACTIONS(725),
    [anon_sym_if] = ACTIONS(725),
    [anon_sym_in] = ACTIONS(725),
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
  [229] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_comment] = ACTIONS(26),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [anon_sym_module] = ACTIONS(735),
    [anon_sym_where] = ACTIONS(735),
    [anon_sym_import] = ACTIONS(735),
    [anon_sym_class] = ACTIONS(735),
    [anon_sym_data] = ACTIONS(735),
    [anon_sym_PIPE] = ACTIONS(735),
    [anon_sym_deriving] = ACTIONS(735),
    [anon_sym_newtype] = ACTIONS(735),
    [anon_sym_type] = ACTIONS(735),
    [anon_sym_case] = ACTIONS(735),
    [anon_sym_default] = ACTIONS(735),
    [anon_sym_do] = ACTIONS(735),
    [anon_sym_else] = ACTIONS(735),
    [anon_sym_foreign] = ACTIONS(735),
    [anon_sym_if] = ACTIONS(735),
    [anon_sym_in] = ACTIONS(735),
    [anon_sym_instance] = ACTIONS(735),
    [anon_sym_let] = ACTIONS(735),
    [anon_sym_of] = ACTIONS(735),
    [anon_sym_then] = ACTIONS(735),
    [anon_sym__] = ACTIONS(735),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(737),
    [anon_sym_SQUOTE] = ACTIONS(735),
    [anon_sym_DQUOTE] = ACTIONS(735),
    [sym__integer_literal] = ACTIONS(735),
    [sym__octal_literal] = ACTIONS(735),
    [sym__hexidecimal_literal] = ACTIONS(735),
  },
  [231] = {
    [sym_variable_identifier] = ACTIONS(739),
    [sym_comment] = ACTIONS(26),
  },
  [232] = {
    [sym_strict] = STATE(270),
    [sym__identifier] = STATE(270),
    [anon_sym_BANG] = ACTIONS(741),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(743),
    [anon_sym_COLON_COLON] = ACTIONS(745),
    [sym_comment] = ACTIONS(26),
  },
  [234] = {
    [sym_field] = STATE(273),
    [sym_variable_identifier] = ACTIONS(449),
    [sym_comment] = ACTIONS(26),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(747),
    [anon_sym_module] = ACTIONS(749),
    [anon_sym_where] = ACTIONS(749),
    [anon_sym_import] = ACTIONS(749),
    [anon_sym_class] = ACTIONS(749),
    [anon_sym_data] = ACTIONS(749),
    [anon_sym_PIPE] = ACTIONS(749),
    [anon_sym_deriving] = ACTIONS(749),
    [anon_sym_newtype] = ACTIONS(749),
    [anon_sym_type] = ACTIONS(749),
    [anon_sym_case] = ACTIONS(749),
    [anon_sym_default] = ACTIONS(749),
    [anon_sym_do] = ACTIONS(749),
    [anon_sym_else] = ACTIONS(749),
    [anon_sym_foreign] = ACTIONS(749),
    [anon_sym_if] = ACTIONS(749),
    [anon_sym_in] = ACTIONS(749),
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
  [236] = {
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(755),
    [sym_comment] = ACTIONS(26),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_module] = ACTIONS(759),
    [anon_sym_where] = ACTIONS(759),
    [anon_sym_import] = ACTIONS(759),
    [anon_sym_class] = ACTIONS(759),
    [anon_sym_DASH_GT] = ACTIONS(759),
    [anon_sym_data] = ACTIONS(759),
    [anon_sym_newtype] = ACTIONS(759),
    [anon_sym_type] = ACTIONS(759),
    [anon_sym_case] = ACTIONS(759),
    [anon_sym_default] = ACTIONS(759),
    [anon_sym_do] = ACTIONS(759),
    [anon_sym_else] = ACTIONS(759),
    [anon_sym_foreign] = ACTIONS(759),
    [anon_sym_if] = ACTIONS(759),
    [anon_sym_in] = ACTIONS(759),
    [anon_sym_instance] = ACTIONS(759),
    [anon_sym_let] = ACTIONS(759),
    [anon_sym_of] = ACTIONS(759),
    [anon_sym_then] = ACTIONS(759),
    [anon_sym__] = ACTIONS(759),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [sym__integer_literal] = ACTIONS(759),
    [sym__octal_literal] = ACTIONS(759),
    [sym__hexidecimal_literal] = ACTIONS(759),
  },
  [238] = {
    [sym__identifier] = STATE(276),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [239] = {
    [anon_sym_COMMA] = ACTIONS(763),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(26),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_RPAREN] = ACTIONS(765),
    [sym_comment] = ACTIONS(26),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_comment] = ACTIONS(26),
  },
  [242] = {
    [aux_sym_import_specification_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym_comment] = ACTIONS(26),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [244] = {
    [sym__identifier] = STATE(282),
    [anon_sym_DOT_DOT] = ACTIONS(773),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [245] = {
    [anon_sym_LPAREN] = ACTIONS(775),
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [sym_comment] = ACTIONS(26),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [247] = {
    [aux_sym_export_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(26),
  },
  [248] = {
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
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(785),
    [anon_sym_module] = ACTIONS(787),
    [anon_sym_where] = ACTIONS(787),
    [anon_sym_import] = ACTIONS(787),
    [anon_sym_class] = ACTIONS(787),
    [anon_sym_data] = ACTIONS(787),
    [anon_sym_newtype] = ACTIONS(787),
    [anon_sym_type] = ACTIONS(787),
    [anon_sym_case] = ACTIONS(787),
    [anon_sym_default] = ACTIONS(787),
    [anon_sym_do] = ACTIONS(787),
    [anon_sym_else] = ACTIONS(787),
    [anon_sym_foreign] = ACTIONS(787),
    [anon_sym_if] = ACTIONS(787),
    [anon_sym_in] = ACTIONS(787),
    [anon_sym_instance] = ACTIONS(787),
    [anon_sym_let] = ACTIONS(787),
    [anon_sym_of] = ACTIONS(787),
    [anon_sym_then] = ACTIONS(787),
    [anon_sym__] = ACTIONS(787),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(789),
    [anon_sym_SQUOTE] = ACTIONS(787),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [sym__integer_literal] = ACTIONS(787),
    [sym__octal_literal] = ACTIONS(787),
    [sym__hexidecimal_literal] = ACTIONS(787),
  },
  [250] = {
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(286),
    [anon_sym_COMMA] = ACTIONS(791),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_infixl] = ACTIONS(791),
    [anon_sym_infixr] = ACTIONS(791),
    [anon_sym_infix] = ACTIONS(791),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(791),
    [sym_constructor_identifier] = ACTIONS(791),
    [sym_module_identifier] = ACTIONS(791),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [251] = {
    [sym__symbol] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(795),
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_infixl] = ACTIONS(795),
    [anon_sym_infixr] = ACTIONS(795),
    [anon_sym_infix] = ACTIONS(795),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(795),
    [sym_constructor_identifier] = ACTIONS(795),
    [sym_module_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [252] = {
    [anon_sym_BQUOTE] = ACTIONS(799),
    [sym_comment] = ACTIONS(26),
  },
  [253] = {
    [anon_sym_COMMA] = ACTIONS(801),
    [anon_sym_RBRACE] = ACTIONS(801),
    [anon_sym_infixl] = ACTIONS(801),
    [anon_sym_infixr] = ACTIONS(801),
    [anon_sym_infix] = ACTIONS(801),
    [sym_variable_identifier] = ACTIONS(791),
    [sym_constructor_identifier] = ACTIONS(791),
    [sym_module_identifier] = ACTIONS(791),
    [sym_comment] = ACTIONS(26),
  },
  [254] = {
    [sym__symbol] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(791),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_infixl] = ACTIONS(791),
    [anon_sym_infixr] = ACTIONS(791),
    [anon_sym_infix] = ACTIONS(791),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(791),
    [sym_constructor_identifier] = ACTIONS(791),
    [sym_module_identifier] = ACTIONS(791),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [255] = {
    [sym__op] = STATE(289),
    [sym_variable_symbol] = STATE(220),
    [sym_constructor_symbol] = STATE(220),
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(805),
    [anon_sym_infixl] = ACTIONS(805),
    [anon_sym_infixr] = ACTIONS(805),
    [anon_sym_infix] = ACTIONS(805),
    [sym_variable_identifier] = ACTIONS(807),
    [sym_constructor_identifier] = ACTIONS(807),
    [sym_module_identifier] = ACTIONS(807),
    [sym_comment] = ACTIONS(26),
  },
  [257] = {
    [aux_sym_fixity_repeat1] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(693),
    [anon_sym_RBRACE] = ACTIONS(805),
    [anon_sym_infixl] = ACTIONS(805),
    [anon_sym_infixr] = ACTIONS(805),
    [anon_sym_infix] = ACTIONS(805),
    [sym_variable_identifier] = ACTIONS(807),
    [sym_constructor_identifier] = ACTIONS(807),
    [sym_module_identifier] = ACTIONS(807),
    [sym_comment] = ACTIONS(26),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(809),
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_infixl] = ACTIONS(809),
    [anon_sym_infixr] = ACTIONS(809),
    [anon_sym_infix] = ACTIONS(809),
    [sym_variable_identifier] = ACTIONS(795),
    [sym_constructor_identifier] = ACTIONS(795),
    [sym_module_identifier] = ACTIONS(795),
    [sym_comment] = ACTIONS(26),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_infixl] = ACTIONS(811),
    [anon_sym_infixr] = ACTIONS(811),
    [anon_sym_infix] = ACTIONS(811),
    [anon_sym_COLON] = ACTIONS(811),
    [anon_sym_EQ] = ACTIONS(811),
    [anon_sym_PIPE] = ACTIONS(811),
    [anon_sym_BANG] = ACTIONS(811),
    [sym_variable_identifier] = ACTIONS(811),
    [sym_constructor_identifier] = ACTIONS(811),
    [sym_module_identifier] = ACTIONS(811),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(811),
    [anon_sym_DOLLAR] = ACTIONS(811),
    [anon_sym_PERCENT] = ACTIONS(811),
    [anon_sym_AMP] = ACTIONS(811),
    [anon_sym_1] = ACTIONS(811),
    [anon_sym_PLUS] = ACTIONS(811),
    [anon_sym_DOT] = ACTIONS(811),
    [anon_sym_SLASH] = ACTIONS(811),
    [anon_sym_LT] = ACTIONS(811),
    [anon_sym_GT] = ACTIONS(811),
    [anon_sym_QMARK] = ACTIONS(811),
    [anon_sym_AT] = ACTIONS(811),
    [anon_sym_CARET] = ACTIONS(811),
    [anon_sym_DASH] = ACTIONS(811),
    [anon_sym_TILDE] = ACTIONS(811),
    [anon_sym_BSLASH] = ACTIONS(811),
  },
  [260] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_infixl] = ACTIONS(136),
    [anon_sym_infixr] = ACTIONS(136),
    [anon_sym_infix] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [261] = {
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_infixl] = ACTIONS(813),
    [anon_sym_infixr] = ACTIONS(813),
    [anon_sym_infix] = ACTIONS(813),
    [sym_variable_identifier] = ACTIONS(815),
    [sym_constructor_identifier] = ACTIONS(815),
    [sym_module_identifier] = ACTIONS(815),
    [sym_comment] = ACTIONS(26),
  },
  [262] = {
    [sym__type] = STATE(293),
    [sym__identifier] = STATE(294),
    [aux_sym_type_class_repeat1] = STATE(264),
    [sym_variable_identifier] = ACTIONS(817),
    [sym_constructor_identifier] = ACTIONS(819),
    [sym_module_identifier] = ACTIONS(819),
    [sym_comment] = ACTIONS(26),
  },
  [263] = {
    [sym__identifier] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_infixl] = ACTIONS(162),
    [anon_sym_infixr] = ACTIONS(162),
    [anon_sym_infix] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(166),
    [sym_module_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [264] = {
    [sym__identifier] = STATE(296),
    [aux_sym__type_repeat1] = STATE(297),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_infixl] = ACTIONS(477),
    [anon_sym_infixr] = ACTIONS(477),
    [anon_sym_infix] = ACTIONS(477),
    [anon_sym_DASH_GT] = ACTIONS(821),
    [sym_variable_identifier] = ACTIONS(481),
    [sym_constructor_identifier] = ACTIONS(481),
    [sym_module_identifier] = ACTIONS(481),
    [sym_comment] = ACTIONS(26),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym_comment] = ACTIONS(26),
  },
  [266] = {
    [sym__identifier] = STATE(298),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(825),
    [anon_sym_module] = ACTIONS(827),
    [anon_sym_where] = ACTIONS(827),
    [anon_sym_import] = ACTIONS(827),
    [anon_sym_class] = ACTIONS(827),
    [anon_sym_data] = ACTIONS(827),
    [anon_sym_newtype] = ACTIONS(827),
    [anon_sym_type] = ACTIONS(827),
    [anon_sym_case] = ACTIONS(827),
    [anon_sym_default] = ACTIONS(827),
    [anon_sym_do] = ACTIONS(827),
    [anon_sym_else] = ACTIONS(827),
    [anon_sym_foreign] = ACTIONS(827),
    [anon_sym_if] = ACTIONS(827),
    [anon_sym_in] = ACTIONS(827),
    [anon_sym_instance] = ACTIONS(827),
    [anon_sym_let] = ACTIONS(827),
    [anon_sym_of] = ACTIONS(827),
    [anon_sym_then] = ACTIONS(827),
    [anon_sym__] = ACTIONS(827),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(829),
    [anon_sym_SQUOTE] = ACTIONS(827),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [sym__integer_literal] = ACTIONS(827),
    [sym__octal_literal] = ACTIONS(827),
    [sym__hexidecimal_literal] = ACTIONS(827),
  },
  [268] = {
    [anon_sym_COMMA] = ACTIONS(831),
    [anon_sym_COLON_COLON] = ACTIONS(831),
    [sym_comment] = ACTIONS(26),
  },
  [269] = {
    [sym__identifier] = STATE(186),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [270] = {
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(26),
  },
  [271] = {
    [sym_variable_identifier] = ACTIONS(835),
    [sym_comment] = ACTIONS(26),
  },
  [272] = {
    [sym_strict] = STATE(300),
    [sym__identifier] = STATE(300),
    [anon_sym_BANG] = ACTIONS(741),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(837),
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(26),
  },
  [274] = {
    [sym_field] = STATE(301),
    [sym_variable_identifier] = ACTIONS(449),
    [sym_comment] = ACTIONS(26),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [anon_sym_module] = ACTIONS(841),
    [anon_sym_where] = ACTIONS(841),
    [anon_sym_import] = ACTIONS(841),
    [anon_sym_class] = ACTIONS(841),
    [anon_sym_data] = ACTIONS(841),
    [anon_sym_PIPE] = ACTIONS(841),
    [anon_sym_deriving] = ACTIONS(841),
    [anon_sym_newtype] = ACTIONS(841),
    [anon_sym_type] = ACTIONS(841),
    [anon_sym_case] = ACTIONS(841),
    [anon_sym_default] = ACTIONS(841),
    [anon_sym_do] = ACTIONS(841),
    [anon_sym_else] = ACTIONS(841),
    [anon_sym_foreign] = ACTIONS(841),
    [anon_sym_if] = ACTIONS(841),
    [anon_sym_in] = ACTIONS(841),
    [anon_sym_instance] = ACTIONS(841),
    [anon_sym_let] = ACTIONS(841),
    [anon_sym_of] = ACTIONS(841),
    [anon_sym_then] = ACTIONS(841),
    [anon_sym__] = ACTIONS(841),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(843),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [anon_sym_DQUOTE] = ACTIONS(841),
    [sym__integer_literal] = ACTIONS(841),
    [sym__octal_literal] = ACTIONS(841),
    [sym__hexidecimal_literal] = ACTIONS(841),
  },
  [276] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [anon_sym_module] = ACTIONS(847),
    [anon_sym_where] = ACTIONS(847),
    [anon_sym_import] = ACTIONS(847),
    [anon_sym_class] = ACTIONS(847),
    [anon_sym_DASH_GT] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_newtype] = ACTIONS(847),
    [anon_sym_type] = ACTIONS(847),
    [anon_sym_case] = ACTIONS(847),
    [anon_sym_default] = ACTIONS(847),
    [anon_sym_do] = ACTIONS(847),
    [anon_sym_else] = ACTIONS(847),
    [anon_sym_foreign] = ACTIONS(847),
    [anon_sym_if] = ACTIONS(847),
    [anon_sym_in] = ACTIONS(847),
    [anon_sym_instance] = ACTIONS(847),
    [anon_sym_let] = ACTIONS(847),
    [anon_sym_of] = ACTIONS(847),
    [anon_sym_then] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(849),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [sym__integer_literal] = ACTIONS(847),
    [sym__octal_literal] = ACTIONS(847),
    [sym__hexidecimal_literal] = ACTIONS(847),
  },
  [277] = {
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(851),
    [sym_comment] = ACTIONS(26),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(853),
    [anon_sym_module] = ACTIONS(855),
    [anon_sym_where] = ACTIONS(855),
    [anon_sym_import] = ACTIONS(855),
    [anon_sym_class] = ACTIONS(855),
    [anon_sym_data] = ACTIONS(855),
    [anon_sym_newtype] = ACTIONS(855),
    [anon_sym_type] = ACTIONS(855),
    [anon_sym_case] = ACTIONS(855),
    [anon_sym_default] = ACTIONS(855),
    [anon_sym_do] = ACTIONS(855),
    [anon_sym_else] = ACTIONS(855),
    [anon_sym_foreign] = ACTIONS(855),
    [anon_sym_if] = ACTIONS(855),
    [anon_sym_in] = ACTIONS(855),
    [anon_sym_instance] = ACTIONS(855),
    [anon_sym_let] = ACTIONS(855),
    [anon_sym_of] = ACTIONS(855),
    [anon_sym_then] = ACTIONS(855),
    [anon_sym__] = ACTIONS(855),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(857),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym__integer_literal] = ACTIONS(855),
    [sym__octal_literal] = ACTIONS(855),
    [sym__hexidecimal_literal] = ACTIONS(855),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(859),
    [sym_comment] = ACTIONS(26),
  },
  [280] = {
    [aux_sym_import_specification_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(859),
    [sym_comment] = ACTIONS(26),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(861),
    [sym_comment] = ACTIONS(26),
  },
  [282] = {
    [aux_sym_export_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(861),
    [sym_comment] = ACTIONS(26),
  },
  [283] = {
    [sym__identifier] = STATE(307),
    [anon_sym_DOT_DOT] = ACTIONS(863),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [284] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(865),
    [sym_comment] = ACTIONS(26),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_infixl] = ACTIONS(867),
    [anon_sym_infixr] = ACTIONS(867),
    [anon_sym_infix] = ACTIONS(867),
    [sym_variable_identifier] = ACTIONS(869),
    [sym_constructor_identifier] = ACTIONS(869),
    [sym_module_identifier] = ACTIONS(869),
    [sym_comment] = ACTIONS(26),
  },
  [286] = {
    [sym__symbol] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_infixl] = ACTIONS(869),
    [anon_sym_infixr] = ACTIONS(869),
    [anon_sym_infix] = ACTIONS(869),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_variable_identifier] = ACTIONS(869),
    [sym_constructor_identifier] = ACTIONS(869),
    [sym_module_identifier] = ACTIONS(869),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [287] = {
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_infixl] = ACTIONS(873),
    [anon_sym_infixr] = ACTIONS(873),
    [anon_sym_infix] = ACTIONS(873),
    [sym_variable_identifier] = ACTIONS(875),
    [sym_constructor_identifier] = ACTIONS(875),
    [sym_module_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(26),
  },
  [288] = {
    [anon_sym_COMMA] = ACTIONS(877),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_infixl] = ACTIONS(877),
    [anon_sym_infixr] = ACTIONS(877),
    [anon_sym_infix] = ACTIONS(877),
    [sym_variable_identifier] = ACTIONS(879),
    [sym_constructor_identifier] = ACTIONS(879),
    [sym_module_identifier] = ACTIONS(879),
    [sym_comment] = ACTIONS(26),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(881),
    [anon_sym_infixl] = ACTIONS(881),
    [anon_sym_infixr] = ACTIONS(881),
    [anon_sym_infix] = ACTIONS(881),
    [sym_variable_identifier] = ACTIONS(883),
    [sym_constructor_identifier] = ACTIONS(883),
    [sym_module_identifier] = ACTIONS(883),
    [sym_comment] = ACTIONS(26),
  },
  [290] = {
    [sym__op] = STATE(310),
    [sym_variable_symbol] = STATE(220),
    [sym_constructor_symbol] = STATE(220),
    [sym__symbol] = STATE(222),
    [aux_sym_variable_symbol_repeat1] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_EQ] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_BANG] = ACTIONS(565),
    [sym_comment] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_1] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_QMARK] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_BSLASH] = ACTIONS(565),
  },
  [291] = {
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_infixl] = ACTIONS(885),
    [anon_sym_infixr] = ACTIONS(885),
    [anon_sym_infix] = ACTIONS(885),
    [sym_variable_identifier] = ACTIONS(887),
    [sym_constructor_identifier] = ACTIONS(887),
    [sym_module_identifier] = ACTIONS(887),
    [sym_comment] = ACTIONS(26),
  },
  [292] = {
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_infixl] = ACTIONS(136),
    [anon_sym_infixr] = ACTIONS(136),
    [anon_sym_infix] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
    [sym_module_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(26),
  },
  [293] = {
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_infixl] = ACTIONS(889),
    [anon_sym_infixr] = ACTIONS(889),
    [anon_sym_infix] = ACTIONS(889),
    [sym_variable_identifier] = ACTIONS(891),
    [sym_constructor_identifier] = ACTIONS(891),
    [sym_module_identifier] = ACTIONS(891),
    [sym_comment] = ACTIONS(26),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_infixl] = ACTIONS(162),
    [anon_sym_infixr] = ACTIONS(162),
    [anon_sym_infix] = ACTIONS(162),
    [anon_sym_DASH_GT] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(285),
    [sym_constructor_identifier] = ACTIONS(285),
    [sym_module_identifier] = ACTIONS(285),
    [sym_comment] = ACTIONS(26),
  },
  [295] = {
    [sym__identifier] = STATE(311),
    [sym_variable_identifier] = ACTIONS(817),
    [sym_constructor_identifier] = ACTIONS(819),
    [sym_module_identifier] = ACTIONS(819),
    [sym_comment] = ACTIONS(26),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_infixl] = ACTIONS(297),
    [anon_sym_infixr] = ACTIONS(297),
    [anon_sym_infix] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(299),
    [sym_constructor_identifier] = ACTIONS(299),
    [sym_module_identifier] = ACTIONS(299),
    [sym_comment] = ACTIONS(26),
  },
  [297] = {
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_infixl] = ACTIONS(631),
    [anon_sym_infixr] = ACTIONS(631),
    [anon_sym_infix] = ACTIONS(631),
    [anon_sym_DASH_GT] = ACTIONS(893),
    [sym_variable_identifier] = ACTIONS(635),
    [sym_constructor_identifier] = ACTIONS(635),
    [sym_module_identifier] = ACTIONS(635),
    [sym_comment] = ACTIONS(26),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(895),
    [sym_comment] = ACTIONS(26),
  },
  [299] = {
    [anon_sym_COMMA] = ACTIONS(897),
    [anon_sym_COLON_COLON] = ACTIONS(897),
    [sym_comment] = ACTIONS(26),
  },
  [300] = {
    [anon_sym_COMMA] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(26),
  },
  [301] = {
    [anon_sym_COMMA] = ACTIONS(901),
    [anon_sym_RBRACE] = ACTIONS(901),
    [sym_comment] = ACTIONS(26),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(903),
    [anon_sym_module] = ACTIONS(905),
    [anon_sym_where] = ACTIONS(905),
    [anon_sym_import] = ACTIONS(905),
    [anon_sym_class] = ACTIONS(905),
    [anon_sym_data] = ACTIONS(905),
    [anon_sym_newtype] = ACTIONS(905),
    [anon_sym_type] = ACTIONS(905),
    [anon_sym_case] = ACTIONS(905),
    [anon_sym_default] = ACTIONS(905),
    [anon_sym_do] = ACTIONS(905),
    [anon_sym_else] = ACTIONS(905),
    [anon_sym_foreign] = ACTIONS(905),
    [anon_sym_if] = ACTIONS(905),
    [anon_sym_in] = ACTIONS(905),
    [anon_sym_instance] = ACTIONS(905),
    [anon_sym_let] = ACTIONS(905),
    [anon_sym_of] = ACTIONS(905),
    [anon_sym_then] = ACTIONS(905),
    [anon_sym__] = ACTIONS(905),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(907),
    [anon_sym_SQUOTE] = ACTIONS(905),
    [anon_sym_DQUOTE] = ACTIONS(905),
    [sym__integer_literal] = ACTIONS(905),
    [sym__octal_literal] = ACTIONS(905),
    [sym__hexidecimal_literal] = ACTIONS(905),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(909),
    [sym_comment] = ACTIONS(26),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(911),
    [anon_sym_RPAREN] = ACTIONS(911),
    [sym_comment] = ACTIONS(26),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(913),
    [sym_comment] = ACTIONS(26),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(913),
    [sym_comment] = ACTIONS(26),
  },
  [307] = {
    [aux_sym_export_repeat1] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(913),
    [sym_comment] = ACTIONS(26),
  },
  [308] = {
    [aux_sym_import_specification_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(909),
    [sym_comment] = ACTIONS(26),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(915),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_infixl] = ACTIONS(915),
    [anon_sym_infixr] = ACTIONS(915),
    [anon_sym_infix] = ACTIONS(915),
    [sym_variable_identifier] = ACTIONS(917),
    [sym_constructor_identifier] = ACTIONS(917),
    [sym_module_identifier] = ACTIONS(917),
    [sym_comment] = ACTIONS(26),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(919),
    [anon_sym_RBRACE] = ACTIONS(919),
    [anon_sym_infixl] = ACTIONS(919),
    [anon_sym_infixr] = ACTIONS(919),
    [anon_sym_infix] = ACTIONS(919),
    [sym_variable_identifier] = ACTIONS(921),
    [sym_constructor_identifier] = ACTIONS(921),
    [sym_module_identifier] = ACTIONS(921),
    [sym_comment] = ACTIONS(26),
  },
  [311] = {
    [anon_sym_RBRACE] = ACTIONS(759),
    [anon_sym_infixl] = ACTIONS(759),
    [anon_sym_infixr] = ACTIONS(759),
    [anon_sym_infix] = ACTIONS(759),
    [anon_sym_DASH_GT] = ACTIONS(759),
    [sym_variable_identifier] = ACTIONS(761),
    [sym_constructor_identifier] = ACTIONS(761),
    [sym_module_identifier] = ACTIONS(761),
    [sym_comment] = ACTIONS(26),
  },
  [312] = {
    [sym__identifier] = STATE(317),
    [sym_variable_identifier] = ACTIONS(817),
    [sym_constructor_identifier] = ACTIONS(819),
    [sym_module_identifier] = ACTIONS(819),
    [sym_comment] = ACTIONS(26),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [anon_sym_module] = ACTIONS(925),
    [anon_sym_where] = ACTIONS(925),
    [anon_sym_import] = ACTIONS(925),
    [anon_sym_class] = ACTIONS(925),
    [anon_sym_data] = ACTIONS(925),
    [anon_sym_newtype] = ACTIONS(925),
    [anon_sym_type] = ACTIONS(925),
    [anon_sym_case] = ACTIONS(925),
    [anon_sym_default] = ACTIONS(925),
    [anon_sym_do] = ACTIONS(925),
    [anon_sym_else] = ACTIONS(925),
    [anon_sym_foreign] = ACTIONS(925),
    [anon_sym_if] = ACTIONS(925),
    [anon_sym_in] = ACTIONS(925),
    [anon_sym_instance] = ACTIONS(925),
    [anon_sym_let] = ACTIONS(925),
    [anon_sym_of] = ACTIONS(925),
    [anon_sym_then] = ACTIONS(925),
    [anon_sym__] = ACTIONS(925),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(927),
    [anon_sym_SQUOTE] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(925),
    [sym__integer_literal] = ACTIONS(925),
    [sym__octal_literal] = ACTIONS(925),
    [sym__hexidecimal_literal] = ACTIONS(925),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_RPAREN] = ACTIONS(929),
    [sym_comment] = ACTIONS(26),
  },
  [315] = {
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(931),
    [sym_comment] = ACTIONS(26),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(933),
    [sym_comment] = ACTIONS(26),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_DASH_GT] = ACTIONS(847),
    [sym_variable_identifier] = ACTIONS(849),
    [sym_constructor_identifier] = ACTIONS(849),
    [sym_module_identifier] = ACTIONS(849),
    [sym_comment] = ACTIONS(26),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(935),
    [anon_sym_RPAREN] = ACTIONS(935),
    [sym_comment] = ACTIONS(26),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(937),
    [anon_sym_module] = ACTIONS(939),
    [anon_sym_where] = ACTIONS(939),
    [anon_sym_import] = ACTIONS(939),
    [anon_sym_class] = ACTIONS(939),
    [anon_sym_data] = ACTIONS(939),
    [anon_sym_newtype] = ACTIONS(939),
    [anon_sym_type] = ACTIONS(939),
    [anon_sym_case] = ACTIONS(939),
    [anon_sym_default] = ACTIONS(939),
    [anon_sym_do] = ACTIONS(939),
    [anon_sym_else] = ACTIONS(939),
    [anon_sym_foreign] = ACTIONS(939),
    [anon_sym_if] = ACTIONS(939),
    [anon_sym_in] = ACTIONS(939),
    [anon_sym_instance] = ACTIONS(939),
    [anon_sym_let] = ACTIONS(939),
    [anon_sym_of] = ACTIONS(939),
    [anon_sym_then] = ACTIONS(939),
    [anon_sym__] = ACTIONS(939),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(941),
    [anon_sym_SQUOTE] = ACTIONS(939),
    [anon_sym_DQUOTE] = ACTIONS(939),
    [sym__integer_literal] = ACTIONS(939),
    [sym__octal_literal] = ACTIONS(939),
    [sym__hexidecimal_literal] = ACTIONS(939),
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
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
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
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
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
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_body, 1),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 2),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 2),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 7),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(285),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(287),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 3),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [917] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [921] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [941] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
