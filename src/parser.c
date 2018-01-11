#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 362
#define SYMBOL_COUNT 184
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
  sym_general_declarations = 129,
  sym__general_declaration = 130,
  sym_fixity = 131,
  sym__op = 132,
  sym_variable_symbol = 133,
  sym_constructor_symbol = 134,
  sym_type_signature = 135,
  sym__type = 136,
  sym_function_type = 137,
  sym_algebraic_datatype = 138,
  sym_context = 139,
  sym_class = 140,
  sym_constructors = 141,
  sym_constructor = 142,
  sym_deriving = 143,
  sym_newtype = 144,
  sym_new_constructor = 145,
  sym_field = 146,
  sym_strict = 147,
  sym_type_synonym = 148,
  sym__literal = 149,
  sym__identifier = 150,
  sym_simple_type = 151,
  sym_integer = 152,
  sym_char = 153,
  sym_string = 154,
  sym__gap = 155,
  sym__graphic = 156,
  sym__small = 157,
  sym__large = 158,
  sym__symbol = 159,
  sym__special = 160,
  sym__escape = 161,
  sym__char_escape = 162,
  sym__ascii = 163,
  sym__cntrl = 164,
  sym_fields = 165,
  aux_sym_module_repeat1 = 166,
  aux_sym_module_exports_repeat1 = 167,
  aux_sym_export_repeat1 = 168,
  aux_sym_import_specification_repeat1 = 169,
  aux_sym_statement_list_repeat1 = 170,
  aux_sym_type_class_repeat1 = 171,
  aux_sym_general_declarations_repeat1 = 172,
  aux_sym_fixity_repeat1 = 173,
  aux_sym_variable_symbol_repeat1 = 174,
  aux_sym_type_signature_repeat1 = 175,
  aux_sym_context_repeat1 = 176,
  aux_sym_constructors_repeat1 = 177,
  aux_sym_constructor_repeat1 = 178,
  aux_sym_field_repeat1 = 179,
  aux_sym_string_repeat1 = 180,
  aux_sym__escape_repeat1 = 181,
  aux_sym__escape_repeat2 = 182,
  aux_sym_fields_repeat1 = 183,
  alias_sym_type_constructor = 184,
  alias_sym_type_variable = 185,
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
  [sym_general_declarations] = "general_declarations",
  [sym__general_declaration] = "_general_declaration",
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
  [sym_fields] = "fields",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_module_exports_repeat1] = "module_exports_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_general_declarations_repeat1] = "general_declarations_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_type_signature_repeat1] = "type_signature_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [aux_sym_fields_repeat1] = "fields_repeat1",
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
  [sym_general_declarations] = {
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
  [sym_fields] = {
    .visible = true,
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
  [aux_sym_general_declarations_repeat1] = {
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
  [aux_sym_type_signature_repeat1] = {
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
  [aux_sym_fields_repeat1] = {
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
        ADVANCE(233);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'm')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
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
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(190);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'm')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 174:
      if (lookahead == '>')
        ADVANCE(175);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 175:
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 176:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'O')
        ADVANCE(178);
      if (lookahead == 'X')
        ADVANCE(180);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'x')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 180:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(181);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ']')
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(185);
      if (lookahead == '}')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ']')
        ADVANCE(185);
      if (lookahead != 0)
        ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(187);
      if (lookahead == ']')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(189);
      END_STATE();
    case 187:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == ']')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(189);
      END_STATE();
    case 190:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'o')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(203);
      if (lookahead == 'n')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(231);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(231);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(232);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(233);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'm')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
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
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(241);
      if (lookahead == 'X')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(241);
      if (lookahead == 'x')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(242);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(244);
      END_STATE();
    case 245:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 246:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'l')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'a')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 's')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 's')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'a')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'a')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'm')
        ADVANCE(259);
      if (lookahead == 'n')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'p')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'o')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'x')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'l')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'o')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'd')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'u')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'w')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 't')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'y')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'p')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'y')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'p')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(287);
      if (lookahead == '.')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(288);
      if (lookahead == '.')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == '\n')
        ADVANCE(290);
      if (lookahead == '\r')
        ADVANCE(293);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == '\\')
        SKIP(294);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(289);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 290:
      if (lookahead == '\n')
        ADVANCE(290);
      if (lookahead == '\r')
        ADVANCE(290);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(291);
      if (lookahead == 'd')
        ADVANCE(292);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(232);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 291:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 293:
      if (lookahead == '\n')
        ADVANCE(290);
      if (lookahead == '\r')
        ADVANCE(293);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == '\\')
        SKIP(294);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(289);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(288);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 294:
      if (lookahead == 'n')
        SKIP(289);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'o')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 296:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\r')
        ADVANCE(308);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(309);
      if (lookahead == 'q')
        ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(296);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 297:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\r')
        ADVANCE(297);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(298);
      if (lookahead == 'q')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 298:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(297);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 308:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\r')
        ADVANCE(308);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(309);
      if (lookahead == 'q')
        ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(296);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 309:
      if (lookahead == 'n')
        SKIP(296);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'a')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'l')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'f')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'd')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 319:
      if (lookahead == '\n')
        ADVANCE(320);
      if (lookahead == '\r')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(323);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(319);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        ADVANCE(320);
      if (lookahead == '\r')
        ADVANCE(320);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(320);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(320);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 322:
      if (lookahead == '\n')
        ADVANCE(320);
      if (lookahead == '\r')
        ADVANCE(322);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(323);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(319);
      END_STATE();
    case 323:
      if (lookahead == 'n')
        SKIP(319);
      END_STATE();
    case 324:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(325);
      if (lookahead == '(')
        ADVANCE(326);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(327);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(329);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(235);
      if (lookahead == ',')
        ADVANCE(236);
      if (lookahead == '-')
        ADVANCE(237);
      END_STATE();
    case 332:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 333:
      if (lookahead == 'n')
        SKIP(324);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(334);
      END_STATE();
    case 335:
      if (lookahead == '\n')
        ADVANCE(336);
      if (lookahead == '\r')
        ADVANCE(344);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(347);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(351);
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
        SKIP(335);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(348);
      END_STATE();
    case 336:
      if (lookahead == '\n')
        ADVANCE(336);
      if (lookahead == '\r')
        ADVANCE(336);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(339);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(343);
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
        ADVANCE(336);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(178);
      if (lookahead == 'X')
        ADVANCE(180);
      if (lookahead == 'o')
        ADVANCE(178);
      if (lookahead == 'x')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 344:
      if (lookahead == '\n')
        ADVANCE(336);
      if (lookahead == '\r')
        ADVANCE(344);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(347);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(351);
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
        SKIP(335);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(241);
      if (lookahead == 'X')
        ADVANCE(243);
      if (lookahead == 'o')
        ADVANCE(241);
      if (lookahead == 'x')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(355);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(356);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(352);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 353:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(353);
      if (lookahead == '(')
        ADVANCE(326);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(355);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(356);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(352);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 356:
      if (lookahead == 'n')
        SKIP(352);
      END_STATE();
    case 357:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(369);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(357);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      END_STATE();
    case 358:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(358);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(359);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(358);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(369);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(357);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      END_STATE();
    case 369:
      if (lookahead == 'n')
        SKIP(357);
      END_STATE();
    case 370:
      if (lookahead == 'e')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'r')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'i')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == 'v')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'i')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'n')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'g')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 378:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 379:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '\n')
        ADVANCE(379);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(382);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(378);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 382:
      if (lookahead == 'n')
        SKIP(378);
      END_STATE();
    case 383:
      if (lookahead == '\n')
        ADVANCE(384);
      if (lookahead == '\r')
        ADVANCE(387);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(383);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 384:
      if (lookahead == '\n')
        ADVANCE(384);
      if (lookahead == '\r')
        ADVANCE(384);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(386);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '\n')
        ADVANCE(384);
      if (lookahead == '\r')
        ADVANCE(387);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(383);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 389:
      if (lookahead == 'n')
        SKIP(383);
      END_STATE();
    case 390:
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(394);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(390);
      END_STATE();
    case 391:
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == '\r')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(394);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(390);
      END_STATE();
    case 394:
      if (lookahead == 'n')
        SKIP(390);
      END_STATE();
    case 395:
      if (lookahead == '\t')
        SKIP(395);
      if (lookahead == '\n')
        ADVANCE(396);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 396:
      if (lookahead == '\t')
        ADVANCE(396);
      if (lookahead == '\n')
        ADVANCE(396);
      if (lookahead == '\r')
        ADVANCE(396);
      if (lookahead == ' ')
        ADVANCE(397);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(398);
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
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(396);
      if (lookahead == '\n')
        ADVANCE(396);
      if (lookahead == '\r')
        ADVANCE(396);
      if (lookahead == ' ')
        ADVANCE(397);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(398);
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
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '\t')
        SKIP(395);
      if (lookahead == '\n')
        ADVANCE(396);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 403:
      if (lookahead == '\t')
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(407);
      if (lookahead == ' ')
        ADVANCE(408);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(409);
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
        ADVANCE(399);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(407);
      if (lookahead == ' ')
        ADVANCE(408);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(409);
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
        ADVANCE(399);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(407);
      if (lookahead == ' ')
        ADVANCE(408);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(409);
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
        ADVANCE(399);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(407);
      if (lookahead == ' ')
        ADVANCE(408);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(409);
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
        ADVANCE(399);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '\t')
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 411:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(414);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(415);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(411);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      END_STATE();
    case 412:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(413);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(412);
      if (lookahead == '\r')
        ADVANCE(414);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(415);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(411);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      END_STATE();
    case 415:
      if (lookahead == 'n')
        SKIP(411);
      END_STATE();
    case 416:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == 'w')
        ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(416);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '=')
        ADVANCE(327);
      if (lookahead == '\\')
        ADVANCE(418);
      if (lookahead == 'w')
        ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(417);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == 'w')
        ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(416);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        SKIP(416);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 431:
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == '\r')
        ADVANCE(442);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(443);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(431);
      END_STATE();
    case 432:
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == '\r')
        ADVANCE(432);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(433);
      if (lookahead == 'a')
        ADVANCE(434);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == 'h')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(432);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(432);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(435);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(437);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(438);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 438:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(440);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(441);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == '\r')
        ADVANCE(442);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(443);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(431);
      END_STATE();
    case 443:
      if (lookahead == 'n')
        SKIP(431);
      END_STATE();
    case 444:
      if (lookahead == 's')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 446:
      if (lookahead == 'i')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'd')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'i')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'n')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'g')
        ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 452:
      if (lookahead == '\n')
        ADVANCE(453);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(456);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(452);
      END_STATE();
    case 453:
      if (lookahead == '\n')
        ADVANCE(453);
      if (lookahead == '\r')
        ADVANCE(453);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(454);
      if (lookahead == 'a')
        ADVANCE(434);
      if (lookahead == 'h')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(453);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(453);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        ADVANCE(453);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(456);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(452);
      END_STATE();
    case 456:
      if (lookahead == 'n')
        SKIP(452);
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
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == '\\')
        SKIP(461);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(457);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
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
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(459);
      if (lookahead == 'd')
        ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(458);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == '\\')
        SKIP(461);
      if (lookahead == 'd')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(457);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(239);
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
        ADVANCE(176);
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
        ADVANCE(239);
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
        ADVANCE(474);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(472);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(474);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 475:
      if (lookahead == 'n')
        SKIP(471);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(477);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(476);
      END_STATE();
    case 481:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(481);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '(')
        ADVANCE(326);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(331);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(481);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        SKIP(481);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'e')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'r')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'v')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'n')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'g')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 502:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(505);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '\\')
        SKIP(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 503:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '\\')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(503);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '\\')
        SKIP(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
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
        ADVANCE(239);
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
        ADVANCE(351);
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
        ADVANCE(402);
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
        ADVANCE(176);
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
        ADVANCE(399);
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
        ADVANCE(239);
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
        ADVANCE(351);
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
        ADVANCE(402);
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
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
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
        ADVANCE(351);
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
        ADVANCE(402);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
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
        ADVANCE(399);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
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
        ADVANCE(399);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
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
        ADVANCE(399);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
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
        ADVANCE(399);
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
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(612);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
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
        ADVANCE(351);
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
        ADVANCE(402);
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
        ADVANCE(634);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(635);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 631:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(632);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(633);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(631);
      if (lookahead == '\r')
        ADVANCE(634);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(635);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(630);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 635:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 636:
      if (lookahead == 'n')
        SKIP(630);
      END_STATE();
    case 637:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(640);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(641);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(637);
      END_STATE();
    case 638:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(638);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '=')
        ADVANCE(327);
      if (lookahead == '\\')
        ADVANCE(639);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(638);
      if (lookahead == '\r')
        ADVANCE(640);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(641);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(637);
      END_STATE();
    case 641:
      if (lookahead == 'n')
        SKIP(637);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(327);
      if (lookahead == '\\')
        ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(643);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(332);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
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
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 648:
      if (lookahead == '\n')
        ADVANCE(648);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(648);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(651);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(647);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 651:
      if (lookahead == 'n')
        SKIP(647);
      END_STATE();
    case 652:
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(656);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(652);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 653:
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(654);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(653);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(653);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(656);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(652);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 656:
      if (lookahead == 'n')
        SKIP(652);
      END_STATE();
    case 657:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(660);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(661);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(657);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(659);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(658);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(658);
      if (lookahead == '\r')
        ADVANCE(660);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(661);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(657);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 661:
      if (lookahead == 'n')
        SKIP(657);
      END_STATE();
    case 662:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(665);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(666);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(662);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      END_STATE();
    case 663:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(663);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(664);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(663);
      if (lookahead == '\r')
        ADVANCE(665);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(666);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(662);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(334);
      END_STATE();
    case 666:
      if (lookahead == 'n')
        SKIP(662);
      END_STATE();
    case 667:
      if (lookahead == '\n')
        ADVANCE(668);
      if (lookahead == '\r')
        ADVANCE(670);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(671);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(667);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 668:
      if (lookahead == '\n')
        ADVANCE(668);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(669);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(668);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '\n')
        ADVANCE(668);
      if (lookahead == '\r')
        ADVANCE(670);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(671);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(667);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 671:
      if (lookahead == 'n')
        SKIP(667);
      END_STATE();
    case 672:
      if (lookahead == '\n')
        ADVANCE(673);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(676);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(672);
      END_STATE();
    case 673:
      if (lookahead == '\n')
        ADVANCE(673);
      if (lookahead == '\r')
        ADVANCE(673);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(674);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '\n')
        ADVANCE(673);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(676);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(672);
      END_STATE();
    case 676:
      if (lookahead == 'n')
        SKIP(672);
      END_STATE();
    case 677:
      if (lookahead == '\n')
        ADVANCE(678);
      if (lookahead == '\r')
        ADVANCE(680);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(681);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(677);
      END_STATE();
    case 678:
      if (lookahead == '\n')
        ADVANCE(678);
      if (lookahead == '\r')
        ADVANCE(678);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(679);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '\n')
        ADVANCE(678);
      if (lookahead == '\r')
        ADVANCE(680);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(681);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(677);
      END_STATE();
    case 681:
      if (lookahead == 'n')
        SKIP(677);
      END_STATE();
    case 682:
      if (lookahead == '\n')
        ADVANCE(683);
      if (lookahead == '\r')
        ADVANCE(685);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(682);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 683:
      if (lookahead == '\n')
        ADVANCE(683);
      if (lookahead == '\r')
        ADVANCE(683);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(684);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(683);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '\n')
        ADVANCE(683);
      if (lookahead == '\r')
        ADVANCE(685);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(682);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 686:
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(690);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(691);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(692);
      END_STATE();
    case 687:
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(687);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(689);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(687);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(690);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(691);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(692);
      END_STATE();
    case 691:
      if (lookahead == 'n')
        SKIP(686);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 693:
      if (lookahead == '\n')
        ADVANCE(694);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(698);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(693);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(699);
      END_STATE();
    case 694:
      if (lookahead == '\n')
        ADVANCE(694);
      if (lookahead == '\r')
        ADVANCE(694);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(694);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '\n')
        ADVANCE(694);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '\\')
        SKIP(698);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(693);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(699);
      END_STATE();
    case 698:
      if (lookahead == 'n')
        SKIP(693);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 700:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(703);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      END_STATE();
    case 701:
      if (lookahead == '\n')
        ADVANCE(701);
      if (lookahead == '\r')
        ADVANCE(701);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(702);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead == 't')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(701);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
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
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '0')
        ADVANCE(240);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(704);
      if (lookahead == 'c')
        ADVANCE(247);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == 'n')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(700);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(706);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == 'h')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(706);
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(709);
      if (lookahead == 'h')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      END_STATE();
    case 709:
      if (lookahead == 'n')
        SKIP(705);
      END_STATE();
    case 710:
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == '\r')
        ADVANCE(714);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(715);
      if (lookahead == 'i')
        ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(710);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 711:
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == '\r')
        ADVANCE(711);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(712);
      if (lookahead == 'i')
        ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(711);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      if (lookahead == '\n')
        ADVANCE(711);
      if (lookahead == '\r')
        ADVANCE(714);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(715);
      if (lookahead == 'i')
        ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(710);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 715:
      if (lookahead == 'n')
        SKIP(710);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(248);
      if (lookahead == 'n')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 717:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(720);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == 'i')
        ADVANCE(716);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 718:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(719);
      if (lookahead == 'i')
        ADVANCE(713);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(718);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ':')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == 'i')
        ADVANCE(716);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 721:
      if (lookahead == 'n')
        SKIP(717);
      END_STATE();
    case 722:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(725);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(726);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(722);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 723:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(723);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(724);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 724:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(723);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 725:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(725);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(234);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(726);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(722);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(287);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(248);
      END_STATE();
    case 726:
      if (lookahead == 'n')
        SKIP(722);
      END_STATE();
    case 727:
      if (lookahead == '\t')
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(733);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(729);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(730);
      if (lookahead == ' ')
        ADVANCE(731);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(732);
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
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(729);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(730);
      if (lookahead == ' ')
        ADVANCE(731);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(732);
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
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 730:
      if (lookahead == '\t')
        ADVANCE(729);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(730);
      if (lookahead == ' ')
        ADVANCE(731);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(732);
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
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(729);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(730);
      if (lookahead == ' ')
        ADVANCE(731);
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
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(338);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(342);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(732);
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
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(730);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 733:
      if (lookahead == '\t')
        ADVANCE(404);
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(733);
      if (lookahead == ' ')
        ADVANCE(401);
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
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(346);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(349);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 296},
  [4] = {.lex_state = 319, .external_lex_state = 2},
  [5] = {.lex_state = 324},
  [6] = {.lex_state = 335},
  [7] = {.lex_state = 352},
  [8] = {.lex_state = 324},
  [9] = {.lex_state = 357},
  [10] = {.lex_state = 357},
  [11] = {.lex_state = 378, .external_lex_state = 3},
  [12] = {.lex_state = 383},
  [13] = {.lex_state = 390, .external_lex_state = 3},
  [14] = {.lex_state = 395},
  [15] = {.lex_state = 403},
  [16] = {.lex_state = 390, .external_lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 390, .external_lex_state = 3},
  [19] = {.lex_state = 390, .external_lex_state = 3},
  [20] = {.lex_state = 390, .external_lex_state = 3},
  [21] = {.lex_state = 378},
  [22] = {.lex_state = 411},
  [23] = {.lex_state = 378},
  [24] = {.lex_state = 416},
  [25] = {.lex_state = 378},
  [26] = {.lex_state = 431, .external_lex_state = 3},
  [27] = {.lex_state = 452, .external_lex_state = 3},
  [28] = {.lex_state = 457, .external_lex_state = 4},
  [29] = {.lex_state = 289},
  [30] = {.lex_state = 390, .external_lex_state = 3},
  [31] = {.lex_state = 357},
  [32] = {.lex_state = 416},
  [33] = {.lex_state = 357},
  [34] = {.lex_state = 324},
  [35] = {.lex_state = 335},
  [36] = {.lex_state = 378},
  [37] = {.lex_state = 462, .external_lex_state = 3},
  [38] = {.lex_state = 462, .external_lex_state = 3},
  [39] = {.lex_state = 335},
  [40] = {.lex_state = 466, .external_lex_state = 3},
  [41] = {.lex_state = 466, .external_lex_state = 3},
  [42] = {.lex_state = 335},
  [43] = {.lex_state = 462, .external_lex_state = 3},
  [44] = {.lex_state = 462, .external_lex_state = 3},
  [45] = {.lex_state = 357},
  [46] = {.lex_state = 471, .external_lex_state = 3},
  [47] = {.lex_state = 390, .external_lex_state = 3},
  [48] = {.lex_state = 390, .external_lex_state = 3},
  [49] = {.lex_state = 378},
  [50] = {.lex_state = 324},
  [51] = {.lex_state = 416},
  [52] = {.lex_state = 476, .external_lex_state = 3},
  [53] = {.lex_state = 481, .external_lex_state = 3},
  [54] = {.lex_state = 357},
  [55] = {.lex_state = 357, .external_lex_state = 3},
  [56] = {.lex_state = 502},
  [57] = {.lex_state = 357},
  [58] = {.lex_state = 357},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 507},
  [66] = {.lex_state = 403},
  [67] = {.lex_state = 403},
  [68] = {.lex_state = 403},
  [69] = {.lex_state = 390, .external_lex_state = 3},
  [70] = {.lex_state = 403},
  [71] = {.lex_state = 403},
  [72] = {.lex_state = 403},
  [73] = {.lex_state = 611},
  [74] = {.lex_state = 403},
  [75] = {.lex_state = 403},
  [76] = {.lex_state = 411},
  [77] = {.lex_state = 390, .external_lex_state = 3},
  [78] = {.lex_state = 352},
  [79] = {.lex_state = 378},
  [80] = {.lex_state = 319, .external_lex_state = 2},
  [81] = {.lex_state = 630},
  [82] = {.lex_state = 416},
  [83] = {.lex_state = 452, .external_lex_state = 3},
  [84] = {.lex_state = 630},
  [85] = {.lex_state = 378},
  [86] = {.lex_state = 416},
  [87] = {.lex_state = 390, .external_lex_state = 3},
  [88] = {.lex_state = 390, .external_lex_state = 3},
  [89] = {.lex_state = 390, .external_lex_state = 3},
  [90] = {.lex_state = 457, .external_lex_state = 4},
  [91] = {.lex_state = 457, .external_lex_state = 4},
  [92] = {.lex_state = 390, .external_lex_state = 3},
  [93] = {.lex_state = 289},
  [94] = {.lex_state = 289},
  [95] = {.lex_state = 471},
  [96] = {.lex_state = 637},
  [97] = {.lex_state = 319, .external_lex_state = 2},
  [98] = {.lex_state = 324},
  [99] = {.lex_state = 416},
  [100] = {.lex_state = 416},
  [101] = {.lex_state = 416},
  [102] = {.lex_state = 357},
  [103] = {.lex_state = 462, .external_lex_state = 3},
  [104] = {.lex_state = 462, .external_lex_state = 3},
  [105] = {.lex_state = 637},
  [106] = {.lex_state = 466, .external_lex_state = 3},
  [107] = {.lex_state = 462, .external_lex_state = 3},
  [108] = {.lex_state = 335},
  [109] = {.lex_state = 466, .external_lex_state = 3},
  [110] = {.lex_state = 466, .external_lex_state = 3},
  [111] = {.lex_state = 466, .external_lex_state = 3},
  [112] = {.lex_state = 462, .external_lex_state = 3},
  [113] = {.lex_state = 637},
  [114] = {.lex_state = 642, .external_lex_state = 3},
  [115] = {.lex_state = 647, .external_lex_state = 3},
  [116] = {.lex_state = 647, .external_lex_state = 3},
  [117] = {.lex_state = 390, .external_lex_state = 3},
  [118] = {.lex_state = 378},
  [119] = {.lex_state = 378},
  [120] = {.lex_state = 652, .external_lex_state = 3},
  [121] = {.lex_state = 657, .external_lex_state = 3},
  [122] = {.lex_state = 657, .external_lex_state = 3},
  [123] = {.lex_state = 357, .external_lex_state = 3},
  [124] = {.lex_state = 662, .external_lex_state = 3},
  [125] = {.lex_state = 352},
  [126] = {.lex_state = 667, .external_lex_state = 3},
  [127] = {.lex_state = 672, .external_lex_state = 3},
  [128] = {.lex_state = 677, .external_lex_state = 3},
  [129] = {.lex_state = 390, .external_lex_state = 3},
  [130] = {.lex_state = 502},
  [131] = {.lex_state = 502},
  [132] = {.lex_state = 357},
  [133] = {.lex_state = 378},
  [134] = {.lex_state = 390, .external_lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 682},
  [138] = {.lex_state = 686},
  [139] = {.lex_state = 693},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 403},
  [142] = {.lex_state = 403},
  [143] = {.lex_state = 682},
  [144] = {.lex_state = 686},
  [145] = {.lex_state = 693},
  [146] = {.lex_state = 403},
  [147] = {.lex_state = 403},
  [148] = {.lex_state = 390, .external_lex_state = 3},
  [149] = {.lex_state = 411},
  [150] = {.lex_state = 378},
  [151] = {.lex_state = 700, .external_lex_state = 4},
  [152] = {.lex_state = 411},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 416},
  [155] = {.lex_state = 637},
  [156] = {.lex_state = 637},
  [157] = {.lex_state = 637},
  [158] = {.lex_state = 319, .external_lex_state = 2},
  [159] = {.lex_state = 378},
  [160] = {.lex_state = 390, .external_lex_state = 3},
  [161] = {.lex_state = 390, .external_lex_state = 3},
  [162] = {.lex_state = 637},
  [163] = {.lex_state = 705, .external_lex_state = 3},
  [164] = {.lex_state = 630},
  [165] = {.lex_state = 457, .external_lex_state = 4},
  [166] = {.lex_state = 390, .external_lex_state = 3},
  [167] = {.lex_state = 457, .external_lex_state = 4},
  [168] = {.lex_state = 289},
  [169] = {.lex_state = 289},
  [170] = {.lex_state = 637},
  [171] = {.lex_state = 357},
  [172] = {.lex_state = 324},
  [173] = {.lex_state = 637},
  [174] = {.lex_state = 710, .external_lex_state = 4},
  [175] = {.lex_state = 717},
  [176] = {.lex_state = 390, .external_lex_state = 3},
  [177] = {.lex_state = 324},
  [178] = {.lex_state = 319, .external_lex_state = 2},
  [179] = {.lex_state = 416},
  [180] = {.lex_state = 416},
  [181] = {.lex_state = 416},
  [182] = {.lex_state = 466, .external_lex_state = 3},
  [183] = {.lex_state = 462, .external_lex_state = 3},
  [184] = {.lex_state = 466, .external_lex_state = 3},
  [185] = {.lex_state = 466, .external_lex_state = 3},
  [186] = {.lex_state = 466, .external_lex_state = 3},
  [187] = {.lex_state = 335},
  [188] = {.lex_state = 466, .external_lex_state = 3},
  [189] = {.lex_state = 324},
  [190] = {.lex_state = 637},
  [191] = {.lex_state = 647, .external_lex_state = 3},
  [192] = {.lex_state = 647, .external_lex_state = 3},
  [193] = {.lex_state = 647, .external_lex_state = 3},
  [194] = {.lex_state = 390, .external_lex_state = 3},
  [195] = {.lex_state = 476, .external_lex_state = 3},
  [196] = {.lex_state = 657, .external_lex_state = 3},
  [197] = {.lex_state = 657, .external_lex_state = 3},
  [198] = {.lex_state = 662, .external_lex_state = 3},
  [199] = {.lex_state = 672, .external_lex_state = 3},
  [200] = {.lex_state = 390, .external_lex_state = 3},
  [201] = {.lex_state = 378},
  [202] = {.lex_state = 390, .external_lex_state = 3},
  [203] = {.lex_state = 324},
  [204] = {.lex_state = 378},
  [205] = {.lex_state = 722, .external_lex_state = 3},
  [206] = {.lex_state = 722, .external_lex_state = 3},
  [207] = {.lex_state = 677, .external_lex_state = 3},
  [208] = {.lex_state = 722, .external_lex_state = 3},
  [209] = {.lex_state = 357},
  [210] = {.lex_state = 677, .external_lex_state = 3},
  [211] = {.lex_state = 502},
  [212] = {.lex_state = 630},
  [213] = {.lex_state = 672, .external_lex_state = 3},
  [214] = {.lex_state = 390, .external_lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 686},
  [218] = {.lex_state = 686},
  [219] = {.lex_state = 693},
  [220] = {.lex_state = 693},
  [221] = {.lex_state = 403},
  [222] = {.lex_state = 403},
  [223] = {.lex_state = 403},
  [224] = {.lex_state = 403},
  [225] = {.lex_state = 727},
  [226] = {.lex_state = 727},
  [227] = {.lex_state = 390, .external_lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 390, .external_lex_state = 3},
  [230] = {.lex_state = 700, .external_lex_state = 4},
  [231] = {.lex_state = 411},
  [232] = {.lex_state = 378},
  [233] = {.lex_state = 416},
  [234] = {.lex_state = 637},
  [235] = {.lex_state = 630},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 705, .external_lex_state = 3},
  [238] = {.lex_state = 630},
  [239] = {.lex_state = 378},
  [240] = {.lex_state = 390, .external_lex_state = 3},
  [241] = {.lex_state = 637},
  [242] = {.lex_state = 390, .external_lex_state = 3},
  [243] = {.lex_state = 637},
  [244] = {.lex_state = 637},
  [245] = {.lex_state = 357},
  [246] = {.lex_state = 357},
  [247] = {.lex_state = 324},
  [248] = {.lex_state = 390, .external_lex_state = 3},
  [249] = {.lex_state = 390, .external_lex_state = 3},
  [250] = {.lex_state = 390, .external_lex_state = 3},
  [251] = {.lex_state = 710, .external_lex_state = 4},
  [252] = {.lex_state = 390, .external_lex_state = 3},
  [253] = {.lex_state = 717},
  [254] = {.lex_state = 637},
  [255] = {.lex_state = 390, .external_lex_state = 3},
  [256] = {.lex_state = 319, .external_lex_state = 2},
  [257] = {.lex_state = 466, .external_lex_state = 3},
  [258] = {.lex_state = 466, .external_lex_state = 3},
  [259] = {.lex_state = 378},
  [260] = {.lex_state = 324},
  [261] = {.lex_state = 672, .external_lex_state = 3},
  [262] = {.lex_state = 390, .external_lex_state = 3},
  [263] = {.lex_state = 637},
  [264] = {.lex_state = 637},
  [265] = {.lex_state = 637},
  [266] = {.lex_state = 722, .external_lex_state = 3},
  [267] = {.lex_state = 722, .external_lex_state = 3},
  [268] = {.lex_state = 677, .external_lex_state = 3},
  [269] = {.lex_state = 357},
  [270] = {.lex_state = 672, .external_lex_state = 3},
  [271] = {.lex_state = 390, .external_lex_state = 3},
  [272] = {.lex_state = 686},
  [273] = {.lex_state = 693},
  [274] = {.lex_state = 403},
  [275] = {.lex_state = 727},
  [276] = {.lex_state = 700, .external_lex_state = 4},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 390, .external_lex_state = 3},
  [279] = {.lex_state = 637},
  [280] = {.lex_state = 378},
  [281] = {.lex_state = 416},
  [282] = {.lex_state = 296},
  [283] = {.lex_state = 637},
  [284] = {.lex_state = 390, .external_lex_state = 3},
  [285] = {.lex_state = 296},
  [286] = {.lex_state = 637},
  [287] = {.lex_state = 637},
  [288] = {.lex_state = 378},
  [289] = {.lex_state = 390, .external_lex_state = 3},
  [290] = {.lex_state = 630},
  [291] = {.lex_state = 637},
  [292] = {.lex_state = 637},
  [293] = {.lex_state = 357},
  [294] = {.lex_state = 710, .external_lex_state = 4},
  [295] = {.lex_state = 390, .external_lex_state = 3},
  [296] = {.lex_state = 390, .external_lex_state = 3},
  [297] = {.lex_state = 717},
  [298] = {.lex_state = 390, .external_lex_state = 3},
  [299] = {.lex_state = 390, .external_lex_state = 3},
  [300] = {.lex_state = 378},
  [301] = {.lex_state = 390, .external_lex_state = 3},
  [302] = {.lex_state = 378},
  [303] = {.lex_state = 390, .external_lex_state = 3},
  [304] = {.lex_state = 637},
  [305] = {.lex_state = 324},
  [306] = {.lex_state = 630},
  [307] = {.lex_state = 637},
  [308] = {.lex_state = 677, .external_lex_state = 3},
  [309] = {.lex_state = 324},
  [310] = {.lex_state = 637},
  [311] = {.lex_state = 677, .external_lex_state = 3},
  [312] = {.lex_state = 700, .external_lex_state = 4},
  [313] = {.lex_state = 637},
  [314] = {.lex_state = 637},
  [315] = {.lex_state = 637},
  [316] = {.lex_state = 637},
  [317] = {.lex_state = 637},
  [318] = {.lex_state = 630},
  [319] = {.lex_state = 637},
  [320] = {.lex_state = 296},
  [321] = {.lex_state = 637},
  [322] = {.lex_state = 390, .external_lex_state = 3},
  [323] = {.lex_state = 710, .external_lex_state = 4},
  [324] = {.lex_state = 717},
  [325] = {.lex_state = 637},
  [326] = {.lex_state = 378},
  [327] = {.lex_state = 390, .external_lex_state = 3},
  [328] = {.lex_state = 637},
  [329] = {.lex_state = 378},
  [330] = {.lex_state = 637},
  [331] = {.lex_state = 324},
  [332] = {.lex_state = 630},
  [333] = {.lex_state = 637},
  [334] = {.lex_state = 677, .external_lex_state = 3},
  [335] = {.lex_state = 324},
  [336] = {.lex_state = 637},
  [337] = {.lex_state = 390, .external_lex_state = 3},
  [338] = {.lex_state = 637},
  [339] = {.lex_state = 637},
  [340] = {.lex_state = 296},
  [341] = {.lex_state = 637},
  [342] = {.lex_state = 630},
  [343] = {.lex_state = 637},
  [344] = {.lex_state = 637},
  [345] = {.lex_state = 637},
  [346] = {.lex_state = 637},
  [347] = {.lex_state = 637},
  [348] = {.lex_state = 637},
  [349] = {.lex_state = 390, .external_lex_state = 3},
  [350] = {.lex_state = 637},
  [351] = {.lex_state = 637},
  [352] = {.lex_state = 637},
  [353] = {.lex_state = 296},
  [354] = {.lex_state = 637},
  [355] = {.lex_state = 637},
  [356] = {.lex_state = 390, .external_lex_state = 3},
  [357] = {.lex_state = 637},
  [358] = {.lex_state = 637},
  [359] = {.lex_state = 637},
  [360] = {.lex_state = 637},
  [361] = {.lex_state = 390, .external_lex_state = 3},
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
    [sym_module] = STATE(17),
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(19),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_module_repeat1] = STATE(22),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(34),
  },
  [3] = {
    [sym__identifier] = STATE(27),
    [anon_sym_qualified] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [4] = {
    [sym_statement_list] = STATE(30),
    [sym__layout_open_brace] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(34),
  },
  [5] = {
    [sym_context] = STATE(33),
    [sym_class] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [6] = {
    [sym__op] = STATE(40),
    [sym_variable_symbol] = STATE(41),
    [sym_constructor_symbol] = STATE(41),
    [sym_integer] = STATE(42),
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
    [sym__integer_literal] = ACTIONS(68),
    [sym__octal_literal] = ACTIONS(68),
    [sym__hexidecimal_literal] = ACTIONS(68),
  },
  [7] = {
    [sym__type] = STATE(47),
    [sym_function_type] = STATE(48),
    [sym_context] = STATE(49),
    [sym_class] = STATE(50),
    [sym__identifier] = STATE(51),
    [sym_simple_type] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(74),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [8] = {
    [sym_context] = STATE(54),
    [sym_class] = STATE(34),
    [sym_simple_type] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [9] = {
    [sym_simple_type] = STATE(57),
    [sym_constructor_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_simple_type] = STATE(58),
    [sym_constructor_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym__layout_semicolon] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_COLON_COLON] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(84),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_module_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(84),
    [anon_sym_COLON_COLON] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(84),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_module_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym__graphic] = STATE(61),
    [sym__small] = STATE(62),
    [sym__large] = STATE(62),
    [sym__symbol] = STATE(62),
    [sym__special] = STATE(62),
    [sym__escape] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [sym__ascii_large] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_DOLLAR] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_1] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_TILDE] = ACTIONS(94),
    [anon_sym_BSLASH] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [sym__space] = ACTIONS(96),
  },
  [15] = {
    [sym__gap] = STATE(68),
    [sym__graphic] = STATE(68),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(68),
    [aux_sym_string_repeat1] = STATE(75),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym__ascii_large] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_1] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__space] = ACTIONS(122),
    [sym__newline] = ACTIONS(122),
    [sym__tab] = ACTIONS(122),
    [sym__vertical_tab] = ACTIONS(122),
  },
  [16] = {
    [sym__layout_semicolon] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [anon_sym_COLON_COLON] = ACTIONS(138),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(140),
    [sym_module_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [22] = {
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(77),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [23] = {
    [sym__identifier] = STATE(79),
    [anon_sym_COLON_COLON] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [24] = {
    [sym_module_exports] = STATE(82),
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(148),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [sym__identifier] = STATE(83),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_as] = ACTIONS(84),
    [anon_sym_hiding] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [anon_sym_deriving] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym_import_specification] = STATE(87),
    [sym__layout_semicolon] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_as] = ACTIONS(160),
    [anon_sym_hiding] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym__expression] = STATE(89),
    [sym_do_expression] = STATE(20),
    [sym__statement] = STATE(90),
    [sym__literal] = STATE(20),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_statement_list_repeat1] = STATE(91),
    [sym__layout_close_brace] = ACTIONS(164),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [29] = {
    [sym__expression] = STATE(92),
    [sym_do_expression] = STATE(20),
    [sym__statement] = STATE(93),
    [sym__literal] = STATE(20),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_statement_list_repeat1] = STATE(94),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [30] = {
    [sym__layout_semicolon] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [sym_class] = STATE(96),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [aux_sym_type_class_repeat1] = STATE(100),
    [anon_sym_where] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [sym_constructor_identifier] = ACTIONS(182),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(104),
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [36] = {
    [sym__identifier] = STATE(105),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(107),
    [sym__layout_semicolon] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [38] = {
    [sym__layout_semicolon] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(196),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(198),
  },
  [40] = {
    [aux_sym_fixity_repeat1] = STATE(109),
    [sym__layout_semicolon] = ACTIONS(200),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [sym__op] = STATE(110),
    [sym_variable_symbol] = STATE(41),
    [sym_constructor_symbol] = STATE(41),
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [43] = {
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(212),
  },
  [44] = {
    [sym__symbol] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [45] = {
    [sym_class] = STATE(113),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [aux_sym_type_class_repeat1] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym__type] = STATE(117),
    [sym_function_type] = STATE(48),
    [sym__identifier] = STATE(51),
    [sym_simple_type] = STATE(52),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [anon_sym_EQ_GT] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [anon_sym_DASH_GT] = ACTIONS(238),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_DASH_GT] = ACTIONS(238),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [aux_sym_type_class_repeat1] = STATE(121),
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_deriving] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(240),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [sym_simple_type] = STATE(123),
    [sym_constructor_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym_constructors] = STATE(127),
    [sym_constructor] = STATE(128),
    [sym_deriving] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [aux_sym_type_class_repeat1] = STATE(131),
    [anon_sym_EQ] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(258),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(260),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(262),
  },
  [60] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(264),
  },
  [61] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(266),
  },
  [62] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(268),
  },
  [63] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(270),
  },
  [64] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(272),
  },
  [65] = {
    [sym__char_escape] = STATE(136),
    [sym__ascii] = STATE(136),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_BSLASH] = ACTIONS(274),
    [anon_sym_x] = ACTIONS(280),
    [anon_sym_X] = ACTIONS(280),
    [anon_sym_o] = ACTIONS(282),
    [anon_sym_O] = ACTIONS(282),
    [anon_sym_a] = ACTIONS(274),
    [anon_sym_b] = ACTIONS(274),
    [anon_sym_f] = ACTIONS(274),
    [anon_sym_n] = ACTIONS(274),
    [anon_sym_r] = ACTIONS(274),
    [anon_sym_t] = ACTIONS(274),
    [anon_sym_v] = ACTIONS(274),
    [anon_sym_NUL] = ACTIONS(284),
    [anon_sym_SOH] = ACTIONS(284),
    [anon_sym_STX] = ACTIONS(284),
    [anon_sym_ETX] = ACTIONS(284),
    [anon_sym_EOT] = ACTIONS(284),
    [anon_sym_ENQ] = ACTIONS(284),
    [anon_sym_ACK] = ACTIONS(284),
    [anon_sym_BEL] = ACTIONS(284),
    [anon_sym_BS] = ACTIONS(284),
    [anon_sym_HT] = ACTIONS(284),
    [anon_sym_LF] = ACTIONS(284),
    [anon_sym_VT] = ACTIONS(284),
    [anon_sym_FF] = ACTIONS(284),
    [anon_sym_CR] = ACTIONS(284),
    [anon_sym_SO] = ACTIONS(284),
    [anon_sym_SI] = ACTIONS(284),
    [anon_sym_DLE] = ACTIONS(284),
    [anon_sym_DC1] = ACTIONS(284),
    [anon_sym_DC2] = ACTIONS(284),
    [anon_sym_DC3] = ACTIONS(284),
    [anon_sym_DC4] = ACTIONS(284),
    [anon_sym_NAK] = ACTIONS(284),
    [anon_sym_SYN] = ACTIONS(284),
    [anon_sym_ETB] = ACTIONS(284),
    [anon_sym_CAN] = ACTIONS(284),
    [anon_sym_EM] = ACTIONS(284),
    [anon_sym_SUB] = ACTIONS(284),
    [anon_sym_ESC] = ACTIONS(284),
    [anon_sym_FS] = ACTIONS(284),
    [anon_sym_GS] = ACTIONS(284),
    [anon_sym_RS] = ACTIONS(284),
    [anon_sym_US] = ACTIONS(284),
    [anon_sym_SP] = ACTIONS(284),
    [anon_sym_DEL] = ACTIONS(284),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_BQUOTE] = ACTIONS(286),
    [anon_sym_COLON] = ACTIONS(286),
    [anon_sym_EQ] = ACTIONS(286),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(286),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(286),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(286),
    [anon_sym__] = ACTIONS(286),
    [sym__ascii_large] = ACTIONS(286),
    [anon_sym_POUND] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_1] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_SLASH] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [anon_sym_QMARK] = ACTIONS(286),
    [anon_sym_AT] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(286),
    [anon_sym_BSLASH] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [sym__space] = ACTIONS(286),
    [sym__newline] = ACTIONS(286),
    [sym__tab] = ACTIONS(286),
    [sym__vertical_tab] = ACTIONS(286),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
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
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
  },
  [68] = {
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
    [sym_comment] = ACTIONS(66),
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
  [69] = {
    [sym__layout_semicolon] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_BQUOTE] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(294),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_PIPE] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(294),
    [anon_sym__] = ACTIONS(294),
    [sym__ascii_large] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(294),
    [anon_sym_1] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_LT] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_TILDE] = ACTIONS(294),
    [anon_sym_BSLASH] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym__space] = ACTIONS(294),
    [sym__newline] = ACTIONS(294),
    [sym__tab] = ACTIONS(294),
    [sym__vertical_tab] = ACTIONS(294),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(296),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [sym__ascii_large] = ACTIONS(296),
    [anon_sym_POUND] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_1] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [sym__space] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
    [sym__tab] = ACTIONS(296),
    [sym__vertical_tab] = ACTIONS(296),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_BQUOTE] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(298),
    [anon_sym__] = ACTIONS(298),
    [sym__ascii_large] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_1] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym__space] = ACTIONS(298),
    [sym__newline] = ACTIONS(298),
    [sym__tab] = ACTIONS(298),
    [sym__vertical_tab] = ACTIONS(298),
  },
  [73] = {
    [sym__char_escape] = STATE(142),
    [sym__ascii] = STATE(142),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [sym__ascii_large] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
    [anon_sym_x] = ACTIONS(306),
    [anon_sym_X] = ACTIONS(306),
    [anon_sym_o] = ACTIONS(308),
    [anon_sym_O] = ACTIONS(308),
    [anon_sym_a] = ACTIONS(300),
    [anon_sym_b] = ACTIONS(300),
    [anon_sym_f] = ACTIONS(300),
    [anon_sym_n] = ACTIONS(300),
    [anon_sym_r] = ACTIONS(300),
    [anon_sym_t] = ACTIONS(300),
    [anon_sym_v] = ACTIONS(300),
    [anon_sym_NUL] = ACTIONS(310),
    [anon_sym_SOH] = ACTIONS(310),
    [anon_sym_STX] = ACTIONS(310),
    [anon_sym_ETX] = ACTIONS(310),
    [anon_sym_EOT] = ACTIONS(310),
    [anon_sym_ENQ] = ACTIONS(310),
    [anon_sym_ACK] = ACTIONS(310),
    [anon_sym_BEL] = ACTIONS(310),
    [anon_sym_BS] = ACTIONS(310),
    [anon_sym_HT] = ACTIONS(310),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_VT] = ACTIONS(310),
    [anon_sym_FF] = ACTIONS(310),
    [anon_sym_CR] = ACTIONS(310),
    [anon_sym_SO] = ACTIONS(310),
    [anon_sym_SI] = ACTIONS(310),
    [anon_sym_DLE] = ACTIONS(310),
    [anon_sym_DC1] = ACTIONS(310),
    [anon_sym_DC2] = ACTIONS(310),
    [anon_sym_DC3] = ACTIONS(310),
    [anon_sym_DC4] = ACTIONS(310),
    [anon_sym_NAK] = ACTIONS(310),
    [anon_sym_SYN] = ACTIONS(310),
    [anon_sym_ETB] = ACTIONS(310),
    [anon_sym_CAN] = ACTIONS(310),
    [anon_sym_EM] = ACTIONS(310),
    [anon_sym_SUB] = ACTIONS(310),
    [anon_sym_ESC] = ACTIONS(310),
    [anon_sym_FS] = ACTIONS(310),
    [anon_sym_GS] = ACTIONS(310),
    [anon_sym_RS] = ACTIONS(310),
    [anon_sym_US] = ACTIONS(310),
    [anon_sym_SP] = ACTIONS(310),
    [anon_sym_DEL] = ACTIONS(310),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(312),
    [sym_comment] = ACTIONS(66),
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
  [75] = {
    [sym__gap] = STATE(147),
    [sym__graphic] = STATE(147),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(147),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym__ascii_large] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_1] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__space] = ACTIONS(122),
    [sym__newline] = ACTIONS(122),
    [sym__tab] = ACTIONS(122),
    [sym__vertical_tab] = ACTIONS(122),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_import] = ACTIONS(320),
    [anon_sym_do] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_infixl] = ACTIONS(320),
    [anon_sym_infixr] = ACTIONS(320),
    [anon_sym_infix] = ACTIONS(320),
    [anon_sym_COLON_COLON] = ACTIONS(320),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_newtype] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(322),
    [sym_constructor_identifier] = ACTIONS(322),
    [sym_module_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [sym__integer_literal] = ACTIONS(320),
    [sym__octal_literal] = ACTIONS(320),
    [sym__hexidecimal_literal] = ACTIONS(320),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(326),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__type] = STATE(117),
    [sym_function_type] = STATE(48),
    [sym_context] = STATE(150),
    [sym_class] = STATE(50),
    [sym__identifier] = STATE(51),
    [sym_simple_type] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(74),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [anon_sym_COLON_COLON] = ACTIONS(328),
    [sym_variable_identifier] = ACTIONS(328),
    [sym_constructor_identifier] = ACTIONS(330),
    [sym_module_identifier] = ACTIONS(330),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym_declarations] = STATE(153),
    [sym__layout_open_brace] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym_export] = STATE(156),
    [sym__identifier] = STATE(157),
    [anon_sym_RPAREN] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [anon_sym_where] = ACTIONS(342),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [sym_import_specification] = STATE(160),
    [sym__layout_semicolon] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_as] = ACTIONS(348),
    [anon_sym_hiding] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym__identifier] = STATE(162),
    [anon_sym_RPAREN] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__identifier] = STATE(163),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(346),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym__layout_semicolon] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(356),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [sym__layout_semicolon] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(360),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__layout_close_brace] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [sym__integer_literal] = ACTIONS(364),
    [sym__octal_literal] = ACTIONS(364),
    [sym__hexidecimal_literal] = ACTIONS(364),
  },
  [91] = {
    [sym__expression] = STATE(89),
    [sym_do_expression] = STATE(20),
    [sym__statement] = STATE(167),
    [sym__literal] = STATE(20),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [sym__layout_close_brace] = ACTIONS(368),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [92] = {
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [sym__integer_literal] = ACTIONS(364),
    [sym__octal_literal] = ACTIONS(364),
    [sym__hexidecimal_literal] = ACTIONS(364),
  },
  [94] = {
    [sym__expression] = STATE(92),
    [sym_do_expression] = STATE(20),
    [sym__statement] = STATE(169),
    [sym__literal] = STATE(20),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [anon_sym_RBRACE] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_variable_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [aux_sym_context_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(380),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym_general_declarations] = STATE(176),
    [sym__layout_open_brace] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [aux_sym_type_class_repeat1] = STATE(177),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [anon_sym_where] = ACTIONS(386),
    [anon_sym_EQ_GT] = ACTIONS(388),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [anon_sym_where] = ACTIONS(392),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [aux_sym_type_class_repeat1] = STATE(181),
    [anon_sym_where] = ACTIONS(392),
    [sym_variable_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym_constructor_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(183),
    [sym__layout_semicolon] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [104] = {
    [sym__symbol] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [105] = {
    [anon_sym_BQUOTE] = ACTIONS(412),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [sym__layout_semicolon] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym__symbol] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [108] = {
    [sym__op] = STATE(186),
    [sym_variable_symbol] = STATE(41),
    [sym_constructor_symbol] = STATE(41),
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [109] = {
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [aux_sym_fixity_repeat1] = STATE(188),
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(204),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__layout_semicolon] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(426),
    [anon_sym_EQ] = ACTIONS(426),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_BANG] = ACTIONS(426),
    [sym_comment] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(426),
    [anon_sym_DOLLAR] = ACTIONS(426),
    [anon_sym_PERCENT] = ACTIONS(426),
    [anon_sym_AMP] = ACTIONS(426),
    [anon_sym_1] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_QMARK] = ACTIONS(426),
    [anon_sym_AT] = ACTIONS(426),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_TILDE] = ACTIONS(426),
    [anon_sym_BSLASH] = ACTIONS(426),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(190),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_DASH_GT] = ACTIONS(386),
    [anon_sym_EQ_GT] = ACTIONS(388),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_DASH_GT] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [aux_sym_type_class_repeat1] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym_variable_identifier] = ACTIONS(444),
    [sym_constructor_identifier] = ACTIONS(398),
    [sym_module_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__type] = STATE(194),
    [sym_function_type] = STATE(48),
    [sym__identifier] = STATE(195),
    [sym_simple_type] = STATE(52),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(446),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_EQ_GT] = ACTIONS(388),
    [anon_sym_deriving] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_constructor_identifier] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_deriving] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_constructor_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [aux_sym_type_class_repeat1] = STATE(121),
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_deriving] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [sym_constructors] = STATE(199),
    [sym_constructor] = STATE(128),
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(458),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [sym_constructors] = STATE(199),
    [sym_constructor] = STATE(128),
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__identifier] = STATE(202),
    [anon_sym_LPAREN] = ACTIONS(460),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym_strict] = STATE(206),
    [sym__identifier] = STATE(206),
    [sym_fields] = STATE(207),
    [aux_sym_constructor_repeat1] = STATE(208),
    [sym__layout_semicolon] = ACTIONS(462),
    [anon_sym_SEMI] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_deriving] = ACTIONS(464),
    [anon_sym_BANG] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(470),
    [sym_constructor_identifier] = ACTIONS(470),
    [sym_module_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym_deriving] = STATE(200),
    [sym__layout_semicolon] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [aux_sym_constructors_repeat1] = STATE(210),
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_deriving] = ACTIONS(474),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(456),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [anon_sym_EQ] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [sym_new_constructor] = STATE(213),
    [sym_constructor_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [sym__type] = STATE(214),
    [sym_function_type] = STATE(48),
    [sym__identifier] = STATE(51),
    [sym_simple_type] = STATE(52),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__layout_semicolon] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(484),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(486),
  },
  [136] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(488),
  },
  [137] = {
    [sym__cntrl] = STATE(216),
    [sym_comment] = ACTIONS(66),
    [anon_sym__] = ACTIONS(490),
    [sym__ascii_large] = ACTIONS(490),
    [anon_sym_AT] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_BSLASH] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
  },
  [138] = {
    [aux_sym__escape_repeat1] = STATE(218),
    [sym_comment] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(492),
  },
  [139] = {
    [aux_sym__escape_repeat2] = STATE(220),
    [sym_comment] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(494),
  },
  [140] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(496),
  },
  [141] = {
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_BQUOTE] = ACTIONS(498),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(498),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(498),
    [anon_sym__] = ACTIONS(498),
    [sym__ascii_large] = ACTIONS(498),
    [anon_sym_POUND] = ACTIONS(498),
    [anon_sym_DOLLAR] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_AT] = ACTIONS(498),
    [anon_sym_CARET] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_TILDE] = ACTIONS(498),
    [anon_sym_BSLASH] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym__space] = ACTIONS(498),
    [sym__newline] = ACTIONS(498),
    [sym__tab] = ACTIONS(498),
    [sym__vertical_tab] = ACTIONS(498),
  },
  [142] = {
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_LBRACE] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_BQUOTE] = ACTIONS(500),
    [anon_sym_COLON] = ACTIONS(500),
    [anon_sym_EQ] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_BANG] = ACTIONS(500),
    [sym_comment] = ACTIONS(66),
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
  [143] = {
    [sym__cntrl] = STATE(222),
    [sym_comment] = ACTIONS(66),
    [anon_sym__] = ACTIONS(502),
    [sym__ascii_large] = ACTIONS(502),
    [anon_sym_AT] = ACTIONS(502),
    [anon_sym_CARET] = ACTIONS(502),
    [anon_sym_BSLASH] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
  },
  [144] = {
    [aux_sym__escape_repeat1] = STATE(224),
    [sym_comment] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(504),
  },
  [145] = {
    [aux_sym__escape_repeat2] = STATE(226),
    [sym_comment] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(506),
  },
  [146] = {
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_BQUOTE] = ACTIONS(508),
    [anon_sym_COLON] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(508),
    [anon_sym_PIPE] = ACTIONS(508),
    [anon_sym_BANG] = ACTIONS(508),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(508),
    [anon_sym_DQUOTE] = ACTIONS(508),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(508),
    [anon_sym__] = ACTIONS(508),
    [sym__ascii_large] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_DOLLAR] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(508),
    [anon_sym_1] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_AT] = ACTIONS(508),
    [anon_sym_CARET] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_TILDE] = ACTIONS(508),
    [anon_sym_BSLASH] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym__space] = ACTIONS(508),
    [sym__newline] = ACTIONS(508),
    [sym__tab] = ACTIONS(508),
    [sym__vertical_tab] = ACTIONS(508),
  },
  [147] = {
    [anon_sym_SEMI] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [anon_sym_BQUOTE] = ACTIONS(510),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_EQ] = ACTIONS(510),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_BANG] = ACTIONS(510),
    [sym_comment] = ACTIONS(66),
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
  [148] = {
    [sym__layout_semicolon] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(514),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_import] = ACTIONS(518),
    [anon_sym_do] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_infixl] = ACTIONS(518),
    [anon_sym_infixr] = ACTIONS(518),
    [anon_sym_infix] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(518),
    [anon_sym_data] = ACTIONS(518),
    [anon_sym_newtype] = ACTIONS(518),
    [anon_sym_type] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(520),
    [sym_constructor_identifier] = ACTIONS(520),
    [sym_module_identifier] = ACTIONS(520),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [sym__integer_literal] = ACTIONS(518),
    [sym__octal_literal] = ACTIONS(518),
    [sym__hexidecimal_literal] = ACTIONS(518),
  },
  [150] = {
    [sym__type] = STATE(227),
    [sym_function_type] = STATE(48),
    [sym__identifier] = STATE(51),
    [sym_simple_type] = STATE(52),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(229),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_module_repeat1] = STATE(230),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [sym__layout_close_brace] = ACTIONS(522),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [152] = {
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(19),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_module_repeat1] = STATE(231),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [sym_comment] = ACTIONS(34),
  },
  [154] = {
    [anon_sym_where] = ACTIONS(528),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [aux_sym_module_exports_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [sym_declarations] = STATE(236),
    [sym__layout_open_brace] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [159] = {
    [sym__identifier] = STATE(237),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__layout_semicolon] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(540),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [aux_sym_import_specification_repeat1] = STATE(241),
    [anon_sym_LPAREN] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [sym_import_specification] = STATE(242),
    [sym__layout_semicolon] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_hiding] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__identifier] = STATE(243),
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [sym__layout_close_brace] = ACTIONS(552),
    [anon_sym_do] = ACTIONS(554),
    [sym_variable_identifier] = ACTIONS(556),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(556),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [sym__integer_literal] = ACTIONS(554),
    [sym__octal_literal] = ACTIONS(554),
    [sym__hexidecimal_literal] = ACTIONS(554),
  },
  [166] = {
    [sym__layout_semicolon] = ACTIONS(558),
    [anon_sym_SEMI] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [sym__layout_close_brace] = ACTIONS(562),
    [anon_sym_do] = ACTIONS(564),
    [sym_variable_identifier] = ACTIONS(566),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(566),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [sym__integer_literal] = ACTIONS(564),
    [sym__octal_literal] = ACTIONS(564),
    [sym__hexidecimal_literal] = ACTIONS(564),
  },
  [168] = {
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_do] = ACTIONS(554),
    [sym_variable_identifier] = ACTIONS(556),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(556),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [sym__integer_literal] = ACTIONS(554),
    [sym__octal_literal] = ACTIONS(554),
    [sym__hexidecimal_literal] = ACTIONS(554),
  },
  [169] = {
    [anon_sym_RBRACE] = ACTIONS(564),
    [anon_sym_do] = ACTIONS(564),
    [sym_variable_identifier] = ACTIONS(566),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(566),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [sym__integer_literal] = ACTIONS(564),
    [sym__octal_literal] = ACTIONS(564),
    [sym__hexidecimal_literal] = ACTIONS(564),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym_class] = STATE(244),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [anon_sym_EQ_GT] = ACTIONS(568),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__general_declaration] = STATE(249),
    [sym_fixity] = STATE(250),
    [sym_type_signature] = STATE(250),
    [sym__identifier] = STATE(21),
    [aux_sym_general_declarations_repeat1] = STATE(251),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [sym__layout_close_brace] = ACTIONS(574),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [sym__general_declaration] = STATE(252),
    [sym_fixity] = STATE(250),
    [sym_type_signature] = STATE(250),
    [sym__identifier] = STATE(21),
    [aux_sym_general_declarations_repeat1] = STATE(253),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(576),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__layout_semicolon] = ACTIONS(578),
    [anon_sym_SEMI] = ACTIONS(580),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [sym_general_declarations] = STATE(255),
    [sym__layout_open_brace] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [anon_sym_where] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [anon_sym_where] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
  },
  [181] = {
    [anon_sym_where] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [sym__layout_semicolon] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(592),
    [anon_sym_COMMA] = ACTIONS(592),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [sym__symbol] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_RPAREN] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [184] = {
    [sym__layout_semicolon] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [sym__layout_semicolon] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(604),
    [anon_sym_COMMA] = ACTIONS(604),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [anon_sym_COMMA] = ACTIONS(608),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [sym__op] = STATE(258),
    [sym_variable_symbol] = STATE(41),
    [sym_constructor_symbol] = STATE(41),
    [sym__symbol] = STATE(43),
    [aux_sym_variable_symbol_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_BSLASH] = ACTIONS(64),
  },
  [188] = {
    [sym__layout_semicolon] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [anon_sym_EQ_GT] = ACTIONS(614),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(584),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_DASH_GT] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [aux_sym_type_class_repeat1] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_DASH_GT] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_DASH_GT] = ACTIONS(238),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_deriving] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_constructor_identifier] = ACTIONS(586),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_deriving] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_constructor_identifier] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [sym_constructors] = STATE(261),
    [sym_constructor] = STATE(128),
    [sym_deriving] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [sym_deriving] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [sym__identifier] = STATE(263),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(628),
    [anon_sym_SEMI] = ACTIONS(630),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [sym_field] = STATE(265),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [sym__identifier] = STATE(266),
    [sym_variable_identifier] = ACTIONS(634),
    [sym_constructor_identifier] = ACTIONS(470),
    [sym_module_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_deriving] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_module_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(636),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_PIPE] = ACTIONS(638),
    [anon_sym_deriving] = ACTIONS(638),
    [anon_sym_BANG] = ACTIONS(638),
    [sym_variable_identifier] = ACTIONS(640),
    [sym_constructor_identifier] = ACTIONS(640),
    [sym_module_identifier] = ACTIONS(640),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_PIPE] = ACTIONS(644),
    [anon_sym_deriving] = ACTIONS(644),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [sym_strict] = STATE(267),
    [sym__identifier] = STATE(267),
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_PIPE] = ACTIONS(644),
    [anon_sym_deriving] = ACTIONS(644),
    [anon_sym_BANG] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(470),
    [sym_constructor_identifier] = ACTIONS(470),
    [sym_module_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [sym_constructor] = STATE(268),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_PIPE] = ACTIONS(650),
    [anon_sym_deriving] = ACTIONS(648),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_EQ] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(584),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [sym__identifier] = STATE(270),
    [sym_fields] = STATE(270),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_variable_identifier] = ACTIONS(150),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [sym_deriving] = STATE(271),
    [sym__layout_semicolon] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(660),
  },
  [216] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(662),
  },
  [217] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(664),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(664),
  },
  [218] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(668),
  },
  [219] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(670),
  },
  [220] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(666),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(672),
  },
  [221] = {
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_RBRACE] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym_EQ] = ACTIONS(674),
    [anon_sym_PIPE] = ACTIONS(674),
    [anon_sym_BANG] = ACTIONS(674),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_LBRACE] = ACTIONS(676),
    [anon_sym_RBRACE] = ACTIONS(676),
    [anon_sym_LPAREN] = ACTIONS(676),
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(676),
    [anon_sym_COLON] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(676),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_BANG] = ACTIONS(676),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_SEMI] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_LPAREN] = ACTIONS(678),
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_BQUOTE] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(678),
    [anon_sym_EQ] = ACTIONS(678),
    [anon_sym_PIPE] = ACTIONS(678),
    [anon_sym_BANG] = ACTIONS(678),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_LPAREN] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_BQUOTE] = ACTIONS(684),
    [anon_sym_COLON] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_PIPE] = ACTIONS(684),
    [anon_sym_BANG] = ACTIONS(684),
    [sym_comment] = ACTIONS(66),
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
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(680),
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PIPE] = ACTIONS(680),
    [anon_sym_BANG] = ACTIONS(680),
    [sym_comment] = ACTIONS(66),
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
    [sym__layout_semicolon] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(690),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(696),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(278),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [sym__layout_close_brace] = ACTIONS(698),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [231] = {
    [sym_import] = STATE(18),
    [sym__declaration] = STATE(77),
    [sym__expression] = STATE(18),
    [sym_do_expression] = STATE(20),
    [sym_type_class] = STATE(18),
    [sym_fixity] = STATE(18),
    [sym_type_signature] = STATE(18),
    [sym_algebraic_datatype] = STATE(18),
    [sym_newtype] = STATE(18),
    [sym_type_synonym] = STATE(18),
    [sym__literal] = STATE(20),
    [sym__identifier] = STATE(21),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(700),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [anon_sym_data] = ACTIONS(24),
    [anon_sym_newtype] = ACTIONS(26),
    [anon_sym_type] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(42),
    [sym__octal_literal] = ACTIONS(42),
    [sym__hexidecimal_literal] = ACTIONS(42),
  },
  [232] = {
    [sym_export] = STATE(279),
    [sym__identifier] = STATE(157),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [anon_sym_where] = ACTIONS(702),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [sym__identifier] = STATE(283),
    [anon_sym_DOT_DOT] = ACTIONS(708),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(710),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [sym_import_specification] = STATE(284),
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_hiding] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [sym__identifier] = STATE(286),
    [anon_sym_DOT_DOT] = ACTIONS(716),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [sym__identifier] = STATE(287),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [aux_sym_import_specification_repeat1] = STATE(291),
    [anon_sym_LPAREN] = ACTIONS(726),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [sym_constructor_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [sym_class] = STATE(292),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_EQ_GT] = ACTIONS(732),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(740),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(742),
    [anon_sym_SEMI] = ACTIONS(744),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [sym__general_declaration] = STATE(296),
    [sym_fixity] = STATE(250),
    [sym_type_signature] = STATE(250),
    [sym__identifier] = STATE(21),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [sym__layout_close_brace] = ACTIONS(746),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(750),
    [sym_comment] = ACTIONS(34),
  },
  [253] = {
    [sym__general_declaration] = STATE(298),
    [sym_fixity] = STATE(250),
    [sym_type_signature] = STATE(250),
    [sym__identifier] = STATE(21),
    [aux_sym_type_signature_repeat1] = STATE(23),
    [anon_sym_RBRACE] = ACTIONS(752),
    [anon_sym_infixl] = ACTIONS(20),
    [anon_sym_infixr] = ACTIONS(20),
    [anon_sym_infix] = ACTIONS(20),
    [anon_sym_COLON_COLON] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_EQ_GT] = ACTIONS(754),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [sym_general_declarations] = STATE(299),
    [sym__layout_open_brace] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_COMMA] = ACTIONS(762),
    [sym_comment] = ACTIONS(34),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(766),
    [anon_sym_COMMA] = ACTIONS(766),
    [sym_comment] = ACTIONS(34),
  },
  [259] = {
    [sym_variable_identifier] = ACTIONS(768),
    [sym_constructor_identifier] = ACTIONS(730),
    [sym_module_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [anon_sym_EQ_GT] = ACTIONS(770),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [sym_deriving] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(772),
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_deriving] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(772),
    [anon_sym_SEMI] = ACTIONS(774),
    [sym_comment] = ACTIONS(34),
  },
  [263] = {
    [aux_sym_export_repeat1] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(778),
    [sym_comment] = ACTIONS(34),
  },
  [264] = {
    [aux_sym_field_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(782),
    [sym_comment] = ACTIONS(34),
  },
  [265] = {
    [aux_sym_fields_repeat1] = STATE(310),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_COMMA] = ACTIONS(786),
    [sym_comment] = ACTIONS(34),
  },
  [266] = {
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [anon_sym_PIPE] = ACTIONS(790),
    [anon_sym_deriving] = ACTIONS(790),
    [anon_sym_BANG] = ACTIONS(790),
    [sym_variable_identifier] = ACTIONS(792),
    [sym_constructor_identifier] = ACTIONS(792),
    [sym_module_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(34),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(794),
    [anon_sym_SEMI] = ACTIONS(796),
    [anon_sym_PIPE] = ACTIONS(796),
    [anon_sym_deriving] = ACTIONS(796),
    [anon_sym_BANG] = ACTIONS(796),
    [sym_variable_identifier] = ACTIONS(798),
    [sym_constructor_identifier] = ACTIONS(798),
    [sym_module_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(800),
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_PIPE] = ACTIONS(802),
    [anon_sym_deriving] = ACTIONS(802),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [sym_constructor] = STATE(311),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [sym__layout_semicolon] = ACTIONS(804),
    [anon_sym_SEMI] = ACTIONS(806),
    [anon_sym_deriving] = ACTIONS(806),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(808),
    [anon_sym_SEMI] = ACTIONS(810),
    [sym_comment] = ACTIONS(34),
  },
  [272] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(812),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(812),
  },
  [273] = {
    [sym_comment] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(814),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(814),
  },
  [274] = {
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [anon_sym_BQUOTE] = ACTIONS(816),
    [anon_sym_COLON] = ACTIONS(816),
    [anon_sym_EQ] = ACTIONS(816),
    [anon_sym_PIPE] = ACTIONS(816),
    [anon_sym_BANG] = ACTIONS(816),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(816),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(816),
    [anon_sym__] = ACTIONS(816),
    [sym__ascii_large] = ACTIONS(816),
    [anon_sym_POUND] = ACTIONS(816),
    [anon_sym_DOLLAR] = ACTIONS(816),
    [anon_sym_PERCENT] = ACTIONS(816),
    [anon_sym_AMP] = ACTIONS(816),
    [anon_sym_1] = ACTIONS(816),
    [anon_sym_PLUS] = ACTIONS(816),
    [anon_sym_DOT] = ACTIONS(816),
    [anon_sym_SLASH] = ACTIONS(816),
    [anon_sym_LT] = ACTIONS(816),
    [anon_sym_GT] = ACTIONS(816),
    [anon_sym_QMARK] = ACTIONS(816),
    [anon_sym_AT] = ACTIONS(816),
    [anon_sym_CARET] = ACTIONS(816),
    [anon_sym_DASH] = ACTIONS(816),
    [anon_sym_TILDE] = ACTIONS(816),
    [anon_sym_BSLASH] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym__space] = ACTIONS(816),
    [sym__newline] = ACTIONS(816),
    [sym__tab] = ACTIONS(816),
    [sym__vertical_tab] = ACTIONS(816),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(816),
  },
  [275] = {
    [anon_sym_SEMI] = ACTIONS(818),
    [anon_sym_LBRACE] = ACTIONS(818),
    [anon_sym_RBRACE] = ACTIONS(818),
    [anon_sym_LPAREN] = ACTIONS(818),
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_BQUOTE] = ACTIONS(818),
    [anon_sym_COLON] = ACTIONS(818),
    [anon_sym_EQ] = ACTIONS(818),
    [anon_sym_PIPE] = ACTIONS(818),
    [anon_sym_BANG] = ACTIONS(818),
    [sym_comment] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(818),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(818),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(818),
    [anon_sym__] = ACTIONS(818),
    [sym__ascii_large] = ACTIONS(818),
    [anon_sym_POUND] = ACTIONS(818),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [anon_sym_PERCENT] = ACTIONS(818),
    [anon_sym_AMP] = ACTIONS(818),
    [anon_sym_1] = ACTIONS(818),
    [anon_sym_PLUS] = ACTIONS(818),
    [anon_sym_DOT] = ACTIONS(818),
    [anon_sym_SLASH] = ACTIONS(818),
    [anon_sym_LT] = ACTIONS(818),
    [anon_sym_GT] = ACTIONS(818),
    [anon_sym_QMARK] = ACTIONS(818),
    [anon_sym_AT] = ACTIONS(818),
    [anon_sym_CARET] = ACTIONS(818),
    [anon_sym_DASH] = ACTIONS(818),
    [anon_sym_TILDE] = ACTIONS(818),
    [anon_sym_BSLASH] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(818),
    [sym__space] = ACTIONS(818),
    [sym__newline] = ACTIONS(818),
    [sym__tab] = ACTIONS(818),
    [sym__vertical_tab] = ACTIONS(818),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(818),
  },
  [276] = {
    [sym__layout_close_brace] = ACTIONS(318),
    [anon_sym_import] = ACTIONS(320),
    [anon_sym_do] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_infixl] = ACTIONS(320),
    [anon_sym_infixr] = ACTIONS(320),
    [anon_sym_infix] = ACTIONS(320),
    [anon_sym_COLON_COLON] = ACTIONS(320),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_newtype] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(322),
    [sym_constructor_identifier] = ACTIONS(322),
    [sym_module_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [sym__integer_literal] = ACTIONS(320),
    [sym__octal_literal] = ACTIONS(320),
    [sym__hexidecimal_literal] = ACTIONS(320),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(820),
    [sym_comment] = ACTIONS(34),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(822),
    [anon_sym_SEMI] = ACTIONS(824),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [sym_export] = STATE(313),
    [sym__identifier] = STATE(157),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [anon_sym_where] = ACTIONS(828),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [aux_sym_export_repeat1] = STATE(315),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(832),
    [anon_sym_SEMI] = ACTIONS(834),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [aux_sym_export_repeat1] = STATE(317),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [sym__layout_semicolon] = ACTIONS(842),
    [anon_sym_SEMI] = ACTIONS(844),
    [sym_comment] = ACTIONS(34),
  },
  [290] = {
    [sym__identifier] = STATE(321),
    [anon_sym_DOT_DOT] = ACTIONS(846),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [291] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_comment] = ACTIONS(34),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(34),
  },
  [293] = {
    [sym_constructor_identifier] = ACTIONS(852),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [sym__layout_close_brace] = ACTIONS(854),
    [anon_sym_infixl] = ACTIONS(856),
    [anon_sym_infixr] = ACTIONS(856),
    [anon_sym_infix] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [sym_variable_identifier] = ACTIONS(858),
    [sym_constructor_identifier] = ACTIONS(858),
    [sym_module_identifier] = ACTIONS(858),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(860),
    [anon_sym_SEMI] = ACTIONS(862),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_infixl] = ACTIONS(856),
    [anon_sym_infixr] = ACTIONS(856),
    [anon_sym_infix] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [sym_variable_identifier] = ACTIONS(858),
    [sym_constructor_identifier] = ACTIONS(858),
    [sym_module_identifier] = ACTIONS(858),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(868),
    [anon_sym_SEMI] = ACTIONS(870),
    [sym_comment] = ACTIONS(34),
  },
  [299] = {
    [sym__layout_semicolon] = ACTIONS(872),
    [anon_sym_SEMI] = ACTIONS(874),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [sym_variable_identifier] = ACTIONS(876),
    [sym_constructor_identifier] = ACTIONS(852),
    [sym_module_identifier] = ACTIONS(852),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(878),
    [anon_sym_SEMI] = ACTIONS(880),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [sym__identifier] = STATE(325),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [303] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym_comment] = ACTIONS(34),
  },
  [305] = {
    [sym_variable_identifier] = ACTIONS(890),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [sym_strict] = STATE(330),
    [sym__identifier] = STATE(330),
    [anon_sym_BANG] = ACTIONS(892),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(894),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [anon_sym_PIPE] = ACTIONS(900),
    [anon_sym_deriving] = ACTIONS(900),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [sym_field] = STATE(333),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(904),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(908),
    [anon_sym_PIPE] = ACTIONS(908),
    [anon_sym_deriving] = ACTIONS(908),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [sym__layout_close_brace] = ACTIONS(516),
    [anon_sym_import] = ACTIONS(518),
    [anon_sym_do] = ACTIONS(518),
    [anon_sym_class] = ACTIONS(518),
    [anon_sym_infixl] = ACTIONS(518),
    [anon_sym_infixr] = ACTIONS(518),
    [anon_sym_infix] = ACTIONS(518),
    [anon_sym_COLON_COLON] = ACTIONS(518),
    [anon_sym_data] = ACTIONS(518),
    [anon_sym_newtype] = ACTIONS(518),
    [anon_sym_type] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(520),
    [sym_constructor_identifier] = ACTIONS(520),
    [sym_module_identifier] = ACTIONS(520),
    [sym_comment] = ACTIONS(34),
    [sym_float] = ACTIONS(520),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [sym__integer_literal] = ACTIONS(518),
    [sym__octal_literal] = ACTIONS(518),
    [sym__hexidecimal_literal] = ACTIONS(518),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_RPAREN] = ACTIONS(910),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_RPAREN] = ACTIONS(912),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(914),
    [sym_comment] = ACTIONS(34),
  },
  [316] = {
    [aux_sym_import_specification_repeat1] = STATE(338),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(34),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(34),
  },
  [318] = {
    [sym__identifier] = STATE(341),
    [anon_sym_DOT_DOT] = ACTIONS(920),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
    [anon_sym_LPAREN] = ACTIONS(922),
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(34),
  },
  [320] = {
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [aux_sym_export_repeat1] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(34),
  },
  [322] = {
    [sym__layout_semicolon] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(928),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [sym__layout_close_brace] = ACTIONS(930),
    [anon_sym_infixl] = ACTIONS(932),
    [anon_sym_infixr] = ACTIONS(932),
    [anon_sym_infix] = ACTIONS(932),
    [anon_sym_COLON_COLON] = ACTIONS(932),
    [sym_variable_identifier] = ACTIONS(934),
    [sym_constructor_identifier] = ACTIONS(934),
    [sym_module_identifier] = ACTIONS(934),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(932),
    [anon_sym_infixl] = ACTIONS(932),
    [anon_sym_infixr] = ACTIONS(932),
    [anon_sym_infix] = ACTIONS(932),
    [anon_sym_COLON_COLON] = ACTIONS(932),
    [sym_variable_identifier] = ACTIONS(934),
    [sym_constructor_identifier] = ACTIONS(934),
    [sym_module_identifier] = ACTIONS(934),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(936),
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(34),
  },
  [326] = {
    [sym__identifier] = STATE(344),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [sym__layout_semicolon] = ACTIONS(938),
    [anon_sym_SEMI] = ACTIONS(940),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_COLON_COLON] = ACTIONS(942),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [sym__identifier] = STATE(345),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [anon_sym_RBRACE] = ACTIONS(944),
    [anon_sym_COMMA] = ACTIONS(944),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [sym_variable_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [sym_strict] = STATE(347),
    [sym__identifier] = STATE(347),
    [anon_sym_BANG] = ACTIONS(892),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_COMMA] = ACTIONS(948),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(950),
    [anon_sym_SEMI] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_deriving] = ACTIONS(952),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [sym_field] = STATE(348),
    [sym_variable_identifier] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(954),
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [sym__layout_semicolon] = ACTIONS(956),
    [anon_sym_SEMI] = ACTIONS(958),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(960),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [aux_sym_import_specification_repeat1] = STATE(350),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(960),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [aux_sym_export_repeat1] = STATE(352),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [sym__identifier] = STATE(354),
    [anon_sym_DOT_DOT] = ACTIONS(964),
    [sym_variable_identifier] = ACTIONS(72),
    [sym_constructor_identifier] = ACTIONS(32),
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(966),
    [sym_comment] = ACTIONS(34),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(968),
    [anon_sym_RPAREN] = ACTIONS(968),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [anon_sym_RBRACE] = ACTIONS(790),
    [anon_sym_COMMA] = ACTIONS(790),
    [sym_comment] = ACTIONS(34),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(970),
    [anon_sym_COLON_COLON] = ACTIONS(970),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [anon_sym_RBRACE] = ACTIONS(972),
    [anon_sym_COMMA] = ACTIONS(972),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [anon_sym_RBRACE] = ACTIONS(974),
    [anon_sym_COMMA] = ACTIONS(974),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [sym__layout_semicolon] = ACTIONS(976),
    [anon_sym_SEMI] = ACTIONS(978),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [aux_sym_export_repeat1] = STATE(358),
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [aux_sym_import_specification_repeat1] = STATE(359),
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(986),
    [anon_sym_SEMI] = ACTIONS(988),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [anon_sym_COMMA] = ACTIONS(990),
    [anon_sym_RPAREN] = ACTIONS(990),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [anon_sym_COMMA] = ACTIONS(886),
    [anon_sym_RPAREN] = ACTIONS(992),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(994),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [anon_sym_COMMA] = ACTIONS(996),
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(998),
    [anon_sym_SEMI] = ACTIONS(1000),
    [sym_comment] = ACTIONS(34),
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
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(212),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [498] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [508] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [556] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(257),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [730] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [792] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [798] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [816] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [852] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
