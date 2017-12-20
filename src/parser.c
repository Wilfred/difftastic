#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 345
#define SYMBOL_COUNT 191
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
  anon_sym_instance = 14,
  anon_sym_infixl = 15,
  anon_sym_infixr = 16,
  anon_sym_infix = 17,
  anon_sym_BQUOTE = 18,
  anon_sym_COLON = 19,
  anon_sym_COLON_COLON = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_data = 22,
  anon_sym_EQ = 23,
  anon_sym_EQ_GT = 24,
  anon_sym_PIPE = 25,
  anon_sym_deriving = 26,
  anon_sym_newtype = 27,
  anon_sym_BANG = 28,
  anon_sym_type = 29,
  sym_variable_identifier = 30,
  sym_constructor_identifier = 31,
  sym_module_identifier = 32,
  anon_sym_case = 33,
  anon_sym_default = 34,
  anon_sym_do = 35,
  anon_sym_else = 36,
  anon_sym_foreign = 37,
  anon_sym_if = 38,
  anon_sym_in = 39,
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
  sym__instance_declaration = 134,
  sym_type_class_instance = 135,
  sym_type_class_instance_body = 136,
  sym__general_declaration = 137,
  sym_fixity = 138,
  sym__op = 139,
  sym_variable_symbol = 140,
  sym_constructor_symbol = 141,
  sym_type_signature = 142,
  sym__type = 143,
  sym_algebraic_datatype = 144,
  sym_context = 145,
  sym_class = 146,
  sym_constructors = 147,
  sym_constructor = 148,
  sym_deriving = 149,
  sym_newtype = 150,
  sym_new_constructor = 151,
  sym_fields = 152,
  sym_field = 153,
  sym_strict = 154,
  sym_type_synonym = 155,
  sym__literal = 156,
  sym__identifier = 157,
  sym_simple_type = 158,
  sym_reserved_identifier = 159,
  sym_integer = 160,
  sym_char = 161,
  sym_string = 162,
  sym__gap = 163,
  sym__graphic = 164,
  sym__small = 165,
  sym__large = 166,
  sym__symbol = 167,
  sym__special = 168,
  sym__escape = 169,
  sym__char_escape = 170,
  sym__ascii = 171,
  sym__cntrl = 172,
  aux_sym_program_repeat1 = 173,
  aux_sym_module_exports_repeat1 = 174,
  aux_sym_export_repeat1 = 175,
  aux_sym_import_specification_repeat1 = 176,
  aux_sym_type_class_repeat1 = 177,
  aux_sym_type_class_body_repeat1 = 178,
  aux_sym_type_class_instance_body_repeat1 = 179,
  aux_sym_fixity_repeat1 = 180,
  aux_sym_variable_symbol_repeat1 = 181,
  aux_sym__type_repeat1 = 182,
  aux_sym_context_repeat1 = 183,
  aux_sym_constructors_repeat1 = 184,
  aux_sym_constructor_repeat1 = 185,
  aux_sym_fields_repeat1 = 186,
  aux_sym_field_repeat1 = 187,
  aux_sym_string_repeat1 = 188,
  aux_sym__escape_repeat1 = 189,
  aux_sym__escape_repeat2 = 190,
  alias_sym_module_body = 191,
  alias_sym_type_constructor = 192,
  alias_sym_type_variable = 193,
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
  [anon_sym_instance] = "instance",
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
  [sym__instance_declaration] = "_instance_declaration",
  [sym_type_class_instance] = "type_class_instance",
  [sym_type_class_instance_body] = "type_class_instance_body",
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
  [aux_sym_type_class_instance_body_repeat1] = "type_class_instance_body_repeat1",
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
  [anon_sym_instance] = {
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
  [sym__instance_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_class_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_type_class_instance_body] = {
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
  [aux_sym_type_class_instance_body_repeat1] = {
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
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 401:
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(401);
      if (lookahead == '(')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(382);
      if (lookahead == '-')
        ADVANCE(383);
      END_STATE();
    case 406:
      if (lookahead == 'n')
        SKIP(400);
      END_STATE();
    case 407:
      if (lookahead == '\n')
        ADVANCE(408);
      if (lookahead == '\r')
        ADVANCE(411);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(412);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(413);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(407);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 408:
      if (lookahead == '\n')
        ADVANCE(408);
      if (lookahead == '\r')
        ADVANCE(408);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(409);
      if (lookahead == ':')
        ADVANCE(358);
      if (lookahead == '=')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(410);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '\n')
        ADVANCE(408);
      if (lookahead == '\r')
        ADVANCE(411);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(412);
      if (lookahead == ':')
        ADVANCE(386);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(413);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(407);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 412:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 413:
      if (lookahead == 'n')
        SKIP(407);
      END_STATE();
    case 414:
      if (lookahead == '\t')
        SKIP(414);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 415:
      if (lookahead == '\t')
        ADVANCE(415);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == ' ')
        ADVANCE(416);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(420);
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
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(415);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == ' ')
        ADVANCE(416);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(420);
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
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      if (lookahead == '\t')
        SKIP(414);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 429:
      if (lookahead == '\t')
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(434);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(435);
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
        ADVANCE(421);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(434);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(435);
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
        ADVANCE(421);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(434);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(435);
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
        ADVANCE(421);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(432);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(434);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(435);
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
        ADVANCE(421);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(433);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      if (lookahead == '\t')
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(431);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 437:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(448);
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
        SKIP(449);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(452);
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
        SKIP(437);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 438:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(438);
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
        ADVANCE(439);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(442);
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
        ADVANCE(438);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 439:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(438);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(441);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(444);
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
      if (lookahead == 'n')
        ADVANCE(446);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(447);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(448);
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
        SKIP(449);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(277);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(452);
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
        SKIP(437);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 449:
      if (lookahead == 'n')
        SKIP(437);
      END_STATE();
    case 450:
      if (lookahead == 's')
        ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 452:
      if (lookahead == 'i')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'd')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'i')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'n')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'g')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 458:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(463);
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
        SKIP(464);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(465);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(452);
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
        SKIP(458);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 459:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(459);
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
        ADVANCE(460);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'c')
        ADVANCE(179);
      if (lookahead == 'd')
        ADVANCE(461);
      if (lookahead == 'e')
        ADVANCE(204);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'h')
        ADVANCE(442);
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
        ADVANCE(459);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 460:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(459);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead == 'e')
        ADVANCE(462);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(459);
      if (lookahead == '\r')
        ADVANCE(463);
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
        SKIP(464);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'a')
        ADVANCE(450);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(465);
      if (lookahead == 'e')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'h')
        ADVANCE(452);
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
        SKIP(458);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 464:
      if (lookahead == 'n')
        SKIP(458);
      END_STATE();
    case 465:
      if (lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'e')
        ADVANCE(466);
      if (lookahead == 'o')
        ADVANCE(293);
      END_STATE();
    case 466:
      if (lookahead == 'f')
        ADVANCE(282);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(405);
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
        SKIP(476);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(467);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 468:
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(468);
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
        ADVANCE(469);
      if (lookahead == 'w')
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(471);
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
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
    case 475:
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(405);
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
        SKIP(476);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(467);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 476:
      if (lookahead == 'n')
        SKIP(467);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'h')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(484);
      if (lookahead == 'w')
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 486:
      if (lookahead == 'n')
        SKIP(482);
      END_STATE();
    case 487:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(567);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 488:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(488);
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
        ADVANCE(489);
      if (lookahead == '_')
        ADVANCE(490);
      if (lookahead == 'c')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'f')
        ADVANCE(520);
      if (lookahead == 'i')
        ADVANCE(527);
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
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(488);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
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
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(492);
      if (lookahead == 'l')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
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
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
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
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(503);
      if (lookahead == 'o')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
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
    case 503:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(504);
      if (lookahead == 'r')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
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
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
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
    case 515:
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
    case 516:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
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
    case 520:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
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
    case 527:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(528);
      if (lookahead == 'm')
        ADVANCE(529);
      if (lookahead == 'n')
        ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
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
    case 529:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
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
    case 534:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
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
    case 541:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
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
    case 544:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
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
    case 550:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
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
    case 557:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
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
    case 559:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == 'y')
        ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
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
    case 563:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
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
    case 566:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(567);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 567:
      if (lookahead == 'n')
        SKIP(487);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(570);
      if (lookahead == 'l')
        ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(578);
      if (lookahead == 'e')
        ADVANCE(581);
      if (lookahead == 'o')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(582);
      if (lookahead == 'r')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'u')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'v')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'g')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'g')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(606);
      if (lookahead == 'm')
        ADVANCE(607);
      if (lookahead == 'n')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'r')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'c')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'o')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'd')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'u')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'w')
        ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 't')
        ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'y')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'h')
        ADVANCE(638);
      if (lookahead == 'y')
        ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'p')
        ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 644:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(647);
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
        SKIP(648);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 645:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(645);
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
        ADVANCE(646);
      if (lookahead == '_')
        ADVANCE(490);
      if (lookahead == 'c')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'f')
        ADVANCE(520);
      if (lookahead == 'i')
        ADVANCE(527);
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
        ADVANCE(470);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(645);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(647);
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
        SKIP(648);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 648:
      if (lookahead == 'n')
        SKIP(644);
      END_STATE();
    case 649:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(702);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(703);
      if (lookahead == 'B')
        ADVANCE(706);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'D')
        ADVANCE(714);
      if (lookahead == 'E')
        ADVANCE(724);
      if (lookahead == 'F')
        ADVANCE(735);
      if (lookahead == 'G')
        ADVANCE(738);
      if (lookahead == 'H')
        ADVANCE(739);
      if (lookahead == 'L')
        ADVANCE(740);
      if (lookahead == 'N')
        ADVANCE(741);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(743);
      if (lookahead == 'S')
        ADVANCE(744);
      if (lookahead == 'U')
        ADVANCE(745);
      if (lookahead == 'V')
        ADVANCE(746);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(428);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(650);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(651);
      if (lookahead == 'B')
        ADVANCE(654);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead == 'D')
        ADVANCE(662);
      if (lookahead == 'E')
        ADVANCE(672);
      if (lookahead == 'F')
        ADVANCE(683);
      if (lookahead == 'G')
        ADVANCE(686);
      if (lookahead == 'H')
        ADVANCE(687);
      if (lookahead == 'L')
        ADVANCE(688);
      if (lookahead == 'N')
        ADVANCE(689);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(691);
      if (lookahead == 'S')
        ADVANCE(692);
      if (lookahead == 'U')
        ADVANCE(693);
      if (lookahead == 'V')
        ADVANCE(694);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '\\')
        ADVANCE(696);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(659);
      if (lookahead == 'R')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'L')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(664);
      if (lookahead == '2')
        ADVANCE(665);
      if (lookahead == '3')
        ADVANCE(666);
      if (lookahead == '4')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(669);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DEL);
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
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(673);
      if (lookahead == 'N')
        ADVANCE(674);
      if (lookahead == 'O')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead == 'T')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_EOT);
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
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(681);
      if (lookahead == 'X')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
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
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(702);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(703);
      if (lookahead == 'B')
        ADVANCE(706);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'D')
        ADVANCE(714);
      if (lookahead == 'E')
        ADVANCE(724);
      if (lookahead == 'F')
        ADVANCE(735);
      if (lookahead == 'G')
        ADVANCE(738);
      if (lookahead == 'H')
        ADVANCE(739);
      if (lookahead == 'L')
        ADVANCE(740);
      if (lookahead == 'N')
        ADVANCE(741);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(743);
      if (lookahead == 'S')
        ADVANCE(744);
      if (lookahead == 'U')
        ADVANCE(745);
      if (lookahead == 'V')
        ADVANCE(746);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(428);
      END_STATE();
    case 703:
      if (lookahead == 'C')
        ADVANCE(704);
      END_STATE();
    case 704:
      if (lookahead == 'K')
        ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 706:
      if (lookahead == 'E')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      END_STATE();
    case 707:
      if (lookahead == 'L')
        ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 710:
      if (lookahead == 'A')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(713);
      END_STATE();
    case 711:
      if (lookahead == 'N')
        ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 714:
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'L')
        ADVANCE(722);
      END_STATE();
    case 715:
      if (lookahead == '1')
        ADVANCE(716);
      if (lookahead == '2')
        ADVANCE(717);
      if (lookahead == '3')
        ADVANCE(718);
      if (lookahead == '4')
        ADVANCE(719);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 720:
      if (lookahead == 'L')
        ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 722:
      if (lookahead == 'E')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 724:
      if (lookahead == 'M')
        ADVANCE(725);
      if (lookahead == 'N')
        ADVANCE(726);
      if (lookahead == 'O')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      if (lookahead == 'T')
        ADVANCE(732);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 726:
      if (lookahead == 'Q')
        ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 728:
      if (lookahead == 'T')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 730:
      if (lookahead == 'C')
        ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 732:
      if (lookahead == 'B')
        ADVANCE(733);
      if (lookahead == 'X')
        ADVANCE(734);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 735:
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 738:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 740:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 741:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 743:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 744:
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
    case 745:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 746:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 753:
      if (lookahead == '\t')
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(766);
      if (lookahead == 'B')
        ADVANCE(767);
      if (lookahead == 'C')
        ADVANCE(768);
      if (lookahead == 'D')
        ADVANCE(769);
      if (lookahead == 'E')
        ADVANCE(770);
      if (lookahead == 'F')
        ADVANCE(771);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(421);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(421);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(421);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(755);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == ' ')
        ADVANCE(757);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(758);
      if (lookahead == 'B')
        ADVANCE(759);
      if (lookahead == 'C')
        ADVANCE(760);
      if (lookahead == 'D')
        ADVANCE(761);
      if (lookahead == 'E')
        ADVANCE(762);
      if (lookahead == 'F')
        ADVANCE(763);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(695);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(764);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(697);
      if (lookahead == 'b')
        ADVANCE(698);
      if (lookahead == 'f')
        ADVANCE(699);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(700);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(701);
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
        ADVANCE(421);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(659);
      if (lookahead == 'R')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'L')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(673);
      if (lookahead == 'N')
        ADVANCE(674);
      if (lookahead == 'O')
        ADVANCE(676);
      if (lookahead == 'S')
        ADVANCE(678);
      if (lookahead == 'T')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(684);
      if (lookahead == 'S')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(756);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      if (lookahead == '\t')
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(765);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(766);
      if (lookahead == 'B')
        ADVANCE(767);
      if (lookahead == 'C')
        ADVANCE(768);
      if (lookahead == 'D')
        ADVANCE(769);
      if (lookahead == 'E')
        ADVANCE(770);
      if (lookahead == 'F')
        ADVANCE(771);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(742);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(747);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(748);
      if (lookahead == 'b')
        ADVANCE(749);
      if (lookahead == 'f')
        ADVANCE(750);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(751);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(752);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(704);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(711);
      if (lookahead == 'R')
        ADVANCE(713);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(715);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'L')
        ADVANCE(722);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(725);
      if (lookahead == 'N')
        ADVANCE(726);
      if (lookahead == 'O')
        ADVANCE(728);
      if (lookahead == 'S')
        ADVANCE(730);
      if (lookahead == 'T')
        ADVANCE(732);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'S')
        ADVANCE(737);
      END_STATE();
    case 772:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(775);
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
        SKIP(776);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 773:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(773);
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
        ADVANCE(774);
      if (lookahead == '_')
        ADVANCE(490);
      if (lookahead == 'c')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'f')
        ADVANCE(520);
      if (lookahead == 'i')
        ADVANCE(527);
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
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(773);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 774:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(773);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(773);
      if (lookahead == '\r')
        ADVANCE(775);
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
        SKIP(776);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(772);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 776:
      if (lookahead == 'n')
        SKIP(772);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(781);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 779:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(778);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(778);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(781);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(777);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 781:
      if (lookahead == 'n')
        SKIP(777);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(788);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(785);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(783);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(785);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(785);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(786);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(788);
      END_STATE();
    case 787:
      if (lookahead == 'n')
        SKIP(782);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(788);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(790);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(790);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(791);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(790);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(790);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(427);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(799);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(795);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(796);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(799);
      END_STATE();
    case 798:
      if (lookahead == 'n')
        SKIP(793);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(806);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '7'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(806);
      END_STATE();
    case 805:
      if (lookahead == 'n')
        SKIP(800);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(809);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(808);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      END_STATE();
    case 811:
      if (lookahead == 'n')
        SKIP(807);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == 'i')
        ADVANCE(824);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(360);
      if (lookahead == '\\')
        ADVANCE(814);
      if (lookahead == 'i')
        ADVANCE(815);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 814:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(813);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(820);
      if (lookahead == 'r')
        ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
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
    case 821:
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
    case 822:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '(')
        ADVANCE(380);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == 'i')
        ADVANCE(824);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 823:
      if (lookahead == 'n')
        SKIP(812);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'i')
        ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'x')
        ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'l')
        ADVANCE(829);
      if (lookahead == 'r')
        ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 831:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(836);
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
        SKIP(837);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(838);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 832:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(832);
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
        ADVANCE(833);
      if (lookahead == '_')
        ADVANCE(490);
      if (lookahead == 'c')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(834);
      if (lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'f')
        ADVANCE(520);
      if (lookahead == 'i')
        ADVANCE(527);
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
        ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(832);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(378);
      ADVANCE(8);
      END_STATE();
    case 833:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(832);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(500);
      if (lookahead == 'e')
        ADVANCE(835);
      if (lookahead == 'o')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(369);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 836:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(836);
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
        SKIP(837);
      if (lookahead == '_')
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(838);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(399);
      END_STATE();
    case 837:
      if (lookahead == 'n')
        SKIP(831);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'a')
        ADVANCE(578);
      if (lookahead == 'e')
        ADVANCE(839);
      if (lookahead == 'o')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(390);
      if (lookahead == 'f')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(390);
      END_STATE();
    case 840:
      if (lookahead == '\t')
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(421);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(421);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(421);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(421);
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
        ADVANCE(430);
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == ' ')
        ADVANCE(423);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(853);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(849);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(853);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
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
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
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
        ADVANCE(490);
      if (lookahead == 'c')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(499);
      if (lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'f')
        ADVANCE(520);
      if (lookahead == 'i')
        ADVANCE(527);
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
        ADVANCE(470);
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
        ADVANCE(568);
      if (lookahead == 'c')
        ADVANCE(569);
      if (lookahead == 'd')
        ADVANCE(577);
      if (lookahead == 'e')
        ADVANCE(594);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(605);
      if (lookahead == 'l')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(622);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead == 'o')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(637);
      if (lookahead == 'w')
        ADVANCE(477);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(824);
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
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(419);
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
        ADVANCE(815);
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
        ADVANCE(424);
      if (lookahead == '.')
        ADVANCE(425);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(426);
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
        ADVANCE(427);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(824);
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
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == 'i')
        ADVANCE(824);
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
        ADVANCE(815);
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
        ADVANCE(405);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '[')
        ADVANCE(366);
      if (lookahead == '\\')
        SKIP(868);
      if (lookahead == 'i')
        ADVANCE(824);
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
  [6] = {.lex_state = 400},
  [7] = {.lex_state = 400},
  [8] = {.lex_state = 400},
  [9] = {.lex_state = 407},
  [10] = {.lex_state = 169},
  [11] = {.lex_state = 414},
  [12] = {.lex_state = 429},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 169},
  [18] = {.lex_state = 169},
  [19] = {.lex_state = 169},
  [20] = {.lex_state = 407},
  [21] = {.lex_state = 437},
  [22] = {.lex_state = 458},
  [23] = {.lex_state = 407},
  [24] = {.lex_state = 467},
  [25] = {.lex_state = 407},
  [26] = {.lex_state = 169},
  [27] = {.lex_state = 467},
  [28] = {.lex_state = 482},
  [29] = {.lex_state = 407},
  [30] = {.lex_state = 482},
  [31] = {.lex_state = 487},
  [32] = {.lex_state = 407},
  [33] = {.lex_state = 487},
  [34] = {.lex_state = 644},
  [35] = {.lex_state = 400},
  [36] = {.lex_state = 407},
  [37] = {.lex_state = 400},
  [38] = {.lex_state = 350},
  [39] = {.lex_state = 407},
  [40] = {.lex_state = 407},
  [41] = {.lex_state = 350},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 649},
  [49] = {.lex_state = 429},
  [50] = {.lex_state = 429},
  [51] = {.lex_state = 429},
  [52] = {.lex_state = 429},
  [53] = {.lex_state = 169},
  [54] = {.lex_state = 429},
  [55] = {.lex_state = 429},
  [56] = {.lex_state = 753},
  [57] = {.lex_state = 429},
  [58] = {.lex_state = 429},
  [59] = {.lex_state = 169},
  [60] = {.lex_state = 169},
  [61] = {.lex_state = 407},
  [62] = {.lex_state = 169},
  [63] = {.lex_state = 458},
  [64] = {.lex_state = 407},
  [65] = {.lex_state = 407},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 169},
  [68] = {.lex_state = 350},
  [69] = {.lex_state = 400},
  [70] = {.lex_state = 482},
  [71] = {.lex_state = 482},
  [72] = {.lex_state = 482},
  [73] = {.lex_state = 407},
  [74] = {.lex_state = 407},
  [75] = {.lex_state = 467},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 482},
  [78] = {.lex_state = 482},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 644},
  [81] = {.lex_state = 644},
  [82] = {.lex_state = 644},
  [83] = {.lex_state = 772},
  [84] = {.lex_state = 772},
  [85] = {.lex_state = 644},
  [86] = {.lex_state = 644},
  [87] = {.lex_state = 400},
  [88] = {.lex_state = 169},
  [89] = {.lex_state = 169},
  [90] = {.lex_state = 169},
  [91] = {.lex_state = 644},
  [92] = {.lex_state = 350},
  [93] = {.lex_state = 777},
  [94] = {.lex_state = 777},
  [95] = {.lex_state = 407},
  [96] = {.lex_state = 782},
  [97] = {.lex_state = 407},
  [98] = {.lex_state = 407},
  [99] = {.lex_state = 169},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 789},
  [103] = {.lex_state = 793},
  [104] = {.lex_state = 800},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 429},
  [107] = {.lex_state = 429},
  [108] = {.lex_state = 789},
  [109] = {.lex_state = 793},
  [110] = {.lex_state = 800},
  [111] = {.lex_state = 429},
  [112] = {.lex_state = 429},
  [113] = {.lex_state = 169},
  [114] = {.lex_state = 169},
  [115] = {.lex_state = 169},
  [116] = {.lex_state = 350},
  [117] = {.lex_state = 807},
  [118] = {.lex_state = 169},
  [119] = {.lex_state = 407},
  [120] = {.lex_state = 169},
  [121] = {.lex_state = 169},
  [122] = {.lex_state = 807},
  [123] = {.lex_state = 458},
  [124] = {.lex_state = 407},
  [125] = {.lex_state = 407},
  [126] = {.lex_state = 169},
  [127] = {.lex_state = 350},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 407},
  [130] = {.lex_state = 812},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 812},
  [133] = {.lex_state = 644},
  [134] = {.lex_state = 644},
  [135] = {.lex_state = 169},
  [136] = {.lex_state = 169},
  [137] = {.lex_state = 644},
  [138] = {.lex_state = 407},
  [139] = {.lex_state = 169},
  [140] = {.lex_state = 407},
  [141] = {.lex_state = 169},
  [142] = {.lex_state = 400},
  [143] = {.lex_state = 407},
  [144] = {.lex_state = 169},
  [145] = {.lex_state = 644},
  [146] = {.lex_state = 644},
  [147] = {.lex_state = 782},
  [148] = {.lex_state = 407},
  [149] = {.lex_state = 407},
  [150] = {.lex_state = 169},
  [151] = {.lex_state = 831},
  [152] = {.lex_state = 169},
  [153] = {.lex_state = 831},
  [154] = {.lex_state = 831},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 793},
  [158] = {.lex_state = 793},
  [159] = {.lex_state = 800},
  [160] = {.lex_state = 800},
  [161] = {.lex_state = 429},
  [162] = {.lex_state = 429},
  [163] = {.lex_state = 429},
  [164] = {.lex_state = 429},
  [165] = {.lex_state = 840},
  [166] = {.lex_state = 840},
  [167] = {.lex_state = 407},
  [168] = {.lex_state = 169},
  [169] = {.lex_state = 350},
  [170] = {.lex_state = 407},
  [171] = {.lex_state = 169},
  [172] = {.lex_state = 458},
  [173] = {.lex_state = 407},
  [174] = {.lex_state = 407},
  [175] = {.lex_state = 169},
  [176] = {.lex_state = 350},
  [177] = {.lex_state = 169},
  [178] = {.lex_state = 807},
  [179] = {.lex_state = 350},
  [180] = {.lex_state = 407},
  [181] = {.lex_state = 407},
  [182] = {.lex_state = 169},
  [183] = {.lex_state = 812},
  [184] = {.lex_state = 467},
  [185] = {.lex_state = 169},
  [186] = {.lex_state = 847},
  [187] = {.lex_state = 350},
  [188] = {.lex_state = 812},
  [189] = {.lex_state = 812},
  [190] = {.lex_state = 812},
  [191] = {.lex_state = 407},
  [192] = {.lex_state = 812},
  [193] = {.lex_state = 812},
  [194] = {.lex_state = 169},
  [195] = {.lex_state = 350},
  [196] = {.lex_state = 812},
  [197] = {.lex_state = 812},
  [198] = {.lex_state = 169},
  [199] = {.lex_state = 169},
  [200] = {.lex_state = 350},
  [201] = {.lex_state = 169},
  [202] = {.lex_state = 407},
  [203] = {.lex_state = 350},
  [204] = {.lex_state = 350},
  [205] = {.lex_state = 855},
  [206] = {.lex_state = 644},
  [207] = {.lex_state = 169},
  [208] = {.lex_state = 169},
  [209] = {.lex_state = 169},
  [210] = {.lex_state = 407},
  [211] = {.lex_state = 831},
  [212] = {.lex_state = 169},
  [213] = {.lex_state = 793},
  [214] = {.lex_state = 800},
  [215] = {.lex_state = 429},
  [216] = {.lex_state = 840},
  [217] = {.lex_state = 350},
  [218] = {.lex_state = 407},
  [219] = {.lex_state = 169},
  [220] = {.lex_state = 350},
  [221] = {.lex_state = 350},
  [222] = {.lex_state = 169},
  [223] = {.lex_state = 350},
  [224] = {.lex_state = 350},
  [225] = {.lex_state = 807},
  [226] = {.lex_state = 407},
  [227] = {.lex_state = 169},
  [228] = {.lex_state = 407},
  [229] = {.lex_state = 350},
  [230] = {.lex_state = 350},
  [231] = {.lex_state = 407},
  [232] = {.lex_state = 169},
  [233] = {.lex_state = 350},
  [234] = {.lex_state = 649},
  [235] = {.lex_state = 407},
  [236] = {.lex_state = 860},
  [237] = {.lex_state = 860},
  [238] = {.lex_state = 649},
  [239] = {.lex_state = 812},
  [240] = {.lex_state = 812},
  [241] = {.lex_state = 649},
  [242] = {.lex_state = 860},
  [243] = {.lex_state = 860},
  [244] = {.lex_state = 400},
  [245] = {.lex_state = 812},
  [246] = {.lex_state = 169},
  [247] = {.lex_state = 350},
  [248] = {.lex_state = 812},
  [249] = {.lex_state = 169},
  [250] = {.lex_state = 407},
  [251] = {.lex_state = 169},
  [252] = {.lex_state = 350},
  [253] = {.lex_state = 169},
  [254] = {.lex_state = 400},
  [255] = {.lex_state = 407},
  [256] = {.lex_state = 350},
  [257] = {.lex_state = 400},
  [258] = {.lex_state = 169},
  [259] = {.lex_state = 350},
  [260] = {.lex_state = 169},
  [261] = {.lex_state = 169},
  [262] = {.lex_state = 407},
  [263] = {.lex_state = 350},
  [264] = {.lex_state = 350},
  [265] = {.lex_state = 350},
  [266] = {.lex_state = 350},
  [267] = {.lex_state = 350},
  [268] = {.lex_state = 407},
  [269] = {.lex_state = 807},
  [270] = {.lex_state = 350},
  [271] = {.lex_state = 350},
  [272] = {.lex_state = 169},
  [273] = {.lex_state = 169},
  [274] = {.lex_state = 860},
  [275] = {.lex_state = 860},
  [276] = {.lex_state = 793},
  [277] = {.lex_state = 812},
  [278] = {.lex_state = 860},
  [279] = {.lex_state = 649},
  [280] = {.lex_state = 812},
  [281] = {.lex_state = 812},
  [282] = {.lex_state = 812},
  [283] = {.lex_state = 860},
  [284] = {.lex_state = 864},
  [285] = {.lex_state = 812},
  [286] = {.lex_state = 407},
  [287] = {.lex_state = 864},
  [288] = {.lex_state = 812},
  [289] = {.lex_state = 169},
  [290] = {.lex_state = 350},
  [291] = {.lex_state = 407},
  [292] = {.lex_state = 169},
  [293] = {.lex_state = 350},
  [294] = {.lex_state = 407},
  [295] = {.lex_state = 350},
  [296] = {.lex_state = 400},
  [297] = {.lex_state = 407},
  [298] = {.lex_state = 350},
  [299] = {.lex_state = 400},
  [300] = {.lex_state = 169},
  [301] = {.lex_state = 169},
  [302] = {.lex_state = 350},
  [303] = {.lex_state = 169},
  [304] = {.lex_state = 350},
  [305] = {.lex_state = 350},
  [306] = {.lex_state = 350},
  [307] = {.lex_state = 350},
  [308] = {.lex_state = 407},
  [309] = {.lex_state = 350},
  [310] = {.lex_state = 812},
  [311] = {.lex_state = 860},
  [312] = {.lex_state = 812},
  [313] = {.lex_state = 812},
  [314] = {.lex_state = 812},
  [315] = {.lex_state = 649},
  [316] = {.lex_state = 812},
  [317] = {.lex_state = 812},
  [318] = {.lex_state = 812},
  [319] = {.lex_state = 812},
  [320] = {.lex_state = 407},
  [321] = {.lex_state = 812},
  [322] = {.lex_state = 812},
  [323] = {.lex_state = 350},
  [324] = {.lex_state = 350},
  [325] = {.lex_state = 350},
  [326] = {.lex_state = 350},
  [327] = {.lex_state = 169},
  [328] = {.lex_state = 350},
  [329] = {.lex_state = 350},
  [330] = {.lex_state = 350},
  [331] = {.lex_state = 350},
  [332] = {.lex_state = 350},
  [333] = {.lex_state = 350},
  [334] = {.lex_state = 812},
  [335] = {.lex_state = 812},
  [336] = {.lex_state = 812},
  [337] = {.lex_state = 407},
  [338] = {.lex_state = 169},
  [339] = {.lex_state = 350},
  [340] = {.lex_state = 350},
  [341] = {.lex_state = 350},
  [342] = {.lex_state = 812},
  [343] = {.lex_state = 350},
  [344] = {.lex_state = 169},
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
    [sym_program] = STATE(14),
    [sym__statement] = STATE(15),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(28),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_module] = ACTIONS(42),
    [anon_sym_where] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(42),
    [anon_sym_instance] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(42),
    [anon_sym_newtype] = ACTIONS(42),
    [anon_sym_type] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(42),
    [anon_sym_default] = ACTIONS(42),
    [anon_sym_do] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [anon_sym_foreign] = ACTIONS(42),
    [anon_sym_if] = ACTIONS(42),
    [anon_sym_in] = ACTIONS(42),
    [anon_sym_let] = ACTIONS(42),
    [anon_sym_of] = ACTIONS(42),
    [anon_sym_then] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [4] = {
    [sym__identifier] = STATE(22),
    [anon_sym_qualified] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [5] = {
    [sym_context] = STATE(25),
    [sym_class] = STATE(26),
    [sym__identifier] = STATE(27),
    [aux_sym_type_class_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(28),
  },
  [6] = {
    [sym_context] = STATE(29),
    [sym_class] = STATE(26),
    [sym__identifier] = STATE(27),
    [aux_sym_type_class_repeat1] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(54),
    [sym_module_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(28),
  },
  [7] = {
    [sym_context] = STATE(32),
    [sym_class] = STATE(26),
    [sym__identifier] = STATE(33),
    [sym_simple_type] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(28),
  },
  [8] = {
    [sym_context] = STATE(36),
    [sym_class] = STATE(26),
    [sym__identifier] = STATE(37),
    [sym_simple_type] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(28),
  },
  [9] = {
    [sym__identifier] = STATE(40),
    [sym_simple_type] = STATE(41),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_module] = ACTIONS(70),
    [anon_sym_where] = ACTIONS(70),
    [anon_sym_import] = ACTIONS(70),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_instance] = ACTIONS(70),
    [anon_sym_data] = ACTIONS(70),
    [anon_sym_newtype] = ACTIONS(70),
    [anon_sym_type] = ACTIONS(70),
    [anon_sym_case] = ACTIONS(70),
    [anon_sym_default] = ACTIONS(70),
    [anon_sym_do] = ACTIONS(70),
    [anon_sym_else] = ACTIONS(70),
    [anon_sym_foreign] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(70),
    [anon_sym_in] = ACTIONS(70),
    [anon_sym_let] = ACTIONS(70),
    [anon_sym_of] = ACTIONS(70),
    [anon_sym_then] = ACTIONS(70),
    [anon_sym__] = ACTIONS(70),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym__integer_literal] = ACTIONS(70),
    [sym__octal_literal] = ACTIONS(70),
    [sym__hexidecimal_literal] = ACTIONS(70),
  },
  [11] = {
    [sym__graphic] = STATE(45),
    [sym__small] = STATE(46),
    [sym__large] = STATE(46),
    [sym__symbol] = STATE(46),
    [sym__special] = STATE(46),
    [sym__escape] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym__] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(78),
    [sym__ascii_large] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_1] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [sym__space] = ACTIONS(82),
  },
  [12] = {
    [sym__gap] = STATE(52),
    [sym__graphic] = STATE(52),
    [sym__small] = STATE(54),
    [sym__large] = STATE(54),
    [sym__symbol] = STATE(54),
    [sym__special] = STATE(54),
    [sym__escape] = STATE(52),
    [aux_sym_string_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym__] = ACTIONS(94),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(94),
    [sym__ascii_large] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_1] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [sym__space] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
    [sym__tab] = ACTIONS(106),
    [sym__vertical_tab] = ACTIONS(106),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_instance] = ACTIONS(110),
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
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_of] = ACTIONS(110),
    [anon_sym_then] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym__integer_literal] = ACTIONS(110),
    [sym__octal_literal] = ACTIONS(110),
    [sym__hexidecimal_literal] = ACTIONS(110),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_comment] = ACTIONS(28),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_where] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_instance] = ACTIONS(118),
    [anon_sym_data] = ACTIONS(118),
    [anon_sym_newtype] = ACTIONS(118),
    [anon_sym_type] = ACTIONS(118),
    [anon_sym_case] = ACTIONS(118),
    [anon_sym_default] = ACTIONS(118),
    [anon_sym_do] = ACTIONS(118),
    [anon_sym_else] = ACTIONS(118),
    [anon_sym_foreign] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_in] = ACTIONS(118),
    [anon_sym_let] = ACTIONS(118),
    [anon_sym_of] = ACTIONS(118),
    [anon_sym_then] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [sym_comment] = ACTIONS(28),
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
    [anon_sym_class] = ACTIONS(124),
    [anon_sym_instance] = ACTIONS(124),
    [anon_sym_data] = ACTIONS(124),
    [anon_sym_newtype] = ACTIONS(124),
    [anon_sym_type] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(124),
    [anon_sym_default] = ACTIONS(124),
    [anon_sym_do] = ACTIONS(124),
    [anon_sym_else] = ACTIONS(124),
    [anon_sym_foreign] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_let] = ACTIONS(124),
    [anon_sym_of] = ACTIONS(124),
    [anon_sym_then] = ACTIONS(124),
    [anon_sym__] = ACTIONS(124),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [sym__integer_literal] = ACTIONS(124),
    [sym__octal_literal] = ACTIONS(124),
    [sym__hexidecimal_literal] = ACTIONS(124),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(130),
    [anon_sym_where] = ACTIONS(130),
    [anon_sym_import] = ACTIONS(130),
    [anon_sym_class] = ACTIONS(130),
    [anon_sym_instance] = ACTIONS(130),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_newtype] = ACTIONS(130),
    [anon_sym_type] = ACTIONS(130),
    [anon_sym_case] = ACTIONS(130),
    [anon_sym_default] = ACTIONS(130),
    [anon_sym_do] = ACTIONS(130),
    [anon_sym_else] = ACTIONS(130),
    [anon_sym_foreign] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(130),
    [anon_sym_in] = ACTIONS(130),
    [anon_sym_let] = ACTIONS(130),
    [anon_sym_of] = ACTIONS(130),
    [anon_sym_then] = ACTIONS(130),
    [anon_sym__] = ACTIONS(130),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym__integer_literal] = ACTIONS(130),
    [sym__octal_literal] = ACTIONS(130),
    [sym__hexidecimal_literal] = ACTIONS(130),
  },
  [18] = {
    [sym__statement] = STATE(59),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [19] = {
    [sym_module_exports] = STATE(62),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(138),
    [sym_comment] = ACTIONS(28),
  },
  [20] = {
    [sym__identifier] = STATE(63),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(144),
    [anon_sym_as] = ACTIONS(144),
    [anon_sym_hiding] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_instance] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_EQ_GT] = ACTIONS(144),
    [anon_sym_deriving] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(144),
    [anon_sym_case] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_else] = ACTIONS(144),
    [anon_sym_foreign] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_of] = ACTIONS(144),
    [anon_sym_then] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [22] = {
    [sym_import_specification] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_module] = ACTIONS(150),
    [anon_sym_where] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(150),
    [anon_sym_as] = ACTIONS(154),
    [anon_sym_hiding] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(150),
    [anon_sym_instance] = ACTIONS(150),
    [anon_sym_data] = ACTIONS(150),
    [anon_sym_newtype] = ACTIONS(150),
    [anon_sym_type] = ACTIONS(150),
    [anon_sym_case] = ACTIONS(150),
    [anon_sym_default] = ACTIONS(150),
    [anon_sym_do] = ACTIONS(150),
    [anon_sym_else] = ACTIONS(150),
    [anon_sym_foreign] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(150),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_let] = ACTIONS(150),
    [anon_sym_of] = ACTIONS(150),
    [anon_sym_then] = ACTIONS(150),
    [anon_sym__] = ACTIONS(150),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym__integer_literal] = ACTIONS(150),
    [sym__octal_literal] = ACTIONS(150),
    [sym__hexidecimal_literal] = ACTIONS(150),
  },
  [23] = {
    [sym_class] = STATE(68),
    [sym__identifier] = STATE(69),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(28),
  },
  [24] = {
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [25] = {
    [sym__identifier] = STATE(71),
    [aux_sym_type_class_repeat1] = STATE(72),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [26] = {
    [anon_sym_EQ_GT] = ACTIONS(164),
    [sym_comment] = ACTIONS(28),
  },
  [27] = {
    [sym__identifier] = STATE(75),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_variable_identifier] = ACTIONS(170),
    [sym_constructor_identifier] = ACTIONS(170),
    [sym_module_identifier] = ACTIONS(170),
    [sym_comment] = ACTIONS(28),
  },
  [28] = {
    [sym__identifier] = STATE(77),
    [anon_sym_where] = ACTIONS(173),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [29] = {
    [sym__identifier] = STATE(71),
    [aux_sym_type_class_repeat1] = STATE(78),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [30] = {
    [sym__identifier] = STATE(77),
    [anon_sym_where] = ACTIONS(175),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(144),
    [anon_sym_instance] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_deriving] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_else] = ACTIONS(144),
    [anon_sym_foreign] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_of] = ACTIONS(144),
    [anon_sym_then] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [32] = {
    [sym__identifier] = STATE(81),
    [sym_simple_type] = STATE(82),
    [sym_variable_identifier] = ACTIONS(177),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(28),
  },
  [33] = {
    [sym__identifier] = STATE(84),
    [aux_sym_type_class_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(183),
    [anon_sym_where] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_import] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_instance] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_deriving] = ACTIONS(183),
    [anon_sym_newtype] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [sym_variable_identifier] = ACTIONS(185),
    [sym_constructor_identifier] = ACTIONS(185),
    [sym_module_identifier] = ACTIONS(185),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_foreign] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_in] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_of] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(183),
    [sym__octal_literal] = ACTIONS(183),
    [sym__hexidecimal_literal] = ACTIONS(183),
  },
  [34] = {
    [sym_constructors] = STATE(88),
    [sym_constructor] = STATE(89),
    [sym_deriving] = STATE(90),
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_where] = ACTIONS(191),
    [anon_sym_import] = ACTIONS(191),
    [anon_sym_class] = ACTIONS(191),
    [anon_sym_instance] = ACTIONS(191),
    [anon_sym_data] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(191),
    [anon_sym_type] = ACTIONS(191),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(191),
    [anon_sym_default] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_else] = ACTIONS(191),
    [anon_sym_foreign] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(191),
    [anon_sym_of] = ACTIONS(191),
    [anon_sym_then] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym__integer_literal] = ACTIONS(191),
    [sym__octal_literal] = ACTIONS(191),
    [sym__hexidecimal_literal] = ACTIONS(191),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [36] = {
    [sym__identifier] = STATE(40),
    [sym_simple_type] = STATE(92),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [37] = {
    [sym__identifier] = STATE(94),
    [aux_sym_type_class_repeat1] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(183),
    [sym_variable_identifier] = ACTIONS(199),
    [sym_constructor_identifier] = ACTIONS(201),
    [sym_module_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(28),
  },
  [38] = {
    [anon_sym_EQ] = ACTIONS(203),
    [sym_comment] = ACTIONS(28),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_COLON_COLON] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [40] = {
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(95),
    [anon_sym_EQ] = ACTIONS(183),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(205),
    [sym_comment] = ACTIONS(28),
  },
  [42] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(207),
  },
  [43] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(209),
  },
  [44] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(211),
  },
  [45] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(213),
  },
  [46] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(215),
  },
  [47] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(217),
  },
  [48] = {
    [sym__char_escape] = STATE(101),
    [sym__ascii] = STATE(101),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(219),
    [anon_sym_CARET] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(219),
    [anon_sym_x] = ACTIONS(225),
    [anon_sym_X] = ACTIONS(225),
    [anon_sym_o] = ACTIONS(227),
    [anon_sym_O] = ACTIONS(227),
    [anon_sym_a] = ACTIONS(219),
    [anon_sym_b] = ACTIONS(219),
    [anon_sym_f] = ACTIONS(219),
    [anon_sym_n] = ACTIONS(219),
    [anon_sym_r] = ACTIONS(219),
    [anon_sym_t] = ACTIONS(219),
    [anon_sym_v] = ACTIONS(219),
    [anon_sym_NUL] = ACTIONS(229),
    [anon_sym_SOH] = ACTIONS(229),
    [anon_sym_STX] = ACTIONS(229),
    [anon_sym_ETX] = ACTIONS(229),
    [anon_sym_EOT] = ACTIONS(229),
    [anon_sym_ENQ] = ACTIONS(229),
    [anon_sym_ACK] = ACTIONS(229),
    [anon_sym_BEL] = ACTIONS(229),
    [anon_sym_BS] = ACTIONS(229),
    [anon_sym_HT] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_VT] = ACTIONS(229),
    [anon_sym_FF] = ACTIONS(229),
    [anon_sym_CR] = ACTIONS(229),
    [anon_sym_SO] = ACTIONS(229),
    [anon_sym_SI] = ACTIONS(229),
    [anon_sym_DLE] = ACTIONS(229),
    [anon_sym_DC1] = ACTIONS(229),
    [anon_sym_DC2] = ACTIONS(229),
    [anon_sym_DC3] = ACTIONS(229),
    [anon_sym_DC4] = ACTIONS(229),
    [anon_sym_NAK] = ACTIONS(229),
    [anon_sym_SYN] = ACTIONS(229),
    [anon_sym_ETB] = ACTIONS(229),
    [anon_sym_CAN] = ACTIONS(229),
    [anon_sym_EM] = ACTIONS(229),
    [anon_sym_SUB] = ACTIONS(229),
    [anon_sym_ESC] = ACTIONS(229),
    [anon_sym_FS] = ACTIONS(229),
    [anon_sym_GS] = ACTIONS(229),
    [anon_sym_RS] = ACTIONS(229),
    [anon_sym_US] = ACTIONS(229),
    [anon_sym_SP] = ACTIONS(229),
    [anon_sym_DEL] = ACTIONS(229),
  },
  [49] = {
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym__] = ACTIONS(231),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(231),
    [sym__ascii_large] = ACTIONS(231),
    [anon_sym_POUND] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(231),
    [anon_sym_1] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_BSLASH] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym__space] = ACTIONS(231),
    [sym__newline] = ACTIONS(231),
    [sym__tab] = ACTIONS(231),
    [sym__vertical_tab] = ACTIONS(231),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(233),
    [sym__ascii_large] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_1] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym__space] = ACTIONS(233),
    [sym__newline] = ACTIONS(233),
    [sym__tab] = ACTIONS(233),
    [sym__vertical_tab] = ACTIONS(233),
  },
  [51] = {
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
    [sym_comment] = ACTIONS(80),
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
  [52] = {
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
    [sym_comment] = ACTIONS(80),
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
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_import] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_newtype] = ACTIONS(241),
    [anon_sym_type] = ACTIONS(241),
    [anon_sym_case] = ACTIONS(241),
    [anon_sym_default] = ACTIONS(241),
    [anon_sym_do] = ACTIONS(241),
    [anon_sym_else] = ACTIONS(241),
    [anon_sym_foreign] = ACTIONS(241),
    [anon_sym_if] = ACTIONS(241),
    [anon_sym_in] = ACTIONS(241),
    [anon_sym_let] = ACTIONS(241),
    [anon_sym_of] = ACTIONS(241),
    [anon_sym_then] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym__integer_literal] = ACTIONS(241),
    [sym__octal_literal] = ACTIONS(241),
    [sym__hexidecimal_literal] = ACTIONS(241),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(245),
    [sym__ascii_large] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_1] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym__space] = ACTIONS(245),
    [sym__newline] = ACTIONS(245),
    [sym__tab] = ACTIONS(245),
    [sym__vertical_tab] = ACTIONS(245),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_BANG] = ACTIONS(247),
    [anon_sym__] = ACTIONS(247),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(247),
    [sym__ascii_large] = ACTIONS(247),
    [anon_sym_POUND] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_1] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_QMARK] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [sym__space] = ACTIONS(247),
    [sym__newline] = ACTIONS(247),
    [sym__tab] = ACTIONS(247),
    [sym__vertical_tab] = ACTIONS(247),
  },
  [56] = {
    [sym__char_escape] = STATE(107),
    [sym__ascii] = STATE(107),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(233),
    [sym__ascii_large] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_1] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym__space] = ACTIONS(233),
    [sym__newline] = ACTIONS(233),
    [sym__tab] = ACTIONS(233),
    [sym__vertical_tab] = ACTIONS(233),
    [anon_sym_x] = ACTIONS(255),
    [anon_sym_X] = ACTIONS(255),
    [anon_sym_o] = ACTIONS(257),
    [anon_sym_O] = ACTIONS(257),
    [anon_sym_a] = ACTIONS(249),
    [anon_sym_b] = ACTIONS(249),
    [anon_sym_f] = ACTIONS(249),
    [anon_sym_n] = ACTIONS(249),
    [anon_sym_r] = ACTIONS(249),
    [anon_sym_t] = ACTIONS(249),
    [anon_sym_v] = ACTIONS(249),
    [anon_sym_NUL] = ACTIONS(259),
    [anon_sym_SOH] = ACTIONS(259),
    [anon_sym_STX] = ACTIONS(259),
    [anon_sym_ETX] = ACTIONS(259),
    [anon_sym_EOT] = ACTIONS(259),
    [anon_sym_ENQ] = ACTIONS(259),
    [anon_sym_ACK] = ACTIONS(259),
    [anon_sym_BEL] = ACTIONS(259),
    [anon_sym_BS] = ACTIONS(259),
    [anon_sym_HT] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_VT] = ACTIONS(259),
    [anon_sym_FF] = ACTIONS(259),
    [anon_sym_CR] = ACTIONS(259),
    [anon_sym_SO] = ACTIONS(259),
    [anon_sym_SI] = ACTIONS(259),
    [anon_sym_DLE] = ACTIONS(259),
    [anon_sym_DC1] = ACTIONS(259),
    [anon_sym_DC2] = ACTIONS(259),
    [anon_sym_DC3] = ACTIONS(259),
    [anon_sym_DC4] = ACTIONS(259),
    [anon_sym_NAK] = ACTIONS(259),
    [anon_sym_SYN] = ACTIONS(259),
    [anon_sym_ETB] = ACTIONS(259),
    [anon_sym_CAN] = ACTIONS(259),
    [anon_sym_EM] = ACTIONS(259),
    [anon_sym_SUB] = ACTIONS(259),
    [anon_sym_ESC] = ACTIONS(259),
    [anon_sym_FS] = ACTIONS(259),
    [anon_sym_GS] = ACTIONS(259),
    [anon_sym_RS] = ACTIONS(259),
    [anon_sym_US] = ACTIONS(259),
    [anon_sym_SP] = ACTIONS(259),
    [anon_sym_DEL] = ACTIONS(259),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym__] = ACTIONS(261),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(261),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(261),
    [sym__ascii_large] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_1] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym__space] = ACTIONS(261),
    [sym__newline] = ACTIONS(261),
    [sym__tab] = ACTIONS(261),
    [sym__vertical_tab] = ACTIONS(261),
  },
  [58] = {
    [sym__gap] = STATE(112),
    [sym__graphic] = STATE(112),
    [sym__small] = STATE(54),
    [sym__large] = STATE(54),
    [sym__symbol] = STATE(54),
    [sym__special] = STATE(54),
    [sym__escape] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym__] = ACTIONS(94),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(94),
    [sym__ascii_large] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_1] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_TILDE] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [sym__space] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
    [sym__tab] = ACTIONS(106),
    [sym__vertical_tab] = ACTIONS(106),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_where] = ACTIONS(269),
    [anon_sym_import] = ACTIONS(269),
    [anon_sym_class] = ACTIONS(269),
    [anon_sym_instance] = ACTIONS(269),
    [anon_sym_data] = ACTIONS(269),
    [anon_sym_newtype] = ACTIONS(269),
    [anon_sym_type] = ACTIONS(269),
    [anon_sym_case] = ACTIONS(269),
    [anon_sym_default] = ACTIONS(269),
    [anon_sym_do] = ACTIONS(269),
    [anon_sym_else] = ACTIONS(269),
    [anon_sym_foreign] = ACTIONS(269),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_in] = ACTIONS(269),
    [anon_sym_let] = ACTIONS(269),
    [anon_sym_of] = ACTIONS(269),
    [anon_sym_then] = ACTIONS(269),
    [anon_sym__] = ACTIONS(269),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [sym__integer_literal] = ACTIONS(269),
    [sym__octal_literal] = ACTIONS(269),
    [sym__hexidecimal_literal] = ACTIONS(269),
  },
  [60] = {
    [sym__statement] = STATE(15),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [61] = {
    [sym_export] = STATE(116),
    [sym__identifier] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(275),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [62] = {
    [anon_sym_where] = ACTIONS(277),
    [sym_comment] = ACTIONS(28),
  },
  [63] = {
    [sym_import_specification] = STATE(120),
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(281),
    [anon_sym_as] = ACTIONS(283),
    [anon_sym_hiding] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(281),
    [anon_sym_instance] = ACTIONS(281),
    [anon_sym_data] = ACTIONS(281),
    [anon_sym_newtype] = ACTIONS(281),
    [anon_sym_type] = ACTIONS(281),
    [anon_sym_case] = ACTIONS(281),
    [anon_sym_default] = ACTIONS(281),
    [anon_sym_do] = ACTIONS(281),
    [anon_sym_else] = ACTIONS(281),
    [anon_sym_foreign] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_let] = ACTIONS(281),
    [anon_sym_of] = ACTIONS(281),
    [anon_sym_then] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym__integer_literal] = ACTIONS(281),
    [sym__octal_literal] = ACTIONS(281),
    [sym__hexidecimal_literal] = ACTIONS(281),
  },
  [64] = {
    [sym__identifier] = STATE(122),
    [anon_sym_RPAREN] = ACTIONS(287),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [65] = {
    [sym__identifier] = STATE(123),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(289),
    [sym_comment] = ACTIONS(28),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_module] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_import] = ACTIONS(281),
    [anon_sym_class] = ACTIONS(281),
    [anon_sym_instance] = ACTIONS(281),
    [anon_sym_data] = ACTIONS(281),
    [anon_sym_newtype] = ACTIONS(281),
    [anon_sym_type] = ACTIONS(281),
    [anon_sym_case] = ACTIONS(281),
    [anon_sym_default] = ACTIONS(281),
    [anon_sym_do] = ACTIONS(281),
    [anon_sym_else] = ACTIONS(281),
    [anon_sym_foreign] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(281),
    [anon_sym_let] = ACTIONS(281),
    [anon_sym_of] = ACTIONS(281),
    [anon_sym_then] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym__integer_literal] = ACTIONS(281),
    [sym__octal_literal] = ACTIONS(281),
    [sym__hexidecimal_literal] = ACTIONS(281),
  },
  [68] = {
    [aux_sym_context_repeat1] = STATE(127),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(293),
    [sym_comment] = ACTIONS(28),
  },
  [69] = {
    [sym__identifier] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [70] = {
    [anon_sym_where] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [71] = {
    [anon_sym_where] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(295),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(28),
  },
  [72] = {
    [sym__identifier] = STATE(77),
    [anon_sym_where] = ACTIONS(297),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [73] = {
    [sym_variable_identifier] = ACTIONS(299),
    [sym_constructor_identifier] = ACTIONS(301),
    [sym_module_identifier] = ACTIONS(301),
    [sym_comment] = ACTIONS(28),
  },
  [74] = {
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(129),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_EQ_GT] = ACTIONS(303),
    [sym_comment] = ACTIONS(28),
  },
  [76] = {
    [anon_sym_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(28),
  },
  [77] = {
    [anon_sym_where] = ACTIONS(307),
    [sym_variable_identifier] = ACTIONS(309),
    [sym_constructor_identifier] = ACTIONS(309),
    [sym_module_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(28),
  },
  [78] = {
    [sym__identifier] = STATE(77),
    [anon_sym_where] = ACTIONS(311),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(28),
  },
  [79] = {
    [anon_sym_LBRACE] = ACTIONS(313),
    [sym_comment] = ACTIONS(28),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_instance] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_deriving] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_else] = ACTIONS(144),
    [anon_sym_foreign] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_of] = ACTIONS(144),
    [anon_sym_then] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [81] = {
    [sym__identifier] = STATE(133),
    [aux_sym_type_class_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_module] = ACTIONS(183),
    [anon_sym_where] = ACTIONS(183),
    [anon_sym_import] = ACTIONS(183),
    [anon_sym_class] = ACTIONS(183),
    [anon_sym_instance] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_deriving] = ACTIONS(183),
    [anon_sym_newtype] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_default] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_foreign] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_in] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_of] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(183),
    [sym__octal_literal] = ACTIONS(183),
    [sym__hexidecimal_literal] = ACTIONS(183),
  },
  [82] = {
    [sym_constructors] = STATE(135),
    [sym_constructor] = STATE(89),
    [sym_deriving] = STATE(136),
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_import] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_data] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(317),
    [anon_sym_type] = ACTIONS(317),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(317),
    [anon_sym_default] = ACTIONS(317),
    [anon_sym_do] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_foreign] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(317),
    [anon_sym_of] = ACTIONS(317),
    [anon_sym_then] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__integer_literal] = ACTIONS(317),
    [sym__octal_literal] = ACTIONS(317),
    [sym__hexidecimal_literal] = ACTIONS(317),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(144),
    [anon_sym_instance] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_EQ_GT] = ACTIONS(144),
    [anon_sym_deriving] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_else] = ACTIONS(144),
    [anon_sym_foreign] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_of] = ACTIONS(144),
    [anon_sym_then] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(166),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym_import] = ACTIONS(166),
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_instance] = ACTIONS(166),
    [anon_sym_data] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(303),
    [anon_sym_deriving] = ACTIONS(166),
    [anon_sym_newtype] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(295),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(166),
    [anon_sym_default] = ACTIONS(166),
    [anon_sym_do] = ACTIONS(166),
    [anon_sym_else] = ACTIONS(166),
    [anon_sym_foreign] = ACTIONS(166),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_of] = ACTIONS(166),
    [anon_sym_then] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(166),
    [sym__octal_literal] = ACTIONS(166),
    [sym__hexidecimal_literal] = ACTIONS(166),
  },
  [85] = {
    [sym__identifier] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_module] = ACTIONS(327),
    [anon_sym_where] = ACTIONS(327),
    [anon_sym_import] = ACTIONS(327),
    [anon_sym_class] = ACTIONS(327),
    [anon_sym_instance] = ACTIONS(327),
    [anon_sym_data] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_deriving] = ACTIONS(327),
    [anon_sym_newtype] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(327),
    [anon_sym_default] = ACTIONS(327),
    [anon_sym_do] = ACTIONS(327),
    [anon_sym_else] = ACTIONS(327),
    [anon_sym_foreign] = ACTIONS(327),
    [anon_sym_if] = ACTIONS(327),
    [anon_sym_in] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_of] = ACTIONS(327),
    [anon_sym_then] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [86] = {
    [sym_constructors] = STATE(135),
    [sym_constructor] = STATE(89),
    [sym_deriving] = STATE(136),
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_import] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_data] = ACTIONS(317),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(317),
    [anon_sym_type] = ACTIONS(317),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(317),
    [anon_sym_default] = ACTIONS(317),
    [anon_sym_do] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_foreign] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(317),
    [anon_sym_of] = ACTIONS(317),
    [anon_sym_then] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__integer_literal] = ACTIONS(317),
    [sym__octal_literal] = ACTIONS(317),
    [sym__hexidecimal_literal] = ACTIONS(317),
  },
  [87] = {
    [sym__identifier] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(331),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [88] = {
    [sym_deriving] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_import] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_data] = ACTIONS(317),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(317),
    [anon_sym_type] = ACTIONS(317),
    [anon_sym_case] = ACTIONS(317),
    [anon_sym_default] = ACTIONS(317),
    [anon_sym_do] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_foreign] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(317),
    [anon_sym_of] = ACTIONS(317),
    [anon_sym_then] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__integer_literal] = ACTIONS(317),
    [sym__octal_literal] = ACTIONS(317),
    [sym__hexidecimal_literal] = ACTIONS(317),
  },
  [89] = {
    [aux_sym_constructors_repeat1] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_module] = ACTIONS(335),
    [anon_sym_where] = ACTIONS(335),
    [anon_sym_import] = ACTIONS(335),
    [anon_sym_class] = ACTIONS(335),
    [anon_sym_instance] = ACTIONS(335),
    [anon_sym_data] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_deriving] = ACTIONS(335),
    [anon_sym_newtype] = ACTIONS(335),
    [anon_sym_type] = ACTIONS(335),
    [anon_sym_case] = ACTIONS(335),
    [anon_sym_default] = ACTIONS(335),
    [anon_sym_do] = ACTIONS(335),
    [anon_sym_else] = ACTIONS(335),
    [anon_sym_foreign] = ACTIONS(335),
    [anon_sym_if] = ACTIONS(335),
    [anon_sym_in] = ACTIONS(335),
    [anon_sym_let] = ACTIONS(335),
    [anon_sym_of] = ACTIONS(335),
    [anon_sym_then] = ACTIONS(335),
    [anon_sym__] = ACTIONS(335),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [sym__integer_literal] = ACTIONS(335),
    [sym__octal_literal] = ACTIONS(335),
    [sym__hexidecimal_literal] = ACTIONS(335),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_import] = ACTIONS(317),
    [anon_sym_class] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_data] = ACTIONS(317),
    [anon_sym_newtype] = ACTIONS(317),
    [anon_sym_type] = ACTIONS(317),
    [anon_sym_case] = ACTIONS(317),
    [anon_sym_default] = ACTIONS(317),
    [anon_sym_do] = ACTIONS(317),
    [anon_sym_else] = ACTIONS(317),
    [anon_sym_foreign] = ACTIONS(317),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_in] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(317),
    [anon_sym_of] = ACTIONS(317),
    [anon_sym_then] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__integer_literal] = ACTIONS(317),
    [sym__octal_literal] = ACTIONS(317),
    [sym__hexidecimal_literal] = ACTIONS(317),
  },
  [91] = {
    [sym_fields] = STATE(144),
    [sym_strict] = STATE(145),
    [sym__identifier] = STATE(145),
    [aux_sym_constructor_repeat1] = STATE(146),
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_module] = ACTIONS(343),
    [anon_sym_where] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(343),
    [anon_sym_class] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_instance] = ACTIONS(343),
    [anon_sym_data] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_deriving] = ACTIONS(343),
    [anon_sym_newtype] = ACTIONS(343),
    [anon_sym_BANG] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(343),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(343),
    [anon_sym_default] = ACTIONS(343),
    [anon_sym_do] = ACTIONS(343),
    [anon_sym_else] = ACTIONS(343),
    [anon_sym_foreign] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(343),
    [anon_sym_in] = ACTIONS(343),
    [anon_sym_let] = ACTIONS(343),
    [anon_sym_of] = ACTIONS(343),
    [anon_sym_then] = ACTIONS(343),
    [anon_sym__] = ACTIONS(343),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym__integer_literal] = ACTIONS(343),
    [sym__octal_literal] = ACTIONS(343),
    [sym__hexidecimal_literal] = ACTIONS(343),
  },
  [92] = {
    [anon_sym_EQ] = ACTIONS(351),
    [sym_comment] = ACTIONS(28),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_EQ_GT] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(303),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(28),
  },
  [95] = {
    [sym__identifier] = STATE(148),
    [anon_sym_EQ] = ACTIONS(327),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [96] = {
    [sym_new_constructor] = STATE(150),
    [sym_constructor_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(28),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_COLON_COLON] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(28),
  },
  [98] = {
    [sym__type] = STATE(152),
    [sym__identifier] = STATE(153),
    [aux_sym_type_class_repeat1] = STATE(154),
    [sym_variable_identifier] = ACTIONS(355),
    [sym_constructor_identifier] = ACTIONS(357),
    [sym_module_identifier] = ACTIONS(357),
    [sym_comment] = ACTIONS(28),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_module] = ACTIONS(361),
    [anon_sym_where] = ACTIONS(361),
    [anon_sym_import] = ACTIONS(361),
    [anon_sym_class] = ACTIONS(361),
    [anon_sym_instance] = ACTIONS(361),
    [anon_sym_data] = ACTIONS(361),
    [anon_sym_newtype] = ACTIONS(361),
    [anon_sym_type] = ACTIONS(361),
    [anon_sym_case] = ACTIONS(361),
    [anon_sym_default] = ACTIONS(361),
    [anon_sym_do] = ACTIONS(361),
    [anon_sym_else] = ACTIONS(361),
    [anon_sym_foreign] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(361),
    [anon_sym_in] = ACTIONS(361),
    [anon_sym_let] = ACTIONS(361),
    [anon_sym_of] = ACTIONS(361),
    [anon_sym_then] = ACTIONS(361),
    [anon_sym__] = ACTIONS(361),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym__integer_literal] = ACTIONS(361),
    [sym__octal_literal] = ACTIONS(361),
    [sym__hexidecimal_literal] = ACTIONS(361),
  },
  [100] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(365),
  },
  [101] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(367),
  },
  [102] = {
    [sym__cntrl] = STATE(156),
    [anon_sym__] = ACTIONS(369),
    [sym_comment] = ACTIONS(80),
    [sym__ascii_large] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
  },
  [103] = {
    [aux_sym__escape_repeat1] = STATE(158),
    [sym_comment] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(371),
  },
  [104] = {
    [aux_sym__escape_repeat2] = STATE(160),
    [sym_comment] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(373),
  },
  [105] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(375),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(377),
    [sym__ascii_large] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_1] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym__space] = ACTIONS(377),
    [sym__newline] = ACTIONS(377),
    [sym__tab] = ACTIONS(377),
    [sym__vertical_tab] = ACTIONS(377),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(379),
    [sym__ascii_large] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(379),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
    [anon_sym_1] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_CARET] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(379),
    [anon_sym_BSLASH] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym__space] = ACTIONS(379),
    [sym__newline] = ACTIONS(379),
    [sym__tab] = ACTIONS(379),
    [sym__vertical_tab] = ACTIONS(379),
  },
  [108] = {
    [sym__cntrl] = STATE(162),
    [anon_sym__] = ACTIONS(381),
    [sym_comment] = ACTIONS(80),
    [sym__ascii_large] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
  },
  [109] = {
    [aux_sym__escape_repeat1] = STATE(164),
    [sym_comment] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(383),
  },
  [110] = {
    [aux_sym__escape_repeat2] = STATE(166),
    [sym_comment] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(385),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_BQUOTE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_BANG] = ACTIONS(387),
    [anon_sym__] = ACTIONS(387),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(387),
    [sym__ascii_large] = ACTIONS(387),
    [anon_sym_POUND] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(387),
    [anon_sym_PERCENT] = ACTIONS(387),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_1] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_DOT] = ACTIONS(387),
    [anon_sym_SLASH] = ACTIONS(387),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_QMARK] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym__space] = ACTIONS(387),
    [sym__newline] = ACTIONS(387),
    [sym__tab] = ACTIONS(387),
    [sym__vertical_tab] = ACTIONS(387),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(389),
    [sym__ascii_large] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_1] = ACTIONS(389),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym__space] = ACTIONS(389),
    [sym__newline] = ACTIONS(389),
    [sym__tab] = ACTIONS(389),
    [sym__vertical_tab] = ACTIONS(389),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_module] = ACTIONS(393),
    [anon_sym_where] = ACTIONS(393),
    [anon_sym_import] = ACTIONS(393),
    [anon_sym_class] = ACTIONS(393),
    [anon_sym_instance] = ACTIONS(393),
    [anon_sym_data] = ACTIONS(393),
    [anon_sym_newtype] = ACTIONS(393),
    [anon_sym_type] = ACTIONS(393),
    [anon_sym_case] = ACTIONS(393),
    [anon_sym_default] = ACTIONS(393),
    [anon_sym_do] = ACTIONS(393),
    [anon_sym_else] = ACTIONS(393),
    [anon_sym_foreign] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(393),
    [anon_sym_in] = ACTIONS(393),
    [anon_sym_let] = ACTIONS(393),
    [anon_sym_of] = ACTIONS(393),
    [anon_sym_then] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(395),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym__integer_literal] = ACTIONS(393),
    [sym__octal_literal] = ACTIONS(393),
    [sym__hexidecimal_literal] = ACTIONS(393),
  },
  [114] = {
    [sym__statement] = STATE(59),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [115] = {
    [anon_sym_where] = ACTIONS(399),
    [sym_comment] = ACTIONS(28),
  },
  [116] = {
    [aux_sym_module_exports_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(403),
    [sym_comment] = ACTIONS(28),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [sym_comment] = ACTIONS(28),
  },
  [118] = {
    [sym__statement] = STATE(15),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [119] = {
    [sym__identifier] = STATE(172),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_module] = ACTIONS(413),
    [anon_sym_where] = ACTIONS(413),
    [anon_sym_import] = ACTIONS(413),
    [anon_sym_class] = ACTIONS(413),
    [anon_sym_instance] = ACTIONS(413),
    [anon_sym_data] = ACTIONS(413),
    [anon_sym_newtype] = ACTIONS(413),
    [anon_sym_type] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_default] = ACTIONS(413),
    [anon_sym_do] = ACTIONS(413),
    [anon_sym_else] = ACTIONS(413),
    [anon_sym_foreign] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_in] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_of] = ACTIONS(413),
    [anon_sym_then] = ACTIONS(413),
    [anon_sym__] = ACTIONS(413),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym__integer_literal] = ACTIONS(413),
    [sym__octal_literal] = ACTIONS(413),
    [sym__hexidecimal_literal] = ACTIONS(413),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_module] = ACTIONS(419),
    [anon_sym_where] = ACTIONS(419),
    [anon_sym_import] = ACTIONS(419),
    [anon_sym_class] = ACTIONS(419),
    [anon_sym_instance] = ACTIONS(419),
    [anon_sym_data] = ACTIONS(419),
    [anon_sym_newtype] = ACTIONS(419),
    [anon_sym_type] = ACTIONS(419),
    [anon_sym_case] = ACTIONS(419),
    [anon_sym_default] = ACTIONS(419),
    [anon_sym_do] = ACTIONS(419),
    [anon_sym_else] = ACTIONS(419),
    [anon_sym_foreign] = ACTIONS(419),
    [anon_sym_if] = ACTIONS(419),
    [anon_sym_in] = ACTIONS(419),
    [anon_sym_let] = ACTIONS(419),
    [anon_sym_of] = ACTIONS(419),
    [anon_sym_then] = ACTIONS(419),
    [anon_sym__] = ACTIONS(419),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym__integer_literal] = ACTIONS(419),
    [sym__octal_literal] = ACTIONS(419),
    [sym__hexidecimal_literal] = ACTIONS(419),
  },
  [122] = {
    [aux_sym_import_specification_repeat1] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(423),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_comment] = ACTIONS(28),
  },
  [123] = {
    [sym_import_specification] = STATE(177),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_module] = ACTIONS(413),
    [anon_sym_where] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(413),
    [anon_sym_hiding] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(413),
    [anon_sym_instance] = ACTIONS(413),
    [anon_sym_data] = ACTIONS(413),
    [anon_sym_newtype] = ACTIONS(413),
    [anon_sym_type] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(413),
    [anon_sym_default] = ACTIONS(413),
    [anon_sym_do] = ACTIONS(413),
    [anon_sym_else] = ACTIONS(413),
    [anon_sym_foreign] = ACTIONS(413),
    [anon_sym_if] = ACTIONS(413),
    [anon_sym_in] = ACTIONS(413),
    [anon_sym_let] = ACTIONS(413),
    [anon_sym_of] = ACTIONS(413),
    [anon_sym_then] = ACTIONS(413),
    [anon_sym__] = ACTIONS(413),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym__integer_literal] = ACTIONS(413),
    [sym__octal_literal] = ACTIONS(413),
    [sym__hexidecimal_literal] = ACTIONS(413),
  },
  [124] = {
    [sym__identifier] = STATE(178),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [125] = {
    [sym_class] = STATE(179),
    [sym__identifier] = STATE(69),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(28),
  },
  [126] = {
    [anon_sym_EQ_GT] = ACTIONS(429),
    [sym_comment] = ACTIONS(28),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(433),
    [sym_comment] = ACTIONS(28),
  },
  [128] = {
    [anon_sym_LBRACE] = ACTIONS(435),
    [sym_comment] = ACTIONS(28),
  },
  [129] = {
    [sym__identifier] = STATE(148),
    [anon_sym_RPAREN] = ACTIONS(437),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [130] = {
    [sym_type_class_body] = STATE(187),
    [sym__instance_declaration] = STATE(188),
    [sym__general_declaration] = STATE(189),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [aux_sym_type_class_body_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(439),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [131] = {
    [anon_sym_LBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(28),
  },
  [132] = {
    [sym_type_class_instance_body] = STATE(195),
    [sym__general_declaration] = STATE(196),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [aux_sym_type_class_instance_body_repeat1] = STATE(197),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(166),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym_import] = ACTIONS(166),
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_instance] = ACTIONS(166),
    [anon_sym_data] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_deriving] = ACTIONS(166),
    [anon_sym_newtype] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(295),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(166),
    [anon_sym_default] = ACTIONS(166),
    [anon_sym_do] = ACTIONS(166),
    [anon_sym_else] = ACTIONS(166),
    [anon_sym_foreign] = ACTIONS(166),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_of] = ACTIONS(166),
    [anon_sym_then] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(166),
    [sym__octal_literal] = ACTIONS(166),
    [sym__hexidecimal_literal] = ACTIONS(166),
  },
  [134] = {
    [sym_constructors] = STATE(198),
    [sym_constructor] = STATE(89),
    [sym_deriving] = STATE(199),
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(449),
    [anon_sym_where] = ACTIONS(449),
    [anon_sym_import] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(449),
    [anon_sym_instance] = ACTIONS(449),
    [anon_sym_data] = ACTIONS(449),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(449),
    [anon_sym_type] = ACTIONS(449),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(449),
    [anon_sym_default] = ACTIONS(449),
    [anon_sym_do] = ACTIONS(449),
    [anon_sym_else] = ACTIONS(449),
    [anon_sym_foreign] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_in] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_of] = ACTIONS(449),
    [anon_sym_then] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym__integer_literal] = ACTIONS(449),
    [sym__octal_literal] = ACTIONS(449),
    [sym__hexidecimal_literal] = ACTIONS(449),
  },
  [135] = {
    [sym_deriving] = STATE(199),
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(449),
    [anon_sym_where] = ACTIONS(449),
    [anon_sym_import] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(449),
    [anon_sym_instance] = ACTIONS(449),
    [anon_sym_data] = ACTIONS(449),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(449),
    [anon_sym_type] = ACTIONS(449),
    [anon_sym_case] = ACTIONS(449),
    [anon_sym_default] = ACTIONS(449),
    [anon_sym_do] = ACTIONS(449),
    [anon_sym_else] = ACTIONS(449),
    [anon_sym_foreign] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_in] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_of] = ACTIONS(449),
    [anon_sym_then] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym__integer_literal] = ACTIONS(449),
    [sym__octal_literal] = ACTIONS(449),
    [sym__hexidecimal_literal] = ACTIONS(449),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(449),
    [anon_sym_where] = ACTIONS(449),
    [anon_sym_import] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(449),
    [anon_sym_instance] = ACTIONS(449),
    [anon_sym_data] = ACTIONS(449),
    [anon_sym_newtype] = ACTIONS(449),
    [anon_sym_type] = ACTIONS(449),
    [anon_sym_case] = ACTIONS(449),
    [anon_sym_default] = ACTIONS(449),
    [anon_sym_do] = ACTIONS(449),
    [anon_sym_else] = ACTIONS(449),
    [anon_sym_foreign] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(449),
    [anon_sym_in] = ACTIONS(449),
    [anon_sym_let] = ACTIONS(449),
    [anon_sym_of] = ACTIONS(449),
    [anon_sym_then] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym__integer_literal] = ACTIONS(449),
    [sym__octal_literal] = ACTIONS(449),
    [sym__hexidecimal_literal] = ACTIONS(449),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_module] = ACTIONS(307),
    [anon_sym_where] = ACTIONS(307),
    [anon_sym_import] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_instance] = ACTIONS(307),
    [anon_sym_data] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_deriving] = ACTIONS(307),
    [anon_sym_newtype] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(307),
    [sym_variable_identifier] = ACTIONS(309),
    [sym_constructor_identifier] = ACTIONS(309),
    [sym_module_identifier] = ACTIONS(309),
    [anon_sym_case] = ACTIONS(307),
    [anon_sym_default] = ACTIONS(307),
    [anon_sym_do] = ACTIONS(307),
    [anon_sym_else] = ACTIONS(307),
    [anon_sym_foreign] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(307),
    [anon_sym_in] = ACTIONS(307),
    [anon_sym_let] = ACTIONS(307),
    [anon_sym_of] = ACTIONS(307),
    [anon_sym_then] = ACTIONS(307),
    [anon_sym__] = ACTIONS(307),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [sym__integer_literal] = ACTIONS(307),
    [sym__octal_literal] = ACTIONS(307),
    [sym__hexidecimal_literal] = ACTIONS(307),
  },
  [138] = {
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_module] = ACTIONS(457),
    [anon_sym_where] = ACTIONS(457),
    [anon_sym_import] = ACTIONS(457),
    [anon_sym_class] = ACTIONS(457),
    [anon_sym_instance] = ACTIONS(457),
    [anon_sym_data] = ACTIONS(457),
    [anon_sym_newtype] = ACTIONS(457),
    [anon_sym_type] = ACTIONS(457),
    [anon_sym_case] = ACTIONS(457),
    [anon_sym_default] = ACTIONS(457),
    [anon_sym_do] = ACTIONS(457),
    [anon_sym_else] = ACTIONS(457),
    [anon_sym_foreign] = ACTIONS(457),
    [anon_sym_if] = ACTIONS(457),
    [anon_sym_in] = ACTIONS(457),
    [anon_sym_let] = ACTIONS(457),
    [anon_sym_of] = ACTIONS(457),
    [anon_sym_then] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [sym__integer_literal] = ACTIONS(457),
    [sym__octal_literal] = ACTIONS(457),
    [sym__hexidecimal_literal] = ACTIONS(457),
  },
  [140] = {
    [sym_constructor] = STATE(201),
    [sym__identifier] = STATE(91),
    [sym_variable_identifier] = ACTIONS(177),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(28),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_module] = ACTIONS(463),
    [anon_sym_where] = ACTIONS(463),
    [anon_sym_import] = ACTIONS(463),
    [anon_sym_class] = ACTIONS(463),
    [anon_sym_instance] = ACTIONS(463),
    [anon_sym_data] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_deriving] = ACTIONS(463),
    [anon_sym_newtype] = ACTIONS(463),
    [anon_sym_type] = ACTIONS(463),
    [anon_sym_case] = ACTIONS(463),
    [anon_sym_default] = ACTIONS(463),
    [anon_sym_do] = ACTIONS(463),
    [anon_sym_else] = ACTIONS(463),
    [anon_sym_foreign] = ACTIONS(463),
    [anon_sym_if] = ACTIONS(463),
    [anon_sym_in] = ACTIONS(463),
    [anon_sym_let] = ACTIONS(463),
    [anon_sym_of] = ACTIONS(463),
    [anon_sym_then] = ACTIONS(463),
    [anon_sym__] = ACTIONS(463),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym__integer_literal] = ACTIONS(463),
    [sym__octal_literal] = ACTIONS(463),
    [sym__hexidecimal_literal] = ACTIONS(463),
  },
  [142] = {
    [sym_field] = STATE(204),
    [sym_variable_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(28),
  },
  [143] = {
    [sym__identifier] = STATE(205),
    [sym_variable_identifier] = ACTIONS(177),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(28),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_module] = ACTIONS(473),
    [anon_sym_where] = ACTIONS(473),
    [anon_sym_import] = ACTIONS(473),
    [anon_sym_class] = ACTIONS(473),
    [anon_sym_instance] = ACTIONS(473),
    [anon_sym_data] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_deriving] = ACTIONS(473),
    [anon_sym_newtype] = ACTIONS(473),
    [anon_sym_type] = ACTIONS(473),
    [anon_sym_case] = ACTIONS(473),
    [anon_sym_default] = ACTIONS(473),
    [anon_sym_do] = ACTIONS(473),
    [anon_sym_else] = ACTIONS(473),
    [anon_sym_foreign] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_in] = ACTIONS(473),
    [anon_sym_let] = ACTIONS(473),
    [anon_sym_of] = ACTIONS(473),
    [anon_sym_then] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [sym__integer_literal] = ACTIONS(473),
    [sym__octal_literal] = ACTIONS(473),
    [sym__hexidecimal_literal] = ACTIONS(473),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_module] = ACTIONS(479),
    [anon_sym_where] = ACTIONS(479),
    [anon_sym_import] = ACTIONS(479),
    [anon_sym_class] = ACTIONS(479),
    [anon_sym_instance] = ACTIONS(479),
    [anon_sym_data] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(479),
    [anon_sym_newtype] = ACTIONS(479),
    [anon_sym_BANG] = ACTIONS(479),
    [anon_sym_type] = ACTIONS(479),
    [sym_variable_identifier] = ACTIONS(481),
    [sym_constructor_identifier] = ACTIONS(481),
    [sym_module_identifier] = ACTIONS(481),
    [anon_sym_case] = ACTIONS(479),
    [anon_sym_default] = ACTIONS(479),
    [anon_sym_do] = ACTIONS(479),
    [anon_sym_else] = ACTIONS(479),
    [anon_sym_foreign] = ACTIONS(479),
    [anon_sym_if] = ACTIONS(479),
    [anon_sym_in] = ACTIONS(479),
    [anon_sym_let] = ACTIONS(479),
    [anon_sym_of] = ACTIONS(479),
    [anon_sym_then] = ACTIONS(479),
    [anon_sym__] = ACTIONS(479),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(481),
    [anon_sym_SQUOTE] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym__integer_literal] = ACTIONS(479),
    [sym__octal_literal] = ACTIONS(479),
    [sym__hexidecimal_literal] = ACTIONS(479),
  },
  [146] = {
    [sym_strict] = STATE(206),
    [sym__identifier] = STATE(206),
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_module] = ACTIONS(473),
    [anon_sym_where] = ACTIONS(473),
    [anon_sym_import] = ACTIONS(473),
    [anon_sym_class] = ACTIONS(473),
    [anon_sym_instance] = ACTIONS(473),
    [anon_sym_data] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_deriving] = ACTIONS(473),
    [anon_sym_newtype] = ACTIONS(473),
    [anon_sym_BANG] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(473),
    [sym_variable_identifier] = ACTIONS(179),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(473),
    [anon_sym_default] = ACTIONS(473),
    [anon_sym_do] = ACTIONS(473),
    [anon_sym_else] = ACTIONS(473),
    [anon_sym_foreign] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_in] = ACTIONS(473),
    [anon_sym_let] = ACTIONS(473),
    [anon_sym_of] = ACTIONS(473),
    [anon_sym_then] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [sym__integer_literal] = ACTIONS(473),
    [sym__octal_literal] = ACTIONS(473),
    [sym__hexidecimal_literal] = ACTIONS(473),
  },
  [147] = {
    [sym_new_constructor] = STATE(207),
    [sym_constructor_identifier] = ACTIONS(353),
    [sym_comment] = ACTIONS(28),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_COLON_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(307),
    [sym_variable_identifier] = ACTIONS(307),
    [sym_constructor_identifier] = ACTIONS(309),
    [sym_module_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(28),
  },
  [149] = {
    [sym_fields] = STATE(208),
    [sym__identifier] = STATE(208),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [150] = {
    [sym_deriving] = STATE(209),
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_module] = ACTIONS(485),
    [anon_sym_where] = ACTIONS(485),
    [anon_sym_import] = ACTIONS(485),
    [anon_sym_class] = ACTIONS(485),
    [anon_sym_instance] = ACTIONS(485),
    [anon_sym_data] = ACTIONS(485),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(485),
    [anon_sym_type] = ACTIONS(485),
    [anon_sym_case] = ACTIONS(485),
    [anon_sym_default] = ACTIONS(485),
    [anon_sym_do] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(485),
    [anon_sym_foreign] = ACTIONS(485),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_in] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_of] = ACTIONS(485),
    [anon_sym_then] = ACTIONS(485),
    [anon_sym__] = ACTIONS(485),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym__integer_literal] = ACTIONS(485),
    [sym__octal_literal] = ACTIONS(485),
    [sym__hexidecimal_literal] = ACTIONS(485),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(144),
    [anon_sym_where] = ACTIONS(144),
    [anon_sym_import] = ACTIONS(144),
    [anon_sym_class] = ACTIONS(144),
    [anon_sym_instance] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_data] = ACTIONS(144),
    [anon_sym_newtype] = ACTIONS(144),
    [anon_sym_type] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(144),
    [anon_sym_default] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_else] = ACTIONS(144),
    [anon_sym_foreign] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(144),
    [anon_sym_in] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_of] = ACTIONS(144),
    [anon_sym_then] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [anon_sym_module] = ACTIONS(491),
    [anon_sym_where] = ACTIONS(491),
    [anon_sym_import] = ACTIONS(491),
    [anon_sym_class] = ACTIONS(491),
    [anon_sym_instance] = ACTIONS(491),
    [anon_sym_data] = ACTIONS(491),
    [anon_sym_newtype] = ACTIONS(491),
    [anon_sym_type] = ACTIONS(491),
    [anon_sym_case] = ACTIONS(491),
    [anon_sym_default] = ACTIONS(491),
    [anon_sym_do] = ACTIONS(491),
    [anon_sym_else] = ACTIONS(491),
    [anon_sym_foreign] = ACTIONS(491),
    [anon_sym_if] = ACTIONS(491),
    [anon_sym_in] = ACTIONS(491),
    [anon_sym_let] = ACTIONS(491),
    [anon_sym_of] = ACTIONS(491),
    [anon_sym_then] = ACTIONS(491),
    [anon_sym__] = ACTIONS(491),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym__integer_literal] = ACTIONS(491),
    [sym__octal_literal] = ACTIONS(491),
    [sym__hexidecimal_literal] = ACTIONS(491),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(166),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym_import] = ACTIONS(166),
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_instance] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(166),
    [anon_sym_data] = ACTIONS(166),
    [anon_sym_newtype] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(295),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [anon_sym_case] = ACTIONS(166),
    [anon_sym_default] = ACTIONS(166),
    [anon_sym_do] = ACTIONS(166),
    [anon_sym_else] = ACTIONS(166),
    [anon_sym_foreign] = ACTIONS(166),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_of] = ACTIONS(166),
    [anon_sym_then] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym__integer_literal] = ACTIONS(166),
    [sym__octal_literal] = ACTIONS(166),
    [sym__hexidecimal_literal] = ACTIONS(166),
  },
  [154] = {
    [sym__identifier] = STATE(211),
    [aux_sym__type_repeat1] = STATE(212),
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
    [anon_sym_import] = ACTIONS(497),
    [anon_sym_class] = ACTIONS(497),
    [anon_sym_instance] = ACTIONS(497),
    [anon_sym_DASH_GT] = ACTIONS(499),
    [anon_sym_data] = ACTIONS(497),
    [anon_sym_newtype] = ACTIONS(497),
    [anon_sym_type] = ACTIONS(497),
    [sym_variable_identifier] = ACTIONS(357),
    [sym_constructor_identifier] = ACTIONS(357),
    [sym_module_identifier] = ACTIONS(357),
    [anon_sym_case] = ACTIONS(497),
    [anon_sym_default] = ACTIONS(497),
    [anon_sym_do] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(497),
    [anon_sym_foreign] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(497),
    [anon_sym_in] = ACTIONS(497),
    [anon_sym_let] = ACTIONS(497),
    [anon_sym_of] = ACTIONS(497),
    [anon_sym_then] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__integer_literal] = ACTIONS(497),
    [sym__octal_literal] = ACTIONS(497),
    [sym__hexidecimal_literal] = ACTIONS(497),
  },
  [155] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(503),
  },
  [156] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(505),
  },
  [157] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(507),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(507),
  },
  [158] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(511),
  },
  [159] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(513),
  },
  [160] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(515),
  },
  [161] = {
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_BANG] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(517),
    [sym__ascii_large] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(517),
    [anon_sym_AMP] = ACTIONS(517),
    [anon_sym_1] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_SLASH] = ACTIONS(517),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(517),
    [anon_sym_CARET] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(517),
    [anon_sym_BSLASH] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym__space] = ACTIONS(517),
    [sym__newline] = ACTIONS(517),
    [sym__tab] = ACTIONS(517),
    [sym__vertical_tab] = ACTIONS(517),
  },
  [162] = {
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_BANG] = ACTIONS(519),
    [anon_sym__] = ACTIONS(519),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(519),
    [sym__ascii_large] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_PERCENT] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
    [anon_sym_1] = ACTIONS(519),
    [anon_sym_PLUS] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_QMARK] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(519),
    [anon_sym_CARET] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [sym__space] = ACTIONS(519),
    [sym__newline] = ACTIONS(519),
    [sym__tab] = ACTIONS(519),
    [sym__vertical_tab] = ACTIONS(519),
  },
  [163] = {
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(521),
    [anon_sym__] = ACTIONS(521),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(521),
    [sym__ascii_large] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(521),
    [anon_sym_PERCENT] = ACTIONS(521),
    [anon_sym_AMP] = ACTIONS(521),
    [anon_sym_1] = ACTIONS(521),
    [anon_sym_PLUS] = ACTIONS(521),
    [anon_sym_DOT] = ACTIONS(521),
    [anon_sym_SLASH] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(521),
    [anon_sym_CARET] = ACTIONS(521),
    [anon_sym_DASH] = ACTIONS(521),
    [anon_sym_TILDE] = ACTIONS(521),
    [anon_sym_BSLASH] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym__space] = ACTIONS(521),
    [sym__newline] = ACTIONS(521),
    [sym__tab] = ACTIONS(521),
    [sym__vertical_tab] = ACTIONS(521),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(521),
  },
  [164] = {
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_BANG] = ACTIONS(523),
    [anon_sym__] = ACTIONS(523),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(523),
    [sym__ascii_large] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_1] = ACTIONS(523),
    [anon_sym_PLUS] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_SLASH] = ACTIONS(523),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_QMARK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym_DASH] = ACTIONS(523),
    [anon_sym_TILDE] = ACTIONS(523),
    [anon_sym_BSLASH] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym__space] = ACTIONS(523),
    [sym__newline] = ACTIONS(523),
    [sym__tab] = ACTIONS(523),
    [sym__vertical_tab] = ACTIONS(523),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(525),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [anon_sym_EQ] = ACTIONS(527),
    [anon_sym_PIPE] = ACTIONS(527),
    [anon_sym_BANG] = ACTIONS(527),
    [anon_sym__] = ACTIONS(527),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(527),
    [sym__ascii_large] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_PERCENT] = ACTIONS(527),
    [anon_sym_AMP] = ACTIONS(527),
    [anon_sym_1] = ACTIONS(527),
    [anon_sym_PLUS] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(527),
    [anon_sym_GT] = ACTIONS(527),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_CARET] = ACTIONS(527),
    [anon_sym_DASH] = ACTIONS(527),
    [anon_sym_TILDE] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym__space] = ACTIONS(527),
    [sym__newline] = ACTIONS(527),
    [sym__tab] = ACTIONS(527),
    [sym__vertical_tab] = ACTIONS(527),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(527),
  },
  [166] = {
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_BANG] = ACTIONS(523),
    [anon_sym__] = ACTIONS(523),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(523),
    [sym__ascii_large] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_1] = ACTIONS(523),
    [anon_sym_PLUS] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_SLASH] = ACTIONS(523),
    [anon_sym_LT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_QMARK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_CARET] = ACTIONS(523),
    [anon_sym_DASH] = ACTIONS(523),
    [anon_sym_TILDE] = ACTIONS(523),
    [anon_sym_BSLASH] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [sym__space] = ACTIONS(523),
    [sym__newline] = ACTIONS(523),
    [sym__tab] = ACTIONS(523),
    [sym__vertical_tab] = ACTIONS(523),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(529),
  },
  [167] = {
    [sym_export] = STATE(217),
    [sym__identifier] = STATE(117),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [168] = {
    [anon_sym_where] = ACTIONS(531),
    [sym_comment] = ACTIONS(28),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(28),
  },
  [170] = {
    [sym__identifier] = STATE(221),
    [anon_sym_DOT_DOT] = ACTIONS(537),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [171] = {
    [sym__statement] = STATE(59),
    [sym_module] = STATE(16),
    [sym_import] = STATE(16),
    [sym__top_level_declaration] = STATE(16),
    [sym_type_class] = STATE(17),
    [sym_type_class_instance] = STATE(17),
    [sym_algebraic_datatype] = STATE(17),
    [sym_newtype] = STATE(17),
    [sym_type_synonym] = STATE(17),
    [sym__literal] = STATE(16),
    [sym_reserved_identifier] = STATE(16),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_string] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [172] = {
    [sym_import_specification] = STATE(222),
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_where] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(543),
    [anon_sym_hiding] = ACTIONS(156),
    [anon_sym_class] = ACTIONS(543),
    [anon_sym_instance] = ACTIONS(543),
    [anon_sym_data] = ACTIONS(543),
    [anon_sym_newtype] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_case] = ACTIONS(543),
    [anon_sym_default] = ACTIONS(543),
    [anon_sym_do] = ACTIONS(543),
    [anon_sym_else] = ACTIONS(543),
    [anon_sym_foreign] = ACTIONS(543),
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_in] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_of] = ACTIONS(543),
    [anon_sym_then] = ACTIONS(543),
    [anon_sym__] = ACTIONS(543),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym__integer_literal] = ACTIONS(543),
    [sym__octal_literal] = ACTIONS(543),
    [sym__hexidecimal_literal] = ACTIONS(543),
  },
  [173] = {
    [sym__identifier] = STATE(224),
    [anon_sym_DOT_DOT] = ACTIONS(547),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [174] = {
    [sym__identifier] = STATE(225),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_module] = ACTIONS(551),
    [anon_sym_where] = ACTIONS(551),
    [anon_sym_import] = ACTIONS(551),
    [anon_sym_class] = ACTIONS(551),
    [anon_sym_instance] = ACTIONS(551),
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
    [anon_sym_let] = ACTIONS(551),
    [anon_sym_of] = ACTIONS(551),
    [anon_sym_then] = ACTIONS(551),
    [anon_sym__] = ACTIONS(551),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__integer_literal] = ACTIONS(551),
    [sym__octal_literal] = ACTIONS(551),
    [sym__hexidecimal_literal] = ACTIONS(551),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(28),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_where] = ACTIONS(543),
    [anon_sym_import] = ACTIONS(543),
    [anon_sym_class] = ACTIONS(543),
    [anon_sym_instance] = ACTIONS(543),
    [anon_sym_data] = ACTIONS(543),
    [anon_sym_newtype] = ACTIONS(543),
    [anon_sym_type] = ACTIONS(543),
    [anon_sym_case] = ACTIONS(543),
    [anon_sym_default] = ACTIONS(543),
    [anon_sym_do] = ACTIONS(543),
    [anon_sym_else] = ACTIONS(543),
    [anon_sym_foreign] = ACTIONS(543),
    [anon_sym_if] = ACTIONS(543),
    [anon_sym_in] = ACTIONS(543),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_of] = ACTIONS(543),
    [anon_sym_then] = ACTIONS(543),
    [anon_sym__] = ACTIONS(543),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym__integer_literal] = ACTIONS(543),
    [sym__octal_literal] = ACTIONS(543),
    [sym__hexidecimal_literal] = ACTIONS(543),
  },
  [178] = {
    [aux_sym_import_specification_repeat1] = STATE(229),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(28),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [sym_comment] = ACTIONS(28),
  },
  [180] = {
    [sym_variable_identifier] = ACTIONS(563),
    [sym_constructor_identifier] = ACTIONS(565),
    [sym_module_identifier] = ACTIONS(565),
    [sym_comment] = ACTIONS(28),
  },
  [181] = {
    [sym_class] = STATE(230),
    [sym__identifier] = STATE(69),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(28),
  },
  [182] = {
    [anon_sym_EQ_GT] = ACTIONS(567),
    [sym_comment] = ACTIONS(28),
  },
  [183] = {
    [sym_type_class_body] = STATE(233),
    [sym__instance_declaration] = STATE(188),
    [sym__general_declaration] = STATE(189),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [aux_sym_type_class_body_repeat1] = STATE(192),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_EQ_GT] = ACTIONS(571),
    [sym_comment] = ACTIONS(28),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [anon_sym_module] = ACTIONS(575),
    [anon_sym_where] = ACTIONS(575),
    [anon_sym_import] = ACTIONS(575),
    [anon_sym_class] = ACTIONS(575),
    [anon_sym_instance] = ACTIONS(575),
    [anon_sym_data] = ACTIONS(575),
    [anon_sym_newtype] = ACTIONS(575),
    [anon_sym_type] = ACTIONS(575),
    [anon_sym_case] = ACTIONS(575),
    [anon_sym_default] = ACTIONS(575),
    [anon_sym_do] = ACTIONS(575),
    [anon_sym_else] = ACTIONS(575),
    [anon_sym_foreign] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(575),
    [anon_sym_in] = ACTIONS(575),
    [anon_sym_let] = ACTIONS(575),
    [anon_sym_of] = ACTIONS(575),
    [anon_sym_then] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym__integer_literal] = ACTIONS(575),
    [sym__octal_literal] = ACTIONS(575),
    [sym__hexidecimal_literal] = ACTIONS(575),
  },
  [186] = {
    [sym__op] = STATE(239),
    [sym_variable_symbol] = STATE(240),
    [sym_constructor_symbol] = STATE(240),
    [sym_integer] = STATE(241),
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
    [sym__integer_literal] = ACTIONS(587),
    [sym__octal_literal] = ACTIONS(587),
    [sym__hexidecimal_literal] = ACTIONS(587),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(569),
    [sym_comment] = ACTIONS(28),
  },
  [188] = {
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_infixl] = ACTIONS(589),
    [anon_sym_infixr] = ACTIONS(589),
    [anon_sym_infix] = ACTIONS(589),
    [sym_variable_identifier] = ACTIONS(591),
    [sym_constructor_identifier] = ACTIONS(591),
    [sym_module_identifier] = ACTIONS(591),
    [sym_comment] = ACTIONS(28),
  },
  [189] = {
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_infixl] = ACTIONS(593),
    [anon_sym_infixr] = ACTIONS(593),
    [anon_sym_infix] = ACTIONS(593),
    [sym_variable_identifier] = ACTIONS(595),
    [sym_constructor_identifier] = ACTIONS(595),
    [sym_module_identifier] = ACTIONS(595),
    [sym_comment] = ACTIONS(28),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_infixl] = ACTIONS(597),
    [anon_sym_infixr] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
    [sym_variable_identifier] = ACTIONS(599),
    [sym_constructor_identifier] = ACTIONS(599),
    [sym_module_identifier] = ACTIONS(599),
    [sym_comment] = ACTIONS(28),
  },
  [191] = {
    [sym__identifier] = STATE(148),
    [anon_sym_COLON_COLON] = ACTIONS(601),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [192] = {
    [sym__instance_declaration] = STATE(245),
    [sym__general_declaration] = STATE(189),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [193] = {
    [sym_type_class_instance_body] = STATE(247),
    [sym__general_declaration] = STATE(196),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [aux_sym_type_class_instance_body_repeat1] = STATE(197),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_module] = ACTIONS(609),
    [anon_sym_where] = ACTIONS(609),
    [anon_sym_import] = ACTIONS(609),
    [anon_sym_class] = ACTIONS(609),
    [anon_sym_instance] = ACTIONS(609),
    [anon_sym_data] = ACTIONS(609),
    [anon_sym_newtype] = ACTIONS(609),
    [anon_sym_type] = ACTIONS(609),
    [anon_sym_case] = ACTIONS(609),
    [anon_sym_default] = ACTIONS(609),
    [anon_sym_do] = ACTIONS(609),
    [anon_sym_else] = ACTIONS(609),
    [anon_sym_foreign] = ACTIONS(609),
    [anon_sym_if] = ACTIONS(609),
    [anon_sym_in] = ACTIONS(609),
    [anon_sym_let] = ACTIONS(609),
    [anon_sym_of] = ACTIONS(609),
    [anon_sym_then] = ACTIONS(609),
    [anon_sym__] = ACTIONS(609),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(611),
    [anon_sym_SQUOTE] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym__integer_literal] = ACTIONS(609),
    [sym__octal_literal] = ACTIONS(609),
    [sym__hexidecimal_literal] = ACTIONS(609),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(605),
    [sym_comment] = ACTIONS(28),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(613),
    [anon_sym_infixl] = ACTIONS(613),
    [anon_sym_infixr] = ACTIONS(613),
    [anon_sym_infix] = ACTIONS(613),
    [sym_variable_identifier] = ACTIONS(615),
    [sym_constructor_identifier] = ACTIONS(615),
    [sym_module_identifier] = ACTIONS(615),
    [sym_comment] = ACTIONS(28),
  },
  [197] = {
    [sym__general_declaration] = STATE(248),
    [sym_fixity] = STATE(190),
    [sym_type_signature] = STATE(190),
    [sym__identifier] = STATE(97),
    [aux_sym_type_class_repeat1] = STATE(191),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_infixl] = ACTIONS(441),
    [anon_sym_infixr] = ACTIONS(441),
    [anon_sym_infix] = ACTIONS(441),
    [sym_variable_identifier] = ACTIONS(66),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_module_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(28),
  },
  [198] = {
    [sym_deriving] = STATE(249),
    [ts_builtin_sym_end] = ACTIONS(619),
    [anon_sym_module] = ACTIONS(621),
    [anon_sym_where] = ACTIONS(621),
    [anon_sym_import] = ACTIONS(621),
    [anon_sym_class] = ACTIONS(621),
    [anon_sym_instance] = ACTIONS(621),
    [anon_sym_data] = ACTIONS(621),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(621),
    [anon_sym_type] = ACTIONS(621),
    [anon_sym_case] = ACTIONS(621),
    [anon_sym_default] = ACTIONS(621),
    [anon_sym_do] = ACTIONS(621),
    [anon_sym_else] = ACTIONS(621),
    [anon_sym_foreign] = ACTIONS(621),
    [anon_sym_if] = ACTIONS(621),
    [anon_sym_in] = ACTIONS(621),
    [anon_sym_let] = ACTIONS(621),
    [anon_sym_of] = ACTIONS(621),
    [anon_sym_then] = ACTIONS(621),
    [anon_sym__] = ACTIONS(621),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [sym__integer_literal] = ACTIONS(621),
    [sym__octal_literal] = ACTIONS(621),
    [sym__hexidecimal_literal] = ACTIONS(621),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [anon_sym_module] = ACTIONS(621),
    [anon_sym_where] = ACTIONS(621),
    [anon_sym_import] = ACTIONS(621),
    [anon_sym_class] = ACTIONS(621),
    [anon_sym_instance] = ACTIONS(621),
    [anon_sym_data] = ACTIONS(621),
    [anon_sym_newtype] = ACTIONS(621),
    [anon_sym_type] = ACTIONS(621),
    [anon_sym_case] = ACTIONS(621),
    [anon_sym_default] = ACTIONS(621),
    [anon_sym_do] = ACTIONS(621),
    [anon_sym_else] = ACTIONS(621),
    [anon_sym_foreign] = ACTIONS(621),
    [anon_sym_if] = ACTIONS(621),
    [anon_sym_in] = ACTIONS(621),
    [anon_sym_let] = ACTIONS(621),
    [anon_sym_of] = ACTIONS(621),
    [anon_sym_then] = ACTIONS(621),
    [anon_sym__] = ACTIONS(621),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [sym__integer_literal] = ACTIONS(621),
    [sym__octal_literal] = ACTIONS(621),
    [sym__hexidecimal_literal] = ACTIONS(621),
  },
  [200] = {
    [aux_sym_export_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(627),
    [sym_comment] = ACTIONS(28),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_module] = ACTIONS(631),
    [anon_sym_where] = ACTIONS(631),
    [anon_sym_import] = ACTIONS(631),
    [anon_sym_class] = ACTIONS(631),
    [anon_sym_instance] = ACTIONS(631),
    [anon_sym_data] = ACTIONS(631),
    [anon_sym_PIPE] = ACTIONS(631),
    [anon_sym_deriving] = ACTIONS(631),
    [anon_sym_newtype] = ACTIONS(631),
    [anon_sym_type] = ACTIONS(631),
    [anon_sym_case] = ACTIONS(631),
    [anon_sym_default] = ACTIONS(631),
    [anon_sym_do] = ACTIONS(631),
    [anon_sym_else] = ACTIONS(631),
    [anon_sym_foreign] = ACTIONS(631),
    [anon_sym_if] = ACTIONS(631),
    [anon_sym_in] = ACTIONS(631),
    [anon_sym_let] = ACTIONS(631),
    [anon_sym_of] = ACTIONS(631),
    [anon_sym_then] = ACTIONS(631),
    [anon_sym__] = ACTIONS(631),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(633),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [sym__integer_literal] = ACTIONS(631),
    [sym__octal_literal] = ACTIONS(631),
    [sym__hexidecimal_literal] = ACTIONS(631),
  },
  [202] = {
    [sym_constructor] = STATE(253),
    [sym__identifier] = STATE(91),
    [sym_variable_identifier] = ACTIONS(177),
    [sym_constructor_identifier] = ACTIONS(179),
    [sym_module_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(28),
  },
  [203] = {
    [aux_sym_field_repeat1] = STATE(256),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_COLON_COLON] = ACTIONS(637),
    [sym_comment] = ACTIONS(28),
  },
  [204] = {
    [aux_sym_fields_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym_comment] = ACTIONS(28),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(643),
    [anon_sym_module] = ACTIONS(645),
    [anon_sym_where] = ACTIONS(645),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_import] = ACTIONS(645),
    [anon_sym_class] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_instance] = ACTIONS(645),
    [anon_sym_data] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_deriving] = ACTIONS(645),
    [anon_sym_newtype] = ACTIONS(645),
    [anon_sym_BANG] = ACTIONS(645),
    [anon_sym_type] = ACTIONS(645),
    [sym_variable_identifier] = ACTIONS(647),
    [sym_constructor_identifier] = ACTIONS(647),
    [sym_module_identifier] = ACTIONS(647),
    [anon_sym_case] = ACTIONS(645),
    [anon_sym_default] = ACTIONS(645),
    [anon_sym_do] = ACTIONS(645),
    [anon_sym_else] = ACTIONS(645),
    [anon_sym_foreign] = ACTIONS(645),
    [anon_sym_if] = ACTIONS(645),
    [anon_sym_in] = ACTIONS(645),
    [anon_sym_let] = ACTIONS(645),
    [anon_sym_of] = ACTIONS(645),
    [anon_sym_then] = ACTIONS(645),
    [anon_sym__] = ACTIONS(645),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym__integer_literal] = ACTIONS(645),
    [sym__octal_literal] = ACTIONS(645),
    [sym__hexidecimal_literal] = ACTIONS(645),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(649),
    [anon_sym_module] = ACTIONS(651),
    [anon_sym_where] = ACTIONS(651),
    [anon_sym_import] = ACTIONS(651),
    [anon_sym_class] = ACTIONS(651),
    [anon_sym_instance] = ACTIONS(651),
    [anon_sym_data] = ACTIONS(651),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_deriving] = ACTIONS(651),
    [anon_sym_newtype] = ACTIONS(651),
    [anon_sym_BANG] = ACTIONS(651),
    [anon_sym_type] = ACTIONS(651),
    [sym_variable_identifier] = ACTIONS(653),
    [sym_constructor_identifier] = ACTIONS(653),
    [sym_module_identifier] = ACTIONS(653),
    [anon_sym_case] = ACTIONS(651),
    [anon_sym_default] = ACTIONS(651),
    [anon_sym_do] = ACTIONS(651),
    [anon_sym_else] = ACTIONS(651),
    [anon_sym_foreign] = ACTIONS(651),
    [anon_sym_if] = ACTIONS(651),
    [anon_sym_in] = ACTIONS(651),
    [anon_sym_let] = ACTIONS(651),
    [anon_sym_of] = ACTIONS(651),
    [anon_sym_then] = ACTIONS(651),
    [anon_sym__] = ACTIONS(651),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [sym__integer_literal] = ACTIONS(651),
    [sym__octal_literal] = ACTIONS(651),
    [sym__hexidecimal_literal] = ACTIONS(651),
  },
  [207] = {
    [sym_deriving] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_where] = ACTIONS(657),
    [anon_sym_import] = ACTIONS(657),
    [anon_sym_class] = ACTIONS(657),
    [anon_sym_instance] = ACTIONS(657),
    [anon_sym_data] = ACTIONS(657),
    [anon_sym_deriving] = ACTIONS(195),
    [anon_sym_newtype] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_case] = ACTIONS(657),
    [anon_sym_default] = ACTIONS(657),
    [anon_sym_do] = ACTIONS(657),
    [anon_sym_else] = ACTIONS(657),
    [anon_sym_foreign] = ACTIONS(657),
    [anon_sym_if] = ACTIONS(657),
    [anon_sym_in] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_of] = ACTIONS(657),
    [anon_sym_then] = ACTIONS(657),
    [anon_sym__] = ACTIONS(657),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [sym__integer_literal] = ACTIONS(657),
    [sym__octal_literal] = ACTIONS(657),
    [sym__hexidecimal_literal] = ACTIONS(657),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [anon_sym_module] = ACTIONS(663),
    [anon_sym_where] = ACTIONS(663),
    [anon_sym_import] = ACTIONS(663),
    [anon_sym_class] = ACTIONS(663),
    [anon_sym_instance] = ACTIONS(663),
    [anon_sym_data] = ACTIONS(663),
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
    [anon_sym_let] = ACTIONS(663),
    [anon_sym_of] = ACTIONS(663),
    [anon_sym_then] = ACTIONS(663),
    [anon_sym__] = ACTIONS(663),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym__integer_literal] = ACTIONS(663),
    [sym__octal_literal] = ACTIONS(663),
    [sym__hexidecimal_literal] = ACTIONS(663),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_module] = ACTIONS(657),
    [anon_sym_where] = ACTIONS(657),
    [anon_sym_import] = ACTIONS(657),
    [anon_sym_class] = ACTIONS(657),
    [anon_sym_instance] = ACTIONS(657),
    [anon_sym_data] = ACTIONS(657),
    [anon_sym_newtype] = ACTIONS(657),
    [anon_sym_type] = ACTIONS(657),
    [anon_sym_case] = ACTIONS(657),
    [anon_sym_default] = ACTIONS(657),
    [anon_sym_do] = ACTIONS(657),
    [anon_sym_else] = ACTIONS(657),
    [anon_sym_foreign] = ACTIONS(657),
    [anon_sym_if] = ACTIONS(657),
    [anon_sym_in] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_of] = ACTIONS(657),
    [anon_sym_then] = ACTIONS(657),
    [anon_sym__] = ACTIONS(657),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [sym__integer_literal] = ACTIONS(657),
    [sym__octal_literal] = ACTIONS(657),
    [sym__hexidecimal_literal] = ACTIONS(657),
  },
  [210] = {
    [sym__identifier] = STATE(261),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_module] = ACTIONS(307),
    [anon_sym_where] = ACTIONS(307),
    [anon_sym_import] = ACTIONS(307),
    [anon_sym_class] = ACTIONS(307),
    [anon_sym_instance] = ACTIONS(307),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [anon_sym_data] = ACTIONS(307),
    [anon_sym_newtype] = ACTIONS(307),
    [anon_sym_type] = ACTIONS(307),
    [sym_variable_identifier] = ACTIONS(309),
    [sym_constructor_identifier] = ACTIONS(309),
    [sym_module_identifier] = ACTIONS(309),
    [anon_sym_case] = ACTIONS(307),
    [anon_sym_default] = ACTIONS(307),
    [anon_sym_do] = ACTIONS(307),
    [anon_sym_else] = ACTIONS(307),
    [anon_sym_foreign] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(307),
    [anon_sym_in] = ACTIONS(307),
    [anon_sym_let] = ACTIONS(307),
    [anon_sym_of] = ACTIONS(307),
    [anon_sym_then] = ACTIONS(307),
    [anon_sym__] = ACTIONS(307),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [sym__integer_literal] = ACTIONS(307),
    [sym__octal_literal] = ACTIONS(307),
    [sym__hexidecimal_literal] = ACTIONS(307),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(667),
    [anon_sym_module] = ACTIONS(669),
    [anon_sym_where] = ACTIONS(669),
    [anon_sym_import] = ACTIONS(669),
    [anon_sym_class] = ACTIONS(669),
    [anon_sym_instance] = ACTIONS(669),
    [anon_sym_DASH_GT] = ACTIONS(671),
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
    [anon_sym_let] = ACTIONS(669),
    [anon_sym_of] = ACTIONS(669),
    [anon_sym_then] = ACTIONS(669),
    [anon_sym__] = ACTIONS(669),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__integer_literal] = ACTIONS(669),
    [sym__octal_literal] = ACTIONS(669),
    [sym__hexidecimal_literal] = ACTIONS(669),
  },
  [213] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(675),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(675),
  },
  [214] = {
    [sym_comment] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(677),
  },
  [215] = {
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(679),
    [anon_sym_RBRACE] = ACTIONS(679),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(679),
    [anon_sym_EQ] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_BANG] = ACTIONS(679),
    [anon_sym__] = ACTIONS(679),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(679),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(679),
    [sym__ascii_large] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [anon_sym_PERCENT] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
    [anon_sym_1] = ACTIONS(679),
    [anon_sym_PLUS] = ACTIONS(679),
    [anon_sym_DOT] = ACTIONS(679),
    [anon_sym_SLASH] = ACTIONS(679),
    [anon_sym_LT] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [anon_sym_QMARK] = ACTIONS(679),
    [anon_sym_AT] = ACTIONS(679),
    [anon_sym_CARET] = ACTIONS(679),
    [anon_sym_DASH] = ACTIONS(679),
    [anon_sym_TILDE] = ACTIONS(679),
    [anon_sym_BSLASH] = ACTIONS(679),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [sym__space] = ACTIONS(679),
    [sym__newline] = ACTIONS(679),
    [sym__tab] = ACTIONS(679),
    [sym__vertical_tab] = ACTIONS(679),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(679),
  },
  [216] = {
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [anon_sym_RBRACE] = ACTIONS(681),
    [anon_sym_BQUOTE] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_EQ] = ACTIONS(681),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_BANG] = ACTIONS(681),
    [anon_sym__] = ACTIONS(681),
    [sym_comment] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(681),
    [sym__ascii_large] = ACTIONS(681),
    [anon_sym_POUND] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(681),
    [anon_sym_PERCENT] = ACTIONS(681),
    [anon_sym_AMP] = ACTIONS(681),
    [anon_sym_1] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(681),
    [anon_sym_DOT] = ACTIONS(681),
    [anon_sym_SLASH] = ACTIONS(681),
    [anon_sym_LT] = ACTIONS(681),
    [anon_sym_GT] = ACTIONS(681),
    [anon_sym_QMARK] = ACTIONS(681),
    [anon_sym_AT] = ACTIONS(681),
    [anon_sym_CARET] = ACTIONS(681),
    [anon_sym_DASH] = ACTIONS(681),
    [anon_sym_TILDE] = ACTIONS(681),
    [anon_sym_BSLASH] = ACTIONS(681),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym__space] = ACTIONS(681),
    [sym__newline] = ACTIONS(681),
    [sym__tab] = ACTIONS(681),
    [sym__vertical_tab] = ACTIONS(681),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(681),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(28),
  },
  [218] = {
    [sym_export] = STATE(263),
    [sym__identifier] = STATE(117),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [219] = {
    [anon_sym_where] = ACTIONS(685),
    [sym_comment] = ACTIONS(28),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(28),
  },
  [221] = {
    [aux_sym_export_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(28),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_module] = ACTIONS(691),
    [anon_sym_where] = ACTIONS(691),
    [anon_sym_import] = ACTIONS(691),
    [anon_sym_class] = ACTIONS(691),
    [anon_sym_instance] = ACTIONS(691),
    [anon_sym_data] = ACTIONS(691),
    [anon_sym_newtype] = ACTIONS(691),
    [anon_sym_type] = ACTIONS(691),
    [anon_sym_case] = ACTIONS(691),
    [anon_sym_default] = ACTIONS(691),
    [anon_sym_do] = ACTIONS(691),
    [anon_sym_else] = ACTIONS(691),
    [anon_sym_foreign] = ACTIONS(691),
    [anon_sym_if] = ACTIONS(691),
    [anon_sym_in] = ACTIONS(691),
    [anon_sym_let] = ACTIONS(691),
    [anon_sym_of] = ACTIONS(691),
    [anon_sym_then] = ACTIONS(691),
    [anon_sym__] = ACTIONS(691),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [sym__integer_literal] = ACTIONS(691),
    [sym__octal_literal] = ACTIONS(691),
    [sym__hexidecimal_literal] = ACTIONS(691),
  },
  [223] = {
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(28),
  },
  [224] = {
    [aux_sym_export_repeat1] = STATE(267),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(28),
  },
  [225] = {
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_comment] = ACTIONS(28),
  },
  [226] = {
    [sym__identifier] = STATE(269),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_module] = ACTIONS(703),
    [anon_sym_where] = ACTIONS(703),
    [anon_sym_import] = ACTIONS(703),
    [anon_sym_class] = ACTIONS(703),
    [anon_sym_instance] = ACTIONS(703),
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
    [anon_sym_let] = ACTIONS(703),
    [anon_sym_of] = ACTIONS(703),
    [anon_sym_then] = ACTIONS(703),
    [anon_sym__] = ACTIONS(703),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(703),
    [sym__integer_literal] = ACTIONS(703),
    [sym__octal_literal] = ACTIONS(703),
    [sym__hexidecimal_literal] = ACTIONS(703),
  },
  [228] = {
    [sym__identifier] = STATE(271),
    [anon_sym_DOT_DOT] = ACTIONS(707),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(709),
    [sym_comment] = ACTIONS(28),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [sym_comment] = ACTIONS(28),
  },
  [231] = {
    [sym_variable_identifier] = ACTIONS(713),
    [sym_constructor_identifier] = ACTIONS(715),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(28),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [anon_sym_module] = ACTIONS(719),
    [anon_sym_where] = ACTIONS(719),
    [anon_sym_import] = ACTIONS(719),
    [anon_sym_class] = ACTIONS(719),
    [anon_sym_instance] = ACTIONS(719),
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
    [anon_sym_let] = ACTIONS(719),
    [anon_sym_of] = ACTIONS(719),
    [anon_sym_then] = ACTIONS(719),
    [anon_sym__] = ACTIONS(719),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(721),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym__integer_literal] = ACTIONS(719),
    [sym__octal_literal] = ACTIONS(719),
    [sym__hexidecimal_literal] = ACTIONS(719),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(723),
    [sym_comment] = ACTIONS(28),
  },
  [234] = {
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(275),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [235] = {
    [sym__identifier] = STATE(276),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [236] = {
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_infixl] = ACTIONS(727),
    [anon_sym_infixr] = ACTIONS(727),
    [anon_sym_infix] = ACTIONS(727),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(727),
    [sym_constructor_identifier] = ACTIONS(727),
    [sym_module_identifier] = ACTIONS(727),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_infixl] = ACTIONS(233),
    [anon_sym_infixr] = ACTIONS(233),
    [anon_sym_infix] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(233),
    [sym_variable_identifier] = ACTIONS(233),
    [sym_constructor_identifier] = ACTIONS(233),
    [sym_module_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_1] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(233),
  },
  [238] = {
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_1] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym_BSLASH] = ACTIONS(112),
  },
  [239] = {
    [aux_sym_fixity_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_infixl] = ACTIONS(733),
    [anon_sym_infixr] = ACTIONS(733),
    [anon_sym_infix] = ACTIONS(733),
    [sym_variable_identifier] = ACTIONS(735),
    [sym_constructor_identifier] = ACTIONS(735),
    [sym_module_identifier] = ACTIONS(735),
    [sym_comment] = ACTIONS(28),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(737),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_infixl] = ACTIONS(737),
    [anon_sym_infixr] = ACTIONS(737),
    [anon_sym_infix] = ACTIONS(737),
    [sym_variable_identifier] = ACTIONS(739),
    [sym_constructor_identifier] = ACTIONS(739),
    [sym_module_identifier] = ACTIONS(739),
    [sym_comment] = ACTIONS(28),
  },
  [241] = {
    [sym__op] = STATE(281),
    [sym_variable_symbol] = STATE(240),
    [sym_constructor_symbol] = STATE(240),
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [242] = {
    [anon_sym_COMMA] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_infixl] = ACTIONS(741),
    [anon_sym_infixr] = ACTIONS(741),
    [anon_sym_infix] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(741),
    [anon_sym_EQ] = ACTIONS(741),
    [anon_sym_PIPE] = ACTIONS(741),
    [anon_sym_BANG] = ACTIONS(741),
    [sym_variable_identifier] = ACTIONS(741),
    [sym_constructor_identifier] = ACTIONS(741),
    [sym_module_identifier] = ACTIONS(741),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(741),
    [anon_sym_PERCENT] = ACTIONS(741),
    [anon_sym_AMP] = ACTIONS(741),
    [anon_sym_1] = ACTIONS(741),
    [anon_sym_PLUS] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(741),
    [anon_sym_SLASH] = ACTIONS(741),
    [anon_sym_LT] = ACTIONS(741),
    [anon_sym_GT] = ACTIONS(741),
    [anon_sym_QMARK] = ACTIONS(741),
    [anon_sym_AT] = ACTIONS(741),
    [anon_sym_CARET] = ACTIONS(741),
    [anon_sym_DASH] = ACTIONS(741),
    [anon_sym_TILDE] = ACTIONS(741),
    [anon_sym_BSLASH] = ACTIONS(741),
  },
  [243] = {
    [sym__symbol] = STATE(283),
    [anon_sym_COMMA] = ACTIONS(743),
    [anon_sym_RPAREN] = ACTIONS(745),
    [anon_sym_RBRACE] = ACTIONS(743),
    [anon_sym_infixl] = ACTIONS(743),
    [anon_sym_infixr] = ACTIONS(743),
    [anon_sym_infix] = ACTIONS(743),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(743),
    [sym_constructor_identifier] = ACTIONS(743),
    [sym_module_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [244] = {
    [sym__type] = STATE(285),
    [sym_context] = STATE(286),
    [sym_class] = STATE(26),
    [sym__identifier] = STATE(287),
    [aux_sym_type_class_repeat1] = STATE(288),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(747),
    [sym_constructor_identifier] = ACTIONS(749),
    [sym_module_identifier] = ACTIONS(749),
    [sym_comment] = ACTIONS(28),
  },
  [245] = {
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_infixl] = ACTIONS(751),
    [anon_sym_infixr] = ACTIONS(751),
    [anon_sym_infix] = ACTIONS(751),
    [sym_variable_identifier] = ACTIONS(753),
    [sym_constructor_identifier] = ACTIONS(753),
    [sym_module_identifier] = ACTIONS(753),
    [sym_comment] = ACTIONS(28),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [anon_sym_module] = ACTIONS(757),
    [anon_sym_where] = ACTIONS(757),
    [anon_sym_import] = ACTIONS(757),
    [anon_sym_class] = ACTIONS(757),
    [anon_sym_instance] = ACTIONS(757),
    [anon_sym_data] = ACTIONS(757),
    [anon_sym_newtype] = ACTIONS(757),
    [anon_sym_type] = ACTIONS(757),
    [anon_sym_case] = ACTIONS(757),
    [anon_sym_default] = ACTIONS(757),
    [anon_sym_do] = ACTIONS(757),
    [anon_sym_else] = ACTIONS(757),
    [anon_sym_foreign] = ACTIONS(757),
    [anon_sym_if] = ACTIONS(757),
    [anon_sym_in] = ACTIONS(757),
    [anon_sym_let] = ACTIONS(757),
    [anon_sym_of] = ACTIONS(757),
    [anon_sym_then] = ACTIONS(757),
    [anon_sym__] = ACTIONS(757),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(759),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [sym__integer_literal] = ACTIONS(757),
    [sym__octal_literal] = ACTIONS(757),
    [sym__hexidecimal_literal] = ACTIONS(757),
  },
  [247] = {
    [anon_sym_RBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(28),
  },
  [248] = {
    [anon_sym_RBRACE] = ACTIONS(763),
    [anon_sym_infixl] = ACTIONS(763),
    [anon_sym_infixr] = ACTIONS(763),
    [anon_sym_infix] = ACTIONS(763),
    [sym_variable_identifier] = ACTIONS(765),
    [sym_constructor_identifier] = ACTIONS(765),
    [sym_module_identifier] = ACTIONS(765),
    [sym_comment] = ACTIONS(28),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(767),
    [anon_sym_module] = ACTIONS(769),
    [anon_sym_where] = ACTIONS(769),
    [anon_sym_import] = ACTIONS(769),
    [anon_sym_class] = ACTIONS(769),
    [anon_sym_instance] = ACTIONS(769),
    [anon_sym_data] = ACTIONS(769),
    [anon_sym_newtype] = ACTIONS(769),
    [anon_sym_type] = ACTIONS(769),
    [anon_sym_case] = ACTIONS(769),
    [anon_sym_default] = ACTIONS(769),
    [anon_sym_do] = ACTIONS(769),
    [anon_sym_else] = ACTIONS(769),
    [anon_sym_foreign] = ACTIONS(769),
    [anon_sym_if] = ACTIONS(769),
    [anon_sym_in] = ACTIONS(769),
    [anon_sym_let] = ACTIONS(769),
    [anon_sym_of] = ACTIONS(769),
    [anon_sym_then] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(771),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym__integer_literal] = ACTIONS(769),
    [sym__octal_literal] = ACTIONS(769),
    [sym__hexidecimal_literal] = ACTIONS(769),
  },
  [250] = {
    [sym__identifier] = STATE(290),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(773),
    [anon_sym_module] = ACTIONS(775),
    [anon_sym_where] = ACTIONS(775),
    [anon_sym_import] = ACTIONS(775),
    [anon_sym_class] = ACTIONS(775),
    [anon_sym_instance] = ACTIONS(775),
    [anon_sym_data] = ACTIONS(775),
    [anon_sym_newtype] = ACTIONS(775),
    [anon_sym_type] = ACTIONS(775),
    [anon_sym_case] = ACTIONS(775),
    [anon_sym_default] = ACTIONS(775),
    [anon_sym_do] = ACTIONS(775),
    [anon_sym_else] = ACTIONS(775),
    [anon_sym_foreign] = ACTIONS(775),
    [anon_sym_if] = ACTIONS(775),
    [anon_sym_in] = ACTIONS(775),
    [anon_sym_let] = ACTIONS(775),
    [anon_sym_of] = ACTIONS(775),
    [anon_sym_then] = ACTIONS(775),
    [anon_sym__] = ACTIONS(775),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(777),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(775),
    [sym__integer_literal] = ACTIONS(775),
    [sym__octal_literal] = ACTIONS(775),
    [sym__hexidecimal_literal] = ACTIONS(775),
  },
  [252] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(781),
    [sym_comment] = ACTIONS(28),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [anon_sym_module] = ACTIONS(785),
    [anon_sym_where] = ACTIONS(785),
    [anon_sym_import] = ACTIONS(785),
    [anon_sym_class] = ACTIONS(785),
    [anon_sym_instance] = ACTIONS(785),
    [anon_sym_data] = ACTIONS(785),
    [anon_sym_PIPE] = ACTIONS(785),
    [anon_sym_deriving] = ACTIONS(785),
    [anon_sym_newtype] = ACTIONS(785),
    [anon_sym_type] = ACTIONS(785),
    [anon_sym_case] = ACTIONS(785),
    [anon_sym_default] = ACTIONS(785),
    [anon_sym_do] = ACTIONS(785),
    [anon_sym_else] = ACTIONS(785),
    [anon_sym_foreign] = ACTIONS(785),
    [anon_sym_if] = ACTIONS(785),
    [anon_sym_in] = ACTIONS(785),
    [anon_sym_let] = ACTIONS(785),
    [anon_sym_of] = ACTIONS(785),
    [anon_sym_then] = ACTIONS(785),
    [anon_sym__] = ACTIONS(785),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(787),
    [anon_sym_SQUOTE] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(785),
    [sym__integer_literal] = ACTIONS(785),
    [sym__octal_literal] = ACTIONS(785),
    [sym__hexidecimal_literal] = ACTIONS(785),
  },
  [254] = {
    [sym_variable_identifier] = ACTIONS(789),
    [sym_comment] = ACTIONS(28),
  },
  [255] = {
    [sym_strict] = STATE(295),
    [sym__identifier] = STATE(295),
    [anon_sym_BANG] = ACTIONS(791),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_COLON_COLON] = ACTIONS(795),
    [sym_comment] = ACTIONS(28),
  },
  [257] = {
    [sym_field] = STATE(298),
    [sym_variable_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(28),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(797),
    [anon_sym_module] = ACTIONS(799),
    [anon_sym_where] = ACTIONS(799),
    [anon_sym_import] = ACTIONS(799),
    [anon_sym_class] = ACTIONS(799),
    [anon_sym_instance] = ACTIONS(799),
    [anon_sym_data] = ACTIONS(799),
    [anon_sym_PIPE] = ACTIONS(799),
    [anon_sym_deriving] = ACTIONS(799),
    [anon_sym_newtype] = ACTIONS(799),
    [anon_sym_type] = ACTIONS(799),
    [anon_sym_case] = ACTIONS(799),
    [anon_sym_default] = ACTIONS(799),
    [anon_sym_do] = ACTIONS(799),
    [anon_sym_else] = ACTIONS(799),
    [anon_sym_foreign] = ACTIONS(799),
    [anon_sym_if] = ACTIONS(799),
    [anon_sym_in] = ACTIONS(799),
    [anon_sym_let] = ACTIONS(799),
    [anon_sym_of] = ACTIONS(799),
    [anon_sym_then] = ACTIONS(799),
    [anon_sym__] = ACTIONS(799),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(799),
    [sym__integer_literal] = ACTIONS(799),
    [sym__octal_literal] = ACTIONS(799),
    [sym__hexidecimal_literal] = ACTIONS(799),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(805),
    [sym_comment] = ACTIONS(28),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [anon_sym_module] = ACTIONS(809),
    [anon_sym_where] = ACTIONS(809),
    [anon_sym_import] = ACTIONS(809),
    [anon_sym_class] = ACTIONS(809),
    [anon_sym_instance] = ACTIONS(809),
    [anon_sym_data] = ACTIONS(809),
    [anon_sym_newtype] = ACTIONS(809),
    [anon_sym_type] = ACTIONS(809),
    [anon_sym_case] = ACTIONS(809),
    [anon_sym_default] = ACTIONS(809),
    [anon_sym_do] = ACTIONS(809),
    [anon_sym_else] = ACTIONS(809),
    [anon_sym_foreign] = ACTIONS(809),
    [anon_sym_if] = ACTIONS(809),
    [anon_sym_in] = ACTIONS(809),
    [anon_sym_let] = ACTIONS(809),
    [anon_sym_of] = ACTIONS(809),
    [anon_sym_then] = ACTIONS(809),
    [anon_sym__] = ACTIONS(809),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(811),
    [anon_sym_SQUOTE] = ACTIONS(809),
    [anon_sym_DQUOTE] = ACTIONS(809),
    [sym__integer_literal] = ACTIONS(809),
    [sym__octal_literal] = ACTIONS(809),
    [sym__hexidecimal_literal] = ACTIONS(809),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(813),
    [anon_sym_module] = ACTIONS(815),
    [anon_sym_where] = ACTIONS(815),
    [anon_sym_import] = ACTIONS(815),
    [anon_sym_class] = ACTIONS(815),
    [anon_sym_instance] = ACTIONS(815),
    [anon_sym_DASH_GT] = ACTIONS(815),
    [anon_sym_data] = ACTIONS(815),
    [anon_sym_newtype] = ACTIONS(815),
    [anon_sym_type] = ACTIONS(815),
    [anon_sym_case] = ACTIONS(815),
    [anon_sym_default] = ACTIONS(815),
    [anon_sym_do] = ACTIONS(815),
    [anon_sym_else] = ACTIONS(815),
    [anon_sym_foreign] = ACTIONS(815),
    [anon_sym_if] = ACTIONS(815),
    [anon_sym_in] = ACTIONS(815),
    [anon_sym_let] = ACTIONS(815),
    [anon_sym_of] = ACTIONS(815),
    [anon_sym_then] = ACTIONS(815),
    [anon_sym__] = ACTIONS(815),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(817),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(815),
    [sym__integer_literal] = ACTIONS(815),
    [sym__octal_literal] = ACTIONS(815),
    [sym__hexidecimal_literal] = ACTIONS(815),
  },
  [262] = {
    [sym__identifier] = STATE(301),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [263] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(28),
  },
  [264] = {
    [anon_sym_COMMA] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(28),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym_comment] = ACTIONS(28),
  },
  [266] = {
    [aux_sym_import_specification_repeat1] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym_comment] = ACTIONS(28),
  },
  [267] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_comment] = ACTIONS(28),
  },
  [268] = {
    [sym__identifier] = STATE(307),
    [anon_sym_DOT_DOT] = ACTIONS(829),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [269] = {
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_RPAREN] = ACTIONS(833),
    [sym_comment] = ACTIONS(28),
  },
  [270] = {
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_comment] = ACTIONS(28),
  },
  [271] = {
    [aux_sym_export_repeat1] = STATE(309),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_comment] = ACTIONS(28),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(835),
    [anon_sym_module] = ACTIONS(837),
    [anon_sym_where] = ACTIONS(837),
    [anon_sym_import] = ACTIONS(837),
    [anon_sym_class] = ACTIONS(837),
    [anon_sym_instance] = ACTIONS(837),
    [anon_sym_data] = ACTIONS(837),
    [anon_sym_newtype] = ACTIONS(837),
    [anon_sym_type] = ACTIONS(837),
    [anon_sym_case] = ACTIONS(837),
    [anon_sym_default] = ACTIONS(837),
    [anon_sym_do] = ACTIONS(837),
    [anon_sym_else] = ACTIONS(837),
    [anon_sym_foreign] = ACTIONS(837),
    [anon_sym_if] = ACTIONS(837),
    [anon_sym_in] = ACTIONS(837),
    [anon_sym_let] = ACTIONS(837),
    [anon_sym_of] = ACTIONS(837),
    [anon_sym_then] = ACTIONS(837),
    [anon_sym__] = ACTIONS(837),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(837),
    [anon_sym_DQUOTE] = ACTIONS(837),
    [sym__integer_literal] = ACTIONS(837),
    [sym__octal_literal] = ACTIONS(837),
    [sym__hexidecimal_literal] = ACTIONS(837),
  },
  [273] = {
    [ts_builtin_sym_end] = ACTIONS(841),
    [anon_sym_module] = ACTIONS(843),
    [anon_sym_where] = ACTIONS(843),
    [anon_sym_import] = ACTIONS(843),
    [anon_sym_class] = ACTIONS(843),
    [anon_sym_instance] = ACTIONS(843),
    [anon_sym_data] = ACTIONS(843),
    [anon_sym_newtype] = ACTIONS(843),
    [anon_sym_type] = ACTIONS(843),
    [anon_sym_case] = ACTIONS(843),
    [anon_sym_default] = ACTIONS(843),
    [anon_sym_do] = ACTIONS(843),
    [anon_sym_else] = ACTIONS(843),
    [anon_sym_foreign] = ACTIONS(843),
    [anon_sym_if] = ACTIONS(843),
    [anon_sym_in] = ACTIONS(843),
    [anon_sym_let] = ACTIONS(843),
    [anon_sym_of] = ACTIONS(843),
    [anon_sym_then] = ACTIONS(843),
    [anon_sym__] = ACTIONS(843),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [sym__integer_literal] = ACTIONS(843),
    [sym__octal_literal] = ACTIONS(843),
    [sym__hexidecimal_literal] = ACTIONS(843),
  },
  [274] = {
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(847),
    [sym_constructor_identifier] = ACTIONS(847),
    [sym_module_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [275] = {
    [sym__symbol] = STATE(283),
    [anon_sym_COMMA] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(851),
    [anon_sym_infixl] = ACTIONS(851),
    [anon_sym_infixr] = ACTIONS(851),
    [anon_sym_infix] = ACTIONS(851),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(851),
    [sym_constructor_identifier] = ACTIONS(851),
    [sym_module_identifier] = ACTIONS(851),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [276] = {
    [anon_sym_BQUOTE] = ACTIONS(855),
    [sym_comment] = ACTIONS(28),
  },
  [277] = {
    [anon_sym_COMMA] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_infixl] = ACTIONS(857),
    [anon_sym_infixr] = ACTIONS(857),
    [anon_sym_infix] = ACTIONS(857),
    [sym_variable_identifier] = ACTIONS(847),
    [sym_constructor_identifier] = ACTIONS(847),
    [sym_module_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(28),
  },
  [278] = {
    [sym__symbol] = STATE(283),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(849),
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_infixl] = ACTIONS(847),
    [anon_sym_infixr] = ACTIONS(847),
    [anon_sym_infix] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(847),
    [sym_constructor_identifier] = ACTIONS(847),
    [sym_module_identifier] = ACTIONS(847),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [279] = {
    [sym__op] = STATE(314),
    [sym_variable_symbol] = STATE(240),
    [sym_constructor_symbol] = STATE(240),
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_infixl] = ACTIONS(861),
    [anon_sym_infixr] = ACTIONS(861),
    [anon_sym_infix] = ACTIONS(861),
    [sym_variable_identifier] = ACTIONS(863),
    [sym_constructor_identifier] = ACTIONS(863),
    [sym_module_identifier] = ACTIONS(863),
    [sym_comment] = ACTIONS(28),
  },
  [281] = {
    [aux_sym_fixity_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_infixl] = ACTIONS(861),
    [anon_sym_infixr] = ACTIONS(861),
    [anon_sym_infix] = ACTIONS(861),
    [sym_variable_identifier] = ACTIONS(863),
    [sym_constructor_identifier] = ACTIONS(863),
    [sym_module_identifier] = ACTIONS(863),
    [sym_comment] = ACTIONS(28),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(865),
    [anon_sym_RBRACE] = ACTIONS(865),
    [anon_sym_infixl] = ACTIONS(865),
    [anon_sym_infixr] = ACTIONS(865),
    [anon_sym_infix] = ACTIONS(865),
    [sym_variable_identifier] = ACTIONS(851),
    [sym_constructor_identifier] = ACTIONS(851),
    [sym_module_identifier] = ACTIONS(851),
    [sym_comment] = ACTIONS(28),
  },
  [283] = {
    [anon_sym_COMMA] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_infixl] = ACTIONS(867),
    [anon_sym_infixr] = ACTIONS(867),
    [anon_sym_infix] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym_EQ] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(867),
    [anon_sym_BANG] = ACTIONS(867),
    [sym_variable_identifier] = ACTIONS(867),
    [sym_constructor_identifier] = ACTIONS(867),
    [sym_module_identifier] = ACTIONS(867),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(867),
    [anon_sym_DOLLAR] = ACTIONS(867),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(867),
    [anon_sym_1] = ACTIONS(867),
    [anon_sym_PLUS] = ACTIONS(867),
    [anon_sym_DOT] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_LT] = ACTIONS(867),
    [anon_sym_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(867),
    [anon_sym_CARET] = ACTIONS(867),
    [anon_sym_DASH] = ACTIONS(867),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_BSLASH] = ACTIONS(867),
  },
  [284] = {
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_infixl] = ACTIONS(144),
    [anon_sym_infixr] = ACTIONS(144),
    [anon_sym_infix] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_infixl] = ACTIONS(869),
    [anon_sym_infixr] = ACTIONS(869),
    [anon_sym_infix] = ACTIONS(869),
    [sym_variable_identifier] = ACTIONS(871),
    [sym_constructor_identifier] = ACTIONS(871),
    [sym_module_identifier] = ACTIONS(871),
    [sym_comment] = ACTIONS(28),
  },
  [286] = {
    [sym__type] = STATE(318),
    [sym__identifier] = STATE(319),
    [aux_sym_type_class_repeat1] = STATE(288),
    [sym_variable_identifier] = ACTIONS(873),
    [sym_constructor_identifier] = ACTIONS(875),
    [sym_module_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(28),
  },
  [287] = {
    [sym__identifier] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_infixl] = ACTIONS(166),
    [anon_sym_infixr] = ACTIONS(166),
    [anon_sym_infix] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(170),
    [sym_constructor_identifier] = ACTIONS(170),
    [sym_module_identifier] = ACTIONS(170),
    [sym_comment] = ACTIONS(28),
  },
  [288] = {
    [sym__identifier] = STATE(321),
    [aux_sym__type_repeat1] = STATE(322),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_infixl] = ACTIONS(497),
    [anon_sym_infixr] = ACTIONS(497),
    [anon_sym_infix] = ACTIONS(497),
    [anon_sym_DASH_GT] = ACTIONS(877),
    [sym_variable_identifier] = ACTIONS(501),
    [sym_constructor_identifier] = ACTIONS(501),
    [sym_module_identifier] = ACTIONS(501),
    [sym_comment] = ACTIONS(28),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(879),
    [anon_sym_module] = ACTIONS(881),
    [anon_sym_where] = ACTIONS(881),
    [anon_sym_import] = ACTIONS(881),
    [anon_sym_class] = ACTIONS(881),
    [anon_sym_instance] = ACTIONS(881),
    [anon_sym_data] = ACTIONS(881),
    [anon_sym_newtype] = ACTIONS(881),
    [anon_sym_type] = ACTIONS(881),
    [anon_sym_case] = ACTIONS(881),
    [anon_sym_default] = ACTIONS(881),
    [anon_sym_do] = ACTIONS(881),
    [anon_sym_else] = ACTIONS(881),
    [anon_sym_foreign] = ACTIONS(881),
    [anon_sym_if] = ACTIONS(881),
    [anon_sym_in] = ACTIONS(881),
    [anon_sym_let] = ACTIONS(881),
    [anon_sym_of] = ACTIONS(881),
    [anon_sym_then] = ACTIONS(881),
    [anon_sym__] = ACTIONS(881),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(883),
    [anon_sym_SQUOTE] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(881),
    [sym__integer_literal] = ACTIONS(881),
    [sym__octal_literal] = ACTIONS(881),
    [sym__hexidecimal_literal] = ACTIONS(881),
  },
  [290] = {
    [anon_sym_COMMA] = ACTIONS(885),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(28),
  },
  [291] = {
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(887),
    [anon_sym_module] = ACTIONS(889),
    [anon_sym_where] = ACTIONS(889),
    [anon_sym_import] = ACTIONS(889),
    [anon_sym_class] = ACTIONS(889),
    [anon_sym_instance] = ACTIONS(889),
    [anon_sym_data] = ACTIONS(889),
    [anon_sym_newtype] = ACTIONS(889),
    [anon_sym_type] = ACTIONS(889),
    [anon_sym_case] = ACTIONS(889),
    [anon_sym_default] = ACTIONS(889),
    [anon_sym_do] = ACTIONS(889),
    [anon_sym_else] = ACTIONS(889),
    [anon_sym_foreign] = ACTIONS(889),
    [anon_sym_if] = ACTIONS(889),
    [anon_sym_in] = ACTIONS(889),
    [anon_sym_let] = ACTIONS(889),
    [anon_sym_of] = ACTIONS(889),
    [anon_sym_then] = ACTIONS(889),
    [anon_sym__] = ACTIONS(889),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym__integer_literal] = ACTIONS(889),
    [sym__octal_literal] = ACTIONS(889),
    [sym__hexidecimal_literal] = ACTIONS(889),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(893),
    [anon_sym_COLON_COLON] = ACTIONS(893),
    [sym_comment] = ACTIONS(28),
  },
  [294] = {
    [sym__identifier] = STATE(205),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(895),
    [sym_comment] = ACTIONS(28),
  },
  [296] = {
    [sym_variable_identifier] = ACTIONS(897),
    [sym_comment] = ACTIONS(28),
  },
  [297] = {
    [sym_strict] = STATE(325),
    [sym__identifier] = STATE(325),
    [anon_sym_BANG] = ACTIONS(791),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(899),
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(28),
  },
  [299] = {
    [sym_field] = STATE(326),
    [sym_variable_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(28),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(901),
    [anon_sym_module] = ACTIONS(903),
    [anon_sym_where] = ACTIONS(903),
    [anon_sym_import] = ACTIONS(903),
    [anon_sym_class] = ACTIONS(903),
    [anon_sym_instance] = ACTIONS(903),
    [anon_sym_data] = ACTIONS(903),
    [anon_sym_PIPE] = ACTIONS(903),
    [anon_sym_deriving] = ACTIONS(903),
    [anon_sym_newtype] = ACTIONS(903),
    [anon_sym_type] = ACTIONS(903),
    [anon_sym_case] = ACTIONS(903),
    [anon_sym_default] = ACTIONS(903),
    [anon_sym_do] = ACTIONS(903),
    [anon_sym_else] = ACTIONS(903),
    [anon_sym_foreign] = ACTIONS(903),
    [anon_sym_if] = ACTIONS(903),
    [anon_sym_in] = ACTIONS(903),
    [anon_sym_let] = ACTIONS(903),
    [anon_sym_of] = ACTIONS(903),
    [anon_sym_then] = ACTIONS(903),
    [anon_sym__] = ACTIONS(903),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(905),
    [anon_sym_SQUOTE] = ACTIONS(903),
    [anon_sym_DQUOTE] = ACTIONS(903),
    [sym__integer_literal] = ACTIONS(903),
    [sym__octal_literal] = ACTIONS(903),
    [sym__hexidecimal_literal] = ACTIONS(903),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(907),
    [anon_sym_module] = ACTIONS(909),
    [anon_sym_where] = ACTIONS(909),
    [anon_sym_import] = ACTIONS(909),
    [anon_sym_class] = ACTIONS(909),
    [anon_sym_instance] = ACTIONS(909),
    [anon_sym_DASH_GT] = ACTIONS(909),
    [anon_sym_data] = ACTIONS(909),
    [anon_sym_newtype] = ACTIONS(909),
    [anon_sym_type] = ACTIONS(909),
    [anon_sym_case] = ACTIONS(909),
    [anon_sym_default] = ACTIONS(909),
    [anon_sym_do] = ACTIONS(909),
    [anon_sym_else] = ACTIONS(909),
    [anon_sym_foreign] = ACTIONS(909),
    [anon_sym_if] = ACTIONS(909),
    [anon_sym_in] = ACTIONS(909),
    [anon_sym_let] = ACTIONS(909),
    [anon_sym_of] = ACTIONS(909),
    [anon_sym_then] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(911),
    [anon_sym_SQUOTE] = ACTIONS(909),
    [anon_sym_DQUOTE] = ACTIONS(909),
    [sym__integer_literal] = ACTIONS(909),
    [sym__octal_literal] = ACTIONS(909),
    [sym__hexidecimal_literal] = ACTIONS(909),
  },
  [302] = {
    [anon_sym_COMMA] = ACTIONS(913),
    [anon_sym_RPAREN] = ACTIONS(913),
    [sym_comment] = ACTIONS(28),
  },
  [303] = {
    [ts_builtin_sym_end] = ACTIONS(915),
    [anon_sym_module] = ACTIONS(917),
    [anon_sym_where] = ACTIONS(917),
    [anon_sym_import] = ACTIONS(917),
    [anon_sym_class] = ACTIONS(917),
    [anon_sym_instance] = ACTIONS(917),
    [anon_sym_data] = ACTIONS(917),
    [anon_sym_newtype] = ACTIONS(917),
    [anon_sym_type] = ACTIONS(917),
    [anon_sym_case] = ACTIONS(917),
    [anon_sym_default] = ACTIONS(917),
    [anon_sym_do] = ACTIONS(917),
    [anon_sym_else] = ACTIONS(917),
    [anon_sym_foreign] = ACTIONS(917),
    [anon_sym_if] = ACTIONS(917),
    [anon_sym_in] = ACTIONS(917),
    [anon_sym_let] = ACTIONS(917),
    [anon_sym_of] = ACTIONS(917),
    [anon_sym_then] = ACTIONS(917),
    [anon_sym__] = ACTIONS(917),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(919),
    [anon_sym_SQUOTE] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [sym__integer_literal] = ACTIONS(917),
    [sym__octal_literal] = ACTIONS(917),
    [sym__hexidecimal_literal] = ACTIONS(917),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(921),
    [sym_comment] = ACTIONS(28),
  },
  [305] = {
    [aux_sym_import_specification_repeat1] = STATE(328),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(921),
    [sym_comment] = ACTIONS(28),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(923),
    [sym_comment] = ACTIONS(28),
  },
  [307] = {
    [aux_sym_export_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(923),
    [sym_comment] = ACTIONS(28),
  },
  [308] = {
    [sym__identifier] = STATE(332),
    [anon_sym_DOT_DOT] = ACTIONS(925),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(927),
    [sym_comment] = ACTIONS(28),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(929),
    [anon_sym_RBRACE] = ACTIONS(929),
    [anon_sym_infixl] = ACTIONS(929),
    [anon_sym_infixr] = ACTIONS(929),
    [anon_sym_infix] = ACTIONS(929),
    [sym_variable_identifier] = ACTIONS(931),
    [sym_constructor_identifier] = ACTIONS(931),
    [sym_module_identifier] = ACTIONS(931),
    [sym_comment] = ACTIONS(28),
  },
  [311] = {
    [sym__symbol] = STATE(283),
    [anon_sym_COMMA] = ACTIONS(931),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(931),
    [anon_sym_infixl] = ACTIONS(931),
    [anon_sym_infixr] = ACTIONS(931),
    [anon_sym_infix] = ACTIONS(931),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_variable_identifier] = ACTIONS(931),
    [sym_constructor_identifier] = ACTIONS(931),
    [sym_module_identifier] = ACTIONS(931),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(935),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_infixl] = ACTIONS(935),
    [anon_sym_infixr] = ACTIONS(935),
    [anon_sym_infix] = ACTIONS(935),
    [sym_variable_identifier] = ACTIONS(937),
    [sym_constructor_identifier] = ACTIONS(937),
    [sym_module_identifier] = ACTIONS(937),
    [sym_comment] = ACTIONS(28),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(939),
    [anon_sym_RBRACE] = ACTIONS(939),
    [anon_sym_infixl] = ACTIONS(939),
    [anon_sym_infixr] = ACTIONS(939),
    [anon_sym_infix] = ACTIONS(939),
    [sym_variable_identifier] = ACTIONS(941),
    [sym_constructor_identifier] = ACTIONS(941),
    [sym_module_identifier] = ACTIONS(941),
    [sym_comment] = ACTIONS(28),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(943),
    [anon_sym_RBRACE] = ACTIONS(943),
    [anon_sym_infixl] = ACTIONS(943),
    [anon_sym_infixr] = ACTIONS(943),
    [anon_sym_infix] = ACTIONS(943),
    [sym_variable_identifier] = ACTIONS(945),
    [sym_constructor_identifier] = ACTIONS(945),
    [sym_module_identifier] = ACTIONS(945),
    [sym_comment] = ACTIONS(28),
  },
  [315] = {
    [sym__op] = STATE(335),
    [sym_variable_symbol] = STATE(240),
    [sym_constructor_symbol] = STATE(240),
    [sym__symbol] = STATE(242),
    [aux_sym_variable_symbol_repeat1] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(585),
    [sym_comment] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_1] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(585),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_TILDE] = ACTIONS(585),
    [anon_sym_BSLASH] = ACTIONS(585),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_RBRACE] = ACTIONS(947),
    [anon_sym_infixl] = ACTIONS(947),
    [anon_sym_infixr] = ACTIONS(947),
    [anon_sym_infix] = ACTIONS(947),
    [sym_variable_identifier] = ACTIONS(949),
    [sym_constructor_identifier] = ACTIONS(949),
    [sym_module_identifier] = ACTIONS(949),
    [sym_comment] = ACTIONS(28),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_infixl] = ACTIONS(144),
    [anon_sym_infixr] = ACTIONS(144),
    [anon_sym_infix] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(951),
    [anon_sym_infixl] = ACTIONS(951),
    [anon_sym_infixr] = ACTIONS(951),
    [anon_sym_infix] = ACTIONS(951),
    [sym_variable_identifier] = ACTIONS(953),
    [sym_constructor_identifier] = ACTIONS(953),
    [sym_module_identifier] = ACTIONS(953),
    [sym_comment] = ACTIONS(28),
  },
  [319] = {
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_infixl] = ACTIONS(166),
    [anon_sym_infixr] = ACTIONS(166),
    [anon_sym_infix] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(295),
    [sym_constructor_identifier] = ACTIONS(295),
    [sym_module_identifier] = ACTIONS(295),
    [sym_comment] = ACTIONS(28),
  },
  [320] = {
    [sym__identifier] = STATE(336),
    [sym_variable_identifier] = ACTIONS(873),
    [sym_constructor_identifier] = ACTIONS(875),
    [sym_module_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(28),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_infixl] = ACTIONS(307),
    [anon_sym_infixr] = ACTIONS(307),
    [anon_sym_infix] = ACTIONS(307),
    [anon_sym_DASH_GT] = ACTIONS(307),
    [sym_variable_identifier] = ACTIONS(309),
    [sym_constructor_identifier] = ACTIONS(309),
    [sym_module_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(28),
  },
  [322] = {
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_infixl] = ACTIONS(669),
    [anon_sym_infixr] = ACTIONS(669),
    [anon_sym_infix] = ACTIONS(669),
    [anon_sym_DASH_GT] = ACTIONS(955),
    [sym_variable_identifier] = ACTIONS(673),
    [sym_constructor_identifier] = ACTIONS(673),
    [sym_module_identifier] = ACTIONS(673),
    [sym_comment] = ACTIONS(28),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(957),
    [anon_sym_RPAREN] = ACTIONS(957),
    [sym_comment] = ACTIONS(28),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(959),
    [anon_sym_COLON_COLON] = ACTIONS(959),
    [sym_comment] = ACTIONS(28),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
    [sym_comment] = ACTIONS(28),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(963),
    [anon_sym_RBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(28),
  },
  [327] = {
    [ts_builtin_sym_end] = ACTIONS(965),
    [anon_sym_module] = ACTIONS(967),
    [anon_sym_where] = ACTIONS(967),
    [anon_sym_import] = ACTIONS(967),
    [anon_sym_class] = ACTIONS(967),
    [anon_sym_instance] = ACTIONS(967),
    [anon_sym_data] = ACTIONS(967),
    [anon_sym_newtype] = ACTIONS(967),
    [anon_sym_type] = ACTIONS(967),
    [anon_sym_case] = ACTIONS(967),
    [anon_sym_default] = ACTIONS(967),
    [anon_sym_do] = ACTIONS(967),
    [anon_sym_else] = ACTIONS(967),
    [anon_sym_foreign] = ACTIONS(967),
    [anon_sym_if] = ACTIONS(967),
    [anon_sym_in] = ACTIONS(967),
    [anon_sym_let] = ACTIONS(967),
    [anon_sym_of] = ACTIONS(967),
    [anon_sym_then] = ACTIONS(967),
    [anon_sym__] = ACTIONS(967),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(969),
    [anon_sym_SQUOTE] = ACTIONS(967),
    [anon_sym_DQUOTE] = ACTIONS(967),
    [sym__integer_literal] = ACTIONS(967),
    [sym__octal_literal] = ACTIONS(967),
    [sym__hexidecimal_literal] = ACTIONS(967),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(971),
    [sym_comment] = ACTIONS(28),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(973),
    [anon_sym_RPAREN] = ACTIONS(973),
    [sym_comment] = ACTIONS(28),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(975),
    [sym_comment] = ACTIONS(28),
  },
  [331] = {
    [anon_sym_RPAREN] = ACTIONS(975),
    [sym_comment] = ACTIONS(28),
  },
  [332] = {
    [aux_sym_export_repeat1] = STATE(340),
    [anon_sym_COMMA] = ACTIONS(625),
    [anon_sym_RPAREN] = ACTIONS(975),
    [sym_comment] = ACTIONS(28),
  },
  [333] = {
    [aux_sym_import_specification_repeat1] = STATE(341),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(971),
    [sym_comment] = ACTIONS(28),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(977),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_infixl] = ACTIONS(977),
    [anon_sym_infixr] = ACTIONS(977),
    [anon_sym_infix] = ACTIONS(977),
    [sym_variable_identifier] = ACTIONS(979),
    [sym_constructor_identifier] = ACTIONS(979),
    [sym_module_identifier] = ACTIONS(979),
    [sym_comment] = ACTIONS(28),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(981),
    [anon_sym_RBRACE] = ACTIONS(981),
    [anon_sym_infixl] = ACTIONS(981),
    [anon_sym_infixr] = ACTIONS(981),
    [anon_sym_infix] = ACTIONS(981),
    [sym_variable_identifier] = ACTIONS(983),
    [sym_constructor_identifier] = ACTIONS(983),
    [sym_module_identifier] = ACTIONS(983),
    [sym_comment] = ACTIONS(28),
  },
  [336] = {
    [anon_sym_RBRACE] = ACTIONS(815),
    [anon_sym_infixl] = ACTIONS(815),
    [anon_sym_infixr] = ACTIONS(815),
    [anon_sym_infix] = ACTIONS(815),
    [anon_sym_DASH_GT] = ACTIONS(815),
    [sym_variable_identifier] = ACTIONS(817),
    [sym_constructor_identifier] = ACTIONS(817),
    [sym_module_identifier] = ACTIONS(817),
    [sym_comment] = ACTIONS(28),
  },
  [337] = {
    [sym__identifier] = STATE(342),
    [sym_variable_identifier] = ACTIONS(873),
    [sym_constructor_identifier] = ACTIONS(875),
    [sym_module_identifier] = ACTIONS(875),
    [sym_comment] = ACTIONS(28),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(985),
    [anon_sym_module] = ACTIONS(987),
    [anon_sym_where] = ACTIONS(987),
    [anon_sym_import] = ACTIONS(987),
    [anon_sym_class] = ACTIONS(987),
    [anon_sym_instance] = ACTIONS(987),
    [anon_sym_data] = ACTIONS(987),
    [anon_sym_newtype] = ACTIONS(987),
    [anon_sym_type] = ACTIONS(987),
    [anon_sym_case] = ACTIONS(987),
    [anon_sym_default] = ACTIONS(987),
    [anon_sym_do] = ACTIONS(987),
    [anon_sym_else] = ACTIONS(987),
    [anon_sym_foreign] = ACTIONS(987),
    [anon_sym_if] = ACTIONS(987),
    [anon_sym_in] = ACTIONS(987),
    [anon_sym_let] = ACTIONS(987),
    [anon_sym_of] = ACTIONS(987),
    [anon_sym_then] = ACTIONS(987),
    [anon_sym__] = ACTIONS(987),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(989),
    [anon_sym_SQUOTE] = ACTIONS(987),
    [anon_sym_DQUOTE] = ACTIONS(987),
    [sym__integer_literal] = ACTIONS(987),
    [sym__octal_literal] = ACTIONS(987),
    [sym__hexidecimal_literal] = ACTIONS(987),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_RPAREN] = ACTIONS(991),
    [sym_comment] = ACTIONS(28),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(993),
    [sym_comment] = ACTIONS(28),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(995),
    [sym_comment] = ACTIONS(28),
  },
  [342] = {
    [anon_sym_RBRACE] = ACTIONS(909),
    [anon_sym_infixl] = ACTIONS(909),
    [anon_sym_infixr] = ACTIONS(909),
    [anon_sym_infix] = ACTIONS(909),
    [anon_sym_DASH_GT] = ACTIONS(909),
    [sym_variable_identifier] = ACTIONS(911),
    [sym_constructor_identifier] = ACTIONS(911),
    [sym_module_identifier] = ACTIONS(911),
    [sym_comment] = ACTIONS(28),
  },
  [343] = {
    [anon_sym_COMMA] = ACTIONS(997),
    [anon_sym_RPAREN] = ACTIONS(997),
    [sym_comment] = ACTIONS(28),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(999),
    [anon_sym_module] = ACTIONS(1001),
    [anon_sym_where] = ACTIONS(1001),
    [anon_sym_import] = ACTIONS(1001),
    [anon_sym_class] = ACTIONS(1001),
    [anon_sym_instance] = ACTIONS(1001),
    [anon_sym_data] = ACTIONS(1001),
    [anon_sym_newtype] = ACTIONS(1001),
    [anon_sym_type] = ACTIONS(1001),
    [anon_sym_case] = ACTIONS(1001),
    [anon_sym_default] = ACTIONS(1001),
    [anon_sym_do] = ACTIONS(1001),
    [anon_sym_else] = ACTIONS(1001),
    [anon_sym_foreign] = ACTIONS(1001),
    [anon_sym_if] = ACTIONS(1001),
    [anon_sym_in] = ACTIONS(1001),
    [anon_sym_let] = ACTIONS(1001),
    [anon_sym_of] = ACTIONS(1001),
    [anon_sym_then] = ACTIONS(1001),
    [anon_sym__] = ACTIONS(1001),
    [sym_comment] = ACTIONS(28),
    [sym_float] = ACTIONS(1003),
    [anon_sym_SQUOTE] = ACTIONS(1001),
    [anon_sym_DQUOTE] = ACTIONS(1001),
    [sym__integer_literal] = ACTIONS(1001),
    [sym__octal_literal] = ACTIONS(1001),
    [sym__hexidecimal_literal] = ACTIONS(1001),
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
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [170] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true), SHIFT(21),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(235),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 1),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__instance_declaration, 1),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__instance_declaration, 1),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_body, 1),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_instance_body_repeat1, 1),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_instance_body_repeat1, 1),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance_body, 1),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 2),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type, 2),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_body_repeat1, 2),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_instance_body_repeat1, 2),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_instance_body_repeat1, 2),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 2),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 2),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 7),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class, 7),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 7),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 7),
  [883] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 7),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [905] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_repeat1, 3),
  [911] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__type_repeat1, 3),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [919] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [931] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [933] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [941] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [949] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [953] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [979] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [983] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [989] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
