#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 334
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
  anon_sym_LBRACE = 6,
  anon_sym_SEMI = 7,
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
  aux_sym_declarations_repeat1 = 164,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
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
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [aux_sym_declarations_repeat1] = {
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
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(186);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'm')
        ADVANCE(191);
      if (lookahead == 'w')
        ADVANCE(197);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(170);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(174);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'm')
        ADVANCE(175);
      if (lookahead == 'w')
        ADVANCE(181);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead != 0)
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 174:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 175:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 176:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(177);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 177:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(183);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(186);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'm')
        ADVANCE(191);
      if (lookahead == 'w')
        ADVANCE(197);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 187:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 188:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 189:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 190:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'd')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'u')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'l')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 197:
      if (lookahead == 'h')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'r')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 202:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(208);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(209);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '\r')
        ADVANCE(203);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(203);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(205);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '\r')
        ADVANCE(207);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(208);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(209);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == 'n')
        SKIP(202);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        ADVANCE(212);
      if (lookahead == '\r')
        ADVANCE(214);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        ADVANCE(212);
      if (lookahead == '\r')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(213);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(212);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(212);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        ADVANCE(212);
      if (lookahead == '\r')
        ADVANCE(214);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        SKIP(211);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        ADVANCE(217);
      if (lookahead == '\r')
        ADVANCE(233);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '.')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(216);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        ADVANCE(217);
      if (lookahead == '\r')
        ADVANCE(217);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(223);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(231);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      if (lookahead == ')')
        ADVANCE(219);
      if (lookahead == ',')
        ADVANCE(220);
      if (lookahead == '-')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      if (lookahead == ')')
        ADVANCE(219);
      if (lookahead == ',')
        ADVANCE(220);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      if (lookahead == '>')
        ADVANCE(222);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      if (lookahead == ')')
        ADVANCE(219);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(225);
      if (lookahead == ']')
        ADVANCE(226);
      if (lookahead != 0)
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(226);
      if (lookahead == '}')
        ADVANCE(227);
      if (lookahead != 0)
        ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(225);
      if (lookahead == ']')
        ADVANCE(226);
      if (lookahead != 0)
        ADVANCE(224);
      END_STATE();
    case 227:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(228);
      if (lookahead == ']')
        ADVANCE(229);
      if (lookahead != 0)
        ADVANCE(230);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(229);
      if (lookahead != 0)
        ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == ']')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(230);
      END_STATE();
    case 231:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(217);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(232);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        ADVANCE(217);
      if (lookahead == '\r')
        ADVANCE(233);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '.')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(216);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 234:
      if (lookahead == ')')
        ADVANCE(235);
      if (lookahead == ',')
        ADVANCE(236);
      if (lookahead == '-')
        ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 236:
      if (lookahead == ')')
        ADVANCE(235);
      if (lookahead == ',')
        ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == '>')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == ')')
        ADVANCE(235);
      END_STATE();
    case 239:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 240:
      if (lookahead == 'n')
        SKIP(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(241);
      if (lookahead == '.')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(241);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(283);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(289);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(242);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 243:
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(243);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(244);
      if (lookahead == '\\')
        ADVANCE(249);
      if (lookahead == 'c')
        ADVANCE(250);
      if (lookahead == 'd')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 't')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(243);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'O')
        ADVANCE(245);
      if (lookahead == 'X')
        ADVANCE(247);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 'x')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(246);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(246);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(248);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(248);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(243);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'o')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(261);
      if (lookahead == 'n')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 283:
      if (lookahead == '\n')
        ADVANCE(243);
      if (lookahead == '\r')
        ADVANCE(283);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(289);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(242);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(285);
      if (lookahead == 'X')
        ADVANCE(287);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'x')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(286);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == 'n')
        SKIP(242);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'l')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 's')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 's')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(296);
      if (lookahead == 'o')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'm')
        ADVANCE(301);
      if (lookahead == 'n')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'p')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'o')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'x')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'l')
        ADVANCE(310);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'w')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'y')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'y')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'p')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 323:
      if (lookahead == '\n')
        ADVANCE(324);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(327);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(323);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 324:
      if (lookahead == '\n')
        ADVANCE(324);
      if (lookahead == '\r')
        ADVANCE(324);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(244);
      if (lookahead == '\\')
        ADVANCE(325);
      if (lookahead == 'c')
        ADVANCE(250);
      if (lookahead == 'd')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'n')
        ADVANCE(272);
      if (lookahead == 't')
        ADVANCE(279);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 325:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(324);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(324);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(327);
      if (lookahead == 'c')
        ADVANCE(290);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == 'i')
        ADVANCE(300);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(323);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 327:
      if (lookahead == 'n')
        SKIP(323);
      END_STATE();
    case 328:
      if (lookahead == '\n')
        ADVANCE(329);
      if (lookahead == '\r')
        ADVANCE(340);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(341);
      if (lookahead == 'q')
        ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(328);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 329:
      if (lookahead == '\n')
        ADVANCE(329);
      if (lookahead == '\r')
        ADVANCE(329);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(330);
      if (lookahead == 'q')
        ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        ADVANCE(329);
      if (lookahead == '\r')
        ADVANCE(340);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(341);
      if (lookahead == 'q')
        ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(328);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 341:
      if (lookahead == 'n')
        SKIP(328);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'a')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'l')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'd')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 351:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == '(')
        ADVANCE(366);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(368);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(352);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(355);
      if (lookahead == 'd')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(219);
      if (lookahead == ',')
        ADVANCE(220);
      if (lookahead == '-')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(364);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '\n')
        ADVANCE(352);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == '(')
        ADVANCE(366);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(368);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(351);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(235);
      if (lookahead == ',')
        ADVANCE(236);
      if (lookahead == '-')
        ADVANCE(237);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        SKIP(351);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'v')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'n')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'g')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(377);
      END_STATE();
    case 378:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(386);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(389);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(392);
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
        SKIP(378);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 379:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(379);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(382);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(385);
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
        ADVANCE(379);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(245);
      if (lookahead == 'X')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 'x')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(386);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(389);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(392);
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
        SKIP(378);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(285);
      if (lookahead == 'X')
        ADVANCE(287);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'x')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(394);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(395);
      if (lookahead == 'd')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(404);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      END_STATE();
    case 405:
      if (lookahead == 'n')
        SKIP(393);
      END_STATE();
    case 406:
      if (lookahead == 'e')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'r')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'i')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'v')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'i')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'g')
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 414:
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(418);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(414);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 415:
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(172);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(415);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(418);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(414);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 418:
      if (lookahead == 'n')
        SKIP(414);
      END_STATE();
    case 419:
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(423);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(419);
      END_STATE();
    case 420:
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '\r')
        ADVANCE(422);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(423);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(419);
      END_STATE();
    case 423:
      if (lookahead == 'n')
        SKIP(419);
      END_STATE();
    case 424:
      if (lookahead == '\t')
        SKIP(424);
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(429);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 425:
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(427);
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
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(425);
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(425);
      if (lookahead == ' ')
        ADVANCE(426);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(427);
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
        ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      if (lookahead == '\t')
        SKIP(424);
      if (lookahead == '\n')
        ADVANCE(425);
      if (lookahead == '\r')
        ADVANCE(429);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 432:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(439);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(435);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(437);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(438);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(435);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(437);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(438);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      if (lookahead == '\t')
        ADVANCE(435);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(437);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(438);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(435);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(436);
      if (lookahead == ' ')
        ADVANCE(437);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(438);
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
        ADVANCE(428);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(436);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(439);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 440:
      if (lookahead == '\n')
        ADVANCE(441);
      if (lookahead == '\r')
        ADVANCE(451);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(452);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == 'h')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(440);
      END_STATE();
    case 441:
      if (lookahead == '\n')
        ADVANCE(441);
      if (lookahead == '\r')
        ADVANCE(441);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(442);
      if (lookahead == 'a')
        ADVANCE(443);
      if (lookahead == 'd')
        ADVANCE(396);
      if (lookahead == 'h')
        ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(441);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(441);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(444);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(446);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(447);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(448);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(449);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(450);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      if (lookahead == '\n')
        ADVANCE(441);
      if (lookahead == '\r')
        ADVANCE(451);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(452);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == 'h')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(440);
      END_STATE();
    case 452:
      if (lookahead == 'n')
        SKIP(440);
      END_STATE();
    case 453:
      if (lookahead == 's')
        ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 455:
      if (lookahead == 'i')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'd')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'i')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'n')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'g')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(465);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'h')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      END_STATE();
    case 462:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(462);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(463);
      if (lookahead == 'a')
        ADVANCE(443);
      if (lookahead == 'h')
        ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      if (lookahead == '\n')
        ADVANCE(462);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(465);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'h')
        ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(461);
      END_STATE();
    case 465:
      if (lookahead == 'n')
        SKIP(461);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(471);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(466);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(244);
      if (lookahead == '\\')
        ADVANCE(468);
      if (lookahead == 'd')
        ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(467);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(467);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(471);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(466);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 471:
      if (lookahead == 'n')
        SKIP(466);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'o')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(474);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '0')
        ADVANCE(244);
      if (lookahead == '\\')
        ADVANCE(475);
      if (lookahead == 'd')
        ADVANCE(469);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(474);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(474);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '0')
        ADVANCE(284);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 477:
      if (lookahead == 'n')
        SKIP(473);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == 'w')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(479);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(479);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(206);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == 'w')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 487:
      if (lookahead == 'n')
        SKIP(478);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'h')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(496);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(392);
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
        SKIP(493);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(494);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(496);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(392);
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
        SKIP(493);
      END_STATE();
    case 497:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(497);
      END_STATE();
    case 498:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      if (lookahead == '\n')
        ADVANCE(498);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(497);
      END_STATE();
    case 501:
      if (lookahead == 'n')
        SKIP(497);
      END_STATE();
    case 502:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(505);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '\\')
        SKIP(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 503:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(172);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(503);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(503);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(505);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ':')
        ADVANCE(188);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '\\')
        SKIP(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 506:
      if (lookahead == 'n')
        SKIP(502);
      END_STATE();
    case 507:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(560);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == 'A')
        ADVANCE(561);
      if (lookahead == 'B')
        ADVANCE(564);
      if (lookahead == 'C')
        ADVANCE(568);
      if (lookahead == 'D')
        ADVANCE(572);
      if (lookahead == 'E')
        ADVANCE(582);
      if (lookahead == 'F')
        ADVANCE(593);
      if (lookahead == 'G')
        ADVANCE(596);
      if (lookahead == 'H')
        ADVANCE(597);
      if (lookahead == 'L')
        ADVANCE(598);
      if (lookahead == 'N')
        ADVANCE(599);
      if (lookahead == 'O')
        ADVANCE(600);
      if (lookahead == 'R')
        ADVANCE(601);
      if (lookahead == 'S')
        ADVANCE(602);
      if (lookahead == 'U')
        ADVANCE(603);
      if (lookahead == 'V')
        ADVANCE(604);
      if (lookahead == 'X')
        ADVANCE(605);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(606);
      if (lookahead == 'b')
        ADVANCE(607);
      if (lookahead == 'f')
        ADVANCE(608);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(609);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(431);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == 'A')
        ADVANCE(509);
      if (lookahead == 'B')
        ADVANCE(512);
      if (lookahead == 'C')
        ADVANCE(516);
      if (lookahead == 'D')
        ADVANCE(520);
      if (lookahead == 'E')
        ADVANCE(530);
      if (lookahead == 'F')
        ADVANCE(541);
      if (lookahead == 'G')
        ADVANCE(544);
      if (lookahead == 'H')
        ADVANCE(545);
      if (lookahead == 'L')
        ADVANCE(546);
      if (lookahead == 'N')
        ADVANCE(547);
      if (lookahead == 'O')
        ADVANCE(548);
      if (lookahead == 'R')
        ADVANCE(549);
      if (lookahead == 'S')
        ADVANCE(550);
      if (lookahead == 'U')
        ADVANCE(551);
      if (lookahead == 'V')
        ADVANCE(552);
      if (lookahead == 'X')
        ADVANCE(553);
      if (lookahead == '\\')
        ADVANCE(554);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(555);
      if (lookahead == 'b')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(557);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(558);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(428);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(510);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(513);
      if (lookahead == 'S')
        ADVANCE(515);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(514);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(517);
      if (lookahead == 'R')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(521);
      if (lookahead == 'E')
        ADVANCE(526);
      if (lookahead == 'L')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(522);
      if (lookahead == '2')
        ADVANCE(523);
      if (lookahead == '3')
        ADVANCE(524);
      if (lookahead == '4')
        ADVANCE(525);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(527);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(529);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(531);
      if (lookahead == 'N')
        ADVANCE(532);
      if (lookahead == 'O')
        ADVANCE(534);
      if (lookahead == 'S')
        ADVANCE(536);
      if (lookahead == 'T')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(535);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(537);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(539);
      if (lookahead == 'X')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(542);
      if (lookahead == 'S')
        ADVANCE(543);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
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
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(560);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == 'A')
        ADVANCE(561);
      if (lookahead == 'B')
        ADVANCE(564);
      if (lookahead == 'C')
        ADVANCE(568);
      if (lookahead == 'D')
        ADVANCE(572);
      if (lookahead == 'E')
        ADVANCE(582);
      if (lookahead == 'F')
        ADVANCE(593);
      if (lookahead == 'G')
        ADVANCE(596);
      if (lookahead == 'H')
        ADVANCE(597);
      if (lookahead == 'L')
        ADVANCE(598);
      if (lookahead == 'N')
        ADVANCE(599);
      if (lookahead == 'O')
        ADVANCE(600);
      if (lookahead == 'R')
        ADVANCE(601);
      if (lookahead == 'S')
        ADVANCE(602);
      if (lookahead == 'U')
        ADVANCE(603);
      if (lookahead == 'V')
        ADVANCE(604);
      if (lookahead == 'X')
        ADVANCE(605);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(606);
      if (lookahead == 'b')
        ADVANCE(607);
      if (lookahead == 'f')
        ADVANCE(608);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(609);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(431);
      END_STATE();
    case 561:
      if (lookahead == 'C')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 'K')
        ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 564:
      if (lookahead == 'E')
        ADVANCE(565);
      if (lookahead == 'S')
        ADVANCE(567);
      END_STATE();
    case 565:
      if (lookahead == 'L')
        ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 568:
      if (lookahead == 'A')
        ADVANCE(569);
      if (lookahead == 'R')
        ADVANCE(571);
      END_STATE();
    case 569:
      if (lookahead == 'N')
        ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 572:
      if (lookahead == 'C')
        ADVANCE(573);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'L')
        ADVANCE(580);
      END_STATE();
    case 573:
      if (lookahead == '1')
        ADVANCE(574);
      if (lookahead == '2')
        ADVANCE(575);
      if (lookahead == '3')
        ADVANCE(576);
      if (lookahead == '4')
        ADVANCE(577);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 578:
      if (lookahead == 'L')
        ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 580:
      if (lookahead == 'E')
        ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 582:
      if (lookahead == 'M')
        ADVANCE(583);
      if (lookahead == 'N')
        ADVANCE(584);
      if (lookahead == 'O')
        ADVANCE(586);
      if (lookahead == 'S')
        ADVANCE(588);
      if (lookahead == 'T')
        ADVANCE(590);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 584:
      if (lookahead == 'Q')
        ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 586:
      if (lookahead == 'T')
        ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 588:
      if (lookahead == 'C')
        ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 590:
      if (lookahead == 'B')
        ADVANCE(591);
      if (lookahead == 'X')
        ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 593:
      if (lookahead == 'F')
        ADVANCE(594);
      if (lookahead == 'S')
        ADVANCE(595);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 596:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 597:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 598:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 599:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 601:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 602:
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
    case 603:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 604:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 611:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(624);
      if (lookahead == 'B')
        ADVANCE(625);
      if (lookahead == 'C')
        ADVANCE(626);
      if (lookahead == 'D')
        ADVANCE(627);
      if (lookahead == 'E')
        ADVANCE(628);
      if (lookahead == 'F')
        ADVANCE(629);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(600);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(605);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(606);
      if (lookahead == 'b')
        ADVANCE(607);
      if (lookahead == 'f')
        ADVANCE(608);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(609);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(610);
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
        ADVANCE(431);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(613);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == ' ')
        ADVANCE(615);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(616);
      if (lookahead == 'B')
        ADVANCE(617);
      if (lookahead == 'C')
        ADVANCE(618);
      if (lookahead == 'D')
        ADVANCE(619);
      if (lookahead == 'E')
        ADVANCE(620);
      if (lookahead == 'F')
        ADVANCE(621);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(548);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(553);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(555);
      if (lookahead == 'b')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(557);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(558);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(559);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(613);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == ' ')
        ADVANCE(615);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(616);
      if (lookahead == 'B')
        ADVANCE(617);
      if (lookahead == 'C')
        ADVANCE(618);
      if (lookahead == 'D')
        ADVANCE(619);
      if (lookahead == 'E')
        ADVANCE(620);
      if (lookahead == 'F')
        ADVANCE(621);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(548);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(553);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(555);
      if (lookahead == 'b')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(557);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(558);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(559);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 614:
      if (lookahead == '\t')
        ADVANCE(613);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == ' ')
        ADVANCE(615);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(616);
      if (lookahead == 'B')
        ADVANCE(617);
      if (lookahead == 'C')
        ADVANCE(618);
      if (lookahead == 'D')
        ADVANCE(619);
      if (lookahead == 'E')
        ADVANCE(620);
      if (lookahead == 'F')
        ADVANCE(621);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(548);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(553);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(555);
      if (lookahead == 'b')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(557);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(558);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(559);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(613);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == ' ')
        ADVANCE(615);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(616);
      if (lookahead == 'B')
        ADVANCE(617);
      if (lookahead == 'C')
        ADVANCE(618);
      if (lookahead == 'D')
        ADVANCE(619);
      if (lookahead == 'E')
        ADVANCE(620);
      if (lookahead == 'F')
        ADVANCE(621);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(548);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(553);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(555);
      if (lookahead == 'b')
        ADVANCE(556);
      if (lookahead == 'f')
        ADVANCE(557);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(558);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(559);
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
        ADVANCE(428);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(510);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(513);
      if (lookahead == 'S')
        ADVANCE(515);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(517);
      if (lookahead == 'R')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(521);
      if (lookahead == 'E')
        ADVANCE(526);
      if (lookahead == 'L')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(531);
      if (lookahead == 'N')
        ADVANCE(532);
      if (lookahead == 'O')
        ADVANCE(534);
      if (lookahead == 'S')
        ADVANCE(536);
      if (lookahead == 'T')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(542);
      if (lookahead == 'S')
        ADVANCE(543);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(624);
      if (lookahead == 'B')
        ADVANCE(625);
      if (lookahead == 'C')
        ADVANCE(626);
      if (lookahead == 'D')
        ADVANCE(627);
      if (lookahead == 'E')
        ADVANCE(628);
      if (lookahead == 'F')
        ADVANCE(629);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(600);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(605);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(606);
      if (lookahead == 'b')
        ADVANCE(607);
      if (lookahead == 'f')
        ADVANCE(608);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(609);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(610);
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
        ADVANCE(431);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(562);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(565);
      if (lookahead == 'S')
        ADVANCE(567);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(569);
      if (lookahead == 'R')
        ADVANCE(571);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(573);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'L')
        ADVANCE(580);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(583);
      if (lookahead == 'N')
        ADVANCE(584);
      if (lookahead == 'O')
        ADVANCE(586);
      if (lookahead == 'S')
        ADVANCE(588);
      if (lookahead == 'T')
        ADVANCE(590);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(594);
      if (lookahead == 'S')
        ADVANCE(595);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(633);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(634);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 631:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(632);
      if (lookahead == 'd')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(634);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 636:
      if (lookahead == '\n')
        ADVANCE(636);
      if (lookahead == '\r')
        ADVANCE(636);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(637);
      if (lookahead == 'd')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(636);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(364);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(639);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
      END_STATE();
    case 641:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(641);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(642);
      if (lookahead == 'd')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(364);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(377);
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
      if (lookahead == '(')
        ADVANCE(366);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
      if (lookahead == '(')
        ADVANCE(366);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 651:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(651);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(652);
      if (lookahead == 'd')
        ADVANCE(356);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(406);
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
        ADVANCE(396);
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
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(406);
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
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      END_STATE();
    case 661:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(661);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(662);
      if (lookahead == 'd')
        ADVANCE(396);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(661);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(664);
      if (lookahead == 'd')
        ADVANCE(406);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      END_STATE();
    case 664:
      if (lookahead == 'n')
        SKIP(660);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 666:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(666);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(667);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '\n')
        ADVANCE(666);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(665);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 669:
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(673);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(674);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(675);
      END_STATE();
    case 670:
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(670);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(673);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(674);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(675);
      END_STATE();
    case 674:
      if (lookahead == 'n')
        SKIP(669);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 676:
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(680);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(681);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(676);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(682);
      END_STATE();
    case 677:
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(677);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '\\')
        ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(679);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(680);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '\\')
        SKIP(681);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(676);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(682);
      END_STATE();
    case 681:
      if (lookahead == 'n')
        SKIP(676);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 683:
      if (lookahead == '\n')
        ADVANCE(684);
      if (lookahead == '\r')
        ADVANCE(687);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(689);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(683);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 684:
      if (lookahead == '\n')
        ADVANCE(684);
      if (lookahead == '\r')
        ADVANCE(684);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(685);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(684);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(684);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '\n')
        ADVANCE(684);
      if (lookahead == '\r')
        ADVANCE(687);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(689);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(683);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 689:
      if (lookahead == 'n')
        SKIP(683);
      END_STATE();
    case 690:
      if (lookahead == '\n')
        ADVANCE(691);
      if (lookahead == '\r')
        ADVANCE(693);
      if (lookahead == '-')
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(694);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(690);
      END_STATE();
    case 691:
      if (lookahead == '\n')
        ADVANCE(691);
      if (lookahead == '\r')
        ADVANCE(691);
      if (lookahead == '-')
        ADVANCE(685);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(691);
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
      if (lookahead == '-')
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(694);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(690);
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
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(699);
      if (lookahead == 'h')
        ADVANCE(455);
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
        ADVANCE(445);
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
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(699);
      if (lookahead == 'h')
        ADVANCE(455);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 701:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(701);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(218);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(224);
      if (lookahead == '\\')
        ADVANCE(702);
      if (lookahead == 'd')
        ADVANCE(356);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(701);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(230);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(241);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(706);
      if (lookahead == '-')
        ADVANCE(685);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(706);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 709:
      if (lookahead == 'n')
        SKIP(705);
      END_STATE();
    case 710:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(716);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(431);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(380);
      if (lookahead == '.')
        ADVANCE(381);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(354);
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
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(428);
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
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(716);
      if (lookahead == ' ')
        ADVANCE(430);
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
        ADVANCE(387);
      if (lookahead == '.')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(367);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(392);
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
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(431);
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
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
      END_STATE();
    case 718:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '-')
        ADVANCE(685);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(718);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
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
        ADVANCE(688);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(210);
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
  [2] = {.lex_state = 202},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 211, .external_lex_state = 2},
  [6] = {.lex_state = 216},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 242, .external_lex_state = 3},
  [9] = {.lex_state = 323},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 169},
  [12] = {.lex_state = 169},
  [13] = {.lex_state = 169},
  [14] = {.lex_state = 169},
  [15] = {.lex_state = 211, .external_lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 328},
  [18] = {.lex_state = 211, .external_lex_state = 2},
  [19] = {.lex_state = 351},
  [20] = {.lex_state = 378},
  [21] = {.lex_state = 351},
  [22] = {.lex_state = 393},
  [23] = {.lex_state = 393},
  [24] = {.lex_state = 414, .external_lex_state = 4},
  [25] = {.lex_state = 419, .external_lex_state = 4},
  [26] = {.lex_state = 424},
  [27] = {.lex_state = 432},
  [28] = {.lex_state = 419, .external_lex_state = 4},
  [29] = {.lex_state = 419, .external_lex_state = 4},
  [30] = {.lex_state = 419, .external_lex_state = 4},
  [31] = {.lex_state = 419, .external_lex_state = 4},
  [32] = {.lex_state = 242, .external_lex_state = 3},
  [33] = {.lex_state = 414},
  [34] = {.lex_state = 419, .external_lex_state = 4},
  [35] = {.lex_state = 323},
  [36] = {.lex_state = 216},
  [37] = {.lex_state = 169},
  [38] = {.lex_state = 169},
  [39] = {.lex_state = 216},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 216},
  [42] = {.lex_state = 440, .external_lex_state = 4},
  [43] = {.lex_state = 461, .external_lex_state = 4},
  [44] = {.lex_state = 466, .external_lex_state = 3},
  [45] = {.lex_state = 473},
  [46] = {.lex_state = 419, .external_lex_state = 4},
  [47] = {.lex_state = 393},
  [48] = {.lex_state = 478},
  [49] = {.lex_state = 393},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 378},
  [52] = {.lex_state = 216},
  [53] = {.lex_state = 493, .external_lex_state = 4},
  [54] = {.lex_state = 493, .external_lex_state = 4},
  [55] = {.lex_state = 378},
  [56] = {.lex_state = 497, .external_lex_state = 4},
  [57] = {.lex_state = 497, .external_lex_state = 4},
  [58] = {.lex_state = 378},
  [59] = {.lex_state = 493, .external_lex_state = 4},
  [60] = {.lex_state = 493, .external_lex_state = 4},
  [61] = {.lex_state = 351, .external_lex_state = 4},
  [62] = {.lex_state = 393},
  [63] = {.lex_state = 393, .external_lex_state = 4},
  [64] = {.lex_state = 502},
  [65] = {.lex_state = 351},
  [66] = {.lex_state = 351},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 432},
  [75] = {.lex_state = 432},
  [76] = {.lex_state = 432},
  [77] = {.lex_state = 419, .external_lex_state = 4},
  [78] = {.lex_state = 432},
  [79] = {.lex_state = 432},
  [80] = {.lex_state = 432},
  [81] = {.lex_state = 611},
  [82] = {.lex_state = 432},
  [83] = {.lex_state = 432},
  [84] = {.lex_state = 242, .external_lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 419, .external_lex_state = 4},
  [87] = {.lex_state = 351},
  [88] = {.lex_state = 502},
  [89] = {.lex_state = 323},
  [90] = {.lex_state = 419, .external_lex_state = 4},
  [91] = {.lex_state = 169},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 169},
  [95] = {.lex_state = 169},
  [96] = {.lex_state = 461, .external_lex_state = 4},
  [97] = {.lex_state = 216},
  [98] = {.lex_state = 216},
  [99] = {.lex_state = 169},
  [100] = {.lex_state = 419, .external_lex_state = 4},
  [101] = {.lex_state = 419, .external_lex_state = 4},
  [102] = {.lex_state = 419, .external_lex_state = 4},
  [103] = {.lex_state = 466, .external_lex_state = 3},
  [104] = {.lex_state = 466, .external_lex_state = 3},
  [105] = {.lex_state = 419, .external_lex_state = 4},
  [106] = {.lex_state = 473},
  [107] = {.lex_state = 473},
  [108] = {.lex_state = 202},
  [109] = {.lex_state = 169},
  [110] = {.lex_state = 211, .external_lex_state = 2},
  [111] = {.lex_state = 202},
  [112] = {.lex_state = 478},
  [113] = {.lex_state = 478},
  [114] = {.lex_state = 478},
  [115] = {.lex_state = 393},
  [116] = {.lex_state = 493, .external_lex_state = 4},
  [117] = {.lex_state = 493, .external_lex_state = 4},
  [118] = {.lex_state = 169},
  [119] = {.lex_state = 497, .external_lex_state = 4},
  [120] = {.lex_state = 493, .external_lex_state = 4},
  [121] = {.lex_state = 378},
  [122] = {.lex_state = 497, .external_lex_state = 4},
  [123] = {.lex_state = 497, .external_lex_state = 4},
  [124] = {.lex_state = 497, .external_lex_state = 4},
  [125] = {.lex_state = 493, .external_lex_state = 4},
  [126] = {.lex_state = 630, .external_lex_state = 4},
  [127] = {.lex_state = 635, .external_lex_state = 4},
  [128] = {.lex_state = 635, .external_lex_state = 4},
  [129] = {.lex_state = 393, .external_lex_state = 4},
  [130] = {.lex_state = 640, .external_lex_state = 4},
  [131] = {.lex_state = 645},
  [132] = {.lex_state = 650, .external_lex_state = 4},
  [133] = {.lex_state = 655, .external_lex_state = 4},
  [134] = {.lex_state = 660, .external_lex_state = 4},
  [135] = {.lex_state = 419, .external_lex_state = 4},
  [136] = {.lex_state = 502},
  [137] = {.lex_state = 502},
  [138] = {.lex_state = 393},
  [139] = {.lex_state = 393},
  [140] = {.lex_state = 419, .external_lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 665},
  [144] = {.lex_state = 669},
  [145] = {.lex_state = 676},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 432},
  [148] = {.lex_state = 432},
  [149] = {.lex_state = 665},
  [150] = {.lex_state = 669},
  [151] = {.lex_state = 676},
  [152] = {.lex_state = 432},
  [153] = {.lex_state = 432},
  [154] = {.lex_state = 419, .external_lex_state = 4},
  [155] = {.lex_state = 242, .external_lex_state = 3},
  [156] = {.lex_state = 683, .external_lex_state = 4},
  [157] = {.lex_state = 419, .external_lex_state = 4},
  [158] = {.lex_state = 419, .external_lex_state = 4},
  [159] = {.lex_state = 393},
  [160] = {.lex_state = 690, .external_lex_state = 4},
  [161] = {.lex_state = 323},
  [162] = {.lex_state = 169},
  [163] = {.lex_state = 169},
  [164] = {.lex_state = 216},
  [165] = {.lex_state = 169},
  [166] = {.lex_state = 216},
  [167] = {.lex_state = 419, .external_lex_state = 4},
  [168] = {.lex_state = 419, .external_lex_state = 4},
  [169] = {.lex_state = 169},
  [170] = {.lex_state = 695, .external_lex_state = 4},
  [171] = {.lex_state = 216},
  [172] = {.lex_state = 466, .external_lex_state = 3},
  [173] = {.lex_state = 419, .external_lex_state = 4},
  [174] = {.lex_state = 466, .external_lex_state = 3},
  [175] = {.lex_state = 473},
  [176] = {.lex_state = 473},
  [177] = {.lex_state = 169},
  [178] = {.lex_state = 393},
  [179] = {.lex_state = 169},
  [180] = {.lex_state = 169},
  [181] = {.lex_state = 242, .external_lex_state = 3},
  [182] = {.lex_state = 323},
  [183] = {.lex_state = 419, .external_lex_state = 4},
  [184] = {.lex_state = 202},
  [185] = {.lex_state = 211, .external_lex_state = 2},
  [186] = {.lex_state = 478},
  [187] = {.lex_state = 478},
  [188] = {.lex_state = 478},
  [189] = {.lex_state = 497, .external_lex_state = 4},
  [190] = {.lex_state = 493, .external_lex_state = 4},
  [191] = {.lex_state = 497, .external_lex_state = 4},
  [192] = {.lex_state = 497, .external_lex_state = 4},
  [193] = {.lex_state = 497, .external_lex_state = 4},
  [194] = {.lex_state = 378},
  [195] = {.lex_state = 497, .external_lex_state = 4},
  [196] = {.lex_state = 635, .external_lex_state = 4},
  [197] = {.lex_state = 635, .external_lex_state = 4},
  [198] = {.lex_state = 640, .external_lex_state = 4},
  [199] = {.lex_state = 655, .external_lex_state = 4},
  [200] = {.lex_state = 419, .external_lex_state = 4},
  [201] = {.lex_state = 216},
  [202] = {.lex_state = 419, .external_lex_state = 4},
  [203] = {.lex_state = 202},
  [204] = {.lex_state = 216},
  [205] = {.lex_state = 700, .external_lex_state = 4},
  [206] = {.lex_state = 660, .external_lex_state = 4},
  [207] = {.lex_state = 700, .external_lex_state = 4},
  [208] = {.lex_state = 700, .external_lex_state = 4},
  [209] = {.lex_state = 393},
  [210] = {.lex_state = 660, .external_lex_state = 4},
  [211] = {.lex_state = 216},
  [212] = {.lex_state = 655, .external_lex_state = 4},
  [213] = {.lex_state = 705, .external_lex_state = 4},
  [214] = {.lex_state = 419, .external_lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 669},
  [218] = {.lex_state = 669},
  [219] = {.lex_state = 676},
  [220] = {.lex_state = 676},
  [221] = {.lex_state = 432},
  [222] = {.lex_state = 432},
  [223] = {.lex_state = 432},
  [224] = {.lex_state = 432},
  [225] = {.lex_state = 710},
  [226] = {.lex_state = 710},
  [227] = {.lex_state = 717, .external_lex_state = 4},
  [228] = {.lex_state = 705, .external_lex_state = 4},
  [229] = {.lex_state = 419, .external_lex_state = 4},
  [230] = {.lex_state = 393},
  [231] = {.lex_state = 169},
  [232] = {.lex_state = 216},
  [233] = {.lex_state = 169},
  [234] = {.lex_state = 695, .external_lex_state = 4},
  [235] = {.lex_state = 216},
  [236] = {.lex_state = 216},
  [237] = {.lex_state = 419, .external_lex_state = 4},
  [238] = {.lex_state = 169},
  [239] = {.lex_state = 419, .external_lex_state = 4},
  [240] = {.lex_state = 169},
  [241] = {.lex_state = 169},
  [242] = {.lex_state = 393},
  [243] = {.lex_state = 393},
  [244] = {.lex_state = 169},
  [245] = {.lex_state = 419, .external_lex_state = 4},
  [246] = {.lex_state = 242, .external_lex_state = 3},
  [247] = {.lex_state = 323},
  [248] = {.lex_state = 169},
  [249] = {.lex_state = 419, .external_lex_state = 4},
  [250] = {.lex_state = 211, .external_lex_state = 2},
  [251] = {.lex_state = 497, .external_lex_state = 4},
  [252] = {.lex_state = 497, .external_lex_state = 4},
  [253] = {.lex_state = 655, .external_lex_state = 4},
  [254] = {.lex_state = 419, .external_lex_state = 4},
  [255] = {.lex_state = 169},
  [256] = {.lex_state = 169},
  [257] = {.lex_state = 169},
  [258] = {.lex_state = 700, .external_lex_state = 4},
  [259] = {.lex_state = 700, .external_lex_state = 4},
  [260] = {.lex_state = 660, .external_lex_state = 4},
  [261] = {.lex_state = 393},
  [262] = {.lex_state = 655, .external_lex_state = 4},
  [263] = {.lex_state = 419, .external_lex_state = 4},
  [264] = {.lex_state = 705, .external_lex_state = 4},
  [265] = {.lex_state = 669},
  [266] = {.lex_state = 676},
  [267] = {.lex_state = 432},
  [268] = {.lex_state = 710},
  [269] = {.lex_state = 705, .external_lex_state = 4},
  [270] = {.lex_state = 419, .external_lex_state = 4},
  [271] = {.lex_state = 169},
  [272] = {.lex_state = 419, .external_lex_state = 4},
  [273] = {.lex_state = 169},
  [274] = {.lex_state = 169},
  [275] = {.lex_state = 169},
  [276] = {.lex_state = 216},
  [277] = {.lex_state = 419, .external_lex_state = 4},
  [278] = {.lex_state = 216},
  [279] = {.lex_state = 169},
  [280] = {.lex_state = 169},
  [281] = {.lex_state = 393},
  [282] = {.lex_state = 419, .external_lex_state = 4},
  [283] = {.lex_state = 419, .external_lex_state = 4},
  [284] = {.lex_state = 419, .external_lex_state = 4},
  [285] = {.lex_state = 419, .external_lex_state = 4},
  [286] = {.lex_state = 169},
  [287] = {.lex_state = 202},
  [288] = {.lex_state = 216},
  [289] = {.lex_state = 169},
  [290] = {.lex_state = 660, .external_lex_state = 4},
  [291] = {.lex_state = 202},
  [292] = {.lex_state = 169},
  [293] = {.lex_state = 660, .external_lex_state = 4},
  [294] = {.lex_state = 169},
  [295] = {.lex_state = 169},
  [296] = {.lex_state = 216},
  [297] = {.lex_state = 169},
  [298] = {.lex_state = 169},
  [299] = {.lex_state = 169},
  [300] = {.lex_state = 419, .external_lex_state = 4},
  [301] = {.lex_state = 419, .external_lex_state = 4},
  [302] = {.lex_state = 169},
  [303] = {.lex_state = 216},
  [304] = {.lex_state = 169},
  [305] = {.lex_state = 202},
  [306] = {.lex_state = 216},
  [307] = {.lex_state = 169},
  [308] = {.lex_state = 660, .external_lex_state = 4},
  [309] = {.lex_state = 202},
  [310] = {.lex_state = 419, .external_lex_state = 4},
  [311] = {.lex_state = 169},
  [312] = {.lex_state = 169},
  [313] = {.lex_state = 169},
  [314] = {.lex_state = 169},
  [315] = {.lex_state = 216},
  [316] = {.lex_state = 169},
  [317] = {.lex_state = 169},
  [318] = {.lex_state = 169},
  [319] = {.lex_state = 169},
  [320] = {.lex_state = 169},
  [321] = {.lex_state = 419, .external_lex_state = 4},
  [322] = {.lex_state = 169},
  [323] = {.lex_state = 169},
  [324] = {.lex_state = 169},
  [325] = {.lex_state = 169},
  [326] = {.lex_state = 169},
  [327] = {.lex_state = 169},
  [328] = {.lex_state = 419, .external_lex_state = 4},
  [329] = {.lex_state = 169},
  [330] = {.lex_state = 169},
  [331] = {.lex_state = 169},
  [332] = {.lex_state = 169},
  [333] = {.lex_state = 419, .external_lex_state = 4},
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
    [ts_external_token__layout_close_brace] = true,
  },
  [4] = {
    [ts_external_token__layout_semicolon] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
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
    [sym_module] = STATE(3),
    [anon_sym_module] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(14),
    [sym_comment] = ACTIONS(12),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(16),
    [sym_comment] = ACTIONS(12),
  },
  [4] = {
    [sym_module_exports] = STATE(7),
    [anon_sym_where] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(20),
    [sym_comment] = ACTIONS(12),
  },
  [5] = {
    [sym_declarations] = STATE(10),
    [sym__layout_open_brace] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(12),
  },
  [6] = {
    [sym_export] = STATE(13),
    [sym__identifier] = STATE(14),
    [anon_sym_RPAREN] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [7] = {
    [anon_sym_where] = ACTIONS(32),
    [sym_comment] = ACTIONS(12),
  },
  [8] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_declarations_repeat1] = STATE(32),
    [aux_sym_type_class_repeat1] = STATE(33),
    [sym__layout_close_brace] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [9] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(34),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_declarations_repeat1] = STATE(35),
    [aux_sym_type_class_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(12),
  },
  [11] = {
    [anon_sym_where] = ACTIONS(64),
    [sym_comment] = ACTIONS(12),
  },
  [12] = {
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [sym_comment] = ACTIONS(12),
  },
  [13] = {
    [aux_sym_module_exports_repeat1] = STATE(38),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(70),
    [sym_comment] = ACTIONS(12),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_comment] = ACTIONS(12),
  },
  [15] = {
    [sym_declarations] = STATE(40),
    [sym__layout_open_brace] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(12),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(12),
  },
  [17] = {
    [sym__identifier] = STATE(43),
    [anon_sym_qualified] = ACTIONS(78),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [18] = {
    [sym_statement_list] = STATE(46),
    [sym__layout_open_brace] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(84),
    [sym_comment] = ACTIONS(12),
  },
  [19] = {
    [sym_context] = STATE(49),
    [sym_class] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(12),
  },
  [20] = {
    [sym__op] = STATE(56),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym_integer] = STATE(58),
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
    [sym__integer_literal] = ACTIONS(100),
    [sym__octal_literal] = ACTIONS(100),
    [sym__hexidecimal_literal] = ACTIONS(100),
  },
  [21] = {
    [sym_context] = STATE(62),
    [sym_class] = STATE(50),
    [sym_simple_type] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(12),
  },
  [22] = {
    [sym_simple_type] = STATE(65),
    [sym_constructor_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(12),
  },
  [23] = {
    [sym_simple_type] = STATE(66),
    [sym_constructor_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(12),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_COLON_COLON] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(12),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(114),
    [sym_comment] = ACTIONS(12),
  },
  [26] = {
    [sym__graphic] = STATE(69),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_1] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym__space] = ACTIONS(120),
  },
  [27] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(83),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(132),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(140),
    [anon_sym__] = ACTIONS(140),
    [sym__ascii_large] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_1] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [sym__space] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
    [sym__tab] = ACTIONS(146),
    [sym__vertical_tab] = ACTIONS(146),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_comment] = ACTIONS(12),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [sym_comment] = ACTIONS(12),
  },
  [30] = {
    [sym__layout_semicolon] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(12),
  },
  [31] = {
    [sym__layout_semicolon] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(108),
    [sym_comment] = ACTIONS(12),
  },
  [32] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(86),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_type_class_repeat1] = STATE(33),
    [sym__layout_close_brace] = ACTIONS(160),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [33] = {
    [anon_sym_COLON_COLON] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(12),
  },
  [34] = {
    [sym__layout_semicolon] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_comment] = ACTIONS(12),
  },
  [35] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(90),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_type_class_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [36] = {
    [sym_export] = STATE(91),
    [sym__identifier] = STATE(14),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [37] = {
    [anon_sym_where] = ACTIONS(172),
    [sym_comment] = ACTIONS(12),
  },
  [38] = {
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(12),
  },
  [39] = {
    [sym__identifier] = STATE(95),
    [anon_sym_DOT_DOT] = ACTIONS(178),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_comment] = ACTIONS(12),
  },
  [41] = {
    [sym__identifier] = STATE(96),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [42] = {
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_as] = ACTIONS(66),
    [anon_sym_hiding] = ACTIONS(66),
    [anon_sym_deriving] = ACTIONS(66),
    [sym_comment] = ACTIONS(12),
  },
  [43] = {
    [sym_import_specification] = STATE(100),
    [sym__layout_semicolon] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_as] = ACTIONS(192),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(12),
  },
  [44] = {
    [sym__expression] = STATE(102),
    [sym_do_expression] = STATE(31),
    [sym__statement] = STATE(103),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_statement_list_repeat1] = STATE(104),
    [sym__layout_close_brace] = ACTIONS(196),
    [anon_sym_do] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(198),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [45] = {
    [sym__expression] = STATE(105),
    [sym_do_expression] = STATE(31),
    [sym__statement] = STATE(106),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_statement_list_repeat1] = STATE(107),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_do] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(198),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(204),
    [sym_comment] = ACTIONS(12),
  },
  [47] = {
    [sym_class] = STATE(109),
    [sym_constructor_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(12),
  },
  [48] = {
    [aux_sym_type_class_repeat1] = STATE(113),
    [anon_sym_where] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(212),
    [sym_comment] = ACTIONS(12),
  },
  [49] = {
    [sym_constructor_identifier] = ACTIONS(214),
    [sym_comment] = ACTIONS(12),
  },
  [50] = {
    [anon_sym_EQ_GT] = ACTIONS(216),
    [sym_comment] = ACTIONS(12),
  },
  [51] = {
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(117),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [52] = {
    [sym__identifier] = STATE(118),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [53] = {
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(120),
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [54] = {
    [sym__layout_semicolon] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [sym_comment] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(228),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_QMARK] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(228),
  },
  [55] = {
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(230),
  },
  [56] = {
    [aux_sym_fixity_repeat1] = STATE(122),
    [sym__layout_semicolon] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(236),
    [sym_comment] = ACTIONS(12),
  },
  [57] = {
    [sym__layout_semicolon] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_comment] = ACTIONS(12),
  },
  [58] = {
    [sym__op] = STATE(123),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [59] = {
    [sym__layout_semicolon] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(244),
    [sym_comment] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [anon_sym_PERCENT] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_1] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(244),
    [anon_sym_GT] = ACTIONS(244),
    [anon_sym_QMARK] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(244),
  },
  [60] = {
    [sym__symbol] = STATE(125),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [61] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_deriving] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(12),
  },
  [62] = {
    [sym_simple_type] = STATE(129),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(12),
  },
  [63] = {
    [sym_constructors] = STATE(133),
    [sym_constructor] = STATE(134),
    [sym_deriving] = STATE(135),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [64] = {
    [aux_sym_type_class_repeat1] = STATE(137),
    [anon_sym_EQ] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(12),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(274),
    [sym_comment] = ACTIONS(12),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(276),
    [sym_comment] = ACTIONS(12),
  },
  [67] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(278),
  },
  [68] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(280),
  },
  [69] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(282),
  },
  [70] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [71] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(286),
  },
  [72] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(288),
  },
  [73] = {
    [sym__char_escape] = STATE(142),
    [sym__ascii] = STATE(142),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(292),
    [anon_sym_AMP] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_BSLASH] = ACTIONS(290),
    [anon_sym_x] = ACTIONS(296),
    [anon_sym_X] = ACTIONS(296),
    [anon_sym_o] = ACTIONS(298),
    [anon_sym_O] = ACTIONS(298),
    [anon_sym_a] = ACTIONS(290),
    [anon_sym_b] = ACTIONS(290),
    [anon_sym_f] = ACTIONS(290),
    [anon_sym_n] = ACTIONS(290),
    [anon_sym_r] = ACTIONS(290),
    [anon_sym_t] = ACTIONS(290),
    [anon_sym_v] = ACTIONS(290),
    [anon_sym_NUL] = ACTIONS(300),
    [anon_sym_SOH] = ACTIONS(300),
    [anon_sym_STX] = ACTIONS(300),
    [anon_sym_ETX] = ACTIONS(300),
    [anon_sym_EOT] = ACTIONS(300),
    [anon_sym_ENQ] = ACTIONS(300),
    [anon_sym_ACK] = ACTIONS(300),
    [anon_sym_BEL] = ACTIONS(300),
    [anon_sym_BS] = ACTIONS(300),
    [anon_sym_HT] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(300),
    [anon_sym_VT] = ACTIONS(300),
    [anon_sym_FF] = ACTIONS(300),
    [anon_sym_CR] = ACTIONS(300),
    [anon_sym_SO] = ACTIONS(300),
    [anon_sym_SI] = ACTIONS(300),
    [anon_sym_DLE] = ACTIONS(300),
    [anon_sym_DC1] = ACTIONS(300),
    [anon_sym_DC2] = ACTIONS(300),
    [anon_sym_DC3] = ACTIONS(300),
    [anon_sym_DC4] = ACTIONS(300),
    [anon_sym_NAK] = ACTIONS(300),
    [anon_sym_SYN] = ACTIONS(300),
    [anon_sym_ETB] = ACTIONS(300),
    [anon_sym_CAN] = ACTIONS(300),
    [anon_sym_EM] = ACTIONS(300),
    [anon_sym_SUB] = ACTIONS(300),
    [anon_sym_ESC] = ACTIONS(300),
    [anon_sym_FS] = ACTIONS(300),
    [anon_sym_GS] = ACTIONS(300),
    [anon_sym_RS] = ACTIONS(300),
    [anon_sym_US] = ACTIONS(300),
    [anon_sym_SP] = ACTIONS(300),
    [anon_sym_DEL] = ACTIONS(300),
  },
  [74] = {
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_BQUOTE] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_BANG] = ACTIONS(302),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [sym__ascii_large] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(302),
    [anon_sym_DOLLAR] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_1] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_QMARK] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(302),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym__space] = ACTIONS(302),
    [sym__newline] = ACTIONS(302),
    [sym__tab] = ACTIONS(302),
    [sym__vertical_tab] = ACTIONS(302),
  },
  [75] = {
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_BQUOTE] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(228),
    [anon_sym__] = ACTIONS(228),
    [sym__ascii_large] = ACTIONS(228),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(228),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_QMARK] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym__space] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [sym__tab] = ACTIONS(228),
    [sym__vertical_tab] = ACTIONS(228),
  },
  [76] = {
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(304),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(304),
    [anon_sym__] = ACTIONS(304),
    [sym__ascii_large] = ACTIONS(304),
    [anon_sym_POUND] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(304),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_1] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_GT] = ACTIONS(304),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_TILDE] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
    [sym__space] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
    [sym__tab] = ACTIONS(304),
    [sym__vertical_tab] = ACTIONS(304),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [sym_comment] = ACTIONS(12),
  },
  [78] = {
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
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
    [anon_sym_BSLASH] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym__space] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
    [sym__tab] = ACTIONS(310),
    [sym__vertical_tab] = ACTIONS(310),
  },
  [79] = {
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(312),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [sym__ascii_large] = ACTIONS(312),
    [anon_sym_POUND] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_1] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [sym__space] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
    [sym__tab] = ACTIONS(312),
    [sym__vertical_tab] = ACTIONS(312),
  },
  [80] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_BQUOTE] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(314),
    [anon_sym__] = ACTIONS(314),
    [sym__ascii_large] = ACTIONS(314),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_1] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_QMARK] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
    [sym__space] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
    [sym__tab] = ACTIONS(314),
    [sym__vertical_tab] = ACTIONS(314),
  },
  [81] = {
    [sym__char_escape] = STATE(148),
    [sym__ascii] = STATE(148),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_BQUOTE] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(228),
    [anon_sym__] = ACTIONS(228),
    [sym__ascii_large] = ACTIONS(228),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_QMARK] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym__space] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [sym__tab] = ACTIONS(228),
    [sym__vertical_tab] = ACTIONS(228),
    [anon_sym_x] = ACTIONS(322),
    [anon_sym_X] = ACTIONS(322),
    [anon_sym_o] = ACTIONS(324),
    [anon_sym_O] = ACTIONS(324),
    [anon_sym_a] = ACTIONS(316),
    [anon_sym_b] = ACTIONS(316),
    [anon_sym_f] = ACTIONS(316),
    [anon_sym_n] = ACTIONS(316),
    [anon_sym_r] = ACTIONS(316),
    [anon_sym_t] = ACTIONS(316),
    [anon_sym_v] = ACTIONS(316),
    [anon_sym_NUL] = ACTIONS(326),
    [anon_sym_SOH] = ACTIONS(326),
    [anon_sym_STX] = ACTIONS(326),
    [anon_sym_ETX] = ACTIONS(326),
    [anon_sym_EOT] = ACTIONS(326),
    [anon_sym_ENQ] = ACTIONS(326),
    [anon_sym_ACK] = ACTIONS(326),
    [anon_sym_BEL] = ACTIONS(326),
    [anon_sym_BS] = ACTIONS(326),
    [anon_sym_HT] = ACTIONS(326),
    [anon_sym_LF] = ACTIONS(326),
    [anon_sym_VT] = ACTIONS(326),
    [anon_sym_FF] = ACTIONS(326),
    [anon_sym_CR] = ACTIONS(326),
    [anon_sym_SO] = ACTIONS(326),
    [anon_sym_SI] = ACTIONS(326),
    [anon_sym_DLE] = ACTIONS(326),
    [anon_sym_DC1] = ACTIONS(326),
    [anon_sym_DC2] = ACTIONS(326),
    [anon_sym_DC3] = ACTIONS(326),
    [anon_sym_DC4] = ACTIONS(326),
    [anon_sym_NAK] = ACTIONS(326),
    [anon_sym_SYN] = ACTIONS(326),
    [anon_sym_ETB] = ACTIONS(326),
    [anon_sym_CAN] = ACTIONS(326),
    [anon_sym_EM] = ACTIONS(326),
    [anon_sym_SUB] = ACTIONS(326),
    [anon_sym_ESC] = ACTIONS(326),
    [anon_sym_FS] = ACTIONS(326),
    [anon_sym_GS] = ACTIONS(326),
    [anon_sym_RS] = ACTIONS(326),
    [anon_sym_US] = ACTIONS(326),
    [anon_sym_SP] = ACTIONS(326),
    [anon_sym_DEL] = ACTIONS(326),
  },
  [82] = {
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_BQUOTE] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
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
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym__space] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
    [sym__tab] = ACTIONS(328),
    [sym__vertical_tab] = ACTIONS(328),
  },
  [83] = {
    [sym__gap] = STATE(153),
    [sym__graphic] = STATE(153),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(153),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(132),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(140),
    [anon_sym__] = ACTIONS(140),
    [sym__ascii_large] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_1] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [sym__space] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
    [sym__tab] = ACTIONS(146),
    [sym__vertical_tab] = ACTIONS(146),
  },
  [84] = {
    [sym__layout_close_brace] = ACTIONS(334),
    [anon_sym_import] = ACTIONS(336),
    [anon_sym_do] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_infixl] = ACTIONS(336),
    [anon_sym_infixr] = ACTIONS(336),
    [anon_sym_infix] = ACTIONS(336),
    [anon_sym_data] = ACTIONS(336),
    [anon_sym_newtype] = ACTIONS(336),
    [anon_sym_type] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(12),
  },
  [86] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [sym_comment] = ACTIONS(12),
  },
  [87] = {
    [sym__type] = STATE(157),
    [sym_function_type] = STATE(158),
    [sym_context] = STATE(159),
    [sym_class] = STATE(50),
    [sym_simple_type] = STATE(160),
    [anon_sym_LPAREN] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(346),
    [sym_comment] = ACTIONS(12),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_COLON_COLON] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(12),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_import] = ACTIONS(336),
    [anon_sym_do] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_infixl] = ACTIONS(336),
    [anon_sym_infixr] = ACTIONS(336),
    [anon_sym_infix] = ACTIONS(336),
    [anon_sym_data] = ACTIONS(336),
    [anon_sym_newtype] = ACTIONS(336),
    [anon_sym_type] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [90] = {
    [sym__layout_semicolon] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(352),
    [sym_comment] = ACTIONS(12),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [sym_comment] = ACTIONS(12),
  },
  [92] = {
    [sym_export] = STATE(162),
    [sym__identifier] = STATE(14),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [93] = {
    [anon_sym_where] = ACTIONS(356),
    [sym_comment] = ACTIONS(12),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(12),
  },
  [95] = {
    [aux_sym_export_repeat1] = STATE(165),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(12),
  },
  [96] = {
    [sym_import_specification] = STATE(167),
    [sym__layout_semicolon] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_as] = ACTIONS(366),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(12),
  },
  [97] = {
    [sym__identifier] = STATE(169),
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [98] = {
    [sym__identifier] = STATE(170),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(370),
    [sym_comment] = ACTIONS(12),
  },
  [100] = {
    [sym__layout_semicolon] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [sym_comment] = ACTIONS(12),
  },
  [101] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym_comment] = ACTIONS(12),
  },
  [102] = {
    [sym__layout_semicolon] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_comment] = ACTIONS(12),
  },
  [103] = {
    [sym__layout_close_brace] = ACTIONS(380),
    [anon_sym_do] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [104] = {
    [sym__expression] = STATE(102),
    [sym_do_expression] = STATE(31),
    [sym__statement] = STATE(174),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [sym__layout_close_brace] = ACTIONS(386),
    [anon_sym_do] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(198),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [105] = {
    [sym__layout_semicolon] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(390),
    [sym_comment] = ACTIONS(12),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym_do] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [107] = {
    [sym__expression] = STATE(105),
    [sym_do_expression] = STATE(31),
    [sym__statement] = STATE(176),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(392),
    [anon_sym_do] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(198),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(12),
  },
  [109] = {
    [aux_sym_context_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(12),
  },
  [110] = {
    [sym_declarations] = STATE(183),
    [sym__layout_open_brace] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(12),
  },
  [111] = {
    [aux_sym_type_class_repeat1] = STATE(184),
    [sym_variable_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(12),
  },
  [112] = {
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(12),
  },
  [113] = {
    [anon_sym_where] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(12),
  },
  [114] = {
    [aux_sym_type_class_repeat1] = STATE(188),
    [anon_sym_where] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(12),
  },
  [115] = {
    [sym_constructor_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(12),
  },
  [116] = {
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(190),
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [117] = {
    [sym__symbol] = STATE(125),
    [sym__layout_semicolon] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [118] = {
    [anon_sym_BQUOTE] = ACTIONS(428),
    [sym_comment] = ACTIONS(12),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [sym_comment] = ACTIONS(12),
  },
  [120] = {
    [sym__symbol] = STATE(125),
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [121] = {
    [sym__op] = STATE(193),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [122] = {
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(436),
    [sym_comment] = ACTIONS(12),
  },
  [123] = {
    [aux_sym_fixity_repeat1] = STATE(195),
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(236),
    [sym_comment] = ACTIONS(12),
  },
  [124] = {
    [sym__layout_semicolon] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(438),
    [anon_sym_COMMA] = ACTIONS(438),
    [sym_comment] = ACTIONS(12),
  },
  [125] = {
    [sym__layout_semicolon] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_COLON] = ACTIONS(442),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_BANG] = ACTIONS(442),
    [sym_comment] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(442),
    [anon_sym_DOLLAR] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(442),
    [anon_sym_1] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_QMARK] = ACTIONS(442),
    [anon_sym_AT] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_TILDE] = ACTIONS(442),
    [anon_sym_BSLASH] = ACTIONS(442),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(404),
    [anon_sym_deriving] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_constructor_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(12),
  },
  [127] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(450),
    [sym_constructor_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(12),
  },
  [128] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_deriving] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(454),
    [sym_constructor_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(12),
  },
  [129] = {
    [sym_constructors] = STATE(199),
    [sym_constructor] = STATE(134),
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_EQ] = ACTIONS(460),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [130] = {
    [sym_constructors] = STATE(199),
    [sym_constructor] = STATE(134),
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [131] = {
    [sym__identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [132] = {
    [sym_fields] = STATE(206),
    [sym_strict] = STATE(207),
    [sym__identifier] = STATE(207),
    [aux_sym_constructor_repeat1] = STATE(208),
    [sym__layout_semicolon] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_deriving] = ACTIONS(468),
    [anon_sym_BANG] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_module_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(12),
  },
  [133] = {
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(458),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(12),
  },
  [134] = {
    [aux_sym_constructors_repeat1] = STATE(210),
    [sym__layout_semicolon] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_deriving] = ACTIONS(476),
    [sym_comment] = ACTIONS(12),
  },
  [135] = {
    [sym__layout_semicolon] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(458),
    [sym_comment] = ACTIONS(12),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(12),
  },
  [137] = {
    [anon_sym_EQ] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(12),
  },
  [138] = {
    [sym_new_constructor] = STATE(212),
    [sym_constructor_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(12),
  },
  [139] = {
    [sym__type] = STATE(214),
    [sym_function_type] = STATE(158),
    [sym_simple_type] = STATE(160),
    [sym_constructor_identifier] = ACTIONS(482),
    [sym_comment] = ACTIONS(12),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(486),
    [sym_comment] = ACTIONS(12),
  },
  [141] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(488),
  },
  [142] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(490),
  },
  [143] = {
    [sym__cntrl] = STATE(216),
    [sym_comment] = ACTIONS(98),
    [anon_sym__] = ACTIONS(492),
    [sym__ascii_large] = ACTIONS(492),
    [anon_sym_AT] = ACTIONS(492),
    [anon_sym_CARET] = ACTIONS(492),
    [anon_sym_BSLASH] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(492),
    [anon_sym_RBRACK] = ACTIONS(492),
  },
  [144] = {
    [aux_sym__escape_repeat1] = STATE(218),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(494),
  },
  [145] = {
    [aux_sym__escape_repeat2] = STATE(220),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(496),
  },
  [146] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(498),
  },
  [147] = {
    [anon_sym_LBRACE] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_BQUOTE] = ACTIONS(500),
    [anon_sym_COLON] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(500),
    [anon_sym_DQUOTE] = ACTIONS(500),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(500),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(500),
    [anon_sym__] = ACTIONS(500),
    [sym__ascii_large] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(500),
    [anon_sym_AMP] = ACTIONS(500),
    [anon_sym_1] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_SLASH] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(500),
    [anon_sym_QMARK] = ACTIONS(500),
    [anon_sym_AT] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [anon_sym_TILDE] = ACTIONS(500),
    [anon_sym_BSLASH] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [sym__space] = ACTIONS(500),
    [sym__newline] = ACTIONS(500),
    [sym__tab] = ACTIONS(500),
    [sym__vertical_tab] = ACTIONS(500),
  },
  [148] = {
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_BQUOTE] = ACTIONS(502),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(502),
    [anon_sym_BANG] = ACTIONS(502),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(502),
    [anon_sym__] = ACTIONS(502),
    [sym__ascii_large] = ACTIONS(502),
    [anon_sym_POUND] = ACTIONS(502),
    [anon_sym_DOLLAR] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(502),
    [anon_sym_AMP] = ACTIONS(502),
    [anon_sym_1] = ACTIONS(502),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [anon_sym_LT] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_AT] = ACTIONS(502),
    [anon_sym_CARET] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_TILDE] = ACTIONS(502),
    [anon_sym_BSLASH] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym__space] = ACTIONS(502),
    [sym__newline] = ACTIONS(502),
    [sym__tab] = ACTIONS(502),
    [sym__vertical_tab] = ACTIONS(502),
  },
  [149] = {
    [sym__cntrl] = STATE(222),
    [sym_comment] = ACTIONS(98),
    [anon_sym__] = ACTIONS(504),
    [sym__ascii_large] = ACTIONS(504),
    [anon_sym_AT] = ACTIONS(504),
    [anon_sym_CARET] = ACTIONS(504),
    [anon_sym_BSLASH] = ACTIONS(504),
    [anon_sym_LBRACK] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
  },
  [150] = {
    [aux_sym__escape_repeat1] = STATE(224),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(506),
  },
  [151] = {
    [aux_sym__escape_repeat2] = STATE(226),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(508),
  },
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_BQUOTE] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_BANG] = ACTIONS(510),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(510),
    [anon_sym__] = ACTIONS(510),
    [sym__ascii_large] = ACTIONS(510),
    [anon_sym_POUND] = ACTIONS(510),
    [anon_sym_DOLLAR] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(510),
    [anon_sym_AMP] = ACTIONS(510),
    [anon_sym_1] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DOT] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(510),
    [anon_sym_GT] = ACTIONS(510),
    [anon_sym_QMARK] = ACTIONS(510),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_CARET] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_TILDE] = ACTIONS(510),
    [anon_sym_BSLASH] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym__space] = ACTIONS(510),
    [sym__newline] = ACTIONS(510),
    [sym__tab] = ACTIONS(510),
    [sym__vertical_tab] = ACTIONS(510),
  },
  [153] = {
    [anon_sym_LBRACE] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_BQUOTE] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(512),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_BANG] = ACTIONS(512),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(512),
    [anon_sym_DQUOTE] = ACTIONS(512),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(512),
    [anon_sym__] = ACTIONS(512),
    [sym__ascii_large] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(512),
    [anon_sym_DOLLAR] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(512),
    [anon_sym_AMP] = ACTIONS(512),
    [anon_sym_1] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_SLASH] = ACTIONS(512),
    [anon_sym_LT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_AT] = ACTIONS(512),
    [anon_sym_CARET] = ACTIONS(512),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_TILDE] = ACTIONS(512),
    [anon_sym_BSLASH] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_RBRACK] = ACTIONS(512),
    [sym__space] = ACTIONS(512),
    [sym__newline] = ACTIONS(512),
    [sym__tab] = ACTIONS(512),
    [sym__vertical_tab] = ACTIONS(512),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(516),
    [sym_comment] = ACTIONS(12),
  },
  [155] = {
    [sym__layout_close_brace] = ACTIONS(518),
    [anon_sym_import] = ACTIONS(520),
    [anon_sym_do] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_infixl] = ACTIONS(520),
    [anon_sym_infixr] = ACTIONS(520),
    [anon_sym_infix] = ACTIONS(520),
    [anon_sym_data] = ACTIONS(520),
    [anon_sym_newtype] = ACTIONS(520),
    [anon_sym_type] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [sym__integer_literal] = ACTIONS(520),
    [sym__octal_literal] = ACTIONS(520),
    [sym__hexidecimal_literal] = ACTIONS(520),
  },
  [156] = {
    [aux_sym_type_class_repeat1] = STATE(228),
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(12),
  },
  [157] = {
    [sym__layout_semicolon] = ACTIONS(526),
    [anon_sym_SEMI] = ACTIONS(528),
    [sym_comment] = ACTIONS(12),
  },
  [158] = {
    [sym__layout_semicolon] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(532),
    [sym_comment] = ACTIONS(12),
  },
  [159] = {
    [sym__type] = STATE(229),
    [sym_function_type] = STATE(158),
    [sym_simple_type] = STATE(160),
    [sym_constructor_identifier] = ACTIONS(482),
    [sym_comment] = ACTIONS(12),
  },
  [160] = {
    [sym__layout_semicolon] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_DASH_GT] = ACTIONS(534),
    [sym_comment] = ACTIONS(12),
  },
  [161] = {
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_import] = ACTIONS(520),
    [anon_sym_do] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_infixl] = ACTIONS(520),
    [anon_sym_infixr] = ACTIONS(520),
    [anon_sym_infix] = ACTIONS(520),
    [anon_sym_data] = ACTIONS(520),
    [anon_sym_newtype] = ACTIONS(520),
    [anon_sym_type] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [sym__integer_literal] = ACTIONS(520),
    [sym__octal_literal] = ACTIONS(520),
    [sym__hexidecimal_literal] = ACTIONS(520),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(12),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(12),
  },
  [164] = {
    [sym__identifier] = STATE(231),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym_comment] = ACTIONS(12),
  },
  [166] = {
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [167] = {
    [sym__layout_semicolon] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(546),
    [sym_comment] = ACTIONS(12),
  },
  [168] = {
    [sym__layout_semicolon] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(550),
    [sym_comment] = ACTIONS(12),
  },
  [169] = {
    [aux_sym_import_specification_repeat1] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym_comment] = ACTIONS(12),
  },
  [170] = {
    [sym_import_specification] = STATE(239),
    [sym__layout_semicolon] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(12),
  },
  [171] = {
    [sym__identifier] = STATE(240),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [172] = {
    [sym__layout_close_brace] = ACTIONS(558),
    [anon_sym_do] = ACTIONS(560),
    [sym_variable_identifier] = ACTIONS(562),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(560),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [sym__integer_literal] = ACTIONS(560),
    [sym__octal_literal] = ACTIONS(560),
    [sym__hexidecimal_literal] = ACTIONS(560),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(566),
    [sym_comment] = ACTIONS(12),
  },
  [174] = {
    [sym__layout_close_brace] = ACTIONS(568),
    [anon_sym_do] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [175] = {
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_do] = ACTIONS(560),
    [sym_variable_identifier] = ACTIONS(562),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(560),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [sym__integer_literal] = ACTIONS(560),
    [sym__octal_literal] = ACTIONS(560),
    [sym__hexidecimal_literal] = ACTIONS(560),
  },
  [176] = {
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_do] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(12),
  },
  [178] = {
    [sym_class] = STATE(241),
    [sym_constructor_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(12),
  },
  [179] = {
    [anon_sym_EQ_GT] = ACTIONS(574),
    [sym_comment] = ACTIONS(12),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_RPAREN] = ACTIONS(578),
    [sym_comment] = ACTIONS(12),
  },
  [181] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(30),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_declarations_repeat1] = STATE(246),
    [aux_sym_type_class_repeat1] = STATE(33),
    [sym__layout_close_brace] = ACTIONS(580),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [182] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(34),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_declarations_repeat1] = STATE(247),
    [aux_sym_type_class_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [183] = {
    [sym__layout_semicolon] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_comment] = ACTIONS(12),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(12),
  },
  [185] = {
    [sym_declarations] = STATE(249),
    [sym__layout_open_brace] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(12),
  },
  [186] = {
    [anon_sym_where] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(12),
  },
  [187] = {
    [anon_sym_where] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(12),
  },
  [188] = {
    [anon_sym_where] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(12),
  },
  [189] = {
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(596),
    [anon_sym_COMMA] = ACTIONS(596),
    [sym_comment] = ACTIONS(12),
  },
  [190] = {
    [sym__symbol] = STATE(125),
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(598),
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [191] = {
    [sym__layout_semicolon] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(604),
    [anon_sym_COMMA] = ACTIONS(604),
    [sym_comment] = ACTIONS(12),
  },
  [192] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [anon_sym_COMMA] = ACTIONS(608),
    [sym_comment] = ACTIONS(12),
  },
  [193] = {
    [sym__layout_semicolon] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym_comment] = ACTIONS(12),
  },
  [194] = {
    [sym__op] = STATE(252),
    [sym_variable_symbol] = STATE(57),
    [sym_constructor_symbol] = STATE(57),
    [sym__symbol] = STATE(59),
    [aux_sym_variable_symbol_repeat1] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
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
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_COMMA] = ACTIONS(436),
    [sym_comment] = ACTIONS(12),
  },
  [196] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_deriving] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_constructor_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(12),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_deriving] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_constructor_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(12),
  },
  [198] = {
    [sym_constructors] = STATE(253),
    [sym_constructor] = STATE(134),
    [sym_deriving] = STATE(254),
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [199] = {
    [sym_deriving] = STATE(254),
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(12),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [sym_comment] = ACTIONS(12),
  },
  [201] = {
    [sym__identifier] = STATE(255),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [sym_comment] = ACTIONS(12),
  },
  [203] = {
    [sym_field] = STATE(257),
    [sym_variable_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(12),
  },
  [204] = {
    [sym__identifier] = STATE(258),
    [sym_variable_identifier] = ACTIONS(630),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_module_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(12),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_deriving] = ACTIONS(66),
    [anon_sym_BANG] = ACTIONS(66),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_constructor_identifier] = ACTIONS(632),
    [sym_module_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(12),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_PIPE] = ACTIONS(636),
    [anon_sym_deriving] = ACTIONS(636),
    [sym_comment] = ACTIONS(12),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_PIPE] = ACTIONS(640),
    [anon_sym_deriving] = ACTIONS(640),
    [anon_sym_BANG] = ACTIONS(640),
    [sym_variable_identifier] = ACTIONS(642),
    [sym_constructor_identifier] = ACTIONS(642),
    [sym_module_identifier] = ACTIONS(642),
    [sym_comment] = ACTIONS(12),
  },
  [208] = {
    [sym_strict] = STATE(259),
    [sym__identifier] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_PIPE] = ACTIONS(636),
    [anon_sym_deriving] = ACTIONS(636),
    [anon_sym_BANG] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_module_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(12),
  },
  [209] = {
    [sym_constructor] = STATE(260),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_PIPE] = ACTIONS(648),
    [anon_sym_deriving] = ACTIONS(646),
    [sym_comment] = ACTIONS(12),
  },
  [211] = {
    [sym_fields] = STATE(262),
    [sym__identifier] = STATE(262),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_module_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(12),
  },
  [212] = {
    [sym_deriving] = STATE(263),
    [sym__layout_semicolon] = ACTIONS(650),
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(12),
  },
  [213] = {
    [aux_sym_type_class_repeat1] = STATE(228),
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(12),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [sym_comment] = ACTIONS(12),
  },
  [215] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(660),
  },
  [216] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(662),
  },
  [217] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(664),
  },
  [218] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(668),
  },
  [219] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(670),
  },
  [220] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(672),
  },
  [221] = {
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym_EQ] = ACTIONS(674),
    [anon_sym_PIPE] = ACTIONS(674),
    [anon_sym_BANG] = ACTIONS(674),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(674),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [sym__ascii_large] = ACTIONS(674),
    [anon_sym_POUND] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_PERCENT] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_1] = ACTIONS(674),
    [anon_sym_PLUS] = ACTIONS(674),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_SLASH] = ACTIONS(674),
    [anon_sym_LT] = ACTIONS(674),
    [anon_sym_GT] = ACTIONS(674),
    [anon_sym_QMARK] = ACTIONS(674),
    [anon_sym_AT] = ACTIONS(674),
    [anon_sym_CARET] = ACTIONS(674),
    [anon_sym_DASH] = ACTIONS(674),
    [anon_sym_TILDE] = ACTIONS(674),
    [anon_sym_BSLASH] = ACTIONS(674),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym__space] = ACTIONS(674),
    [sym__newline] = ACTIONS(674),
    [sym__tab] = ACTIONS(674),
    [sym__vertical_tab] = ACTIONS(674),
  },
  [222] = {
    [anon_sym_LBRACE] = ACTIONS(676),
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_RBRACE] = ACTIONS(676),
    [anon_sym_LPAREN] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(676),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_BANG] = ACTIONS(676),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(676),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(676),
    [anon_sym__] = ACTIONS(676),
    [sym__ascii_large] = ACTIONS(676),
    [anon_sym_POUND] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(676),
    [anon_sym_PERCENT] = ACTIONS(676),
    [anon_sym_AMP] = ACTIONS(676),
    [anon_sym_1] = ACTIONS(676),
    [anon_sym_PLUS] = ACTIONS(676),
    [anon_sym_DOT] = ACTIONS(676),
    [anon_sym_SLASH] = ACTIONS(676),
    [anon_sym_LT] = ACTIONS(676),
    [anon_sym_GT] = ACTIONS(676),
    [anon_sym_QMARK] = ACTIONS(676),
    [anon_sym_AT] = ACTIONS(676),
    [anon_sym_CARET] = ACTIONS(676),
    [anon_sym_DASH] = ACTIONS(676),
    [anon_sym_TILDE] = ACTIONS(676),
    [anon_sym_BSLASH] = ACTIONS(676),
    [anon_sym_LBRACK] = ACTIONS(676),
    [anon_sym_RBRACK] = ACTIONS(676),
    [sym__space] = ACTIONS(676),
    [sym__newline] = ACTIONS(676),
    [sym__tab] = ACTIONS(676),
    [sym__vertical_tab] = ACTIONS(676),
  },
  [223] = {
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(678),
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_EQ] = ACTIONS(678),
    [anon_sym_PIPE] = ACTIONS(678),
    [anon_sym_BANG] = ACTIONS(678),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(678),
    [anon_sym__] = ACTIONS(678),
    [sym__ascii_large] = ACTIONS(678),
    [anon_sym_POUND] = ACTIONS(678),
    [anon_sym_DOLLAR] = ACTIONS(678),
    [anon_sym_PERCENT] = ACTIONS(678),
    [anon_sym_AMP] = ACTIONS(678),
    [anon_sym_1] = ACTIONS(678),
    [anon_sym_PLUS] = ACTIONS(678),
    [anon_sym_DOT] = ACTIONS(678),
    [anon_sym_SLASH] = ACTIONS(678),
    [anon_sym_LT] = ACTIONS(678),
    [anon_sym_GT] = ACTIONS(678),
    [anon_sym_QMARK] = ACTIONS(678),
    [anon_sym_AT] = ACTIONS(678),
    [anon_sym_CARET] = ACTIONS(678),
    [anon_sym_DASH] = ACTIONS(678),
    [anon_sym_TILDE] = ACTIONS(678),
    [anon_sym_BSLASH] = ACTIONS(678),
    [anon_sym_LBRACK] = ACTIONS(678),
    [anon_sym_RBRACK] = ACTIONS(678),
    [sym__space] = ACTIONS(678),
    [sym__newline] = ACTIONS(678),
    [sym__tab] = ACTIONS(678),
    [sym__vertical_tab] = ACTIONS(678),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(678),
  },
  [224] = {
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym__] = ACTIONS(680),
    [sym__ascii_large] = ACTIONS(680),
    [anon_sym_POUND] = ACTIONS(680),
    [anon_sym_DOLLAR] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [anon_sym_AMP] = ACTIONS(680),
    [anon_sym_1] = ACTIONS(680),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_DOT] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_QMARK] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_CARET] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_BSLASH] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym__space] = ACTIONS(680),
    [sym__newline] = ACTIONS(680),
    [sym__tab] = ACTIONS(680),
    [sym__vertical_tab] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(682),
  },
  [225] = {
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_BQUOTE] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_PIPE] = ACTIONS(684),
    [anon_sym_BANG] = ACTIONS(684),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(684),
    [anon_sym__] = ACTIONS(684),
    [sym__ascii_large] = ACTIONS(684),
    [anon_sym_POUND] = ACTIONS(684),
    [anon_sym_DOLLAR] = ACTIONS(684),
    [anon_sym_PERCENT] = ACTIONS(684),
    [anon_sym_AMP] = ACTIONS(684),
    [anon_sym_1] = ACTIONS(684),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_DOT] = ACTIONS(684),
    [anon_sym_SLASH] = ACTIONS(684),
    [anon_sym_LT] = ACTIONS(684),
    [anon_sym_GT] = ACTIONS(684),
    [anon_sym_QMARK] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(684),
    [anon_sym_CARET] = ACTIONS(684),
    [anon_sym_DASH] = ACTIONS(684),
    [anon_sym_TILDE] = ACTIONS(684),
    [anon_sym_BSLASH] = ACTIONS(684),
    [anon_sym_LBRACK] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [sym__space] = ACTIONS(684),
    [sym__newline] = ACTIONS(684),
    [sym__tab] = ACTIONS(684),
    [sym__vertical_tab] = ACTIONS(684),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(684),
  },
  [226] = {
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(680),
    [anon_sym__] = ACTIONS(680),
    [sym__ascii_large] = ACTIONS(680),
    [anon_sym_POUND] = ACTIONS(680),
    [anon_sym_DOLLAR] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [anon_sym_AMP] = ACTIONS(680),
    [anon_sym_1] = ACTIONS(680),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_DOT] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_LT] = ACTIONS(680),
    [anon_sym_GT] = ACTIONS(680),
    [anon_sym_QMARK] = ACTIONS(680),
    [anon_sym_AT] = ACTIONS(680),
    [anon_sym_CARET] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_TILDE] = ACTIONS(680),
    [anon_sym_BSLASH] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_RBRACK] = ACTIONS(680),
    [sym__space] = ACTIONS(680),
    [sym__newline] = ACTIONS(680),
    [sym__tab] = ACTIONS(680),
    [sym__vertical_tab] = ACTIONS(680),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(686),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [anon_sym_EQ_GT] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(12),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(12),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(692),
    [sym_comment] = ACTIONS(12),
  },
  [230] = {
    [sym__type] = STATE(270),
    [sym_function_type] = STATE(158),
    [sym_simple_type] = STATE(160),
    [sym_constructor_identifier] = ACTIONS(482),
    [sym_comment] = ACTIONS(12),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
    [sym_comment] = ACTIONS(12),
  },
  [232] = {
    [sym__identifier] = STATE(271),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [sym_comment] = ACTIONS(12),
  },
  [234] = {
    [sym_import_specification] = STATE(272),
    [sym__layout_semicolon] = ACTIONS(698),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(12),
  },
  [235] = {
    [sym__identifier] = STATE(274),
    [anon_sym_DOT_DOT] = ACTIONS(702),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [236] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(706),
    [sym_comment] = ACTIONS(12),
  },
  [238] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(12),
  },
  [239] = {
    [sym__layout_semicolon] = ACTIONS(698),
    [anon_sym_SEMI] = ACTIONS(700),
    [sym_comment] = ACTIONS(12),
  },
  [240] = {
    [aux_sym_import_specification_repeat1] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(710),
    [sym_comment] = ACTIONS(12),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(12),
  },
  [242] = {
    [sym_constructor_identifier] = ACTIONS(716),
    [sym_comment] = ACTIONS(12),
  },
  [243] = {
    [sym_class] = STATE(280),
    [sym_constructor_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(12),
  },
  [244] = {
    [anon_sym_EQ_GT] = ACTIONS(718),
    [sym_comment] = ACTIONS(12),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(720),
    [sym_comment] = ACTIONS(12),
  },
  [246] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(86),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_type_class_repeat1] = STATE(33),
    [sym__layout_close_brace] = ACTIONS(722),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [247] = {
    [sym_import] = STATE(29),
    [sym__declaration] = STATE(90),
    [sym__expression] = STATE(29),
    [sym_do_expression] = STATE(31),
    [sym_type_class] = STATE(29),
    [sym_fixity] = STATE(29),
    [sym_type_signature] = STATE(29),
    [sym_algebraic_datatype] = STATE(29),
    [sym_newtype] = STATE(29),
    [sym_type_synonym] = STATE(29),
    [sym__literal] = STATE(31),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_string] = STATE(25),
    [aux_sym_type_class_repeat1] = STATE(33),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(726),
    [anon_sym_EQ_GT] = ACTIONS(726),
    [sym_comment] = ACTIONS(12),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(728),
    [anon_sym_SEMI] = ACTIONS(730),
    [sym_comment] = ACTIONS(12),
  },
  [250] = {
    [sym_declarations] = STATE(283),
    [sym__layout_open_brace] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(12),
  },
  [251] = {
    [sym__layout_semicolon] = ACTIONS(732),
    [anon_sym_SEMI] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(734),
    [sym_comment] = ACTIONS(12),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(738),
    [anon_sym_COMMA] = ACTIONS(738),
    [sym_comment] = ACTIONS(12),
  },
  [253] = {
    [sym_deriving] = STATE(284),
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(12),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [sym_comment] = ACTIONS(12),
  },
  [255] = {
    [aux_sym_export_repeat1] = STATE(286),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym_comment] = ACTIONS(12),
  },
  [256] = {
    [aux_sym_field_repeat1] = STATE(289),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_COLON_COLON] = ACTIONS(748),
    [sym_comment] = ACTIONS(12),
  },
  [257] = {
    [aux_sym_fields_repeat1] = STATE(292),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_COMMA] = ACTIONS(752),
    [sym_comment] = ACTIONS(12),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(754),
    [anon_sym_SEMI] = ACTIONS(756),
    [anon_sym_PIPE] = ACTIONS(756),
    [anon_sym_deriving] = ACTIONS(756),
    [anon_sym_BANG] = ACTIONS(756),
    [sym_variable_identifier] = ACTIONS(758),
    [sym_constructor_identifier] = ACTIONS(758),
    [sym_module_identifier] = ACTIONS(758),
    [sym_comment] = ACTIONS(12),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_PIPE] = ACTIONS(762),
    [anon_sym_deriving] = ACTIONS(762),
    [anon_sym_BANG] = ACTIONS(762),
    [sym_variable_identifier] = ACTIONS(764),
    [sym_constructor_identifier] = ACTIONS(764),
    [sym_module_identifier] = ACTIONS(764),
    [sym_comment] = ACTIONS(12),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_PIPE] = ACTIONS(768),
    [anon_sym_deriving] = ACTIONS(768),
    [sym_comment] = ACTIONS(12),
  },
  [261] = {
    [sym_constructor] = STATE(293),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(12),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(770),
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_deriving] = ACTIONS(772),
    [sym_comment] = ACTIONS(12),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(776),
    [sym_comment] = ACTIONS(12),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_DASH_GT] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(110),
    [sym_comment] = ACTIONS(12),
  },
  [265] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(778),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(778),
  },
  [266] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(780),
  },
  [267] = {
    [anon_sym_LBRACE] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_RBRACE] = ACTIONS(782),
    [anon_sym_LPAREN] = ACTIONS(782),
    [anon_sym_RPAREN] = ACTIONS(782),
    [anon_sym_BQUOTE] = ACTIONS(782),
    [anon_sym_COLON] = ACTIONS(782),
    [anon_sym_EQ] = ACTIONS(782),
    [anon_sym_PIPE] = ACTIONS(782),
    [anon_sym_BANG] = ACTIONS(782),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(782),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(782),
    [anon_sym__] = ACTIONS(782),
    [sym__ascii_large] = ACTIONS(782),
    [anon_sym_POUND] = ACTIONS(782),
    [anon_sym_DOLLAR] = ACTIONS(782),
    [anon_sym_PERCENT] = ACTIONS(782),
    [anon_sym_AMP] = ACTIONS(782),
    [anon_sym_1] = ACTIONS(782),
    [anon_sym_PLUS] = ACTIONS(782),
    [anon_sym_DOT] = ACTIONS(782),
    [anon_sym_SLASH] = ACTIONS(782),
    [anon_sym_LT] = ACTIONS(782),
    [anon_sym_GT] = ACTIONS(782),
    [anon_sym_QMARK] = ACTIONS(782),
    [anon_sym_AT] = ACTIONS(782),
    [anon_sym_CARET] = ACTIONS(782),
    [anon_sym_DASH] = ACTIONS(782),
    [anon_sym_TILDE] = ACTIONS(782),
    [anon_sym_BSLASH] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [sym__space] = ACTIONS(782),
    [sym__newline] = ACTIONS(782),
    [sym__tab] = ACTIONS(782),
    [sym__vertical_tab] = ACTIONS(782),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(782),
  },
  [268] = {
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_BQUOTE] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_EQ] = ACTIONS(784),
    [anon_sym_PIPE] = ACTIONS(784),
    [anon_sym_BANG] = ACTIONS(784),
    [sym_comment] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(784),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(784),
    [anon_sym__] = ACTIONS(784),
    [sym__ascii_large] = ACTIONS(784),
    [anon_sym_POUND] = ACTIONS(784),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [anon_sym_PERCENT] = ACTIONS(784),
    [anon_sym_AMP] = ACTIONS(784),
    [anon_sym_1] = ACTIONS(784),
    [anon_sym_PLUS] = ACTIONS(784),
    [anon_sym_DOT] = ACTIONS(784),
    [anon_sym_SLASH] = ACTIONS(784),
    [anon_sym_LT] = ACTIONS(784),
    [anon_sym_GT] = ACTIONS(784),
    [anon_sym_QMARK] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_CARET] = ACTIONS(784),
    [anon_sym_DASH] = ACTIONS(784),
    [anon_sym_TILDE] = ACTIONS(784),
    [anon_sym_BSLASH] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [sym__space] = ACTIONS(784),
    [sym__newline] = ACTIONS(784),
    [sym__tab] = ACTIONS(784),
    [sym__vertical_tab] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(784),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_DASH_GT] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(12),
  },
  [270] = {
    [sym__layout_semicolon] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(788),
    [sym_comment] = ACTIONS(12),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(790),
    [anon_sym_RPAREN] = ACTIONS(790),
    [sym_comment] = ACTIONS(12),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(12),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(796),
    [sym_comment] = ACTIONS(12),
  },
  [274] = {
    [aux_sym_export_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(796),
    [sym_comment] = ACTIONS(12),
  },
  [275] = {
    [anon_sym_LPAREN] = ACTIONS(798),
    [anon_sym_COMMA] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(12),
  },
  [276] = {
    [sym__identifier] = STATE(297),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [277] = {
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(12),
  },
  [278] = {
    [sym__identifier] = STATE(299),
    [anon_sym_DOT_DOT] = ACTIONS(806),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(12),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [sym_comment] = ACTIONS(12),
  },
  [281] = {
    [sym_constructor_identifier] = ACTIONS(812),
    [sym_comment] = ACTIONS(12),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(814),
    [sym_comment] = ACTIONS(12),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(818),
    [sym_comment] = ACTIONS(12),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [sym_comment] = ACTIONS(12),
  },
  [285] = {
    [sym__layout_semicolon] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(826),
    [sym_comment] = ACTIONS(12),
  },
  [286] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(828),
    [sym_comment] = ACTIONS(12),
  },
  [287] = {
    [sym_variable_identifier] = ACTIONS(830),
    [sym_comment] = ACTIONS(12),
  },
  [288] = {
    [sym_strict] = STATE(304),
    [sym__identifier] = STATE(304),
    [anon_sym_BANG] = ACTIONS(832),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_COLON_COLON] = ACTIONS(836),
    [sym_comment] = ACTIONS(12),
  },
  [290] = {
    [sym__layout_semicolon] = ACTIONS(838),
    [anon_sym_SEMI] = ACTIONS(840),
    [anon_sym_PIPE] = ACTIONS(840),
    [anon_sym_deriving] = ACTIONS(840),
    [sym_comment] = ACTIONS(12),
  },
  [291] = {
    [sym_field] = STATE(307),
    [sym_variable_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(12),
  },
  [292] = {
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_COMMA] = ACTIONS(844),
    [sym_comment] = ACTIONS(12),
  },
  [293] = {
    [sym__layout_semicolon] = ACTIONS(846),
    [anon_sym_SEMI] = ACTIONS(848),
    [anon_sym_PIPE] = ACTIONS(848),
    [anon_sym_deriving] = ACTIONS(848),
    [sym_comment] = ACTIONS(12),
  },
  [294] = {
    [aux_sym_import_specification_repeat1] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(12),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(12),
  },
  [296] = {
    [sym__identifier] = STATE(314),
    [anon_sym_DOT_DOT] = ACTIONS(854),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [297] = {
    [anon_sym_LPAREN] = ACTIONS(856),
    [anon_sym_COMMA] = ACTIONS(858),
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym_comment] = ACTIONS(12),
  },
  [298] = {
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(12),
  },
  [299] = {
    [aux_sym_export_repeat1] = STATE(316),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(12),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(860),
    [anon_sym_SEMI] = ACTIONS(862),
    [sym_comment] = ACTIONS(12),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(12),
  },
  [302] = {
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_COLON_COLON] = ACTIONS(868),
    [sym_comment] = ACTIONS(12),
  },
  [303] = {
    [sym__identifier] = STATE(317),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [304] = {
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_COMMA] = ACTIONS(870),
    [sym_comment] = ACTIONS(12),
  },
  [305] = {
    [sym_variable_identifier] = ACTIONS(872),
    [sym_comment] = ACTIONS(12),
  },
  [306] = {
    [sym_strict] = STATE(319),
    [sym__identifier] = STATE(319),
    [anon_sym_BANG] = ACTIONS(832),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(874),
    [anon_sym_COMMA] = ACTIONS(874),
    [sym_comment] = ACTIONS(12),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(876),
    [anon_sym_SEMI] = ACTIONS(878),
    [anon_sym_PIPE] = ACTIONS(878),
    [anon_sym_deriving] = ACTIONS(878),
    [sym_comment] = ACTIONS(12),
  },
  [309] = {
    [sym_field] = STATE(320),
    [sym_variable_identifier] = ACTIONS(628),
    [sym_comment] = ACTIONS(12),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(880),
    [anon_sym_SEMI] = ACTIONS(882),
    [sym_comment] = ACTIONS(12),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(884),
    [sym_comment] = ACTIONS(12),
  },
  [312] = {
    [aux_sym_import_specification_repeat1] = STATE(322),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(884),
    [sym_comment] = ACTIONS(12),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(12),
  },
  [314] = {
    [aux_sym_export_repeat1] = STATE(324),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(886),
    [sym_comment] = ACTIONS(12),
  },
  [315] = {
    [sym__identifier] = STATE(326),
    [anon_sym_DOT_DOT] = ACTIONS(888),
    [sym_variable_identifier] = ACTIONS(28),
    [sym_constructor_identifier] = ACTIONS(30),
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(12),
  },
  [316] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(890),
    [sym_comment] = ACTIONS(12),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_COMMA] = ACTIONS(756),
    [sym_comment] = ACTIONS(12),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(892),
    [sym_comment] = ACTIONS(12),
  },
  [319] = {
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(894),
    [sym_comment] = ACTIONS(12),
  },
  [320] = {
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(896),
    [sym_comment] = ACTIONS(12),
  },
  [321] = {
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [sym_comment] = ACTIONS(12),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym_comment] = ACTIONS(12),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [sym_comment] = ACTIONS(12),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(12),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(12),
  },
  [326] = {
    [aux_sym_export_repeat1] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(906),
    [sym_comment] = ACTIONS(12),
  },
  [327] = {
    [aux_sym_import_specification_repeat1] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym_comment] = ACTIONS(12),
  },
  [328] = {
    [sym__layout_semicolon] = ACTIONS(908),
    [anon_sym_SEMI] = ACTIONS(910),
    [sym_comment] = ACTIONS(12),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_RPAREN] = ACTIONS(912),
    [sym_comment] = ACTIONS(12),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(914),
    [sym_comment] = ACTIONS(12),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(12),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(918),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(12),
  },
  [333] = {
    [sym__layout_semicolon] = ACTIONS(920),
    [anon_sym_SEMI] = ACTIONS(922),
    [sym_comment] = ACTIONS(12),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_declarations_repeat1, 2),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_declarations_repeat1, 2),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_declarations_repeat1, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_declarations_repeat1, 3),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_declarations_repeat1, 3),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_declarations_repeat1, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [716] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_declarations, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [812] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_declarations, 3),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
