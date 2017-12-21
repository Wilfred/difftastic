#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 335
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 2
#define TOKEN_COUNT 117
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym__layout_semicolon = 1,
  sym__layout_open_brace = 2,
  sym__layout_close_brace = 3,
  anon_sym_module = 4,
  anon_sym_where = 5,
  anon_sym_SEMI = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_import = 13,
  anon_sym_qualified = 14,
  anon_sym_as = 15,
  anon_sym_hiding = 16,
  anon_sym_do = 17,
  anon_sym_class = 18,
  anon_sym_infixl = 19,
  anon_sym_infixr = 20,
  anon_sym_infix = 21,
  anon_sym_BQUOTE = 22,
  anon_sym_COLON = 23,
  anon_sym_COLON_COLON = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_data = 26,
  anon_sym_EQ = 27,
  anon_sym_EQ_GT = 28,
  anon_sym_PIPE = 29,
  anon_sym_deriving = 30,
  anon_sym_newtype = 31,
  anon_sym_BANG = 32,
  anon_sym_type = 33,
  sym_variable_identifier = 34,
  sym_constructor_identifier = 35,
  sym_module_identifier = 36,
  sym_comment = 37,
  sym_float = 38,
  anon_sym_SQUOTE = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 41,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 42,
  anon_sym__ = 43,
  sym__ascii_large = 44,
  anon_sym_POUND = 45,
  anon_sym_DOLLAR = 46,
  anon_sym_PERCENT = 47,
  anon_sym_AMP = 48,
  anon_sym_1 = 49,
  anon_sym_PLUS = 50,
  anon_sym_DOT = 51,
  anon_sym_SLASH = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_QMARK = 55,
  anon_sym_AT = 56,
  anon_sym_CARET = 57,
  anon_sym_DASH = 58,
  anon_sym_TILDE = 59,
  anon_sym_BSLASH = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  sym__space = 63,
  sym__newline = 64,
  sym__tab = 65,
  sym__vertical_tab = 66,
  anon_sym_x = 67,
  anon_sym_X = 68,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 69,
  anon_sym_o = 70,
  anon_sym_O = 71,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 72,
  anon_sym_a = 73,
  anon_sym_b = 74,
  anon_sym_f = 75,
  anon_sym_n = 76,
  anon_sym_r = 77,
  anon_sym_t = 78,
  anon_sym_v = 79,
  anon_sym_NUL = 80,
  anon_sym_SOH = 81,
  anon_sym_STX = 82,
  anon_sym_ETX = 83,
  anon_sym_EOT = 84,
  anon_sym_ENQ = 85,
  anon_sym_ACK = 86,
  anon_sym_BEL = 87,
  anon_sym_BS = 88,
  anon_sym_HT = 89,
  anon_sym_LF = 90,
  anon_sym_VT = 91,
  anon_sym_FF = 92,
  anon_sym_CR = 93,
  anon_sym_SO = 94,
  anon_sym_SI = 95,
  anon_sym_DLE = 96,
  anon_sym_DC1 = 97,
  anon_sym_DC2 = 98,
  anon_sym_DC3 = 99,
  anon_sym_DC4 = 100,
  anon_sym_NAK = 101,
  anon_sym_SYN = 102,
  anon_sym_ETB = 103,
  anon_sym_CAN = 104,
  anon_sym_EM = 105,
  anon_sym_SUB = 106,
  anon_sym_ESC = 107,
  anon_sym_FS = 108,
  anon_sym_GS = 109,
  anon_sym_RS = 110,
  anon_sym_US = 111,
  anon_sym_SP = 112,
  anon_sym_DEL = 113,
  sym__integer_literal = 114,
  sym__octal_literal = 115,
  sym__hexidecimal_literal = 116,
  sym_module = 117,
  sym_declarations = 118,
  sym_module_exports = 119,
  sym_export = 120,
  sym_import = 121,
  sym_import_specification = 122,
  sym__declaration = 123,
  sym__expression = 124,
  sym_do_expression = 125,
  sym_statement_list = 126,
  sym__statement = 127,
  sym_type_class = 128,
  sym_fixity = 129,
  sym__op = 130,
  sym_variable_symbol = 131,
  sym_constructor_symbol = 132,
  sym_type_signature = 133,
  sym__type = 134,
  sym_function_type = 135,
  sym_algebraic_datatype = 136,
  sym_context = 137,
  sym_class = 138,
  sym_constructors = 139,
  sym_constructor = 140,
  sym_deriving = 141,
  sym_newtype = 142,
  sym_new_constructor = 143,
  sym_fields = 144,
  sym_field = 145,
  sym_strict = 146,
  sym_type_synonym = 147,
  sym__literal = 148,
  sym__identifier = 149,
  sym_simple_type = 150,
  sym_integer = 151,
  sym_char = 152,
  sym_string = 153,
  sym__gap = 154,
  sym__graphic = 155,
  sym__small = 156,
  sym__large = 157,
  sym__symbol = 158,
  sym__special = 159,
  sym__escape = 160,
  sym__char_escape = 161,
  sym__ascii = 162,
  sym__cntrl = 163,
  aux_sym_module_repeat1 = 164,
  aux_sym_module_exports_repeat1 = 165,
  aux_sym_export_repeat1 = 166,
  aux_sym_import_specification_repeat1 = 167,
  aux_sym_statement_list_repeat1 = 168,
  aux_sym_type_class_repeat1 = 169,
  aux_sym_fixity_repeat1 = 170,
  aux_sym_variable_symbol_repeat1 = 171,
  aux_sym_context_repeat1 = 172,
  aux_sym_constructors_repeat1 = 173,
  aux_sym_constructor_repeat1 = 174,
  aux_sym_fields_repeat1 = 175,
  aux_sym_field_repeat1 = 176,
  aux_sym_string_repeat1 = 177,
  aux_sym__escape_repeat1 = 178,
  aux_sym__escape_repeat2 = 179,
  alias_sym_type_constructor = 180,
  alias_sym_type_variable = 181,
};

static const char *ts_symbol_names[] = {
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_close_brace] = "_layout_close_brace",
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_do] = "do",
  [anon_sym_class] = "class",
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
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [anon_sym__] = "_",
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
  [sym_module] = "module",
  [sym_declarations] = "declarations",
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
  [sym_import] = "import",
  [sym_import_specification] = "import_specification",
  [sym__declaration] = "_declaration",
  [sym__expression] = "_expression",
  [sym_do_expression] = "do_expression",
  [sym_statement_list] = "statement_list",
  [sym__statement] = "_statement",
  [sym_type_class] = "type_class",
  [sym_fixity] = "fixity",
  [sym__op] = "_op",
  [sym_variable_symbol] = "variable_symbol",
  [sym_constructor_symbol] = "constructor_symbol",
  [sym_type_signature] = "type_signature",
  [sym__type] = "_type",
  [sym_function_type] = "function_type",
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
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_exports_repeat1] = "module_exports_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [alias_sym_type_constructor] = "type_constructor",
  [alias_sym_type_variable] = "type_variable",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__layout_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_open_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_close_brace] = {
    .visible = false,
    .named = true,
  },
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
  [anon_sym_SEMI] = {
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [anon_sym__] = {
    .visible = true,
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
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
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_do_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_type_class] = {
    .visible = true,
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
  [sym_function_type] = {
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
  [aux_sym_module_repeat1] = {
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
  [aux_sym_statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_class_repeat1] = {
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
  [alias_sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_constructor,
  },
  [2] = {
    [0] = alias_sym_type_constructor,
    [1] = alias_sym_type_variable,
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
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'm')
        ADVANCE(249);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
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
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(177);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'i')
        ADVANCE(189);
      if (lookahead == 'm')
        ADVANCE(201);
      if (lookahead == 'n')
        ADVANCE(207);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '-')
        ADVANCE(21);
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
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(190);
      if (lookahead == 'n')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(199);
      if (lookahead == 'r')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'm')
        ADVANCE(249);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 219:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(221);
      if (lookahead == 'X')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == 'x')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == 'o')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'n')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'x')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(247);
      if (lookahead == 'r')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'y')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'y')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 266:
      if (lookahead == '\n')
        ADVANCE(267);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(272);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 267:
      if (lookahead == '\n')
        ADVANCE(267);
      if (lookahead == '\r')
        ADVANCE(267);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(269);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 268:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(267);
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
      if (lookahead == '\n')
        ADVANCE(267);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(272);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        SKIP(266);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(272);
      if (lookahead == '.')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(272);
      END_STATE();
    case 273:
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '\r')
        ADVANCE(298);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(304);
      if (lookahead == 'q')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 274:
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '\r')
        ADVANCE(274);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(287);
      if (lookahead == 'q')
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 275:
      if (lookahead == ')')
        ADVANCE(276);
      if (lookahead == ',')
        ADVANCE(277);
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 277:
      if (lookahead == ')')
        ADVANCE(276);
      if (lookahead == ',')
        ADVANCE(277);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 278:
      if (lookahead == '>')
        ADVANCE(279);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 279:
      if (lookahead == ')')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 280:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == ']')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(280);
      END_STATE();
    case 281:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(283);
      if (lookahead != 0)
        ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(281);
      if (lookahead == ']')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(284);
      if (lookahead == ']')
        ADVANCE(285);
      if (lookahead != 0)
        ADVANCE(286);
      END_STATE();
    case 284:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(285);
      if (lookahead != 0)
        ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == ']')
        ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(274);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(297);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(297);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 298:
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '\r')
        ADVANCE(298);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(304);
      if (lookahead == 'q')
        ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(273);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 299:
      if (lookahead == ')')
        ADVANCE(300);
      if (lookahead == ',')
        ADVANCE(301);
      if (lookahead == '-')
        ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 301:
      if (lookahead == ')')
        ADVANCE(300);
      if (lookahead == ',')
        ADVANCE(301);
      END_STATE();
    case 302:
      if (lookahead == '>')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == ')')
        ADVANCE(300);
      END_STATE();
    case 304:
      if (lookahead == 'n')
        SKIP(273);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(314);
      if (lookahead == '.')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(314);
      END_STATE();
    case 315:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(318);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(319);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(316);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(317);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(316);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 318:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(318);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(319);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      END_STATE();
    case 319:
      if (lookahead == 'n')
        SKIP(315);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(329);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 321:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(321);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(323);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(276);
      if (lookahead == ',')
        ADVANCE(277);
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 323:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 324:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(325);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(329);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(300);
      if (lookahead == ',')
        ADVANCE(301);
      if (lookahead == '-')
        ADVANCE(302);
      END_STATE();
    case 328:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 329:
      if (lookahead == 'n')
        SKIP(320);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(330);
      END_STATE();
    case 331:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(340);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(343);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(347);
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
        SKIP(331);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(344);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(332);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(335);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(339);
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
        ADVANCE(332);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
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
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(340);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(343);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(347);
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
        SKIP(331);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(221);
      if (lookahead == 'X')
        ADVANCE(223);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == 'x')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 348:
      if (lookahead == '\n')
        ADVANCE(349);
      if (lookahead == '\r')
        ADVANCE(359);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(360);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(348);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 349:
      if (lookahead == '\n')
        ADVANCE(349);
      if (lookahead == '\r')
        ADVANCE(349);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(350);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(349);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(355);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(357);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(349);
      if (lookahead == '\r')
        ADVANCE(359);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(360);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(348);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 360:
      if (lookahead == 'n')
        SKIP(348);
      END_STATE();
    case 361:
      if (lookahead == 'e')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'r')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead == 'i')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'v')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'i')
        ADVANCE(366);
      END_STATE();
    case 366:
      if (lookahead == 'n')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'g')
        ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 369:
      if (lookahead == '\n')
        ADVANCE(370);
      if (lookahead == '\r')
        ADVANCE(373);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(375);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(369);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(370);
      if (lookahead == '\r')
        ADVANCE(370);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(371);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '\n')
        ADVANCE(370);
      if (lookahead == '\r')
        ADVANCE(373);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(375);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(369);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 374:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 375:
      if (lookahead == 'n')
        SKIP(369);
      END_STATE();
    case 376:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 377:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(377);
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
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(376);
      END_STATE();
    case 380:
      if (lookahead == 'n')
        SKIP(376);
      END_STATE();
    case 381:
      if (lookahead == '\t')
        SKIP(381);
      if (lookahead == '\n')
        ADVANCE(382);
      if (lookahead == '\r')
        ADVANCE(386);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 382:
      if (lookahead == '\t')
        ADVANCE(382);
      if (lookahead == '\n')
        ADVANCE(382);
      if (lookahead == '\r')
        ADVANCE(382);
      if (lookahead == ' ')
        ADVANCE(383);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(384);
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
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(382);
      if (lookahead == '\n')
        ADVANCE(382);
      if (lookahead == '\r')
        ADVANCE(382);
      if (lookahead == ' ')
        ADVANCE(383);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(384);
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
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '\t')
        SKIP(381);
      if (lookahead == '\n')
        ADVANCE(382);
      if (lookahead == '\r')
        ADVANCE(386);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 389:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(396);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(392);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == ' ')
        ADVANCE(394);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(395);
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
        ADVANCE(385);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(392);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == ' ')
        ADVANCE(394);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(395);
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
        ADVANCE(385);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '\t')
        ADVANCE(392);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == ' ')
        ADVANCE(394);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(395);
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
        ADVANCE(385);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(392);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == ' ')
        ADVANCE(394);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(395);
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
        ADVANCE(385);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(396);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 397:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(401);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(397);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 398:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(399);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'i')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(207);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(401);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(397);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 401:
      if (lookahead == 'n')
        SKIP(397);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(403);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == 'w')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        ADVANCE(403);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(323);
      if (lookahead == '\\')
        ADVANCE(404);
      if (lookahead == 'w')
        ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(403);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '\n')
        ADVANCE(403);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == 'w')
        ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(402);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        SKIP(402);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(421);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(422);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(423);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 418:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(419);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(420);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(421);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(422);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(423);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 422:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 423:
      if (lookahead == 'n')
        SKIP(417);
      END_STATE();
    case 424:
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(436);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(424);
      END_STATE();
    case 425:
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(426);
      if (lookahead == 'a')
        ADVANCE(427);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == 'h')
        ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(428);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(430);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(431);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(432);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(433);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(434);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(436);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(424);
      END_STATE();
    case 436:
      if (lookahead == 'n')
        SKIP(424);
      END_STATE();
    case 437:
      if (lookahead == 's')
        ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 439:
      if (lookahead == 'i')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'd')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'i')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'n')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'g')
        ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 445:
      if (lookahead == '\n')
        ADVANCE(446);
      if (lookahead == '\r')
        ADVANCE(448);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(449);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(445);
      END_STATE();
    case 446:
      if (lookahead == '\n')
        ADVANCE(446);
      if (lookahead == '\r')
        ADVANCE(446);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(447);
      if (lookahead == 'a')
        ADVANCE(427);
      if (lookahead == 'h')
        ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(446);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(446);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead == '\n')
        ADVANCE(446);
      if (lookahead == '\r')
        ADVANCE(448);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(449);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(445);
      END_STATE();
    case 449:
      if (lookahead == 'n')
        SKIP(445);
      END_STATE();
    case 450:
      if (lookahead == '\n')
        ADVANCE(451);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(455);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(450);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 451:
      if (lookahead == '\n')
        ADVANCE(451);
      if (lookahead == '\r')
        ADVANCE(451);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(452);
      if (lookahead == 'd')
        ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(451);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(451);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      if (lookahead == '\n')
        ADVANCE(451);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(455);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(450);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 455:
      if (lookahead == 'n')
        SKIP(450);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        ADVANCE(458);
      if (lookahead == '\r')
        ADVANCE(460);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(461);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(457);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 458:
      if (lookahead == '\n')
        ADVANCE(458);
      if (lookahead == '\r')
        ADVANCE(458);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(459);
      if (lookahead == 'd')
        ADVANCE(453);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(458);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(458);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      if (lookahead == '\n')
        ADVANCE(458);
      if (lookahead == '\r')
        ADVANCE(460);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(461);
      if (lookahead == 'd')
        ADVANCE(456);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(457);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 461:
      if (lookahead == 'n')
        SKIP(457);
      END_STATE();
    case 462:
      if (lookahead == '\n')
        ADVANCE(463);
      if (lookahead == '\r')
        ADVANCE(465);
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
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(462);
      END_STATE();
    case 463:
      if (lookahead == '\n')
        ADVANCE(463);
      if (lookahead == '\r')
        ADVANCE(463);
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
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(464);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(463);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        ADVANCE(463);
      if (lookahead == '\r')
        ADVANCE(465);
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
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(462);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(469);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(466);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(467);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(467);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(469);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(470);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(466);
      END_STATE();
    case 470:
      if (lookahead == 'n')
        SKIP(466);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(472);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(179);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 483:
      if (lookahead == 'n')
        SKIP(471);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'v')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '\\')
        SKIP(496);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(492);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(493);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(371);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '\\')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(493);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '\\')
        SKIP(496);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(492);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 496:
      if (lookahead == 'n')
        SKIP(492);
      END_STATE();
    case 497:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(550);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(551);
      if (lookahead == 'B')
        ADVANCE(554);
      if (lookahead == 'C')
        ADVANCE(558);
      if (lookahead == 'D')
        ADVANCE(562);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(583);
      if (lookahead == 'G')
        ADVANCE(586);
      if (lookahead == 'H')
        ADVANCE(587);
      if (lookahead == 'L')
        ADVANCE(588);
      if (lookahead == 'N')
        ADVANCE(589);
      if (lookahead == 'O')
        ADVANCE(590);
      if (lookahead == 'R')
        ADVANCE(591);
      if (lookahead == 'S')
        ADVANCE(592);
      if (lookahead == 'U')
        ADVANCE(593);
      if (lookahead == 'V')
        ADVANCE(594);
      if (lookahead == 'X')
        ADVANCE(595);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(596);
      if (lookahead == 'b')
        ADVANCE(597);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(599);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(497);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(388);
      END_STATE();
    case 498:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == 'A')
        ADVANCE(499);
      if (lookahead == 'B')
        ADVANCE(502);
      if (lookahead == 'C')
        ADVANCE(506);
      if (lookahead == 'D')
        ADVANCE(510);
      if (lookahead == 'E')
        ADVANCE(520);
      if (lookahead == 'F')
        ADVANCE(531);
      if (lookahead == 'G')
        ADVANCE(534);
      if (lookahead == 'H')
        ADVANCE(535);
      if (lookahead == 'L')
        ADVANCE(536);
      if (lookahead == 'N')
        ADVANCE(537);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'R')
        ADVANCE(539);
      if (lookahead == 'S')
        ADVANCE(540);
      if (lookahead == 'U')
        ADVANCE(541);
      if (lookahead == 'V')
        ADVANCE(542);
      if (lookahead == 'X')
        ADVANCE(543);
      if (lookahead == '\\')
        ADVANCE(544);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'f')
        ADVANCE(547);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(500);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(503);
      if (lookahead == 'S')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(507);
      if (lookahead == 'R')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(511);
      if (lookahead == 'E')
        ADVANCE(516);
      if (lookahead == 'L')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(512);
      if (lookahead == '2')
        ADVANCE(513);
      if (lookahead == '3')
        ADVANCE(514);
      if (lookahead == '4')
        ADVANCE(515);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(517);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(521);
      if (lookahead == 'N')
        ADVANCE(522);
      if (lookahead == 'O')
        ADVANCE(524);
      if (lookahead == 'S')
        ADVANCE(526);
      if (lookahead == 'T')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(523);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(525);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(527);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(529);
      if (lookahead == 'X')
        ADVANCE(530);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(532);
      if (lookahead == 'S')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
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
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(550);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(551);
      if (lookahead == 'B')
        ADVANCE(554);
      if (lookahead == 'C')
        ADVANCE(558);
      if (lookahead == 'D')
        ADVANCE(562);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(583);
      if (lookahead == 'G')
        ADVANCE(586);
      if (lookahead == 'H')
        ADVANCE(587);
      if (lookahead == 'L')
        ADVANCE(588);
      if (lookahead == 'N')
        ADVANCE(589);
      if (lookahead == 'O')
        ADVANCE(590);
      if (lookahead == 'R')
        ADVANCE(591);
      if (lookahead == 'S')
        ADVANCE(592);
      if (lookahead == 'U')
        ADVANCE(593);
      if (lookahead == 'V')
        ADVANCE(594);
      if (lookahead == 'X')
        ADVANCE(595);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(596);
      if (lookahead == 'b')
        ADVANCE(597);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(599);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(497);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(388);
      END_STATE();
    case 551:
      if (lookahead == 'C')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'K')
        ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 554:
      if (lookahead == 'E')
        ADVANCE(555);
      if (lookahead == 'S')
        ADVANCE(557);
      END_STATE();
    case 555:
      if (lookahead == 'L')
        ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 558:
      if (lookahead == 'A')
        ADVANCE(559);
      if (lookahead == 'R')
        ADVANCE(561);
      END_STATE();
    case 559:
      if (lookahead == 'N')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 562:
      if (lookahead == 'C')
        ADVANCE(563);
      if (lookahead == 'E')
        ADVANCE(568);
      if (lookahead == 'L')
        ADVANCE(570);
      END_STATE();
    case 563:
      if (lookahead == '1')
        ADVANCE(564);
      if (lookahead == '2')
        ADVANCE(565);
      if (lookahead == '3')
        ADVANCE(566);
      if (lookahead == '4')
        ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 568:
      if (lookahead == 'L')
        ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 570:
      if (lookahead == 'E')
        ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 572:
      if (lookahead == 'M')
        ADVANCE(573);
      if (lookahead == 'N')
        ADVANCE(574);
      if (lookahead == 'O')
        ADVANCE(576);
      if (lookahead == 'S')
        ADVANCE(578);
      if (lookahead == 'T')
        ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 574:
      if (lookahead == 'Q')
        ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 576:
      if (lookahead == 'T')
        ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 578:
      if (lookahead == 'C')
        ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 580:
      if (lookahead == 'B')
        ADVANCE(581);
      if (lookahead == 'X')
        ADVANCE(582);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 583:
      if (lookahead == 'F')
        ADVANCE(584);
      if (lookahead == 'S')
        ADVANCE(585);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 586:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 587:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 588:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 589:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 591:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 592:
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
    case 593:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 594:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 601:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(614);
      if (lookahead == 'B')
        ADVANCE(615);
      if (lookahead == 'C')
        ADVANCE(616);
      if (lookahead == 'D')
        ADVANCE(617);
      if (lookahead == 'E')
        ADVANCE(618);
      if (lookahead == 'F')
        ADVANCE(619);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(590);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(595);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(596);
      if (lookahead == 'b')
        ADVANCE(597);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(599);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(600);
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
        ADVANCE(388);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(603);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == ' ')
        ADVANCE(605);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(606);
      if (lookahead == 'B')
        ADVANCE(607);
      if (lookahead == 'C')
        ADVANCE(608);
      if (lookahead == 'D')
        ADVANCE(609);
      if (lookahead == 'E')
        ADVANCE(610);
      if (lookahead == 'F')
        ADVANCE(611);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(543);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(612);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'f')
        ADVANCE(547);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(549);
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
        ADVANCE(385);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(603);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == ' ')
        ADVANCE(605);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(606);
      if (lookahead == 'B')
        ADVANCE(607);
      if (lookahead == 'C')
        ADVANCE(608);
      if (lookahead == 'D')
        ADVANCE(609);
      if (lookahead == 'E')
        ADVANCE(610);
      if (lookahead == 'F')
        ADVANCE(611);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(543);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(612);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'f')
        ADVANCE(547);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(549);
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
        ADVANCE(385);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      if (lookahead == '\t')
        ADVANCE(603);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == ' ')
        ADVANCE(605);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(606);
      if (lookahead == 'B')
        ADVANCE(607);
      if (lookahead == 'C')
        ADVANCE(608);
      if (lookahead == 'D')
        ADVANCE(609);
      if (lookahead == 'E')
        ADVANCE(610);
      if (lookahead == 'F')
        ADVANCE(611);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(543);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(612);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'f')
        ADVANCE(547);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(549);
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
        ADVANCE(385);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(603);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == ' ')
        ADVANCE(605);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(606);
      if (lookahead == 'B')
        ADVANCE(607);
      if (lookahead == 'C')
        ADVANCE(608);
      if (lookahead == 'D')
        ADVANCE(609);
      if (lookahead == 'E')
        ADVANCE(610);
      if (lookahead == 'F')
        ADVANCE(611);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(543);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(612);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'b')
        ADVANCE(546);
      if (lookahead == 'f')
        ADVANCE(547);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(548);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(549);
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
        ADVANCE(385);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(500);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(503);
      if (lookahead == 'S')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(507);
      if (lookahead == 'R')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(511);
      if (lookahead == 'E')
        ADVANCE(516);
      if (lookahead == 'L')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(521);
      if (lookahead == 'N')
        ADVANCE(522);
      if (lookahead == 'O')
        ADVANCE(524);
      if (lookahead == 'S')
        ADVANCE(526);
      if (lookahead == 'T')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(532);
      if (lookahead == 'S')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(613);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(614);
      if (lookahead == 'B')
        ADVANCE(615);
      if (lookahead == 'C')
        ADVANCE(616);
      if (lookahead == 'D')
        ADVANCE(617);
      if (lookahead == 'E')
        ADVANCE(618);
      if (lookahead == 'F')
        ADVANCE(619);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(590);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(595);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(596);
      if (lookahead == 'b')
        ADVANCE(597);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(599);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(600);
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
        ADVANCE(388);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(552);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(555);
      if (lookahead == 'S')
        ADVANCE(557);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(559);
      if (lookahead == 'R')
        ADVANCE(561);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(563);
      if (lookahead == 'E')
        ADVANCE(568);
      if (lookahead == 'L')
        ADVANCE(570);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(573);
      if (lookahead == 'N')
        ADVANCE(574);
      if (lookahead == 'O')
        ADVANCE(576);
      if (lookahead == 'S')
        ADVANCE(578);
      if (lookahead == 'T')
        ADVANCE(580);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(584);
      if (lookahead == 'S')
        ADVANCE(585);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      END_STATE();
    case 621:
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(621);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(371);
      if (lookahead == '=')
        ADVANCE(323);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(621);
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
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(374);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      END_STATE();
    case 624:
      if (lookahead == 'n')
        SKIP(620);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(629);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(625);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 626:
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(627);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(626);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(629);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(625);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 629:
      if (lookahead == 'n')
        SKIP(625);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(633);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(634);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 631:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(632);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(633);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(634);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 634:
      if (lookahead == 'n')
        SKIP(630);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 636:
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(636);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(637);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(330);
      END_STATE();
    case 639:
      if (lookahead == 'n')
        SKIP(635);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 641:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(641);
      if (lookahead == '(')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(641);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 644:
      if (lookahead == 'n')
        SKIP(640);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(647);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 649:
      if (lookahead == 'n')
        SKIP(645);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      END_STATE();
    case 651:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(651);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(652);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(651);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(651);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      END_STATE();
    case 654:
      if (lookahead == 'n')
        SKIP(650);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      END_STATE();
    case 656:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(657);
      if (lookahead == 'd')
        ADVANCE(351);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(361);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      END_STATE();
    case 659:
      if (lookahead == 'n')
        SKIP(655);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 661:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(661);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(662);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 664:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(669);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(670);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(665);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(669);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(670);
      END_STATE();
    case 669:
      if (lookahead == 'n')
        SKIP(664);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 671:
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(676);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(671);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(677);
      END_STATE();
    case 672:
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(672);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(674);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(676);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(671);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(677);
      END_STATE();
    case 676:
      if (lookahead == 'n')
        SKIP(671);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 678:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(682);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(684);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(678);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 679:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(679);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(680);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(679);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '\n')
        ADVANCE(679);
      if (lookahead == '\r')
        ADVANCE(682);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(684);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(678);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 684:
      if (lookahead == 'n')
        SKIP(678);
      END_STATE();
    case 685:
      if (lookahead == '\n')
        ADVANCE(686);
      if (lookahead == '\r')
        ADVANCE(688);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(689);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(685);
      END_STATE();
    case 686:
      if (lookahead == '\n')
        ADVANCE(686);
      if (lookahead == '\r')
        ADVANCE(686);
      if (lookahead == '-')
        ADVANCE(680);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '\n')
        ADVANCE(686);
      if (lookahead == '\r')
        ADVANCE(688);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(689);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(685);
      END_STATE();
    case 689:
      if (lookahead == 'n')
        SKIP(685);
      END_STATE();
    case 690:
      if (lookahead == '\n')
        ADVANCE(691);
      if (lookahead == '\r')
        ADVANCE(693);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(694);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(690);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 691:
      if (lookahead == '\n')
        ADVANCE(691);
      if (lookahead == '\r')
        ADVANCE(691);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(172);
      if (lookahead == '\\')
        ADVANCE(692);
      if (lookahead == 'c')
        ADVANCE(178);
      if (lookahead == 'd')
        ADVANCE(184);
      if (lookahead == 'i')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(207);
      if (lookahead == 't')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(691);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '\n')
        ADVANCE(691);
      if (lookahead == '\r')
        ADVANCE(693);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '\\')
        SKIP(694);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(690);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 694:
      if (lookahead == 'n')
        SKIP(690);
      END_STATE();
    case 695:
      if (lookahead == '\n')
        ADVANCE(696);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(699);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(695);
      END_STATE();
    case 696:
      if (lookahead == '\n')
        ADVANCE(696);
      if (lookahead == '\r')
        ADVANCE(696);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(697);
      if (lookahead == 'h')
        ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '\n')
        ADVANCE(696);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(699);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(695);
      END_STATE();
    case 699:
      if (lookahead == 'n')
        SKIP(695);
      END_STATE();
    case 700:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(703);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 701:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(701);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(275);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(280);
      if (lookahead == '\\')
        ADVANCE(702);
      if (lookahead == 'd')
        ADVANCE(474);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(297);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(703);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(299);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(286);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 704:
      if (lookahead == 'n')
        SKIP(700);
      END_STATE();
    case 705:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(708);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(706);
      if (lookahead == '-')
        ADVANCE(680);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(706);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(706);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(708);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 709:
      if (lookahead == 'n')
        SKIP(705);
      END_STATE();
    case 710:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(716);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(712);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == ' ')
        ADVANCE(714);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(715);
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
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(712);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == ' ')
        ADVANCE(714);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(715);
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
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      if (lookahead == '\t')
        ADVANCE(712);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == ' ')
        ADVANCE(714);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(715);
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
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(712);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == ' ')
        ADVANCE(714);
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
        ADVANCE(333);
      if (lookahead == '.')
        ADVANCE(334);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(338);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(715);
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
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(713);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 716:
      if (lookahead == '\t')
        ADVANCE(390);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(716);
      if (lookahead == ' ')
        ADVANCE(387);
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
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(342);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(345);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(347);
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
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 717:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(720);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 718:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '-')
        ADVANCE(680);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(323);
      if (lookahead == '\\')
        ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(718);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 719:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(718);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 720:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(720);
      if (lookahead == '-')
        ADVANCE(683);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(328);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 721:
      if (lookahead == 'n')
        SKIP(717);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 266},
  [3] = {.lex_state = 273},
  [4] = {.lex_state = 315, .external_lex_state = 2},
  [5] = {.lex_state = 320},
  [6] = {.lex_state = 331},
  [7] = {.lex_state = 320},
  [8] = {.lex_state = 348},
  [9] = {.lex_state = 348},
  [10] = {.lex_state = 369, .external_lex_state = 3},
  [11] = {.lex_state = 376, .external_lex_state = 3},
  [12] = {.lex_state = 381},
  [13] = {.lex_state = 389},
  [14] = {.lex_state = 376, .external_lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 376, .external_lex_state = 3},
  [17] = {.lex_state = 376, .external_lex_state = 3},
  [18] = {.lex_state = 376, .external_lex_state = 3},
  [19] = {.lex_state = 397},
  [20] = {.lex_state = 369},
  [21] = {.lex_state = 402},
  [22] = {.lex_state = 417},
  [23] = {.lex_state = 424, .external_lex_state = 3},
  [24] = {.lex_state = 445, .external_lex_state = 3},
  [25] = {.lex_state = 450, .external_lex_state = 4},
  [26] = {.lex_state = 457},
  [27] = {.lex_state = 376, .external_lex_state = 3},
  [28] = {.lex_state = 348},
  [29] = {.lex_state = 402},
  [30] = {.lex_state = 348},
  [31] = {.lex_state = 320},
  [32] = {.lex_state = 331},
  [33] = {.lex_state = 417},
  [34] = {.lex_state = 462, .external_lex_state = 3},
  [35] = {.lex_state = 462, .external_lex_state = 3},
  [36] = {.lex_state = 331},
  [37] = {.lex_state = 466, .external_lex_state = 3},
  [38] = {.lex_state = 466, .external_lex_state = 3},
  [39] = {.lex_state = 331},
  [40] = {.lex_state = 462, .external_lex_state = 3},
  [41] = {.lex_state = 462, .external_lex_state = 3},
  [42] = {.lex_state = 471, .external_lex_state = 3},
  [43] = {.lex_state = 348},
  [44] = {.lex_state = 348, .external_lex_state = 3},
  [45] = {.lex_state = 492},
  [46] = {.lex_state = 348},
  [47] = {.lex_state = 348},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 497},
  [55] = {.lex_state = 389},
  [56] = {.lex_state = 389},
  [57] = {.lex_state = 389},
  [58] = {.lex_state = 376, .external_lex_state = 3},
  [59] = {.lex_state = 389},
  [60] = {.lex_state = 389},
  [61] = {.lex_state = 389},
  [62] = {.lex_state = 601},
  [63] = {.lex_state = 389},
  [64] = {.lex_state = 389},
  [65] = {.lex_state = 397},
  [66] = {.lex_state = 376, .external_lex_state = 3},
  [67] = {.lex_state = 320},
  [68] = {.lex_state = 492},
  [69] = {.lex_state = 315, .external_lex_state = 2},
  [70] = {.lex_state = 417},
  [71] = {.lex_state = 402},
  [72] = {.lex_state = 445, .external_lex_state = 3},
  [73] = {.lex_state = 417},
  [74] = {.lex_state = 417},
  [75] = {.lex_state = 266},
  [76] = {.lex_state = 376, .external_lex_state = 3},
  [77] = {.lex_state = 376, .external_lex_state = 3},
  [78] = {.lex_state = 376, .external_lex_state = 3},
  [79] = {.lex_state = 450, .external_lex_state = 4},
  [80] = {.lex_state = 450, .external_lex_state = 4},
  [81] = {.lex_state = 376, .external_lex_state = 3},
  [82] = {.lex_state = 457},
  [83] = {.lex_state = 457},
  [84] = {.lex_state = 266},
  [85] = {.lex_state = 620},
  [86] = {.lex_state = 315, .external_lex_state = 2},
  [87] = {.lex_state = 266},
  [88] = {.lex_state = 402},
  [89] = {.lex_state = 402},
  [90] = {.lex_state = 402},
  [91] = {.lex_state = 348},
  [92] = {.lex_state = 462, .external_lex_state = 3},
  [93] = {.lex_state = 462, .external_lex_state = 3},
  [94] = {.lex_state = 620},
  [95] = {.lex_state = 620},
  [96] = {.lex_state = 466, .external_lex_state = 3},
  [97] = {.lex_state = 462, .external_lex_state = 3},
  [98] = {.lex_state = 331},
  [99] = {.lex_state = 466, .external_lex_state = 3},
  [100] = {.lex_state = 466, .external_lex_state = 3},
  [101] = {.lex_state = 466, .external_lex_state = 3},
  [102] = {.lex_state = 462, .external_lex_state = 3},
  [103] = {.lex_state = 625, .external_lex_state = 3},
  [104] = {.lex_state = 630, .external_lex_state = 3},
  [105] = {.lex_state = 630, .external_lex_state = 3},
  [106] = {.lex_state = 348, .external_lex_state = 3},
  [107] = {.lex_state = 635, .external_lex_state = 3},
  [108] = {.lex_state = 640},
  [109] = {.lex_state = 645, .external_lex_state = 3},
  [110] = {.lex_state = 650, .external_lex_state = 3},
  [111] = {.lex_state = 655, .external_lex_state = 3},
  [112] = {.lex_state = 376, .external_lex_state = 3},
  [113] = {.lex_state = 492},
  [114] = {.lex_state = 492},
  [115] = {.lex_state = 348},
  [116] = {.lex_state = 348},
  [117] = {.lex_state = 376, .external_lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 660},
  [121] = {.lex_state = 664},
  [122] = {.lex_state = 671},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 389},
  [125] = {.lex_state = 389},
  [126] = {.lex_state = 660},
  [127] = {.lex_state = 664},
  [128] = {.lex_state = 671},
  [129] = {.lex_state = 389},
  [130] = {.lex_state = 389},
  [131] = {.lex_state = 376, .external_lex_state = 3},
  [132] = {.lex_state = 397},
  [133] = {.lex_state = 678, .external_lex_state = 3},
  [134] = {.lex_state = 376, .external_lex_state = 3},
  [135] = {.lex_state = 376, .external_lex_state = 3},
  [136] = {.lex_state = 348},
  [137] = {.lex_state = 685, .external_lex_state = 3},
  [138] = {.lex_state = 690, .external_lex_state = 4},
  [139] = {.lex_state = 397},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 402},
  [142] = {.lex_state = 620},
  [143] = {.lex_state = 620},
  [144] = {.lex_state = 315, .external_lex_state = 2},
  [145] = {.lex_state = 417},
  [146] = {.lex_state = 376, .external_lex_state = 3},
  [147] = {.lex_state = 376, .external_lex_state = 3},
  [148] = {.lex_state = 620},
  [149] = {.lex_state = 695, .external_lex_state = 3},
  [150] = {.lex_state = 417},
  [151] = {.lex_state = 450, .external_lex_state = 4},
  [152] = {.lex_state = 376, .external_lex_state = 3},
  [153] = {.lex_state = 450, .external_lex_state = 4},
  [154] = {.lex_state = 457},
  [155] = {.lex_state = 457},
  [156] = {.lex_state = 620},
  [157] = {.lex_state = 348},
  [158] = {.lex_state = 320},
  [159] = {.lex_state = 620},
  [160] = {.lex_state = 690, .external_lex_state = 4},
  [161] = {.lex_state = 397},
  [162] = {.lex_state = 376, .external_lex_state = 3},
  [163] = {.lex_state = 266},
  [164] = {.lex_state = 315, .external_lex_state = 2},
  [165] = {.lex_state = 402},
  [166] = {.lex_state = 402},
  [167] = {.lex_state = 402},
  [168] = {.lex_state = 466, .external_lex_state = 3},
  [169] = {.lex_state = 462, .external_lex_state = 3},
  [170] = {.lex_state = 466, .external_lex_state = 3},
  [171] = {.lex_state = 466, .external_lex_state = 3},
  [172] = {.lex_state = 466, .external_lex_state = 3},
  [173] = {.lex_state = 331},
  [174] = {.lex_state = 466, .external_lex_state = 3},
  [175] = {.lex_state = 630, .external_lex_state = 3},
  [176] = {.lex_state = 630, .external_lex_state = 3},
  [177] = {.lex_state = 635, .external_lex_state = 3},
  [178] = {.lex_state = 650, .external_lex_state = 3},
  [179] = {.lex_state = 376, .external_lex_state = 3},
  [180] = {.lex_state = 417},
  [181] = {.lex_state = 376, .external_lex_state = 3},
  [182] = {.lex_state = 266},
  [183] = {.lex_state = 417},
  [184] = {.lex_state = 700, .external_lex_state = 3},
  [185] = {.lex_state = 655, .external_lex_state = 3},
  [186] = {.lex_state = 700, .external_lex_state = 3},
  [187] = {.lex_state = 700, .external_lex_state = 3},
  [188] = {.lex_state = 348},
  [189] = {.lex_state = 655, .external_lex_state = 3},
  [190] = {.lex_state = 417},
  [191] = {.lex_state = 650, .external_lex_state = 3},
  [192] = {.lex_state = 705, .external_lex_state = 3},
  [193] = {.lex_state = 376, .external_lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 664},
  [197] = {.lex_state = 664},
  [198] = {.lex_state = 671},
  [199] = {.lex_state = 671},
  [200] = {.lex_state = 389},
  [201] = {.lex_state = 389},
  [202] = {.lex_state = 389},
  [203] = {.lex_state = 389},
  [204] = {.lex_state = 710},
  [205] = {.lex_state = 710},
  [206] = {.lex_state = 717, .external_lex_state = 3},
  [207] = {.lex_state = 705, .external_lex_state = 3},
  [208] = {.lex_state = 376, .external_lex_state = 3},
  [209] = {.lex_state = 348},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 376, .external_lex_state = 3},
  [212] = {.lex_state = 690, .external_lex_state = 4},
  [213] = {.lex_state = 397},
  [214] = {.lex_state = 417},
  [215] = {.lex_state = 402},
  [216] = {.lex_state = 620},
  [217] = {.lex_state = 417},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 695, .external_lex_state = 3},
  [220] = {.lex_state = 417},
  [221] = {.lex_state = 417},
  [222] = {.lex_state = 376, .external_lex_state = 3},
  [223] = {.lex_state = 620},
  [224] = {.lex_state = 376, .external_lex_state = 3},
  [225] = {.lex_state = 620},
  [226] = {.lex_state = 620},
  [227] = {.lex_state = 348},
  [228] = {.lex_state = 348},
  [229] = {.lex_state = 320},
  [230] = {.lex_state = 376, .external_lex_state = 3},
  [231] = {.lex_state = 690, .external_lex_state = 4},
  [232] = {.lex_state = 397},
  [233] = {.lex_state = 620},
  [234] = {.lex_state = 376, .external_lex_state = 3},
  [235] = {.lex_state = 315, .external_lex_state = 2},
  [236] = {.lex_state = 466, .external_lex_state = 3},
  [237] = {.lex_state = 466, .external_lex_state = 3},
  [238] = {.lex_state = 650, .external_lex_state = 3},
  [239] = {.lex_state = 376, .external_lex_state = 3},
  [240] = {.lex_state = 620},
  [241] = {.lex_state = 620},
  [242] = {.lex_state = 620},
  [243] = {.lex_state = 700, .external_lex_state = 3},
  [244] = {.lex_state = 700, .external_lex_state = 3},
  [245] = {.lex_state = 655, .external_lex_state = 3},
  [246] = {.lex_state = 348},
  [247] = {.lex_state = 650, .external_lex_state = 3},
  [248] = {.lex_state = 376, .external_lex_state = 3},
  [249] = {.lex_state = 705, .external_lex_state = 3},
  [250] = {.lex_state = 664},
  [251] = {.lex_state = 671},
  [252] = {.lex_state = 389},
  [253] = {.lex_state = 710},
  [254] = {.lex_state = 705, .external_lex_state = 3},
  [255] = {.lex_state = 376, .external_lex_state = 3},
  [256] = {.lex_state = 690, .external_lex_state = 4},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 376, .external_lex_state = 3},
  [259] = {.lex_state = 620},
  [260] = {.lex_state = 417},
  [261] = {.lex_state = 402},
  [262] = {.lex_state = 266},
  [263] = {.lex_state = 620},
  [264] = {.lex_state = 376, .external_lex_state = 3},
  [265] = {.lex_state = 266},
  [266] = {.lex_state = 620},
  [267] = {.lex_state = 620},
  [268] = {.lex_state = 417},
  [269] = {.lex_state = 376, .external_lex_state = 3},
  [270] = {.lex_state = 417},
  [271] = {.lex_state = 620},
  [272] = {.lex_state = 620},
  [273] = {.lex_state = 348},
  [274] = {.lex_state = 376, .external_lex_state = 3},
  [275] = {.lex_state = 376, .external_lex_state = 3},
  [276] = {.lex_state = 376, .external_lex_state = 3},
  [277] = {.lex_state = 417},
  [278] = {.lex_state = 376, .external_lex_state = 3},
  [279] = {.lex_state = 620},
  [280] = {.lex_state = 266},
  [281] = {.lex_state = 417},
  [282] = {.lex_state = 620},
  [283] = {.lex_state = 655, .external_lex_state = 3},
  [284] = {.lex_state = 266},
  [285] = {.lex_state = 620},
  [286] = {.lex_state = 655, .external_lex_state = 3},
  [287] = {.lex_state = 690, .external_lex_state = 4},
  [288] = {.lex_state = 620},
  [289] = {.lex_state = 620},
  [290] = {.lex_state = 620},
  [291] = {.lex_state = 620},
  [292] = {.lex_state = 620},
  [293] = {.lex_state = 417},
  [294] = {.lex_state = 620},
  [295] = {.lex_state = 266},
  [296] = {.lex_state = 620},
  [297] = {.lex_state = 376, .external_lex_state = 3},
  [298] = {.lex_state = 620},
  [299] = {.lex_state = 417},
  [300] = {.lex_state = 376, .external_lex_state = 3},
  [301] = {.lex_state = 620},
  [302] = {.lex_state = 417},
  [303] = {.lex_state = 620},
  [304] = {.lex_state = 266},
  [305] = {.lex_state = 417},
  [306] = {.lex_state = 620},
  [307] = {.lex_state = 655, .external_lex_state = 3},
  [308] = {.lex_state = 266},
  [309] = {.lex_state = 620},
  [310] = {.lex_state = 376, .external_lex_state = 3},
  [311] = {.lex_state = 620},
  [312] = {.lex_state = 620},
  [313] = {.lex_state = 266},
  [314] = {.lex_state = 620},
  [315] = {.lex_state = 417},
  [316] = {.lex_state = 620},
  [317] = {.lex_state = 620},
  [318] = {.lex_state = 620},
  [319] = {.lex_state = 620},
  [320] = {.lex_state = 620},
  [321] = {.lex_state = 620},
  [322] = {.lex_state = 376, .external_lex_state = 3},
  [323] = {.lex_state = 620},
  [324] = {.lex_state = 620},
  [325] = {.lex_state = 620},
  [326] = {.lex_state = 266},
  [327] = {.lex_state = 620},
  [328] = {.lex_state = 620},
  [329] = {.lex_state = 376, .external_lex_state = 3},
  [330] = {.lex_state = 620},
  [331] = {.lex_state = 620},
  [332] = {.lex_state = 620},
  [333] = {.lex_state = 620},
  [334] = {.lex_state = 376, .external_lex_state = 3},
};

enum {
  ts_external_token__layout_semicolon,
  ts_external_token__layout_open_brace,
  ts_external_token__layout_close_brace,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_semicolon] = sym__layout_semicolon,
  [ts_external_token__layout_open_brace] = sym__layout_open_brace,
  [ts_external_token__layout_close_brace] = sym__layout_close_brace,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [2] = {
    [ts_external_token__layout_open_brace] = true,
  },
  [3] = {
    [ts_external_token__layout_semicolon] = true,
  },
  [4] = {
    [ts_external_token__layout_close_brace] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
    [anon_sym__] = ACTIONS(3),
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
    [sym_module] = STATE(15),
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(17),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_module_repeat1] = STATE(19),
    [aux_sym_type_class_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(40),
    [sym_comment] = ACTIONS(30),
  },
  [3] = {
    [sym__identifier] = STATE(24),
    [anon_sym_qualified] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [4] = {
    [sym_statement_list] = STATE(27),
    [sym__layout_open_brace] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [sym_comment] = ACTIONS(30),
  },
  [5] = {
    [sym_context] = STATE(30),
    [sym_class] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(30),
  },
  [6] = {
    [sym__op] = STATE(37),
    [sym_variable_symbol] = STATE(38),
    [sym_constructor_symbol] = STATE(38),
    [sym_integer] = STATE(39),
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(64),
    [sym__octal_literal] = ACTIONS(64),
    [sym__hexidecimal_literal] = ACTIONS(64),
  },
  [7] = {
    [sym_context] = STATE(43),
    [sym_class] = STATE(31),
    [sym_simple_type] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(66),
    [sym_comment] = ACTIONS(30),
  },
  [8] = {
    [sym_simple_type] = STATE(46),
    [sym_constructor_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(30),
  },
  [9] = {
    [sym_simple_type] = STATE(47),
    [sym_constructor_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(30),
  },
  [10] = {
    [sym__layout_semicolon] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_COLON_COLON] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [11] = {
    [sym__layout_semicolon] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(78),
    [sym_comment] = ACTIONS(30),
  },
  [12] = {
    [sym__graphic] = STATE(50),
    [sym__small] = STATE(51),
    [sym__large] = STATE(51),
    [sym__symbol] = STATE(51),
    [sym__special] = STATE(51),
    [sym__escape] = STATE(50),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(82),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [sym__ascii_large] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [anon_sym_AMP] = ACTIONS(82),
    [anon_sym_1] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_CARET] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [sym__space] = ACTIONS(84),
  },
  [13] = {
    [sym__gap] = STATE(57),
    [sym__graphic] = STATE(57),
    [sym__small] = STATE(59),
    [sym__large] = STATE(59),
    [sym__symbol] = STATE(59),
    [sym__special] = STATE(59),
    [sym__escape] = STATE(57),
    [aux_sym_string_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [sym__ascii_large] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_1] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [sym__space] = ACTIONS(110),
    [sym__newline] = ACTIONS(110),
    [sym__tab] = ACTIONS(110),
    [sym__vertical_tab] = ACTIONS(110),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(114),
    [sym_comment] = ACTIONS(30),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(30),
  },
  [16] = {
    [sym__layout_semicolon] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(120),
    [sym_comment] = ACTIONS(30),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(124),
    [sym_comment] = ACTIONS(30),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(72),
    [sym_comment] = ACTIONS(30),
  },
  [19] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(66),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_type_class_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [20] = {
    [anon_sym_COLON_COLON] = ACTIONS(128),
    [sym_variable_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(30),
  },
  [21] = {
    [sym_module_exports] = STATE(71),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(134),
    [sym_comment] = ACTIONS(30),
  },
  [22] = {
    [sym__identifier] = STATE(72),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_as] = ACTIONS(140),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_deriving] = ACTIONS(140),
    [sym_comment] = ACTIONS(30),
  },
  [24] = {
    [sym_import_specification] = STATE(76),
    [sym__layout_semicolon] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_as] = ACTIONS(148),
    [anon_sym_hiding] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [25] = {
    [sym__expression] = STATE(78),
    [sym_do_expression] = STATE(18),
    [sym__statement] = STATE(79),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_statement_list_repeat1] = STATE(80),
    [sym__layout_close_brace] = ACTIONS(152),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [26] = {
    [sym__expression] = STATE(81),
    [sym_do_expression] = STATE(18),
    [sym__statement] = STATE(82),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_statement_list_repeat1] = STATE(83),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(30),
  },
  [28] = {
    [sym_class] = STATE(85),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(30),
  },
  [29] = {
    [aux_sym_type_class_repeat1] = STATE(89),
    [anon_sym_where] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(168),
    [sym_comment] = ACTIONS(30),
  },
  [30] = {
    [sym_constructor_identifier] = ACTIONS(170),
    [sym_comment] = ACTIONS(30),
  },
  [31] = {
    [anon_sym_EQ_GT] = ACTIONS(172),
    [sym_comment] = ACTIONS(30),
  },
  [32] = {
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(93),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [33] = {
    [sym__identifier] = STATE(95),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [34] = {
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(97),
    [sym__layout_semicolon] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [35] = {
    [sym__layout_semicolon] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(188),
    [sym_comment] = ACTIONS(62),
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
    [anon_sym_BSLASH] = ACTIONS(188),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [sym_comment] = ACTIONS(62),
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
    [anon_sym_BSLASH] = ACTIONS(190),
  },
  [37] = {
    [aux_sym_fixity_repeat1] = STATE(99),
    [sym__layout_semicolon] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(30),
  },
  [38] = {
    [sym__layout_semicolon] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym_comment] = ACTIONS(30),
  },
  [39] = {
    [sym__op] = STATE(100),
    [sym_variable_symbol] = STATE(38),
    [sym_constructor_symbol] = STATE(38),
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [40] = {
    [sym__layout_semicolon] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_BANG] = ACTIONS(204),
    [sym_comment] = ACTIONS(62),
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
    [anon_sym_BSLASH] = ACTIONS(204),
  },
  [41] = {
    [sym__symbol] = STATE(102),
    [sym__layout_semicolon] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [42] = {
    [aux_sym_type_class_repeat1] = STATE(104),
    [sym__layout_semicolon] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_deriving] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_comment] = ACTIONS(30),
  },
  [43] = {
    [sym_simple_type] = STATE(106),
    [sym_constructor_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(30),
  },
  [44] = {
    [sym_constructors] = STATE(110),
    [sym_constructor] = STATE(111),
    [sym_deriving] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [45] = {
    [aux_sym_type_class_repeat1] = STATE(114),
    [anon_sym_EQ] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_comment] = ACTIONS(30),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(234),
    [sym_comment] = ACTIONS(30),
  },
  [47] = {
    [anon_sym_EQ] = ACTIONS(236),
    [sym_comment] = ACTIONS(30),
  },
  [48] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(238),
  },
  [49] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(240),
  },
  [50] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(242),
  },
  [51] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(244),
  },
  [52] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(246),
  },
  [53] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(248),
  },
  [54] = {
    [sym__char_escape] = STATE(119),
    [sym__ascii] = STATE(119),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_BSLASH] = ACTIONS(250),
    [anon_sym_x] = ACTIONS(256),
    [anon_sym_X] = ACTIONS(256),
    [anon_sym_o] = ACTIONS(258),
    [anon_sym_O] = ACTIONS(258),
    [anon_sym_a] = ACTIONS(250),
    [anon_sym_b] = ACTIONS(250),
    [anon_sym_f] = ACTIONS(250),
    [anon_sym_n] = ACTIONS(250),
    [anon_sym_r] = ACTIONS(250),
    [anon_sym_t] = ACTIONS(250),
    [anon_sym_v] = ACTIONS(250),
    [anon_sym_NUL] = ACTIONS(260),
    [anon_sym_SOH] = ACTIONS(260),
    [anon_sym_STX] = ACTIONS(260),
    [anon_sym_ETX] = ACTIONS(260),
    [anon_sym_EOT] = ACTIONS(260),
    [anon_sym_ENQ] = ACTIONS(260),
    [anon_sym_ACK] = ACTIONS(260),
    [anon_sym_BEL] = ACTIONS(260),
    [anon_sym_BS] = ACTIONS(260),
    [anon_sym_HT] = ACTIONS(260),
    [anon_sym_LF] = ACTIONS(260),
    [anon_sym_VT] = ACTIONS(260),
    [anon_sym_FF] = ACTIONS(260),
    [anon_sym_CR] = ACTIONS(260),
    [anon_sym_SO] = ACTIONS(260),
    [anon_sym_SI] = ACTIONS(260),
    [anon_sym_DLE] = ACTIONS(260),
    [anon_sym_DC1] = ACTIONS(260),
    [anon_sym_DC2] = ACTIONS(260),
    [anon_sym_DC3] = ACTIONS(260),
    [anon_sym_DC4] = ACTIONS(260),
    [anon_sym_NAK] = ACTIONS(260),
    [anon_sym_SYN] = ACTIONS(260),
    [anon_sym_ETB] = ACTIONS(260),
    [anon_sym_CAN] = ACTIONS(260),
    [anon_sym_EM] = ACTIONS(260),
    [anon_sym_SUB] = ACTIONS(260),
    [anon_sym_ESC] = ACTIONS(260),
    [anon_sym_FS] = ACTIONS(260),
    [anon_sym_GS] = ACTIONS(260),
    [anon_sym_RS] = ACTIONS(260),
    [anon_sym_US] = ACTIONS(260),
    [anon_sym_SP] = ACTIONS(260),
    [anon_sym_DEL] = ACTIONS(260),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(262),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(262),
    [anon_sym__] = ACTIONS(262),
    [sym__ascii_large] = ACTIONS(262),
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
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_BSLASH] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [sym__space] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
    [sym__tab] = ACTIONS(262),
    [sym__vertical_tab] = ACTIONS(262),
  },
  [56] = {
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(188),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
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
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [sym__space] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
    [sym__tab] = ACTIONS(188),
    [sym__vertical_tab] = ACTIONS(188),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_BQUOTE] = ACTIONS(264),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_BANG] = ACTIONS(264),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(264),
    [anon_sym__] = ACTIONS(264),
    [sym__ascii_large] = ACTIONS(264),
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
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(264),
    [anon_sym_BSLASH] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [sym__space] = ACTIONS(264),
    [sym__newline] = ACTIONS(264),
    [sym__tab] = ACTIONS(264),
    [sym__vertical_tab] = ACTIONS(264),
  },
  [58] = {
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_comment] = ACTIONS(30),
  },
  [59] = {
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_BQUOTE] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(270),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(270),
    [anon_sym__] = ACTIONS(270),
    [sym__ascii_large] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_1] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(270),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [sym__space] = ACTIONS(270),
    [sym__newline] = ACTIONS(270),
    [sym__tab] = ACTIONS(270),
    [sym__vertical_tab] = ACTIONS(270),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_COLON] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_BANG] = ACTIONS(272),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [sym__ascii_large] = ACTIONS(272),
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
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_TILDE] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
    [sym__space] = ACTIONS(272),
    [sym__newline] = ACTIONS(272),
    [sym__tab] = ACTIONS(272),
    [sym__vertical_tab] = ACTIONS(272),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(274),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(274),
    [anon_sym__] = ACTIONS(274),
    [sym__ascii_large] = ACTIONS(274),
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
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_BSLASH] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
    [sym__space] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
    [sym__tab] = ACTIONS(274),
    [sym__vertical_tab] = ACTIONS(274),
  },
  [62] = {
    [sym__char_escape] = STATE(125),
    [sym__ascii] = STATE(125),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(188),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [sym__ascii_large] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(188),
    [anon_sym_DOLLAR] = ACTIONS(188),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_1] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [sym__space] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
    [sym__tab] = ACTIONS(188),
    [sym__vertical_tab] = ACTIONS(188),
    [anon_sym_x] = ACTIONS(282),
    [anon_sym_X] = ACTIONS(282),
    [anon_sym_o] = ACTIONS(284),
    [anon_sym_O] = ACTIONS(284),
    [anon_sym_a] = ACTIONS(276),
    [anon_sym_b] = ACTIONS(276),
    [anon_sym_f] = ACTIONS(276),
    [anon_sym_n] = ACTIONS(276),
    [anon_sym_r] = ACTIONS(276),
    [anon_sym_t] = ACTIONS(276),
    [anon_sym_v] = ACTIONS(276),
    [anon_sym_NUL] = ACTIONS(286),
    [anon_sym_SOH] = ACTIONS(286),
    [anon_sym_STX] = ACTIONS(286),
    [anon_sym_ETX] = ACTIONS(286),
    [anon_sym_EOT] = ACTIONS(286),
    [anon_sym_ENQ] = ACTIONS(286),
    [anon_sym_ACK] = ACTIONS(286),
    [anon_sym_BEL] = ACTIONS(286),
    [anon_sym_BS] = ACTIONS(286),
    [anon_sym_HT] = ACTIONS(286),
    [anon_sym_LF] = ACTIONS(286),
    [anon_sym_VT] = ACTIONS(286),
    [anon_sym_FF] = ACTIONS(286),
    [anon_sym_CR] = ACTIONS(286),
    [anon_sym_SO] = ACTIONS(286),
    [anon_sym_SI] = ACTIONS(286),
    [anon_sym_DLE] = ACTIONS(286),
    [anon_sym_DC1] = ACTIONS(286),
    [anon_sym_DC2] = ACTIONS(286),
    [anon_sym_DC3] = ACTIONS(286),
    [anon_sym_DC4] = ACTIONS(286),
    [anon_sym_NAK] = ACTIONS(286),
    [anon_sym_SYN] = ACTIONS(286),
    [anon_sym_ETB] = ACTIONS(286),
    [anon_sym_CAN] = ACTIONS(286),
    [anon_sym_EM] = ACTIONS(286),
    [anon_sym_SUB] = ACTIONS(286),
    [anon_sym_ESC] = ACTIONS(286),
    [anon_sym_FS] = ACTIONS(286),
    [anon_sym_GS] = ACTIONS(286),
    [anon_sym_RS] = ACTIONS(286),
    [anon_sym_US] = ACTIONS(286),
    [anon_sym_SP] = ACTIONS(286),
    [anon_sym_DEL] = ACTIONS(286),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_BQUOTE] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(288),
    [anon_sym_BANG] = ACTIONS(288),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym__] = ACTIONS(288),
    [sym__ascii_large] = ACTIONS(288),
    [anon_sym_POUND] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(288),
    [anon_sym_1] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_SLASH] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_GT] = ACTIONS(288),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [sym__space] = ACTIONS(288),
    [sym__newline] = ACTIONS(288),
    [sym__tab] = ACTIONS(288),
    [sym__vertical_tab] = ACTIONS(288),
  },
  [64] = {
    [sym__gap] = STATE(130),
    [sym__graphic] = STATE(130),
    [sym__small] = STATE(59),
    [sym__large] = STATE(59),
    [sym__symbol] = STATE(59),
    [sym__special] = STATE(59),
    [sym__escape] = STATE(130),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [sym__ascii_large] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [anon_sym_PERCENT] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_1] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [sym__space] = ACTIONS(110),
    [sym__newline] = ACTIONS(110),
    [sym__tab] = ACTIONS(110),
    [sym__vertical_tab] = ACTIONS(110),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_import] = ACTIONS(296),
    [anon_sym_do] = ACTIONS(296),
    [anon_sym_class] = ACTIONS(296),
    [anon_sym_infixl] = ACTIONS(296),
    [anon_sym_infixr] = ACTIONS(296),
    [anon_sym_infix] = ACTIONS(296),
    [anon_sym_data] = ACTIONS(296),
    [anon_sym_newtype] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(296),
    [sym_variable_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__integer_literal] = ACTIONS(296),
    [sym__octal_literal] = ACTIONS(296),
    [sym__hexidecimal_literal] = ACTIONS(296),
  },
  [66] = {
    [sym__layout_semicolon] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(302),
    [sym_comment] = ACTIONS(30),
  },
  [67] = {
    [sym__type] = STATE(134),
    [sym_function_type] = STATE(135),
    [sym_context] = STATE(136),
    [sym_class] = STATE(31),
    [sym_simple_type] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(30),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_COLON_COLON] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [sym_variable_identifier] = ACTIONS(306),
    [sym_comment] = ACTIONS(30),
  },
  [69] = {
    [sym_declarations] = STATE(140),
    [sym__layout_open_brace] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_comment] = ACTIONS(30),
  },
  [70] = {
    [sym_export] = STATE(142),
    [sym__identifier] = STATE(143),
    [anon_sym_RPAREN] = ACTIONS(312),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [71] = {
    [anon_sym_where] = ACTIONS(314),
    [sym_comment] = ACTIONS(30),
  },
  [72] = {
    [sym_import_specification] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_as] = ACTIONS(320),
    [anon_sym_hiding] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [73] = {
    [sym__identifier] = STATE(148),
    [anon_sym_RPAREN] = ACTIONS(322),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [74] = {
    [sym__identifier] = STATE(149),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(324),
    [sym_comment] = ACTIONS(30),
  },
  [76] = {
    [sym__layout_semicolon] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(318),
    [sym_comment] = ACTIONS(30),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(328),
    [sym_comment] = ACTIONS(30),
  },
  [78] = {
    [sym__layout_semicolon] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(332),
    [sym_comment] = ACTIONS(30),
  },
  [79] = {
    [sym__layout_close_brace] = ACTIONS(334),
    [anon_sym_do] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [80] = {
    [sym__expression] = STATE(78),
    [sym_do_expression] = STATE(18),
    [sym__statement] = STATE(153),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [sym__layout_close_brace] = ACTIONS(340),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [81] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [sym_comment] = ACTIONS(30),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_do] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [83] = {
    [sym__expression] = STATE(81),
    [sym_do_expression] = STATE(18),
    [sym__statement] = STATE(155),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(30),
  },
  [85] = {
    [aux_sym_context_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(352),
    [sym_comment] = ACTIONS(30),
  },
  [86] = {
    [sym_declarations] = STATE(162),
    [sym__layout_open_brace] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(30),
  },
  [87] = {
    [aux_sym_type_class_repeat1] = STATE(163),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_comment] = ACTIONS(30),
  },
  [88] = {
    [anon_sym_where] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_comment] = ACTIONS(30),
  },
  [89] = {
    [anon_sym_where] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(30),
  },
  [90] = {
    [aux_sym_type_class_repeat1] = STATE(167),
    [anon_sym_where] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(30),
  },
  [91] = {
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(30),
  },
  [92] = {
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(169),
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [93] = {
    [sym__symbol] = STATE(102),
    [sym__layout_semicolon] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym_comment] = ACTIONS(30),
  },
  [95] = {
    [anon_sym_BQUOTE] = ACTIONS(382),
    [sym_comment] = ACTIONS(30),
  },
  [96] = {
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_comment] = ACTIONS(30),
  },
  [97] = {
    [sym__symbol] = STATE(102),
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [98] = {
    [sym__op] = STATE(172),
    [sym_variable_symbol] = STATE(38),
    [sym_constructor_symbol] = STATE(38),
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [99] = {
    [sym__layout_semicolon] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(390),
    [sym_comment] = ACTIONS(30),
  },
  [100] = {
    [aux_sym_fixity_repeat1] = STATE(174),
    [sym__layout_semicolon] = ACTIONS(386),
    [anon_sym_SEMI] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_comment] = ACTIONS(30),
  },
  [101] = {
    [sym__layout_semicolon] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_COMMA] = ACTIONS(392),
    [sym_comment] = ACTIONS(30),
  },
  [102] = {
    [sym__layout_semicolon] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_AMP] = ACTIONS(396),
    [anon_sym_1] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_BSLASH] = ACTIONS(396),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [anon_sym_deriving] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_constructor_identifier] = ACTIONS(360),
    [sym_comment] = ACTIONS(30),
  },
  [104] = {
    [sym__layout_semicolon] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_EQ] = ACTIONS(402),
    [anon_sym_deriving] = ACTIONS(402),
    [sym_variable_identifier] = ACTIONS(404),
    [sym_constructor_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(30),
  },
  [105] = {
    [aux_sym_type_class_repeat1] = STATE(104),
    [sym__layout_semicolon] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_deriving] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_comment] = ACTIONS(30),
  },
  [106] = {
    [sym_constructors] = STATE(178),
    [sym_constructor] = STATE(111),
    [sym_deriving] = STATE(179),
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [107] = {
    [sym_constructors] = STATE(178),
    [sym_constructor] = STATE(111),
    [sym_deriving] = STATE(179),
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [108] = {
    [sym__identifier] = STATE(181),
    [anon_sym_LPAREN] = ACTIONS(416),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [109] = {
    [sym_fields] = STATE(185),
    [sym_strict] = STATE(186),
    [sym__identifier] = STATE(186),
    [aux_sym_constructor_repeat1] = STATE(187),
    [sym__layout_semicolon] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_deriving] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(426),
    [sym_constructor_identifier] = ACTIONS(426),
    [sym_module_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(30),
  },
  [110] = {
    [sym_deriving] = STATE(179),
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_comment] = ACTIONS(30),
  },
  [111] = {
    [aux_sym_constructors_repeat1] = STATE(189),
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(432),
    [anon_sym_deriving] = ACTIONS(430),
    [sym_comment] = ACTIONS(30),
  },
  [112] = {
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [sym_comment] = ACTIONS(30),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(402),
    [sym_variable_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(30),
  },
  [115] = {
    [sym_new_constructor] = STATE(191),
    [sym_constructor_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(30),
  },
  [116] = {
    [sym__type] = STATE(193),
    [sym_function_type] = STATE(135),
    [sym_simple_type] = STATE(137),
    [sym_constructor_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(30),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(30),
  },
  [118] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(442),
  },
  [119] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(444),
  },
  [120] = {
    [sym__cntrl] = STATE(195),
    [sym_comment] = ACTIONS(62),
    [anon_sym__] = ACTIONS(446),
    [sym__ascii_large] = ACTIONS(446),
    [anon_sym_AT] = ACTIONS(446),
    [anon_sym_CARET] = ACTIONS(446),
    [anon_sym_BSLASH] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(446),
  },
  [121] = {
    [aux_sym__escape_repeat1] = STATE(197),
    [sym_comment] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(448),
  },
  [122] = {
    [aux_sym__escape_repeat2] = STATE(199),
    [sym_comment] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(450),
  },
  [123] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(452),
  },
  [124] = {
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_RBRACE] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_BQUOTE] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_BANG] = ACTIONS(454),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(454),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(454),
    [anon_sym__] = ACTIONS(454),
    [sym__ascii_large] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(454),
    [anon_sym_DOLLAR] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(454),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_1] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(454),
    [anon_sym_SLASH] = ACTIONS(454),
    [anon_sym_LT] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_QMARK] = ACTIONS(454),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_CARET] = ACTIONS(454),
    [anon_sym_DASH] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(454),
    [anon_sym_BSLASH] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_RBRACK] = ACTIONS(454),
    [sym__space] = ACTIONS(454),
    [sym__newline] = ACTIONS(454),
    [sym__tab] = ACTIONS(454),
    [sym__vertical_tab] = ACTIONS(454),
  },
  [125] = {
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_BQUOTE] = ACTIONS(456),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(456),
    [anon_sym_BANG] = ACTIONS(456),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(456),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(456),
    [anon_sym__] = ACTIONS(456),
    [sym__ascii_large] = ACTIONS(456),
    [anon_sym_POUND] = ACTIONS(456),
    [anon_sym_DOLLAR] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(456),
    [anon_sym_AMP] = ACTIONS(456),
    [anon_sym_1] = ACTIONS(456),
    [anon_sym_PLUS] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(456),
    [anon_sym_GT] = ACTIONS(456),
    [anon_sym_QMARK] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(456),
    [anon_sym_CARET] = ACTIONS(456),
    [anon_sym_DASH] = ACTIONS(456),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_BSLASH] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym__space] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
    [sym__tab] = ACTIONS(456),
    [sym__vertical_tab] = ACTIONS(456),
  },
  [126] = {
    [sym__cntrl] = STATE(201),
    [sym_comment] = ACTIONS(62),
    [anon_sym__] = ACTIONS(458),
    [sym__ascii_large] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_CARET] = ACTIONS(458),
    [anon_sym_BSLASH] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
  },
  [127] = {
    [aux_sym__escape_repeat1] = STATE(203),
    [sym_comment] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(460),
  },
  [128] = {
    [aux_sym__escape_repeat2] = STATE(205),
    [sym_comment] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(462),
  },
  [129] = {
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_BQUOTE] = ACTIONS(464),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_BANG] = ACTIONS(464),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(464),
    [anon_sym__] = ACTIONS(464),
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
    [anon_sym_BSLASH] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym__space] = ACTIONS(464),
    [sym__newline] = ACTIONS(464),
    [sym__tab] = ACTIONS(464),
    [sym__vertical_tab] = ACTIONS(464),
  },
  [130] = {
    [anon_sym_SEMI] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_BQUOTE] = ACTIONS(466),
    [anon_sym_COLON] = ACTIONS(466),
    [anon_sym_EQ] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_BANG] = ACTIONS(466),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(466),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(466),
    [anon_sym__] = ACTIONS(466),
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
    [anon_sym_BSLASH] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym__space] = ACTIONS(466),
    [sym__newline] = ACTIONS(466),
    [sym__tab] = ACTIONS(466),
    [sym__vertical_tab] = ACTIONS(466),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_comment] = ACTIONS(30),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_do] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
    [anon_sym_infixl] = ACTIONS(474),
    [anon_sym_infixr] = ACTIONS(474),
    [anon_sym_infix] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [sym__integer_literal] = ACTIONS(474),
    [sym__octal_literal] = ACTIONS(474),
    [sym__hexidecimal_literal] = ACTIONS(474),
  },
  [133] = {
    [aux_sym_type_class_repeat1] = STATE(207),
    [sym__layout_semicolon] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_DASH_GT] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(30),
  },
  [134] = {
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [sym_comment] = ACTIONS(30),
  },
  [135] = {
    [sym__layout_semicolon] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(486),
    [sym_comment] = ACTIONS(30),
  },
  [136] = {
    [sym__type] = STATE(208),
    [sym_function_type] = STATE(135),
    [sym_simple_type] = STATE(137),
    [sym_constructor_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(30),
  },
  [137] = {
    [sym__layout_semicolon] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_DASH_GT] = ACTIONS(488),
    [sym_comment] = ACTIONS(30),
  },
  [138] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(211),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_module_repeat1] = STATE(212),
    [aux_sym_type_class_repeat1] = STATE(20),
    [sym__layout_close_brace] = ACTIONS(490),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [139] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(17),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_module_repeat1] = STATE(213),
    [aux_sym_type_class_repeat1] = STATE(20),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym_comment] = ACTIONS(30),
  },
  [141] = {
    [anon_sym_where] = ACTIONS(496),
    [sym_comment] = ACTIONS(30),
  },
  [142] = {
    [aux_sym_module_exports_repeat1] = STATE(216),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_comment] = ACTIONS(30),
  },
  [143] = {
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(504),
    [sym_comment] = ACTIONS(30),
  },
  [144] = {
    [sym_declarations] = STATE(218),
    [sym__layout_open_brace] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(310),
    [sym_comment] = ACTIONS(30),
  },
  [145] = {
    [sym__identifier] = STATE(219),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [146] = {
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [sym_comment] = ACTIONS(30),
  },
  [147] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_comment] = ACTIONS(30),
  },
  [148] = {
    [aux_sym_import_specification_repeat1] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_comment] = ACTIONS(30),
  },
  [149] = {
    [sym_import_specification] = STATE(224),
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_hiding] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [150] = {
    [sym__identifier] = STATE(225),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [151] = {
    [sym__layout_close_brace] = ACTIONS(520),
    [anon_sym_do] = ACTIONS(522),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [sym__integer_literal] = ACTIONS(522),
    [sym__octal_literal] = ACTIONS(522),
    [sym__hexidecimal_literal] = ACTIONS(522),
  },
  [152] = {
    [sym__layout_semicolon] = ACTIONS(526),
    [anon_sym_SEMI] = ACTIONS(528),
    [sym_comment] = ACTIONS(30),
  },
  [153] = {
    [sym__layout_close_brace] = ACTIONS(530),
    [anon_sym_do] = ACTIONS(532),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [sym__integer_literal] = ACTIONS(532),
    [sym__octal_literal] = ACTIONS(532),
    [sym__hexidecimal_literal] = ACTIONS(532),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(522),
    [anon_sym_do] = ACTIONS(522),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [sym__integer_literal] = ACTIONS(522),
    [sym__octal_literal] = ACTIONS(522),
    [sym__hexidecimal_literal] = ACTIONS(522),
  },
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(532),
    [anon_sym_do] = ACTIONS(532),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [sym__integer_literal] = ACTIONS(532),
    [sym__octal_literal] = ACTIONS(532),
    [sym__hexidecimal_literal] = ACTIONS(532),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(30),
  },
  [157] = {
    [sym_class] = STATE(226),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(30),
  },
  [158] = {
    [anon_sym_EQ_GT] = ACTIONS(536),
    [sym_comment] = ACTIONS(30),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(540),
    [sym_comment] = ACTIONS(30),
  },
  [160] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(211),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_module_repeat1] = STATE(231),
    [aux_sym_type_class_repeat1] = STATE(20),
    [sym__layout_close_brace] = ACTIONS(542),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [161] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(17),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_module_repeat1] = STATE(232),
    [aux_sym_type_class_repeat1] = STATE(20),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [162] = {
    [sym__layout_semicolon] = ACTIONS(546),
    [anon_sym_SEMI] = ACTIONS(548),
    [sym_comment] = ACTIONS(30),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_variable_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(30),
  },
  [164] = {
    [sym_declarations] = STATE(234),
    [sym__layout_open_brace] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(30),
  },
  [165] = {
    [anon_sym_where] = ACTIONS(306),
    [sym_variable_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(30),
  },
  [166] = {
    [anon_sym_where] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_comment] = ACTIONS(30),
  },
  [167] = {
    [anon_sym_where] = ACTIONS(554),
    [sym_variable_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(30),
  },
  [168] = {
    [sym__layout_semicolon] = ACTIONS(556),
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(558),
    [sym_comment] = ACTIONS(30),
  },
  [169] = {
    [sym__symbol] = STATE(102),
    [sym__layout_semicolon] = ACTIONS(556),
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(566),
    [anon_sym_COMMA] = ACTIONS(566),
    [sym_comment] = ACTIONS(30),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [anon_sym_COMMA] = ACTIONS(570),
    [sym_comment] = ACTIONS(30),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(574),
    [sym_comment] = ACTIONS(30),
  },
  [173] = {
    [sym__op] = STATE(237),
    [sym_variable_symbol] = STATE(38),
    [sym_constructor_symbol] = STATE(38),
    [sym__symbol] = STATE(40),
    [aux_sym_variable_symbol_repeat1] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(60),
  },
  [174] = {
    [sym__layout_semicolon] = ACTIONS(576),
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_COMMA] = ACTIONS(390),
    [sym_comment] = ACTIONS(30),
  },
  [175] = {
    [sym__layout_semicolon] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_deriving] = ACTIONS(306),
    [sym_variable_identifier] = ACTIONS(552),
    [sym_constructor_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(30),
  },
  [176] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_deriving] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_constructor_identifier] = ACTIONS(360),
    [sym_comment] = ACTIONS(30),
  },
  [177] = {
    [sym_constructors] = STATE(238),
    [sym_constructor] = STATE(111),
    [sym_deriving] = STATE(239),
    [sym__layout_semicolon] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [178] = {
    [sym_deriving] = STATE(239),
    [sym__layout_semicolon] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_comment] = ACTIONS(30),
  },
  [179] = {
    [sym__layout_semicolon] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_comment] = ACTIONS(30),
  },
  [180] = {
    [sym__identifier] = STATE(240),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(588),
    [sym_comment] = ACTIONS(30),
  },
  [182] = {
    [sym_field] = STATE(242),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(30),
  },
  [183] = {
    [sym__identifier] = STATE(243),
    [sym_variable_identifier] = ACTIONS(592),
    [sym_constructor_identifier] = ACTIONS(426),
    [sym_module_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(30),
  },
  [184] = {
    [sym__layout_semicolon] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_deriving] = ACTIONS(140),
    [anon_sym_BANG] = ACTIONS(140),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_constructor_identifier] = ACTIONS(594),
    [sym_module_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(30),
  },
  [185] = {
    [sym__layout_semicolon] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(598),
    [anon_sym_deriving] = ACTIONS(598),
    [sym_comment] = ACTIONS(30),
  },
  [186] = {
    [sym__layout_semicolon] = ACTIONS(600),
    [anon_sym_SEMI] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(602),
    [anon_sym_deriving] = ACTIONS(602),
    [anon_sym_BANG] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(604),
    [sym_constructor_identifier] = ACTIONS(604),
    [sym_module_identifier] = ACTIONS(604),
    [sym_comment] = ACTIONS(30),
  },
  [187] = {
    [sym_strict] = STATE(244),
    [sym__identifier] = STATE(244),
    [sym__layout_semicolon] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(598),
    [anon_sym_deriving] = ACTIONS(598),
    [anon_sym_BANG] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(426),
    [sym_constructor_identifier] = ACTIONS(426),
    [sym_module_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(30),
  },
  [188] = {
    [sym_constructor] = STATE(245),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [189] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [anon_sym_PIPE] = ACTIONS(610),
    [anon_sym_deriving] = ACTIONS(608),
    [sym_comment] = ACTIONS(30),
  },
  [190] = {
    [sym_fields] = STATE(247),
    [sym__identifier] = STATE(247),
    [anon_sym_LBRACE] = ACTIONS(422),
    [sym_variable_identifier] = ACTIONS(136),
    [sym_constructor_identifier] = ACTIONS(44),
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(30),
  },
  [191] = {
    [sym_deriving] = STATE(248),
    [sym__layout_semicolon] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_comment] = ACTIONS(30),
  },
  [192] = {
    [aux_sym_type_class_repeat1] = STATE(207),
    [sym__layout_semicolon] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_DASH_GT] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(616),
    [sym_comment] = ACTIONS(30),
  },
  [193] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [sym_comment] = ACTIONS(30),
  },
  [194] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(622),
  },
  [195] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(624),
  },
  [196] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(626),
  },
  [197] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(630),
  },
  [198] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(632),
  },
  [199] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(634),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_LPAREN] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [anon_sym_COLON] = ACTIONS(636),
    [anon_sym_EQ] = ACTIONS(636),
    [anon_sym_PIPE] = ACTIONS(636),
    [anon_sym_BANG] = ACTIONS(636),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(636),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(636),
    [anon_sym__] = ACTIONS(636),
    [sym__ascii_large] = ACTIONS(636),
    [anon_sym_POUND] = ACTIONS(636),
    [anon_sym_DOLLAR] = ACTIONS(636),
    [anon_sym_PERCENT] = ACTIONS(636),
    [anon_sym_AMP] = ACTIONS(636),
    [anon_sym_1] = ACTIONS(636),
    [anon_sym_PLUS] = ACTIONS(636),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_SLASH] = ACTIONS(636),
    [anon_sym_LT] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(636),
    [anon_sym_QMARK] = ACTIONS(636),
    [anon_sym_AT] = ACTIONS(636),
    [anon_sym_CARET] = ACTIONS(636),
    [anon_sym_DASH] = ACTIONS(636),
    [anon_sym_TILDE] = ACTIONS(636),
    [anon_sym_BSLASH] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [sym__space] = ACTIONS(636),
    [sym__newline] = ACTIONS(636),
    [sym__tab] = ACTIONS(636),
    [sym__vertical_tab] = ACTIONS(636),
  },
  [201] = {
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_RBRACE] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_BQUOTE] = ACTIONS(638),
    [anon_sym_COLON] = ACTIONS(638),
    [anon_sym_EQ] = ACTIONS(638),
    [anon_sym_PIPE] = ACTIONS(638),
    [anon_sym_BANG] = ACTIONS(638),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(638),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(638),
    [anon_sym__] = ACTIONS(638),
    [sym__ascii_large] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(638),
    [anon_sym_DOLLAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(638),
    [anon_sym_AMP] = ACTIONS(638),
    [anon_sym_1] = ACTIONS(638),
    [anon_sym_PLUS] = ACTIONS(638),
    [anon_sym_DOT] = ACTIONS(638),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_LT] = ACTIONS(638),
    [anon_sym_GT] = ACTIONS(638),
    [anon_sym_QMARK] = ACTIONS(638),
    [anon_sym_AT] = ACTIONS(638),
    [anon_sym_CARET] = ACTIONS(638),
    [anon_sym_DASH] = ACTIONS(638),
    [anon_sym_TILDE] = ACTIONS(638),
    [anon_sym_BSLASH] = ACTIONS(638),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [sym__space] = ACTIONS(638),
    [sym__newline] = ACTIONS(638),
    [sym__tab] = ACTIONS(638),
    [sym__vertical_tab] = ACTIONS(638),
  },
  [202] = {
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_BQUOTE] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(640),
    [anon_sym_EQ] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(640),
    [anon_sym_BANG] = ACTIONS(640),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(640),
    [anon_sym__] = ACTIONS(640),
    [sym__ascii_large] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(640),
    [anon_sym_DOLLAR] = ACTIONS(640),
    [anon_sym_PERCENT] = ACTIONS(640),
    [anon_sym_AMP] = ACTIONS(640),
    [anon_sym_1] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [anon_sym_DOT] = ACTIONS(640),
    [anon_sym_SLASH] = ACTIONS(640),
    [anon_sym_LT] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [anon_sym_QMARK] = ACTIONS(640),
    [anon_sym_AT] = ACTIONS(640),
    [anon_sym_CARET] = ACTIONS(640),
    [anon_sym_DASH] = ACTIONS(640),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_BSLASH] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_RBRACK] = ACTIONS(640),
    [sym__space] = ACTIONS(640),
    [sym__newline] = ACTIONS(640),
    [sym__tab] = ACTIONS(640),
    [sym__vertical_tab] = ACTIONS(640),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(640),
  },
  [203] = {
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_BQUOTE] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_EQ] = ACTIONS(642),
    [anon_sym_PIPE] = ACTIONS(642),
    [anon_sym_BANG] = ACTIONS(642),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(642),
    [anon_sym__] = ACTIONS(642),
    [sym__ascii_large] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [anon_sym_DOLLAR] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(642),
    [anon_sym_AMP] = ACTIONS(642),
    [anon_sym_1] = ACTIONS(642),
    [anon_sym_PLUS] = ACTIONS(642),
    [anon_sym_DOT] = ACTIONS(642),
    [anon_sym_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [anon_sym_QMARK] = ACTIONS(642),
    [anon_sym_AT] = ACTIONS(642),
    [anon_sym_CARET] = ACTIONS(642),
    [anon_sym_DASH] = ACTIONS(642),
    [anon_sym_TILDE] = ACTIONS(642),
    [anon_sym_BSLASH] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym__space] = ACTIONS(642),
    [sym__newline] = ACTIONS(642),
    [sym__tab] = ACTIONS(642),
    [sym__vertical_tab] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(644),
  },
  [204] = {
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_LBRACE] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [anon_sym_COLON] = ACTIONS(646),
    [anon_sym_EQ] = ACTIONS(646),
    [anon_sym_PIPE] = ACTIONS(646),
    [anon_sym_BANG] = ACTIONS(646),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(646),
    [anon_sym__] = ACTIONS(646),
    [sym__ascii_large] = ACTIONS(646),
    [anon_sym_POUND] = ACTIONS(646),
    [anon_sym_DOLLAR] = ACTIONS(646),
    [anon_sym_PERCENT] = ACTIONS(646),
    [anon_sym_AMP] = ACTIONS(646),
    [anon_sym_1] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(646),
    [anon_sym_SLASH] = ACTIONS(646),
    [anon_sym_LT] = ACTIONS(646),
    [anon_sym_GT] = ACTIONS(646),
    [anon_sym_QMARK] = ACTIONS(646),
    [anon_sym_AT] = ACTIONS(646),
    [anon_sym_CARET] = ACTIONS(646),
    [anon_sym_DASH] = ACTIONS(646),
    [anon_sym_TILDE] = ACTIONS(646),
    [anon_sym_BSLASH] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [sym__space] = ACTIONS(646),
    [sym__newline] = ACTIONS(646),
    [sym__tab] = ACTIONS(646),
    [sym__vertical_tab] = ACTIONS(646),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(646),
  },
  [205] = {
    [anon_sym_SEMI] = ACTIONS(642),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_RBRACE] = ACTIONS(642),
    [anon_sym_LPAREN] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_BQUOTE] = ACTIONS(642),
    [anon_sym_COLON] = ACTIONS(642),
    [anon_sym_EQ] = ACTIONS(642),
    [anon_sym_PIPE] = ACTIONS(642),
    [anon_sym_BANG] = ACTIONS(642),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(642),
    [anon_sym__] = ACTIONS(642),
    [sym__ascii_large] = ACTIONS(642),
    [anon_sym_POUND] = ACTIONS(642),
    [anon_sym_DOLLAR] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(642),
    [anon_sym_AMP] = ACTIONS(642),
    [anon_sym_1] = ACTIONS(642),
    [anon_sym_PLUS] = ACTIONS(642),
    [anon_sym_DOT] = ACTIONS(642),
    [anon_sym_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [anon_sym_QMARK] = ACTIONS(642),
    [anon_sym_AT] = ACTIONS(642),
    [anon_sym_CARET] = ACTIONS(642),
    [anon_sym_DASH] = ACTIONS(642),
    [anon_sym_TILDE] = ACTIONS(642),
    [anon_sym_BSLASH] = ACTIONS(642),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_RBRACK] = ACTIONS(642),
    [sym__space] = ACTIONS(642),
    [sym__newline] = ACTIONS(642),
    [sym__tab] = ACTIONS(642),
    [sym__vertical_tab] = ACTIONS(642),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(648),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_DASH_GT] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_DASH_GT] = ACTIONS(402),
    [sym_variable_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(30),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(654),
    [sym_comment] = ACTIONS(30),
  },
  [209] = {
    [sym__type] = STATE(255),
    [sym_function_type] = STATE(135),
    [sym_simple_type] = STATE(137),
    [sym_constructor_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(30),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [sym_comment] = ACTIONS(30),
  },
  [211] = {
    [sym__layout_semicolon] = ACTIONS(658),
    [anon_sym_SEMI] = ACTIONS(660),
    [sym_comment] = ACTIONS(30),
  },
  [212] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(258),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_type_class_repeat1] = STATE(20),
    [sym__layout_close_brace] = ACTIONS(662),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [213] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(66),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_type_class_repeat1] = STATE(20),
    [anon_sym_RBRACE] = ACTIONS(664),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [214] = {
    [sym_export] = STATE(259),
    [sym__identifier] = STATE(143),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [215] = {
    [anon_sym_where] = ACTIONS(666),
    [sym_comment] = ACTIONS(30),
  },
  [216] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(30),
  },
  [217] = {
    [sym__identifier] = STATE(263),
    [anon_sym_DOT_DOT] = ACTIONS(672),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [sym_comment] = ACTIONS(30),
  },
  [219] = {
    [sym_import_specification] = STATE(264),
    [sym__layout_semicolon] = ACTIONS(676),
    [anon_sym_SEMI] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_hiding] = ACTIONS(150),
    [sym_comment] = ACTIONS(30),
  },
  [220] = {
    [sym__identifier] = STATE(266),
    [anon_sym_DOT_DOT] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [221] = {
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(684),
    [sym_comment] = ACTIONS(30),
  },
  [223] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_comment] = ACTIONS(30),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(676),
    [anon_sym_SEMI] = ACTIONS(678),
    [sym_comment] = ACTIONS(30),
  },
  [225] = {
    [aux_sym_import_specification_repeat1] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_comment] = ACTIONS(30),
  },
  [226] = {
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(692),
    [sym_comment] = ACTIONS(30),
  },
  [227] = {
    [sym_constructor_identifier] = ACTIONS(694),
    [sym_comment] = ACTIONS(30),
  },
  [228] = {
    [sym_class] = STATE(272),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(30),
  },
  [229] = {
    [anon_sym_EQ_GT] = ACTIONS(696),
    [sym_comment] = ACTIONS(30),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(698),
    [sym_comment] = ACTIONS(30),
  },
  [231] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(258),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_type_class_repeat1] = STATE(20),
    [sym__layout_close_brace] = ACTIONS(700),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [232] = {
    [sym_import] = STATE(16),
    [sym__declaration] = STATE(66),
    [sym__expression] = STATE(16),
    [sym_do_expression] = STATE(18),
    [sym_type_class] = STATE(16),
    [sym_fixity] = STATE(16),
    [sym_type_signature] = STATE(16),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(18),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_string] = STATE(11),
    [aux_sym_type_class_repeat1] = STATE(20),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_data] = ACTIONS(22),
    [anon_sym_newtype] = ACTIONS(24),
    [anon_sym_type] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(704),
    [anon_sym_EQ_GT] = ACTIONS(704),
    [sym_comment] = ACTIONS(30),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(706),
    [anon_sym_SEMI] = ACTIONS(708),
    [sym_comment] = ACTIONS(30),
  },
  [235] = {
    [sym_declarations] = STATE(275),
    [sym__layout_open_brace] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(30),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(712),
    [anon_sym_COMMA] = ACTIONS(712),
    [sym_comment] = ACTIONS(30),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(714),
    [anon_sym_SEMI] = ACTIONS(716),
    [anon_sym_COMMA] = ACTIONS(716),
    [sym_comment] = ACTIONS(30),
  },
  [238] = {
    [sym_deriving] = STATE(276),
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_deriving] = ACTIONS(228),
    [sym_comment] = ACTIONS(30),
  },
  [239] = {
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [sym_comment] = ACTIONS(30),
  },
  [240] = {
    [aux_sym_export_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(30),
  },
  [241] = {
    [aux_sym_field_repeat1] = STATE(282),
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_COLON_COLON] = ACTIONS(728),
    [sym_comment] = ACTIONS(30),
  },
  [242] = {
    [aux_sym_fields_repeat1] = STATE(285),
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_COMMA] = ACTIONS(732),
    [sym_comment] = ACTIONS(30),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_PIPE] = ACTIONS(736),
    [anon_sym_deriving] = ACTIONS(736),
    [anon_sym_BANG] = ACTIONS(736),
    [sym_variable_identifier] = ACTIONS(738),
    [sym_constructor_identifier] = ACTIONS(738),
    [sym_module_identifier] = ACTIONS(738),
    [sym_comment] = ACTIONS(30),
  },
  [244] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(742),
    [anon_sym_BANG] = ACTIONS(742),
    [sym_variable_identifier] = ACTIONS(744),
    [sym_constructor_identifier] = ACTIONS(744),
    [sym_module_identifier] = ACTIONS(744),
    [sym_comment] = ACTIONS(30),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_deriving] = ACTIONS(748),
    [sym_comment] = ACTIONS(30),
  },
  [246] = {
    [sym_constructor] = STATE(286),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(30),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_deriving] = ACTIONS(752),
    [sym_comment] = ACTIONS(30),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(754),
    [anon_sym_SEMI] = ACTIONS(756),
    [sym_comment] = ACTIONS(30),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_DASH_GT] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(30),
  },
  [250] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(758),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(758),
  },
  [251] = {
    [sym_comment] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(760),
  },
  [252] = {
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_LBRACE] = ACTIONS(762),
    [anon_sym_RBRACE] = ACTIONS(762),
    [anon_sym_LPAREN] = ACTIONS(762),
    [anon_sym_RPAREN] = ACTIONS(762),
    [anon_sym_BQUOTE] = ACTIONS(762),
    [anon_sym_COLON] = ACTIONS(762),
    [anon_sym_EQ] = ACTIONS(762),
    [anon_sym_PIPE] = ACTIONS(762),
    [anon_sym_BANG] = ACTIONS(762),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(762),
    [anon_sym_DQUOTE] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(762),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(762),
    [anon_sym__] = ACTIONS(762),
    [sym__ascii_large] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(762),
    [anon_sym_DOLLAR] = ACTIONS(762),
    [anon_sym_PERCENT] = ACTIONS(762),
    [anon_sym_AMP] = ACTIONS(762),
    [anon_sym_1] = ACTIONS(762),
    [anon_sym_PLUS] = ACTIONS(762),
    [anon_sym_DOT] = ACTIONS(762),
    [anon_sym_SLASH] = ACTIONS(762),
    [anon_sym_LT] = ACTIONS(762),
    [anon_sym_GT] = ACTIONS(762),
    [anon_sym_QMARK] = ACTIONS(762),
    [anon_sym_AT] = ACTIONS(762),
    [anon_sym_CARET] = ACTIONS(762),
    [anon_sym_DASH] = ACTIONS(762),
    [anon_sym_TILDE] = ACTIONS(762),
    [anon_sym_BSLASH] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [sym__space] = ACTIONS(762),
    [sym__newline] = ACTIONS(762),
    [sym__tab] = ACTIONS(762),
    [sym__vertical_tab] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(762),
  },
  [253] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_BQUOTE] = ACTIONS(764),
    [anon_sym_COLON] = ACTIONS(764),
    [anon_sym_EQ] = ACTIONS(764),
    [anon_sym_PIPE] = ACTIONS(764),
    [anon_sym_BANG] = ACTIONS(764),
    [sym_comment] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(764),
    [anon_sym__] = ACTIONS(764),
    [sym__ascii_large] = ACTIONS(764),
    [anon_sym_POUND] = ACTIONS(764),
    [anon_sym_DOLLAR] = ACTIONS(764),
    [anon_sym_PERCENT] = ACTIONS(764),
    [anon_sym_AMP] = ACTIONS(764),
    [anon_sym_1] = ACTIONS(764),
    [anon_sym_PLUS] = ACTIONS(764),
    [anon_sym_DOT] = ACTIONS(764),
    [anon_sym_SLASH] = ACTIONS(764),
    [anon_sym_LT] = ACTIONS(764),
    [anon_sym_GT] = ACTIONS(764),
    [anon_sym_QMARK] = ACTIONS(764),
    [anon_sym_AT] = ACTIONS(764),
    [anon_sym_CARET] = ACTIONS(764),
    [anon_sym_DASH] = ACTIONS(764),
    [anon_sym_TILDE] = ACTIONS(764),
    [anon_sym_BSLASH] = ACTIONS(764),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym__space] = ACTIONS(764),
    [sym__newline] = ACTIONS(764),
    [sym__tab] = ACTIONS(764),
    [sym__vertical_tab] = ACTIONS(764),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(764),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_DASH_GT] = ACTIONS(306),
    [sym_variable_identifier] = ACTIONS(306),
    [sym_comment] = ACTIONS(30),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(768),
    [sym_comment] = ACTIONS(30),
  },
  [256] = {
    [sym__layout_close_brace] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(296),
    [anon_sym_do] = ACTIONS(296),
    [anon_sym_class] = ACTIONS(296),
    [anon_sym_infixl] = ACTIONS(296),
    [anon_sym_infixr] = ACTIONS(296),
    [anon_sym_infix] = ACTIONS(296),
    [anon_sym_data] = ACTIONS(296),
    [anon_sym_newtype] = ACTIONS(296),
    [anon_sym_type] = ACTIONS(296),
    [sym_variable_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__integer_literal] = ACTIONS(296),
    [sym__octal_literal] = ACTIONS(296),
    [sym__hexidecimal_literal] = ACTIONS(296),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(770),
    [sym_comment] = ACTIONS(30),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(772),
    [anon_sym_SEMI] = ACTIONS(774),
    [sym_comment] = ACTIONS(30),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [sym_comment] = ACTIONS(30),
  },
  [260] = {
    [sym_export] = STATE(288),
    [sym__identifier] = STATE(143),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [261] = {
    [anon_sym_where] = ACTIONS(778),
    [sym_comment] = ACTIONS(30),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(780),
    [sym_comment] = ACTIONS(30),
  },
  [263] = {
    [aux_sym_export_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(780),
    [sym_comment] = ACTIONS(30),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(784),
    [sym_comment] = ACTIONS(30),
  },
  [265] = {
    [anon_sym_RPAREN] = ACTIONS(786),
    [sym_comment] = ACTIONS(30),
  },
  [266] = {
    [aux_sym_export_repeat1] = STATE(292),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(786),
    [sym_comment] = ACTIONS(30),
  },
  [267] = {
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RPAREN] = ACTIONS(790),
    [sym_comment] = ACTIONS(30),
  },
  [268] = {
    [sym__identifier] = STATE(294),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(30),
  },
  [270] = {
    [sym__identifier] = STATE(296),
    [anon_sym_DOT_DOT] = ACTIONS(796),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym_comment] = ACTIONS(30),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(30),
  },
  [273] = {
    [sym_constructor_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(30),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(770),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(30),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(806),
    [anon_sym_SEMI] = ACTIONS(808),
    [sym_comment] = ACTIONS(30),
  },
  [276] = {
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [sym_comment] = ACTIONS(30),
  },
  [277] = {
    [sym__identifier] = STATE(298),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [sym_comment] = ACTIONS(30),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(820),
    [sym_comment] = ACTIONS(30),
  },
  [280] = {
    [sym_variable_identifier] = ACTIONS(822),
    [sym_comment] = ACTIONS(30),
  },
  [281] = {
    [sym_strict] = STATE(303),
    [sym__identifier] = STATE(303),
    [anon_sym_BANG] = ACTIONS(824),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_COLON_COLON] = ACTIONS(828),
    [sym_comment] = ACTIONS(30),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_PIPE] = ACTIONS(832),
    [anon_sym_deriving] = ACTIONS(832),
    [sym_comment] = ACTIONS(30),
  },
  [284] = {
    [sym_field] = STATE(306),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(30),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(836),
    [sym_comment] = ACTIONS(30),
  },
  [286] = {
    [sym__layout_semicolon] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(840),
    [anon_sym_PIPE] = ACTIONS(840),
    [anon_sym_deriving] = ACTIONS(840),
    [sym_comment] = ACTIONS(30),
  },
  [287] = {
    [sym__layout_close_brace] = ACTIONS(472),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_do] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
    [anon_sym_infixl] = ACTIONS(474),
    [anon_sym_infixr] = ACTIONS(474),
    [anon_sym_infix] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(30),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [sym__integer_literal] = ACTIONS(474),
    [sym__octal_literal] = ACTIONS(474),
    [sym__hexidecimal_literal] = ACTIONS(474),
  },
  [288] = {
    [anon_sym_COMMA] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym_comment] = ACTIONS(30),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(30),
  },
  [290] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(846),
    [sym_comment] = ACTIONS(30),
  },
  [291] = {
    [aux_sym_import_specification_repeat1] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_comment] = ACTIONS(30),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(30),
  },
  [293] = {
    [sym__identifier] = STATE(314),
    [anon_sym_DOT_DOT] = ACTIONS(852),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [294] = {
    [anon_sym_LPAREN] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(30),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(30),
  },
  [296] = {
    [aux_sym_export_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(30),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(860),
    [sym_comment] = ACTIONS(30),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym_comment] = ACTIONS(30),
  },
  [299] = {
    [sym__identifier] = STATE(317),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(30),
  },
  [301] = {
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_COLON_COLON] = ACTIONS(868),
    [sym_comment] = ACTIONS(30),
  },
  [302] = {
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [303] = {
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_COMMA] = ACTIONS(870),
    [sym_comment] = ACTIONS(30),
  },
  [304] = {
    [sym_variable_identifier] = ACTIONS(872),
    [sym_comment] = ACTIONS(30),
  },
  [305] = {
    [sym_strict] = STATE(320),
    [sym__identifier] = STATE(320),
    [anon_sym_BANG] = ACTIONS(824),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [306] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_COMMA] = ACTIONS(874),
    [sym_comment] = ACTIONS(30),
  },
  [307] = {
    [sym__layout_semicolon] = ACTIONS(876),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_PIPE] = ACTIONS(878),
    [anon_sym_deriving] = ACTIONS(878),
    [sym_comment] = ACTIONS(30),
  },
  [308] = {
    [sym_field] = STATE(321),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(30),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_RPAREN] = ACTIONS(880),
    [sym_comment] = ACTIONS(30),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [sym_comment] = ACTIONS(30),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(30),
  },
  [312] = {
    [aux_sym_import_specification_repeat1] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(30),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym_comment] = ACTIONS(30),
  },
  [314] = {
    [aux_sym_export_repeat1] = STATE(325),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym_comment] = ACTIONS(30),
  },
  [315] = {
    [sym__identifier] = STATE(327),
    [anon_sym_DOT_DOT] = ACTIONS(890),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(30),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(892),
    [sym_comment] = ACTIONS(30),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(894),
    [sym_comment] = ACTIONS(30),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_COMMA] = ACTIONS(736),
    [sym_comment] = ACTIONS(30),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_comment] = ACTIONS(30),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(898),
    [anon_sym_COMMA] = ACTIONS(898),
    [sym_comment] = ACTIONS(30),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_COMMA] = ACTIONS(900),
    [sym_comment] = ACTIONS(30),
  },
  [322] = {
    [sym__layout_semicolon] = ACTIONS(902),
    [anon_sym_SEMI] = ACTIONS(904),
    [sym_comment] = ACTIONS(30),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(30),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(908),
    [anon_sym_RPAREN] = ACTIONS(908),
    [sym_comment] = ACTIONS(30),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(910),
    [sym_comment] = ACTIONS(30),
  },
  [326] = {
    [anon_sym_RPAREN] = ACTIONS(910),
    [sym_comment] = ACTIONS(30),
  },
  [327] = {
    [aux_sym_export_repeat1] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(910),
    [sym_comment] = ACTIONS(30),
  },
  [328] = {
    [aux_sym_import_specification_repeat1] = STATE(332),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(30),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(914),
    [sym_comment] = ACTIONS(30),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(30),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(30),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(920),
    [sym_comment] = ACTIONS(30),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(922),
    [sym_comment] = ACTIONS(30),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(926),
    [sym_comment] = ACTIONS(30),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(200),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(252),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [694] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_declarations, 2),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [744] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [802] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_declarations, 3),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
};

void *tree_sitter_haskell_external_scanner_create();
void tree_sitter_haskell_external_scanner_destroy(void *);
bool tree_sitter_haskell_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haskell_external_scanner_serialize(void *, char *);
void tree_sitter_haskell_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_haskell_external_scanner_create,
      tree_sitter_haskell_external_scanner_destroy,
      tree_sitter_haskell_external_scanner_scan,
      tree_sitter_haskell_external_scanner_serialize,
      tree_sitter_haskell_external_scanner_deserialize,
    },
  };
  return &language;
}
