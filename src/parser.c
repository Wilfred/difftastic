#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 388
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 2
#define TOKEN_COUNT 119
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
  anon_sym_default = 17,
  anon_sym_do = 18,
  anon_sym_class = 19,
  anon_sym_instance = 20,
  anon_sym_infixl = 21,
  anon_sym_infixr = 22,
  anon_sym_infix = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_COLON = 25,
  anon_sym_COLON_COLON = 26,
  anon_sym_DASH_GT = 27,
  anon_sym_data = 28,
  anon_sym_EQ = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_PIPE = 31,
  anon_sym_deriving = 32,
  anon_sym_newtype = 33,
  anon_sym_BANG = 34,
  anon_sym_type = 35,
  sym_variable_identifier = 36,
  sym_constructor_identifier = 37,
  sym_module_identifier = 38,
  sym_comment = 39,
  sym_float = 40,
  anon_sym_SQUOTE = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 43,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 44,
  anon_sym__ = 45,
  sym__ascii_large = 46,
  anon_sym_POUND = 47,
  anon_sym_DOLLAR = 48,
  anon_sym_PERCENT = 49,
  anon_sym_AMP = 50,
  anon_sym_1 = 51,
  anon_sym_PLUS = 52,
  anon_sym_DOT = 53,
  anon_sym_SLASH = 54,
  anon_sym_LT = 55,
  anon_sym_GT = 56,
  anon_sym_QMARK = 57,
  anon_sym_AT = 58,
  anon_sym_CARET = 59,
  anon_sym_DASH = 60,
  anon_sym_TILDE = 61,
  anon_sym_BSLASH = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  sym__space = 65,
  sym__newline = 66,
  sym__tab = 67,
  sym__vertical_tab = 68,
  anon_sym_x = 69,
  anon_sym_X = 70,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 71,
  anon_sym_o = 72,
  anon_sym_O = 73,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 74,
  anon_sym_a = 75,
  anon_sym_b = 76,
  anon_sym_f = 77,
  anon_sym_n = 78,
  anon_sym_r = 79,
  anon_sym_t = 80,
  anon_sym_v = 81,
  anon_sym_NUL = 82,
  anon_sym_SOH = 83,
  anon_sym_STX = 84,
  anon_sym_ETX = 85,
  anon_sym_EOT = 86,
  anon_sym_ENQ = 87,
  anon_sym_ACK = 88,
  anon_sym_BEL = 89,
  anon_sym_BS = 90,
  anon_sym_HT = 91,
  anon_sym_LF = 92,
  anon_sym_VT = 93,
  anon_sym_FF = 94,
  anon_sym_CR = 95,
  anon_sym_SO = 96,
  anon_sym_SI = 97,
  anon_sym_DLE = 98,
  anon_sym_DC1 = 99,
  anon_sym_DC2 = 100,
  anon_sym_DC3 = 101,
  anon_sym_DC4 = 102,
  anon_sym_NAK = 103,
  anon_sym_SYN = 104,
  anon_sym_ETB = 105,
  anon_sym_CAN = 106,
  anon_sym_EM = 107,
  anon_sym_SUB = 108,
  anon_sym_ESC = 109,
  anon_sym_FS = 110,
  anon_sym_GS = 111,
  anon_sym_RS = 112,
  anon_sym_US = 113,
  anon_sym_SP = 114,
  anon_sym_DEL = 115,
  sym__integer_literal = 116,
  sym__octal_literal = 117,
  sym__hexidecimal_literal = 118,
  sym_module = 119,
  sym_declarations = 120,
  sym_module_exports = 121,
  sym_export = 122,
  sym_import = 123,
  sym_import_specification = 124,
  sym__declaration = 125,
  sym__expression = 126,
  sym_default = 127,
  sym_do_expression = 128,
  sym_statement_list = 129,
  sym__statement = 130,
  sym_type_class = 131,
  sym_general_declarations = 132,
  sym_type_class_instance = 133,
  sym__general_declaration = 134,
  sym_fixity = 135,
  sym__op = 136,
  sym_variable_symbol = 137,
  sym_constructor_symbol = 138,
  sym_type_signature = 139,
  sym__type = 140,
  sym_function_type = 141,
  sym_algebraic_datatype = 142,
  sym_context = 143,
  sym_class = 144,
  sym_constructors = 145,
  sym_constructor = 146,
  sym_deriving = 147,
  sym_newtype = 148,
  sym_new_constructor = 149,
  sym_field = 150,
  sym_strict = 151,
  sym_type_synonym = 152,
  sym__literal = 153,
  sym__identifier = 154,
  sym_simple_type = 155,
  sym_integer = 156,
  sym_char = 157,
  sym_string = 158,
  sym__gap = 159,
  sym__graphic = 160,
  sym__small = 161,
  sym__large = 162,
  sym__symbol = 163,
  sym__special = 164,
  sym__escape = 165,
  sym__char_escape = 166,
  sym__ascii = 167,
  sym__cntrl = 168,
  sym_fields = 169,
  aux_sym_module_repeat1 = 170,
  aux_sym_module_exports_repeat1 = 171,
  aux_sym_export_repeat1 = 172,
  aux_sym_import_specification_repeat1 = 173,
  aux_sym_statement_list_repeat1 = 174,
  aux_sym_type_class_repeat1 = 175,
  aux_sym_general_declarations_repeat1 = 176,
  aux_sym_fixity_repeat1 = 177,
  aux_sym_variable_symbol_repeat1 = 178,
  aux_sym_type_signature_repeat1 = 179,
  aux_sym_context_repeat1 = 180,
  aux_sym_constructors_repeat1 = 181,
  aux_sym_constructor_repeat1 = 182,
  aux_sym_field_repeat1 = 183,
  aux_sym_string_repeat1 = 184,
  aux_sym__escape_repeat1 = 185,
  aux_sym__escape_repeat2 = 186,
  aux_sym_fields_repeat1 = 187,
  alias_sym_type_constructor = 188,
  alias_sym_type_variable = 189,
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
  [anon_sym_default] = "default",
  [anon_sym_do] = "do",
  [anon_sym_class] = "class",
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
  [sym_default] = "default",
  [sym_do_expression] = "do_expression",
  [sym_statement_list] = "statement_list",
  [sym__statement] = "_statement",
  [sym_type_class] = "type_class",
  [sym_general_declarations] = "general_declarations",
  [sym_type_class_instance] = "type_class_instance",
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
  [anon_sym_default] = {
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
  [sym_default] = {
    .visible = true,
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
  [sym_type_class_instance] = {
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
        ADVANCE(245);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(258);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'm')
        ADVANCE(294);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
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
        ADVANCE(208);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
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
      if (lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'o')
        ADVANCE(207);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(202);
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
      if (lookahead == 'a')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(anon_sym_default);
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
    case 207:
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
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(209);
      if (lookahead == 'n')
        ADVANCE(214);
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
      if (lookahead == 'p')
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
      if (lookahead == 'o')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
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
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 's')
        ADVANCE(220);
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
      if (lookahead == 'i')
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
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
    case 219:
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
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
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
      if (lookahead == 'a')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_instance);
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
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(227);
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
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
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
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
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
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
    case 243:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(243);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(243);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(244);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(245);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(258);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'm')
        ADVANCE(294);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 246:
      if (lookahead == ')')
        ADVANCE(247);
      if (lookahead == ',')
        ADVANCE(248);
      if (lookahead == '-')
        ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 248:
      if (lookahead == ')')
        ADVANCE(247);
      if (lookahead == ',')
        ADVANCE(248);
      END_STATE();
    case 249:
      if (lookahead == '>')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == ')')
        ADVANCE(247);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(253);
      if (lookahead == 'X')
        ADVANCE(255);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(253);
      if (lookahead == 'x')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(254);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(256);
      END_STATE();
    case 257:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 258:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 's')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead == 'o')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'f')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'u')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'p')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'r')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'f')
        ADVANCE(283);
      if (lookahead == 's')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'x')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(286);
      if (lookahead == 'r')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'n')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'c')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'u')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'w')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 't')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'y')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'p')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'y')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'p')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(311);
      if (lookahead == '.')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(312);
      if (lookahead == '.')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 313:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(316);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(317);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(313);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(312);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 314:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(244);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 315:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(316);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(317);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(313);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(312);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 317:
      if (lookahead == 'n')
        SKIP(313);
      END_STATE();
    case 318:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == 'q')
        ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(318);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 319:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(319);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
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
    case 330:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(330);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == 'q')
        ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(318);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        SKIP(318);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'u')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'a')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'l')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'f')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'd')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(344);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(345);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(342);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(342);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 343:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(342);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 344:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(344);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(345);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      END_STATE();
    case 345:
      if (lookahead == 'n')
        SKIP(341);
      END_STATE();
    case 346:
      if (lookahead == '\n')
        ADVANCE(347);
      if (lookahead == '\r')
        ADVANCE(351);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(353);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(346);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 347:
      if (lookahead == '\n')
        ADVANCE(347);
      if (lookahead == '\r')
        ADVANCE(347);
      if (lookahead == '(')
        ADVANCE(348);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 348:
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
    case 349:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(347);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(350);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      if (lookahead == '\n')
        ADVANCE(347);
      if (lookahead == '\r')
        ADVANCE(351);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(353);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(346);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(247);
      if (lookahead == ',')
        ADVANCE(248);
      if (lookahead == '-')
        ADVANCE(249);
      END_STATE();
    case 353:
      if (lookahead == 'n')
        SKIP(346);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(364);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(367);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(371);
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
        SKIP(355);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(368);
      END_STATE();
    case 356:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(356);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(359);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(363);
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
        ADVANCE(356);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
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
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(356);
      if (lookahead == '\r')
        ADVANCE(364);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(367);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(371);
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
        SKIP(355);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(253);
      if (lookahead == 'X')
        ADVANCE(255);
      if (lookahead == 'o')
        ADVANCE(253);
      if (lookahead == 'x')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 372:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(372);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 373:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(373);
      if (lookahead == '(')
        ADVANCE(348);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(372);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        SKIP(372);
      END_STATE();
    case 377:
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(382);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(377);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 378:
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(378);
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
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(378);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(382);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(377);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 382:
      if (lookahead == 'n')
        SKIP(377);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 384:
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\r')
        ADVANCE(387);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(384);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 385:
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\r')
        ADVANCE(385);
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
        ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\r')
        ADVANCE(387);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(384);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 388:
      if (lookahead == 'n')
        SKIP(384);
      END_STATE();
    case 389:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(395);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(389);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 390:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(390);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(392);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(395);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(389);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 395:
      if (lookahead == 'n')
        SKIP(389);
      END_STATE();
    case 396:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(399);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(400);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(396);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(399);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(400);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(396);
      END_STATE();
    case 400:
      if (lookahead == 'n')
        SKIP(396);
      END_STATE();
    case 401:
      if (lookahead == '\t')
        SKIP(401);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 402:
      if (lookahead == '\t')
        ADVANCE(402);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(402);
      if (lookahead == ' ')
        ADVANCE(403);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(404);
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
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(402);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(402);
      if (lookahead == ' ')
        ADVANCE(403);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(404);
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
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '\t')
        SKIP(401);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 409:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(416);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(413);
      if (lookahead == ' ')
        ADVANCE(414);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(415);
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
        ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(413);
      if (lookahead == ' ')
        ADVANCE(414);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(415);
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
        ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(413);
      if (lookahead == ' ')
        ADVANCE(414);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(415);
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
        ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(412);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(413);
      if (lookahead == ' ')
        ADVANCE(414);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(415);
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
        ADVANCE(405);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(413);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(411);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(416);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 417:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(421);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 418:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(418);
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
        ADVANCE(419);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(208);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(418);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(421);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 421:
      if (lookahead == 'n')
        SKIP(417);
      END_STATE();
    case 422:
      if (lookahead == '\n')
        ADVANCE(423);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        SKIP(431);
      if (lookahead == 'w')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(422);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 423:
      if (lookahead == '\n')
        ADVANCE(423);
      if (lookahead == '\r')
        ADVANCE(423);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '\\')
        ADVANCE(424);
      if (lookahead == 'w')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(423);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
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
    case 430:
      if (lookahead == '\n')
        ADVANCE(423);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        SKIP(431);
      if (lookahead == 'w')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(422);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 431:
      if (lookahead == 'n')
        SKIP(422);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'h')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'r')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 437:
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(456);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(457);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(437);
      END_STATE();
    case 438:
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(438);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(439);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'h')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(438);
      if (lookahead != 0)
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
      if (lookahead == 'e')
        ADVANCE(443);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      if (lookahead == 'v')
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
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(451);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(452);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(453);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(454);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(455);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == '\r')
        ADVANCE(456);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(457);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(437);
      END_STATE();
    case 457:
      if (lookahead == 'n')
        SKIP(437);
      END_STATE();
    case 458:
      if (lookahead == 's')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 460:
      if (lookahead == 'e')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'r')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'i')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'v')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'i')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'n')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'g')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 468:
      if (lookahead == 'i')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'd')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'i')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == 'n')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 'g')
        ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(477);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(478);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(476);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'h')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(475);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(477);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(478);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      END_STATE();
    case 478:
      if (lookahead == 'n')
        SKIP(474);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(484);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(485);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(480);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(481);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(482);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '.')
        ADVANCE(484);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(485);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 484:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 485:
      if (lookahead == 'n')
        SKIP(479);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(488);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 490:
      if (lookahead == 'n')
        SKIP(486);
      END_STATE();
    case 491:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(494);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(371);
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
        SKIP(491);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(492);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(493);
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
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(494);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(371);
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
        SKIP(491);
      END_STATE();
    case 495:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(499);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(495);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(496);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(497);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      if (lookahead == '\n')
        ADVANCE(496);
      if (lookahead == '\r')
        ADVANCE(498);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(499);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(495);
      END_STATE();
    case 499:
      if (lookahead == 'n')
        SKIP(495);
      END_STATE();
    case 500:
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(500);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 501:
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(501);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '\n')
        ADVANCE(501);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(500);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 504:
      if (lookahead == 'n')
        SKIP(500);
      END_STATE();
    case 505:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 506:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 509:
      if (lookahead == 'n')
        SKIP(505);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '(')
        ADVANCE(348);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(512);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
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
    case 521:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '(')
        ADVANCE(352);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 522:
      if (lookahead == 'n')
        SKIP(510);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'r')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'v')
        ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'i')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'n')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'g')
        ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(532);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(535);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(531);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 532:
      if (lookahead == '\n')
        ADVANCE(532);
      if (lookahead == '\r')
        ADVANCE(532);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(533);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(532);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '\n')
        ADVANCE(532);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(535);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(531);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 535:
      if (lookahead == 'n')
        SKIP(531);
      END_STATE();
    case 536:
      if (lookahead == '\n')
        ADVANCE(537);
      if (lookahead == '\r')
        ADVANCE(539);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        SKIP(540);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(536);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 537:
      if (lookahead == '\n')
        ADVANCE(537);
      if (lookahead == '\r')
        ADVANCE(537);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '\\')
        ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(537);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        ADVANCE(537);
      if (lookahead == '\r')
        ADVANCE(539);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        SKIP(540);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(536);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 540:
      if (lookahead == 'n')
        SKIP(536);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == 'A')
        ADVANCE(595);
      if (lookahead == 'B')
        ADVANCE(598);
      if (lookahead == 'C')
        ADVANCE(602);
      if (lookahead == 'D')
        ADVANCE(606);
      if (lookahead == 'E')
        ADVANCE(616);
      if (lookahead == 'F')
        ADVANCE(627);
      if (lookahead == 'G')
        ADVANCE(630);
      if (lookahead == 'H')
        ADVANCE(631);
      if (lookahead == 'L')
        ADVANCE(632);
      if (lookahead == 'N')
        ADVANCE(633);
      if (lookahead == 'O')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(635);
      if (lookahead == 'S')
        ADVANCE(636);
      if (lookahead == 'U')
        ADVANCE(637);
      if (lookahead == 'V')
        ADVANCE(638);
      if (lookahead == 'X')
        ADVANCE(639);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(640);
      if (lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'f')
        ADVANCE(642);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(541);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(408);
      END_STATE();
    case 542:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == 'A')
        ADVANCE(543);
      if (lookahead == 'B')
        ADVANCE(546);
      if (lookahead == 'C')
        ADVANCE(550);
      if (lookahead == 'D')
        ADVANCE(554);
      if (lookahead == 'E')
        ADVANCE(564);
      if (lookahead == 'F')
        ADVANCE(575);
      if (lookahead == 'G')
        ADVANCE(578);
      if (lookahead == 'H')
        ADVANCE(579);
      if (lookahead == 'L')
        ADVANCE(580);
      if (lookahead == 'N')
        ADVANCE(581);
      if (lookahead == 'O')
        ADVANCE(582);
      if (lookahead == 'R')
        ADVANCE(583);
      if (lookahead == 'S')
        ADVANCE(584);
      if (lookahead == 'U')
        ADVANCE(585);
      if (lookahead == 'V')
        ADVANCE(586);
      if (lookahead == 'X')
        ADVANCE(587);
      if (lookahead == '\\')
        ADVANCE(588);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'b')
        ADVANCE(590);
      if (lookahead == 'f')
        ADVANCE(591);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(592);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(545);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(547);
      if (lookahead == 'S')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(548);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(551);
      if (lookahead == 'R')
        ADVANCE(553);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(555);
      if (lookahead == 'E')
        ADVANCE(560);
      if (lookahead == 'L')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(556);
      if (lookahead == '2')
        ADVANCE(557);
      if (lookahead == '3')
        ADVANCE(558);
      if (lookahead == '4')
        ADVANCE(559);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(561);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(563);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(565);
      if (lookahead == 'N')
        ADVANCE(566);
      if (lookahead == 'O')
        ADVANCE(568);
      if (lookahead == 'S')
        ADVANCE(570);
      if (lookahead == 'T')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(571);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(573);
      if (lookahead == 'X')
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(576);
      if (lookahead == 'S')
        ADVANCE(577);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
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
    case 585:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_X);
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
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == 'A')
        ADVANCE(595);
      if (lookahead == 'B')
        ADVANCE(598);
      if (lookahead == 'C')
        ADVANCE(602);
      if (lookahead == 'D')
        ADVANCE(606);
      if (lookahead == 'E')
        ADVANCE(616);
      if (lookahead == 'F')
        ADVANCE(627);
      if (lookahead == 'G')
        ADVANCE(630);
      if (lookahead == 'H')
        ADVANCE(631);
      if (lookahead == 'L')
        ADVANCE(632);
      if (lookahead == 'N')
        ADVANCE(633);
      if (lookahead == 'O')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(635);
      if (lookahead == 'S')
        ADVANCE(636);
      if (lookahead == 'U')
        ADVANCE(637);
      if (lookahead == 'V')
        ADVANCE(638);
      if (lookahead == 'X')
        ADVANCE(639);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(640);
      if (lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'f')
        ADVANCE(642);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(541);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(408);
      END_STATE();
    case 595:
      if (lookahead == 'C')
        ADVANCE(596);
      END_STATE();
    case 596:
      if (lookahead == 'K')
        ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 598:
      if (lookahead == 'E')
        ADVANCE(599);
      if (lookahead == 'S')
        ADVANCE(601);
      END_STATE();
    case 599:
      if (lookahead == 'L')
        ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 602:
      if (lookahead == 'A')
        ADVANCE(603);
      if (lookahead == 'R')
        ADVANCE(605);
      END_STATE();
    case 603:
      if (lookahead == 'N')
        ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 606:
      if (lookahead == 'C')
        ADVANCE(607);
      if (lookahead == 'E')
        ADVANCE(612);
      if (lookahead == 'L')
        ADVANCE(614);
      END_STATE();
    case 607:
      if (lookahead == '1')
        ADVANCE(608);
      if (lookahead == '2')
        ADVANCE(609);
      if (lookahead == '3')
        ADVANCE(610);
      if (lookahead == '4')
        ADVANCE(611);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 612:
      if (lookahead == 'L')
        ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 614:
      if (lookahead == 'E')
        ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 616:
      if (lookahead == 'M')
        ADVANCE(617);
      if (lookahead == 'N')
        ADVANCE(618);
      if (lookahead == 'O')
        ADVANCE(620);
      if (lookahead == 'S')
        ADVANCE(622);
      if (lookahead == 'T')
        ADVANCE(624);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 618:
      if (lookahead == 'Q')
        ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 620:
      if (lookahead == 'T')
        ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 622:
      if (lookahead == 'C')
        ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 624:
      if (lookahead == 'B')
        ADVANCE(625);
      if (lookahead == 'X')
        ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 627:
      if (lookahead == 'F')
        ADVANCE(628);
      if (lookahead == 'S')
        ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 630:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 631:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 632:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 633:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 635:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 636:
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
    case 637:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 638:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 645:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(657);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(658);
      if (lookahead == 'B')
        ADVANCE(659);
      if (lookahead == 'C')
        ADVANCE(660);
      if (lookahead == 'D')
        ADVANCE(661);
      if (lookahead == 'E')
        ADVANCE(662);
      if (lookahead == 'F')
        ADVANCE(663);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(639);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(640);
      if (lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'f')
        ADVANCE(642);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(644);
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
        ADVANCE(408);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(647);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == ' ')
        ADVANCE(649);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(650);
      if (lookahead == 'B')
        ADVANCE(651);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead == 'D')
        ADVANCE(653);
      if (lookahead == 'E')
        ADVANCE(654);
      if (lookahead == 'F')
        ADVANCE(655);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(582);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(587);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(656);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'b')
        ADVANCE(590);
      if (lookahead == 'f')
        ADVANCE(591);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(592);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(593);
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
        ADVANCE(405);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(647);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == ' ')
        ADVANCE(649);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(650);
      if (lookahead == 'B')
        ADVANCE(651);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead == 'D')
        ADVANCE(653);
      if (lookahead == 'E')
        ADVANCE(654);
      if (lookahead == 'F')
        ADVANCE(655);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(582);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(587);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(656);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'b')
        ADVANCE(590);
      if (lookahead == 'f')
        ADVANCE(591);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(592);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(593);
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
        ADVANCE(405);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '\t')
        ADVANCE(647);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == ' ')
        ADVANCE(649);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(650);
      if (lookahead == 'B')
        ADVANCE(651);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead == 'D')
        ADVANCE(653);
      if (lookahead == 'E')
        ADVANCE(654);
      if (lookahead == 'F')
        ADVANCE(655);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(582);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(587);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(656);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'b')
        ADVANCE(590);
      if (lookahead == 'f')
        ADVANCE(591);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(592);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(593);
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
        ADVANCE(405);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(647);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == ' ')
        ADVANCE(649);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(650);
      if (lookahead == 'B')
        ADVANCE(651);
      if (lookahead == 'C')
        ADVANCE(652);
      if (lookahead == 'D')
        ADVANCE(653);
      if (lookahead == 'E')
        ADVANCE(654);
      if (lookahead == 'F')
        ADVANCE(655);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(582);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(587);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(656);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(589);
      if (lookahead == 'b')
        ADVANCE(590);
      if (lookahead == 'f')
        ADVANCE(591);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(592);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(593);
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
        ADVANCE(405);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(547);
      if (lookahead == 'S')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(551);
      if (lookahead == 'R')
        ADVANCE(553);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(555);
      if (lookahead == 'E')
        ADVANCE(560);
      if (lookahead == 'L')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(565);
      if (lookahead == 'N')
        ADVANCE(566);
      if (lookahead == 'O')
        ADVANCE(568);
      if (lookahead == 'S')
        ADVANCE(570);
      if (lookahead == 'T')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(576);
      if (lookahead == 'S')
        ADVANCE(577);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(657);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(658);
      if (lookahead == 'B')
        ADVANCE(659);
      if (lookahead == 'C')
        ADVANCE(660);
      if (lookahead == 'D')
        ADVANCE(661);
      if (lookahead == 'E')
        ADVANCE(662);
      if (lookahead == 'F')
        ADVANCE(663);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(639);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(640);
      if (lookahead == 'b')
        ADVANCE(641);
      if (lookahead == 'f')
        ADVANCE(642);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(643);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(644);
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
        ADVANCE(408);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(596);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(599);
      if (lookahead == 'S')
        ADVANCE(601);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(603);
      if (lookahead == 'R')
        ADVANCE(605);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(607);
      if (lookahead == 'E')
        ADVANCE(612);
      if (lookahead == 'L')
        ADVANCE(614);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(617);
      if (lookahead == 'N')
        ADVANCE(618);
      if (lookahead == 'O')
        ADVANCE(620);
      if (lookahead == 'S')
        ADVANCE(622);
      if (lookahead == 'T')
        ADVANCE(624);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(628);
      if (lookahead == 'S')
        ADVANCE(629);
      END_STATE();
    case 664:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(670);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(665);
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
        ADVANCE(666);
      if (lookahead == '\\')
        ADVANCE(667);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(668);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(670);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      END_STATE();
    case 669:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 670:
      if (lookahead == 'n')
        SKIP(664);
      END_STATE();
    case 671:
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(674);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(675);
      if (lookahead == 'w')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(671);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 672:
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(672);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(666);
      if (lookahead == '\\')
        ADVANCE(673);
      if (lookahead == 'w')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(672);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(672);
      if (lookahead == '\r')
        ADVANCE(674);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(675);
      if (lookahead == 'w')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(671);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 675:
      if (lookahead == 'n')
        SKIP(671);
      END_STATE();
    case 676:
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(679);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(680);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(676);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 677:
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(677);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(666);
      if (lookahead == '\\')
        ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(677);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(677);
      if (lookahead == '\r')
        ADVANCE(679);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(669);
      if (lookahead == '\\')
        SKIP(680);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(676);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 680:
      if (lookahead == 'n')
        SKIP(676);
      END_STATE();
    case 681:
      if (lookahead == '\n')
        ADVANCE(682);
      if (lookahead == '\r')
        ADVANCE(684);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(685);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(681);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 682:
      if (lookahead == '\n')
        ADVANCE(682);
      if (lookahead == '\r')
        ADVANCE(682);
      if (lookahead == '-')
        ADVANCE(391);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(682);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '\n')
        ADVANCE(682);
      if (lookahead == '\r')
        ADVANCE(684);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(685);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(681);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 685:
      if (lookahead == 'n')
        SKIP(681);
      END_STATE();
    case 686:
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(689);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(690);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(686);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 687:
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(687);
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
        ADVANCE(688);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(687);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(687);
      if (lookahead == '\r')
        ADVANCE(689);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(690);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(686);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 690:
      if (lookahead == 'n')
        SKIP(686);
      END_STATE();
    case 691:
      if (lookahead == '\n')
        ADVANCE(692);
      if (lookahead == '\r')
        ADVANCE(694);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(695);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(691);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 692:
      if (lookahead == '\n')
        ADVANCE(692);
      if (lookahead == '\r')
        ADVANCE(692);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(693);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(692);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '\n')
        ADVANCE(692);
      if (lookahead == '\r')
        ADVANCE(694);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(695);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(691);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 695:
      if (lookahead == 'n')
        SKIP(691);
      END_STATE();
    case 696:
      if (lookahead == '\n')
        ADVANCE(697);
      if (lookahead == '\r')
        ADVANCE(699);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(700);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(696);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 697:
      if (lookahead == '\n')
        ADVANCE(697);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(698);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(697);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '\n')
        ADVANCE(697);
      if (lookahead == '\r')
        ADVANCE(699);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(700);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(696);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(354);
      END_STATE();
    case 700:
      if (lookahead == 'n')
        SKIP(696);
      END_STATE();
    case 701:
      if (lookahead == '\n')
        ADVANCE(702);
      if (lookahead == '\r')
        ADVANCE(704);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(705);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(701);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 702:
      if (lookahead == '\n')
        ADVANCE(702);
      if (lookahead == '\r')
        ADVANCE(702);
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
        ADVANCE(703);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(702);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(702);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      if (lookahead == '\n')
        ADVANCE(702);
      if (lookahead == '\r')
        ADVANCE(704);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(705);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(701);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 705:
      if (lookahead == 'n')
        SKIP(701);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(707);
      if (lookahead == '\r')
        ADVANCE(709);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(710);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(706);
      END_STATE();
    case 707:
      if (lookahead == '\n')
        ADVANCE(707);
      if (lookahead == '\r')
        ADVANCE(707);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(708);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(707);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(707);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      if (lookahead == '\n')
        ADVANCE(707);
      if (lookahead == '\r')
        ADVANCE(709);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(710);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(706);
      END_STATE();
    case 710:
      if (lookahead == 'n')
        SKIP(706);
      END_STATE();
    case 711:
      if (lookahead == '\n')
        ADVANCE(712);
      if (lookahead == '\r')
        ADVANCE(714);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(715);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(711);
      END_STATE();
    case 712:
      if (lookahead == '\n')
        ADVANCE(712);
      if (lookahead == '\r')
        ADVANCE(712);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(713);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(712);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(712);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      if (lookahead == '\n')
        ADVANCE(712);
      if (lookahead == '\r')
        ADVANCE(714);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(715);
      if (lookahead == 'd')
        ADVANCE(460);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(711);
      END_STATE();
    case 715:
      if (lookahead == 'n')
        SKIP(711);
      END_STATE();
    case 716:
      if (lookahead == '\n')
        ADVANCE(717);
      if (lookahead == '\r')
        ADVANCE(719);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(716);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 717:
      if (lookahead == '\n')
        ADVANCE(717);
      if (lookahead == '\r')
        ADVANCE(717);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(718);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(717);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 719:
      if (lookahead == '\n')
        ADVANCE(717);
      if (lookahead == '\r')
        ADVANCE(719);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(716);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 720:
      if (lookahead == '\n')
        ADVANCE(721);
      if (lookahead == '\r')
        ADVANCE(724);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(725);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(726);
      END_STATE();
    case 721:
      if (lookahead == '\n')
        ADVANCE(721);
      if (lookahead == '\r')
        ADVANCE(721);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(723);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 722:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(721);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 724:
      if (lookahead == '\n')
        ADVANCE(721);
      if (lookahead == '\r')
        ADVANCE(724);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(725);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(726);
      END_STATE();
    case 725:
      if (lookahead == 'n')
        SKIP(720);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 727:
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(732);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(727);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(733);
      END_STATE();
    case 728:
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == '\r')
        ADVANCE(728);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(730);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 729:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(728);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 731:
      if (lookahead == '\n')
        ADVANCE(728);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '\\')
        SKIP(732);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(727);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(733);
      END_STATE();
    case 732:
      if (lookahead == 'n')
        SKIP(727);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 734:
      if (lookahead == '\n')
        ADVANCE(735);
      if (lookahead == '\r')
        ADVANCE(737);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(738);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(734);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 735:
      if (lookahead == '\n')
        ADVANCE(735);
      if (lookahead == '\r')
        ADVANCE(735);
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
        ADVANCE(736);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(208);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead == 't')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(735);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 736:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(735);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 737:
      if (lookahead == '\n')
        ADVANCE(735);
      if (lookahead == '\r')
        ADVANCE(737);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == '0')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(738);
      if (lookahead == 'c')
        ADVANCE(259);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == 't')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(734);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 738:
      if (lookahead == 'n')
        SKIP(734);
      END_STATE();
    case 739:
      if (lookahead == '\n')
        ADVANCE(740);
      if (lookahead == '\r')
        ADVANCE(742);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(743);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(739);
      END_STATE();
    case 740:
      if (lookahead == '\n')
        ADVANCE(740);
      if (lookahead == '\r')
        ADVANCE(740);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(741);
      if (lookahead == 'h')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(740);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 741:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(740);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 742:
      if (lookahead == '\n')
        ADVANCE(740);
      if (lookahead == '\r')
        ADVANCE(742);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(743);
      if (lookahead == 'h')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(739);
      END_STATE();
    case 743:
      if (lookahead == 'n')
        SKIP(739);
      END_STATE();
    case 744:
      if (lookahead == '\n')
        ADVANCE(745);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(750);
      if (lookahead == 'i')
        ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(744);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 745:
      if (lookahead == '\n')
        ADVANCE(745);
      if (lookahead == '\r')
        ADVANCE(745);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(746);
      if (lookahead == 'i')
        ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 746:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(745);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 749:
      if (lookahead == '\n')
        ADVANCE(745);
      if (lookahead == '\r')
        ADVANCE(749);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(750);
      if (lookahead == 'i')
        ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(744);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 750:
      if (lookahead == 'n')
        SKIP(744);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'n')
        ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(260);
      if (lookahead == 'f')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 753:
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(757);
      if (lookahead == 'i')
        ADVANCE(751);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(753);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 754:
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == '\r')
        ADVANCE(754);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(755);
      if (lookahead == 'i')
        ADVANCE(747);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(754);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      if (lookahead == '\n')
        ADVANCE(754);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(757);
      if (lookahead == 'i')
        ADVANCE(751);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(753);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 757:
      if (lookahead == 'n')
        SKIP(753);
      END_STATE();
    case 758:
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(762);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(758);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 759:
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == '\r')
        ADVANCE(759);
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
        ADVANCE(760);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(759);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      if (lookahead == '\n')
        ADVANCE(759);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == '-')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(762);
      if (lookahead == 'd')
        ADVANCE(523);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(758);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 762:
      if (lookahead == 'n')
        SKIP(758);
      END_STATE();
    case 763:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(765);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(766);
      if (lookahead == ' ')
        ADVANCE(767);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(768);
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
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(765);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(766);
      if (lookahead == ' ')
        ADVANCE(767);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(768);
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
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      if (lookahead == '\t')
        ADVANCE(765);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(766);
      if (lookahead == ' ')
        ADVANCE(767);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(768);
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
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(765);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(766);
      if (lookahead == ' ')
        ADVANCE(767);
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
        ADVANCE(357);
      if (lookahead == '.')
        ADVANCE(358);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(361);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(362);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(768);
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
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(766);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      if (lookahead == '\t')
        ADVANCE(410);
      if (lookahead == '\n')
        ADVANCE(764);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(371);
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
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(408);
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
  [2] = {.lex_state = 313},
  [3] = {.lex_state = 318},
  [4] = {.lex_state = 313},
  [5] = {.lex_state = 341, .external_lex_state = 2},
  [6] = {.lex_state = 346},
  [7] = {.lex_state = 346},
  [8] = {.lex_state = 355},
  [9] = {.lex_state = 372},
  [10] = {.lex_state = 346},
  [11] = {.lex_state = 346},
  [12] = {.lex_state = 377},
  [13] = {.lex_state = 384, .external_lex_state = 3},
  [14] = {.lex_state = 389},
  [15] = {.lex_state = 396, .external_lex_state = 3},
  [16] = {.lex_state = 401},
  [17] = {.lex_state = 409},
  [18] = {.lex_state = 396, .external_lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 396, .external_lex_state = 3},
  [21] = {.lex_state = 396, .external_lex_state = 3},
  [22] = {.lex_state = 396, .external_lex_state = 3},
  [23] = {.lex_state = 384},
  [24] = {.lex_state = 417},
  [25] = {.lex_state = 384},
  [26] = {.lex_state = 422},
  [27] = {.lex_state = 384},
  [28] = {.lex_state = 437, .external_lex_state = 3},
  [29] = {.lex_state = 474, .external_lex_state = 3},
  [30] = {.lex_state = 479},
  [31] = {.lex_state = 486, .external_lex_state = 4},
  [32] = {.lex_state = 377},
  [33] = {.lex_state = 396, .external_lex_state = 3},
  [34] = {.lex_state = 377},
  [35] = {.lex_state = 422},
  [36] = {.lex_state = 377},
  [37] = {.lex_state = 346},
  [38] = {.lex_state = 422},
  [39] = {.lex_state = 377},
  [40] = {.lex_state = 355},
  [41] = {.lex_state = 384},
  [42] = {.lex_state = 491, .external_lex_state = 3},
  [43] = {.lex_state = 491, .external_lex_state = 3},
  [44] = {.lex_state = 355},
  [45] = {.lex_state = 495, .external_lex_state = 3},
  [46] = {.lex_state = 495, .external_lex_state = 3},
  [47] = {.lex_state = 355},
  [48] = {.lex_state = 491, .external_lex_state = 3},
  [49] = {.lex_state = 491, .external_lex_state = 3},
  [50] = {.lex_state = 377},
  [51] = {.lex_state = 500, .external_lex_state = 3},
  [52] = {.lex_state = 396, .external_lex_state = 3},
  [53] = {.lex_state = 396, .external_lex_state = 3},
  [54] = {.lex_state = 384},
  [55] = {.lex_state = 346},
  [56] = {.lex_state = 422},
  [57] = {.lex_state = 505, .external_lex_state = 3},
  [58] = {.lex_state = 510, .external_lex_state = 3},
  [59] = {.lex_state = 377},
  [60] = {.lex_state = 531, .external_lex_state = 3},
  [61] = {.lex_state = 536},
  [62] = {.lex_state = 377},
  [63] = {.lex_state = 422},
  [64] = {.lex_state = 536},
  [65] = {.lex_state = 422},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 541},
  [73] = {.lex_state = 409},
  [74] = {.lex_state = 409},
  [75] = {.lex_state = 409},
  [76] = {.lex_state = 396, .external_lex_state = 3},
  [77] = {.lex_state = 409},
  [78] = {.lex_state = 409},
  [79] = {.lex_state = 409},
  [80] = {.lex_state = 645},
  [81] = {.lex_state = 409},
  [82] = {.lex_state = 409},
  [83] = {.lex_state = 417},
  [84] = {.lex_state = 396, .external_lex_state = 3},
  [85] = {.lex_state = 372},
  [86] = {.lex_state = 384},
  [87] = {.lex_state = 341, .external_lex_state = 2},
  [88] = {.lex_state = 479},
  [89] = {.lex_state = 422},
  [90] = {.lex_state = 474, .external_lex_state = 3},
  [91] = {.lex_state = 479},
  [92] = {.lex_state = 384},
  [93] = {.lex_state = 313},
  [94] = {.lex_state = 396, .external_lex_state = 3},
  [95] = {.lex_state = 396, .external_lex_state = 3},
  [96] = {.lex_state = 664},
  [97] = {.lex_state = 396, .external_lex_state = 3},
  [98] = {.lex_state = 396, .external_lex_state = 3},
  [99] = {.lex_state = 486, .external_lex_state = 4},
  [100] = {.lex_state = 486, .external_lex_state = 4},
  [101] = {.lex_state = 396, .external_lex_state = 3},
  [102] = {.lex_state = 377},
  [103] = {.lex_state = 377},
  [104] = {.lex_state = 313},
  [105] = {.lex_state = 664},
  [106] = {.lex_state = 341, .external_lex_state = 2},
  [107] = {.lex_state = 313},
  [108] = {.lex_state = 671},
  [109] = {.lex_state = 422},
  [110] = {.lex_state = 422},
  [111] = {.lex_state = 377},
  [112] = {.lex_state = 341, .external_lex_state = 2},
  [113] = {.lex_state = 422},
  [114] = {.lex_state = 422},
  [115] = {.lex_state = 491, .external_lex_state = 3},
  [116] = {.lex_state = 491, .external_lex_state = 3},
  [117] = {.lex_state = 664},
  [118] = {.lex_state = 495, .external_lex_state = 3},
  [119] = {.lex_state = 491, .external_lex_state = 3},
  [120] = {.lex_state = 355},
  [121] = {.lex_state = 495, .external_lex_state = 3},
  [122] = {.lex_state = 495, .external_lex_state = 3},
  [123] = {.lex_state = 495, .external_lex_state = 3},
  [124] = {.lex_state = 491, .external_lex_state = 3},
  [125] = {.lex_state = 664},
  [126] = {.lex_state = 676, .external_lex_state = 3},
  [127] = {.lex_state = 681, .external_lex_state = 3},
  [128] = {.lex_state = 681, .external_lex_state = 3},
  [129] = {.lex_state = 396, .external_lex_state = 3},
  [130] = {.lex_state = 384},
  [131] = {.lex_state = 384},
  [132] = {.lex_state = 686, .external_lex_state = 3},
  [133] = {.lex_state = 691, .external_lex_state = 3},
  [134] = {.lex_state = 691, .external_lex_state = 3},
  [135] = {.lex_state = 531, .external_lex_state = 3},
  [136] = {.lex_state = 696, .external_lex_state = 3},
  [137] = {.lex_state = 372},
  [138] = {.lex_state = 701, .external_lex_state = 3},
  [139] = {.lex_state = 706, .external_lex_state = 3},
  [140] = {.lex_state = 711, .external_lex_state = 3},
  [141] = {.lex_state = 396, .external_lex_state = 3},
  [142] = {.lex_state = 346},
  [143] = {.lex_state = 536},
  [144] = {.lex_state = 422},
  [145] = {.lex_state = 377},
  [146] = {.lex_state = 536},
  [147] = {.lex_state = 384},
  [148] = {.lex_state = 396, .external_lex_state = 3},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 716},
  [152] = {.lex_state = 720},
  [153] = {.lex_state = 727},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 409},
  [156] = {.lex_state = 409},
  [157] = {.lex_state = 716},
  [158] = {.lex_state = 720},
  [159] = {.lex_state = 727},
  [160] = {.lex_state = 409},
  [161] = {.lex_state = 409},
  [162] = {.lex_state = 396, .external_lex_state = 3},
  [163] = {.lex_state = 417},
  [164] = {.lex_state = 384},
  [165] = {.lex_state = 734, .external_lex_state = 4},
  [166] = {.lex_state = 417},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 422},
  [169] = {.lex_state = 664},
  [170] = {.lex_state = 664},
  [171] = {.lex_state = 664},
  [172] = {.lex_state = 341, .external_lex_state = 2},
  [173] = {.lex_state = 384},
  [174] = {.lex_state = 396, .external_lex_state = 3},
  [175] = {.lex_state = 396, .external_lex_state = 3},
  [176] = {.lex_state = 664},
  [177] = {.lex_state = 739, .external_lex_state = 3},
  [178] = {.lex_state = 479},
  [179] = {.lex_state = 384},
  [180] = {.lex_state = 396, .external_lex_state = 3},
  [181] = {.lex_state = 664},
  [182] = {.lex_state = 486, .external_lex_state = 4},
  [183] = {.lex_state = 396, .external_lex_state = 3},
  [184] = {.lex_state = 486, .external_lex_state = 4},
  [185] = {.lex_state = 377},
  [186] = {.lex_state = 377},
  [187] = {.lex_state = 664},
  [188] = {.lex_state = 377},
  [189] = {.lex_state = 346},
  [190] = {.lex_state = 664},
  [191] = {.lex_state = 744, .external_lex_state = 4},
  [192] = {.lex_state = 753},
  [193] = {.lex_state = 396, .external_lex_state = 3},
  [194] = {.lex_state = 313},
  [195] = {.lex_state = 341, .external_lex_state = 2},
  [196] = {.lex_state = 422},
  [197] = {.lex_state = 422},
  [198] = {.lex_state = 422},
  [199] = {.lex_state = 396, .external_lex_state = 3},
  [200] = {.lex_state = 341, .external_lex_state = 2},
  [201] = {.lex_state = 422},
  [202] = {.lex_state = 495, .external_lex_state = 3},
  [203] = {.lex_state = 491, .external_lex_state = 3},
  [204] = {.lex_state = 495, .external_lex_state = 3},
  [205] = {.lex_state = 495, .external_lex_state = 3},
  [206] = {.lex_state = 495, .external_lex_state = 3},
  [207] = {.lex_state = 355},
  [208] = {.lex_state = 495, .external_lex_state = 3},
  [209] = {.lex_state = 346},
  [210] = {.lex_state = 664},
  [211] = {.lex_state = 681, .external_lex_state = 3},
  [212] = {.lex_state = 681, .external_lex_state = 3},
  [213] = {.lex_state = 681, .external_lex_state = 3},
  [214] = {.lex_state = 396, .external_lex_state = 3},
  [215] = {.lex_state = 505, .external_lex_state = 3},
  [216] = {.lex_state = 691, .external_lex_state = 3},
  [217] = {.lex_state = 691, .external_lex_state = 3},
  [218] = {.lex_state = 696, .external_lex_state = 3},
  [219] = {.lex_state = 706, .external_lex_state = 3},
  [220] = {.lex_state = 396, .external_lex_state = 3},
  [221] = {.lex_state = 384},
  [222] = {.lex_state = 396, .external_lex_state = 3},
  [223] = {.lex_state = 313},
  [224] = {.lex_state = 384},
  [225] = {.lex_state = 758, .external_lex_state = 3},
  [226] = {.lex_state = 758, .external_lex_state = 3},
  [227] = {.lex_state = 711, .external_lex_state = 3},
  [228] = {.lex_state = 758, .external_lex_state = 3},
  [229] = {.lex_state = 377},
  [230] = {.lex_state = 711, .external_lex_state = 3},
  [231] = {.lex_state = 536},
  [232] = {.lex_state = 377},
  [233] = {.lex_state = 479},
  [234] = {.lex_state = 706, .external_lex_state = 3},
  [235] = {.lex_state = 396, .external_lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 720},
  [239] = {.lex_state = 720},
  [240] = {.lex_state = 727},
  [241] = {.lex_state = 727},
  [242] = {.lex_state = 409},
  [243] = {.lex_state = 409},
  [244] = {.lex_state = 409},
  [245] = {.lex_state = 409},
  [246] = {.lex_state = 763},
  [247] = {.lex_state = 763},
  [248] = {.lex_state = 396, .external_lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 396, .external_lex_state = 3},
  [251] = {.lex_state = 734, .external_lex_state = 4},
  [252] = {.lex_state = 417},
  [253] = {.lex_state = 384},
  [254] = {.lex_state = 422},
  [255] = {.lex_state = 664},
  [256] = {.lex_state = 479},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 739, .external_lex_state = 3},
  [259] = {.lex_state = 479},
  [260] = {.lex_state = 384},
  [261] = {.lex_state = 396, .external_lex_state = 3},
  [262] = {.lex_state = 664},
  [263] = {.lex_state = 396, .external_lex_state = 3},
  [264] = {.lex_state = 664},
  [265] = {.lex_state = 664},
  [266] = {.lex_state = 384},
  [267] = {.lex_state = 396, .external_lex_state = 3},
  [268] = {.lex_state = 664},
  [269] = {.lex_state = 377},
  [270] = {.lex_state = 377},
  [271] = {.lex_state = 346},
  [272] = {.lex_state = 396, .external_lex_state = 3},
  [273] = {.lex_state = 396, .external_lex_state = 3},
  [274] = {.lex_state = 396, .external_lex_state = 3},
  [275] = {.lex_state = 744, .external_lex_state = 4},
  [276] = {.lex_state = 396, .external_lex_state = 3},
  [277] = {.lex_state = 753},
  [278] = {.lex_state = 664},
  [279] = {.lex_state = 396, .external_lex_state = 3},
  [280] = {.lex_state = 341, .external_lex_state = 2},
  [281] = {.lex_state = 396, .external_lex_state = 3},
  [282] = {.lex_state = 341, .external_lex_state = 2},
  [283] = {.lex_state = 495, .external_lex_state = 3},
  [284] = {.lex_state = 495, .external_lex_state = 3},
  [285] = {.lex_state = 384},
  [286] = {.lex_state = 346},
  [287] = {.lex_state = 706, .external_lex_state = 3},
  [288] = {.lex_state = 396, .external_lex_state = 3},
  [289] = {.lex_state = 664},
  [290] = {.lex_state = 664},
  [291] = {.lex_state = 664},
  [292] = {.lex_state = 758, .external_lex_state = 3},
  [293] = {.lex_state = 758, .external_lex_state = 3},
  [294] = {.lex_state = 711, .external_lex_state = 3},
  [295] = {.lex_state = 377},
  [296] = {.lex_state = 706, .external_lex_state = 3},
  [297] = {.lex_state = 706, .external_lex_state = 3},
  [298] = {.lex_state = 396, .external_lex_state = 3},
  [299] = {.lex_state = 720},
  [300] = {.lex_state = 727},
  [301] = {.lex_state = 409},
  [302] = {.lex_state = 763},
  [303] = {.lex_state = 734, .external_lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 396, .external_lex_state = 3},
  [306] = {.lex_state = 664},
  [307] = {.lex_state = 384},
  [308] = {.lex_state = 422},
  [309] = {.lex_state = 313},
  [310] = {.lex_state = 664},
  [311] = {.lex_state = 396, .external_lex_state = 3},
  [312] = {.lex_state = 313},
  [313] = {.lex_state = 664},
  [314] = {.lex_state = 664},
  [315] = {.lex_state = 384},
  [316] = {.lex_state = 396, .external_lex_state = 3},
  [317] = {.lex_state = 479},
  [318] = {.lex_state = 664},
  [319] = {.lex_state = 664},
  [320] = {.lex_state = 664},
  [321] = {.lex_state = 377},
  [322] = {.lex_state = 744, .external_lex_state = 4},
  [323] = {.lex_state = 396, .external_lex_state = 3},
  [324] = {.lex_state = 396, .external_lex_state = 3},
  [325] = {.lex_state = 753},
  [326] = {.lex_state = 396, .external_lex_state = 3},
  [327] = {.lex_state = 396, .external_lex_state = 3},
  [328] = {.lex_state = 396, .external_lex_state = 3},
  [329] = {.lex_state = 384},
  [330] = {.lex_state = 396, .external_lex_state = 3},
  [331] = {.lex_state = 396, .external_lex_state = 3},
  [332] = {.lex_state = 664},
  [333] = {.lex_state = 313},
  [334] = {.lex_state = 479},
  [335] = {.lex_state = 664},
  [336] = {.lex_state = 711, .external_lex_state = 3},
  [337] = {.lex_state = 313},
  [338] = {.lex_state = 664},
  [339] = {.lex_state = 711, .external_lex_state = 3},
  [340] = {.lex_state = 396, .external_lex_state = 3},
  [341] = {.lex_state = 734, .external_lex_state = 4},
  [342] = {.lex_state = 664},
  [343] = {.lex_state = 664},
  [344] = {.lex_state = 664},
  [345] = {.lex_state = 664},
  [346] = {.lex_state = 664},
  [347] = {.lex_state = 479},
  [348] = {.lex_state = 664},
  [349] = {.lex_state = 313},
  [350] = {.lex_state = 664},
  [351] = {.lex_state = 396, .external_lex_state = 3},
  [352] = {.lex_state = 744, .external_lex_state = 4},
  [353] = {.lex_state = 753},
  [354] = {.lex_state = 396, .external_lex_state = 3},
  [355] = {.lex_state = 664},
  [356] = {.lex_state = 384},
  [357] = {.lex_state = 664},
  [358] = {.lex_state = 313},
  [359] = {.lex_state = 479},
  [360] = {.lex_state = 664},
  [361] = {.lex_state = 711, .external_lex_state = 3},
  [362] = {.lex_state = 313},
  [363] = {.lex_state = 664},
  [364] = {.lex_state = 396, .external_lex_state = 3},
  [365] = {.lex_state = 664},
  [366] = {.lex_state = 664},
  [367] = {.lex_state = 313},
  [368] = {.lex_state = 664},
  [369] = {.lex_state = 479},
  [370] = {.lex_state = 664},
  [371] = {.lex_state = 664},
  [372] = {.lex_state = 664},
  [373] = {.lex_state = 664},
  [374] = {.lex_state = 664},
  [375] = {.lex_state = 396, .external_lex_state = 3},
  [376] = {.lex_state = 664},
  [377] = {.lex_state = 664},
  [378] = {.lex_state = 664},
  [379] = {.lex_state = 313},
  [380] = {.lex_state = 664},
  [381] = {.lex_state = 664},
  [382] = {.lex_state = 396, .external_lex_state = 3},
  [383] = {.lex_state = 664},
  [384] = {.lex_state = 664},
  [385] = {.lex_state = 664},
  [386] = {.lex_state = 664},
  [387] = {.lex_state = 396, .external_lex_state = 3},
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
    [sym_module] = STATE(19),
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(21),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(24),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(48),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [sym__identifier] = STATE(29),
    [anon_sym_qualified] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [sym_statement_list] = STATE(33),
    [sym__layout_open_brace] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [6] = {
    [sym_context] = STATE(36),
    [sym_class] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_class] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(64),
    [sym_comment] = ACTIONS(38),
  },
  [8] = {
    [sym__op] = STATE(45),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym_integer] = STATE(47),
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
    [sym__integer_literal] = ACTIONS(76),
    [sym__octal_literal] = ACTIONS(76),
    [sym__hexidecimal_literal] = ACTIONS(76),
  },
  [9] = {
    [sym__type] = STATE(52),
    [sym_function_type] = STATE(53),
    [sym_context] = STATE(54),
    [sym_class] = STATE(55),
    [sym__identifier] = STATE(56),
    [sym_simple_type] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(82),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [10] = {
    [sym_context] = STATE(59),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(38),
  },
  [11] = {
    [sym_context] = STATE(62),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(38),
  },
  [12] = {
    [sym_simple_type] = STATE(65),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(94),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [14] = {
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(94),
    [anon_sym_COLON_COLON] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(94),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
  },
  [16] = {
    [sym__graphic] = STATE(68),
    [sym__small] = STATE(69),
    [sym__large] = STATE(69),
    [sym__symbol] = STATE(69),
    [sym__special] = STATE(69),
    [sym__escape] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(104),
    [anon_sym_BANG] = ACTIONS(104),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(112),
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
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
    [sym__space] = ACTIONS(106),
  },
  [17] = {
    [sym__gap] = STATE(75),
    [sym__graphic] = STATE(75),
    [sym__small] = STATE(77),
    [sym__large] = STATE(77),
    [sym__symbol] = STATE(77),
    [sym__special] = STATE(77),
    [sym__escape] = STATE(75),
    [aux_sym_string_repeat1] = STATE(82),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(128),
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
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [18] = {
    [sym__layout_semicolon] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_comment] = ACTIONS(38),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_comment] = ACTIONS(38),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(92),
    [sym_comment] = ACTIONS(38),
  },
  [23] = {
    [anon_sym_COLON_COLON] = ACTIONS(148),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(150),
    [sym_module_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(38),
  },
  [24] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(84),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [25] = {
    [sym__identifier] = STATE(86),
    [anon_sym_COLON_COLON] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [26] = {
    [sym_module_exports] = STATE(89),
    [anon_sym_where] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(38),
  },
  [27] = {
    [sym__identifier] = STATE(90),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_as] = ACTIONS(94),
    [anon_sym_hiding] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [anon_sym_deriving] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [29] = {
    [sym_import_specification] = STATE(94),
    [sym__layout_semicolon] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_as] = ACTIONS(170),
    [anon_sym_hiding] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [30] = {
    [sym__identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(174),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [31] = {
    [sym__expression] = STATE(98),
    [sym_do_expression] = STATE(22),
    [sym__statement] = STATE(99),
    [sym__literal] = STATE(22),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(100),
    [sym__layout_close_brace] = ACTIONS(176),
    [anon_sym_do] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [32] = {
    [sym__expression] = STATE(101),
    [sym_do_expression] = STATE(22),
    [sym__statement] = STATE(102),
    [sym__literal] = STATE(22),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(103),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_do] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [33] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [sym_class] = STATE(105),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [aux_sym_type_class_repeat1] = STATE(109),
    [anon_sym_where] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [sym_variable_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
  },
  [36] = {
    [sym_constructor_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [anon_sym_EQ_GT] = ACTIONS(196),
    [sym_comment] = ACTIONS(38),
  },
  [38] = {
    [aux_sym_type_class_repeat1] = STATE(113),
    [anon_sym_where] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(190),
    [sym_variable_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
  },
  [39] = {
    [sym_constructor_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(38),
  },
  [40] = {
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(116),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [41] = {
    [sym__identifier] = STATE(117),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [42] = {
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(119),
    [sym__layout_semicolon] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
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
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_BQUOTE] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(214),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(214),
  },
  [45] = {
    [aux_sym_fixity_repeat1] = STATE(121),
    [sym__layout_semicolon] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [sym_comment] = ACTIONS(38),
  },
  [47] = {
    [sym__op] = STATE(122),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [48] = {
    [sym__layout_semicolon] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [sym_comment] = ACTIONS(74),
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
  [49] = {
    [sym__symbol] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [50] = {
    [sym_class] = STATE(125),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [51] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(38),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(244),
    [sym_comment] = ACTIONS(38),
  },
  [53] = {
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(38),
  },
  [54] = {
    [sym__type] = STATE(129),
    [sym_function_type] = STATE(53),
    [sym__identifier] = STATE(56),
    [sym_simple_type] = STATE(57),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(250),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [anon_sym_EQ_GT] = ACTIONS(252),
    [sym_comment] = ACTIONS(38),
  },
  [56] = {
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_comment] = ACTIONS(38),
  },
  [57] = {
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [aux_sym_type_class_repeat1] = STATE(133),
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(238),
    [anon_sym_deriving] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [sym_simple_type] = STATE(135),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [sym_constructors] = STATE(139),
    [sym_constructor] = STATE(140),
    [sym_deriving] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
    [aux_sym_type_class_repeat1] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(38),
  },
  [62] = {
    [sym_simple_type] = STATE(144),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(38),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [64] = {
    [aux_sym_type_class_repeat1] = STATE(143),
    [anon_sym_EQ] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(38),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(278),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(280),
  },
  [67] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(282),
  },
  [68] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [69] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(286),
  },
  [70] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(288),
  },
  [71] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(290),
  },
  [72] = {
    [sym__char_escape] = STATE(150),
    [sym__ascii] = STATE(150),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(292),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(292),
    [anon_sym_x] = ACTIONS(298),
    [anon_sym_X] = ACTIONS(298),
    [anon_sym_o] = ACTIONS(300),
    [anon_sym_O] = ACTIONS(300),
    [anon_sym_a] = ACTIONS(292),
    [anon_sym_b] = ACTIONS(292),
    [anon_sym_f] = ACTIONS(292),
    [anon_sym_n] = ACTIONS(292),
    [anon_sym_r] = ACTIONS(292),
    [anon_sym_t] = ACTIONS(292),
    [anon_sym_v] = ACTIONS(292),
    [anon_sym_NUL] = ACTIONS(302),
    [anon_sym_SOH] = ACTIONS(302),
    [anon_sym_STX] = ACTIONS(302),
    [anon_sym_ETX] = ACTIONS(302),
    [anon_sym_EOT] = ACTIONS(302),
    [anon_sym_ENQ] = ACTIONS(302),
    [anon_sym_ACK] = ACTIONS(302),
    [anon_sym_BEL] = ACTIONS(302),
    [anon_sym_BS] = ACTIONS(302),
    [anon_sym_HT] = ACTIONS(302),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_VT] = ACTIONS(302),
    [anon_sym_FF] = ACTIONS(302),
    [anon_sym_CR] = ACTIONS(302),
    [anon_sym_SO] = ACTIONS(302),
    [anon_sym_SI] = ACTIONS(302),
    [anon_sym_DLE] = ACTIONS(302),
    [anon_sym_DC1] = ACTIONS(302),
    [anon_sym_DC2] = ACTIONS(302),
    [anon_sym_DC3] = ACTIONS(302),
    [anon_sym_DC4] = ACTIONS(302),
    [anon_sym_NAK] = ACTIONS(302),
    [anon_sym_SYN] = ACTIONS(302),
    [anon_sym_ETB] = ACTIONS(302),
    [anon_sym_CAN] = ACTIONS(302),
    [anon_sym_EM] = ACTIONS(302),
    [anon_sym_SUB] = ACTIONS(302),
    [anon_sym_ESC] = ACTIONS(302),
    [anon_sym_FS] = ACTIONS(302),
    [anon_sym_GS] = ACTIONS(302),
    [anon_sym_RS] = ACTIONS(302),
    [anon_sym_US] = ACTIONS(302),
    [anon_sym_SP] = ACTIONS(302),
    [anon_sym_DEL] = ACTIONS(302),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_BQUOTE] = ACTIONS(304),
    [anon_sym_COLON] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(304),
    [sym_comment] = ACTIONS(74),
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
  [74] = {
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
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
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [sym__space] = ACTIONS(212),
    [sym__newline] = ACTIONS(212),
    [sym__tab] = ACTIONS(212),
    [sym__vertical_tab] = ACTIONS(212),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [sym__ascii_large] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [sym__space] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
    [sym__tab] = ACTIONS(306),
    [sym__vertical_tab] = ACTIONS(306),
  },
  [76] = {
    [sym__layout_semicolon] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(310),
    [sym_comment] = ACTIONS(38),
  },
  [77] = {
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
    [sym_comment] = ACTIONS(74),
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
  [78] = {
    [anon_sym_SEMI] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_BQUOTE] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [sym_comment] = ACTIONS(74),
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
  [79] = {
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(316),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(316),
    [anon_sym__] = ACTIONS(316),
    [sym__ascii_large] = ACTIONS(316),
    [anon_sym_POUND] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_1] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym__space] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
    [sym__tab] = ACTIONS(316),
    [sym__vertical_tab] = ACTIONS(316),
  },
  [80] = {
    [sym__char_escape] = STATE(156),
    [sym__ascii] = STATE(156),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [sym__ascii_large] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_1] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [sym__space] = ACTIONS(212),
    [sym__newline] = ACTIONS(212),
    [sym__tab] = ACTIONS(212),
    [sym__vertical_tab] = ACTIONS(212),
    [anon_sym_x] = ACTIONS(324),
    [anon_sym_X] = ACTIONS(324),
    [anon_sym_o] = ACTIONS(326),
    [anon_sym_O] = ACTIONS(326),
    [anon_sym_a] = ACTIONS(318),
    [anon_sym_b] = ACTIONS(318),
    [anon_sym_f] = ACTIONS(318),
    [anon_sym_n] = ACTIONS(318),
    [anon_sym_r] = ACTIONS(318),
    [anon_sym_t] = ACTIONS(318),
    [anon_sym_v] = ACTIONS(318),
    [anon_sym_NUL] = ACTIONS(328),
    [anon_sym_SOH] = ACTIONS(328),
    [anon_sym_STX] = ACTIONS(328),
    [anon_sym_ETX] = ACTIONS(328),
    [anon_sym_EOT] = ACTIONS(328),
    [anon_sym_ENQ] = ACTIONS(328),
    [anon_sym_ACK] = ACTIONS(328),
    [anon_sym_BEL] = ACTIONS(328),
    [anon_sym_BS] = ACTIONS(328),
    [anon_sym_HT] = ACTIONS(328),
    [anon_sym_LF] = ACTIONS(328),
    [anon_sym_VT] = ACTIONS(328),
    [anon_sym_FF] = ACTIONS(328),
    [anon_sym_CR] = ACTIONS(328),
    [anon_sym_SO] = ACTIONS(328),
    [anon_sym_SI] = ACTIONS(328),
    [anon_sym_DLE] = ACTIONS(328),
    [anon_sym_DC1] = ACTIONS(328),
    [anon_sym_DC2] = ACTIONS(328),
    [anon_sym_DC3] = ACTIONS(328),
    [anon_sym_DC4] = ACTIONS(328),
    [anon_sym_NAK] = ACTIONS(328),
    [anon_sym_SYN] = ACTIONS(328),
    [anon_sym_ETB] = ACTIONS(328),
    [anon_sym_CAN] = ACTIONS(328),
    [anon_sym_EM] = ACTIONS(328),
    [anon_sym_SUB] = ACTIONS(328),
    [anon_sym_ESC] = ACTIONS(328),
    [anon_sym_FS] = ACTIONS(328),
    [anon_sym_GS] = ACTIONS(328),
    [anon_sym_RS] = ACTIONS(328),
    [anon_sym_US] = ACTIONS(328),
    [anon_sym_SP] = ACTIONS(328),
    [anon_sym_DEL] = ACTIONS(328),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_BANG] = ACTIONS(330),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [sym__ascii_large] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(330),
    [anon_sym_DOLLAR] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_1] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_AT] = ACTIONS(330),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_TILDE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym__space] = ACTIONS(330),
    [sym__newline] = ACTIONS(330),
    [sym__tab] = ACTIONS(330),
    [sym__vertical_tab] = ACTIONS(330),
  },
  [82] = {
    [sym__gap] = STATE(161),
    [sym__graphic] = STATE(161),
    [sym__small] = STATE(77),
    [sym__large] = STATE(77),
    [sym__symbol] = STATE(77),
    [sym__special] = STATE(77),
    [sym__escape] = STATE(161),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(128),
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
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_import] = ACTIONS(338),
    [anon_sym_default] = ACTIONS(338),
    [anon_sym_do] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_instance] = ACTIONS(338),
    [anon_sym_infixl] = ACTIONS(338),
    [anon_sym_infixr] = ACTIONS(338),
    [anon_sym_infix] = ACTIONS(338),
    [anon_sym_COLON_COLON] = ACTIONS(338),
    [anon_sym_data] = ACTIONS(338),
    [anon_sym_newtype] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [sym_variable_identifier] = ACTIONS(340),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [sym__integer_literal] = ACTIONS(338),
    [sym__octal_literal] = ACTIONS(338),
    [sym__hexidecimal_literal] = ACTIONS(338),
  },
  [84] = {
    [sym__layout_semicolon] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
  },
  [85] = {
    [sym__type] = STATE(129),
    [sym_function_type] = STATE(53),
    [sym_context] = STATE(164),
    [sym_class] = STATE(55),
    [sym__identifier] = STATE(56),
    [sym_simple_type] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(82),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [86] = {
    [anon_sym_COLON_COLON] = ACTIONS(346),
    [sym_variable_identifier] = ACTIONS(346),
    [sym_constructor_identifier] = ACTIONS(348),
    [sym_module_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(38),
  },
  [87] = {
    [sym_declarations] = STATE(167),
    [sym__layout_open_brace] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [sym_export] = STATE(170),
    [sym__identifier] = STATE(171),
    [anon_sym_RPAREN] = ACTIONS(354),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [89] = {
    [anon_sym_where] = ACTIONS(360),
    [sym_comment] = ACTIONS(38),
  },
  [90] = {
    [sym_import_specification] = STATE(174),
    [sym__layout_semicolon] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_as] = ACTIONS(366),
    [anon_sym_hiding] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [91] = {
    [sym__identifier] = STATE(176),
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [92] = {
    [sym__identifier] = STATE(177),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(370),
    [sym_comment] = ACTIONS(38),
  },
  [94] = {
    [sym__layout_semicolon] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [sym_comment] = ACTIONS(38),
  },
  [95] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym_comment] = ACTIONS(38),
  },
  [96] = {
    [aux_sym_export_repeat1] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(38),
  },
  [97] = {
    [sym__layout_semicolon] = ACTIONS(380),
    [anon_sym_SEMI] = ACTIONS(382),
    [sym_comment] = ACTIONS(38),
  },
  [98] = {
    [sym__layout_semicolon] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(386),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [sym__layout_close_brace] = ACTIONS(388),
    [anon_sym_do] = ACTIONS(390),
    [sym_variable_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [sym__integer_literal] = ACTIONS(390),
    [sym__octal_literal] = ACTIONS(390),
    [sym__hexidecimal_literal] = ACTIONS(390),
  },
  [100] = {
    [sym__expression] = STATE(98),
    [sym_do_expression] = STATE(22),
    [sym__statement] = STATE(184),
    [sym__literal] = STATE(22),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(394),
    [anon_sym_do] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [101] = {
    [sym__layout_semicolon] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(398),
    [sym_comment] = ACTIONS(38),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_do] = ACTIONS(390),
    [sym_variable_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [sym__integer_literal] = ACTIONS(390),
    [sym__octal_literal] = ACTIONS(390),
    [sym__hexidecimal_literal] = ACTIONS(390),
  },
  [103] = {
    [sym__expression] = STATE(101),
    [sym_do_expression] = STATE(22),
    [sym__statement] = STATE(186),
    [sym__literal] = STATE(22),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_do] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(190),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [aux_sym_context_repeat1] = STATE(190),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [sym_general_declarations] = STATE(193),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [107] = {
    [aux_sym_type_class_repeat1] = STATE(194),
    [sym_variable_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_where] = ACTIONS(412),
    [anon_sym_EQ_GT] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [anon_sym_where] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [aux_sym_type_class_repeat1] = STATE(198),
    [anon_sym_where] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym_constructor_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [sym_general_declarations] = STATE(199),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [anon_sym_where] = ACTIONS(426),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [aux_sym_type_class_repeat1] = STATE(201),
    [anon_sym_where] = ACTIONS(426),
    [sym_variable_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(38),
  },
  [115] = {
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(203),
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [116] = {
    [sym__symbol] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(436),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [117] = {
    [anon_sym_BQUOTE] = ACTIONS(440),
    [sym_comment] = ACTIONS(38),
  },
  [118] = {
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(442),
    [anon_sym_COMMA] = ACTIONS(442),
    [sym_comment] = ACTIONS(38),
  },
  [119] = {
    [sym__symbol] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [120] = {
    [sym__op] = STATE(206),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [121] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(448),
    [sym_comment] = ACTIONS(38),
  },
  [122] = {
    [aux_sym_fixity_repeat1] = STATE(208),
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_comment] = ACTIONS(38),
  },
  [123] = {
    [sym__layout_semicolon] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [124] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_BANG] = ACTIONS(454),
    [sym_comment] = ACTIONS(74),
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
  },
  [125] = {
    [aux_sym_context_repeat1] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(38),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_DASH_GT] = ACTIONS(412),
    [anon_sym_EQ_GT] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [127] = {
    [sym__layout_semicolon] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_DASH_GT] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(424),
    [sym_module_identifier] = ACTIONS(424),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [sym__type] = STATE(214),
    [sym_function_type] = STATE(53),
    [sym__identifier] = STATE(215),
    [sym_simple_type] = STATE(57),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(474),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [132] = {
    [sym__layout_semicolon] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(412),
    [anon_sym_EQ_GT] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_constructor_identifier] = ACTIONS(416),
    [sym_comment] = ACTIONS(38),
  },
  [133] = {
    [sym__layout_semicolon] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(462),
    [anon_sym_EQ] = ACTIONS(462),
    [anon_sym_deriving] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [aux_sym_type_class_repeat1] = STATE(133),
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(238),
    [anon_sym_deriving] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(480),
    [sym_constructor_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [sym_constructors] = STATE(219),
    [sym_constructor] = STATE(140),
    [sym_deriving] = STATE(220),
    [sym__layout_semicolon] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_EQ] = ACTIONS(486),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [sym_constructors] = STATE(219),
    [sym_constructor] = STATE(140),
    [sym_deriving] = STATE(220),
    [sym__layout_semicolon] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [sym__identifier] = STATE(222),
    [anon_sym_LPAREN] = ACTIONS(488),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [sym_strict] = STATE(226),
    [sym__identifier] = STATE(226),
    [sym_fields] = STATE(227),
    [aux_sym_constructor_repeat1] = STATE(228),
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_deriving] = ACTIONS(492),
    [anon_sym_BANG] = ACTIONS(496),
    [sym_variable_identifier] = ACTIONS(498),
    [sym_constructor_identifier] = ACTIONS(498),
    [sym_module_identifier] = ACTIONS(498),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [sym_deriving] = STATE(220),
    [sym__layout_semicolon] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(484),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [140] = {
    [aux_sym_constructors_repeat1] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(502),
    [sym_comment] = ACTIONS(38),
  },
  [141] = {
    [sym__layout_semicolon] = ACTIONS(482),
    [anon_sym_SEMI] = ACTIONS(484),
    [sym_comment] = ACTIONS(38),
  },
  [142] = {
    [anon_sym_EQ] = ACTIONS(412),
    [anon_sym_EQ_GT] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(506),
    [sym_comment] = ACTIONS(38),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(508),
    [sym_comment] = ACTIONS(38),
  },
  [145] = {
    [sym_new_constructor] = STATE(234),
    [sym_constructor_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [147] = {
    [sym__type] = STATE(235),
    [sym_function_type] = STATE(53),
    [sym__identifier] = STATE(56),
    [sym_simple_type] = STATE(57),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(250),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [sym__layout_semicolon] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(514),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(516),
  },
  [150] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(518),
  },
  [151] = {
    [sym__cntrl] = STATE(237),
    [sym_comment] = ACTIONS(74),
    [anon_sym__] = ACTIONS(520),
    [sym__ascii_large] = ACTIONS(520),
    [anon_sym_AT] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_BSLASH] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(520),
  },
  [152] = {
    [aux_sym__escape_repeat1] = STATE(239),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(522),
  },
  [153] = {
    [aux_sym__escape_repeat2] = STATE(241),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(524),
  },
  [154] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(526),
  },
  [155] = {
    [anon_sym_SEMI] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(528),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_EQ] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_BANG] = ACTIONS(528),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(528),
    [anon_sym__] = ACTIONS(528),
    [sym__ascii_large] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_DOLLAR] = ACTIONS(528),
    [anon_sym_PERCENT] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(528),
    [anon_sym_1] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_QMARK] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_BSLASH] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_RBRACK] = ACTIONS(528),
    [sym__space] = ACTIONS(528),
    [sym__newline] = ACTIONS(528),
    [sym__tab] = ACTIONS(528),
    [sym__vertical_tab] = ACTIONS(528),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [anon_sym_COLON] = ACTIONS(530),
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(530),
    [anon_sym_BANG] = ACTIONS(530),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(530),
    [anon_sym__] = ACTIONS(530),
    [sym__ascii_large] = ACTIONS(530),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(530),
    [anon_sym_AMP] = ACTIONS(530),
    [anon_sym_1] = ACTIONS(530),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DOT] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_LT] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_QMARK] = ACTIONS(530),
    [anon_sym_AT] = ACTIONS(530),
    [anon_sym_CARET] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_TILDE] = ACTIONS(530),
    [anon_sym_BSLASH] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(530),
    [anon_sym_RBRACK] = ACTIONS(530),
    [sym__space] = ACTIONS(530),
    [sym__newline] = ACTIONS(530),
    [sym__tab] = ACTIONS(530),
    [sym__vertical_tab] = ACTIONS(530),
  },
  [157] = {
    [sym__cntrl] = STATE(243),
    [sym_comment] = ACTIONS(74),
    [anon_sym__] = ACTIONS(532),
    [sym__ascii_large] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(532),
    [anon_sym_CARET] = ACTIONS(532),
    [anon_sym_BSLASH] = ACTIONS(532),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
  },
  [158] = {
    [aux_sym__escape_repeat1] = STATE(245),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(534),
  },
  [159] = {
    [aux_sym__escape_repeat2] = STATE(247),
    [sym_comment] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(536),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [anon_sym_BQUOTE] = ACTIONS(538),
    [anon_sym_COLON] = ACTIONS(538),
    [anon_sym_EQ] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_BANG] = ACTIONS(538),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(538),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(538),
    [anon_sym__] = ACTIONS(538),
    [sym__ascii_large] = ACTIONS(538),
    [anon_sym_POUND] = ACTIONS(538),
    [anon_sym_DOLLAR] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_1] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [anon_sym_QMARK] = ACTIONS(538),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_TILDE] = ACTIONS(538),
    [anon_sym_BSLASH] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym__space] = ACTIONS(538),
    [sym__newline] = ACTIONS(538),
    [sym__tab] = ACTIONS(538),
    [sym__vertical_tab] = ACTIONS(538),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(540),
    [anon_sym_COLON] = ACTIONS(540),
    [anon_sym_EQ] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(540),
    [anon_sym_BANG] = ACTIONS(540),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(540),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(540),
    [anon_sym__] = ACTIONS(540),
    [sym__ascii_large] = ACTIONS(540),
    [anon_sym_POUND] = ACTIONS(540),
    [anon_sym_DOLLAR] = ACTIONS(540),
    [anon_sym_PERCENT] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(540),
    [anon_sym_1] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(540),
    [anon_sym_DOT] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_LT] = ACTIONS(540),
    [anon_sym_GT] = ACTIONS(540),
    [anon_sym_QMARK] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(540),
    [anon_sym_CARET] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(540),
    [anon_sym_TILDE] = ACTIONS(540),
    [anon_sym_BSLASH] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
    [sym__space] = ACTIONS(540),
    [sym__newline] = ACTIONS(540),
    [sym__tab] = ACTIONS(540),
    [sym__vertical_tab] = ACTIONS(540),
  },
  [162] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_import] = ACTIONS(548),
    [anon_sym_default] = ACTIONS(548),
    [anon_sym_do] = ACTIONS(548),
    [anon_sym_class] = ACTIONS(548),
    [anon_sym_instance] = ACTIONS(548),
    [anon_sym_infixl] = ACTIONS(548),
    [anon_sym_infixr] = ACTIONS(548),
    [anon_sym_infix] = ACTIONS(548),
    [anon_sym_COLON_COLON] = ACTIONS(548),
    [anon_sym_data] = ACTIONS(548),
    [anon_sym_newtype] = ACTIONS(548),
    [anon_sym_type] = ACTIONS(548),
    [sym_variable_identifier] = ACTIONS(550),
    [sym_constructor_identifier] = ACTIONS(550),
    [sym_module_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(550),
    [anon_sym_SQUOTE] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [sym__integer_literal] = ACTIONS(548),
    [sym__octal_literal] = ACTIONS(548),
    [sym__hexidecimal_literal] = ACTIONS(548),
  },
  [164] = {
    [sym__type] = STATE(248),
    [sym_function_type] = STATE(53),
    [sym__identifier] = STATE(56),
    [sym_simple_type] = STATE(57),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(250),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(250),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(251),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [sym__layout_close_brace] = ACTIONS(552),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [166] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(21),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_module_repeat1] = STATE(252),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [anon_sym_where] = ACTIONS(558),
    [sym_comment] = ACTIONS(38),
  },
  [169] = {
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [170] = {
    [aux_sym_module_exports_repeat1] = STATE(255),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(38),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(564),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(38),
  },
  [172] = {
    [sym_declarations] = STATE(257),
    [sym__layout_open_brace] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [173] = {
    [sym__identifier] = STATE(258),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [174] = {
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_comment] = ACTIONS(38),
  },
  [175] = {
    [sym__layout_semicolon] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_comment] = ACTIONS(38),
  },
  [176] = {
    [aux_sym_import_specification_repeat1] = STATE(262),
    [anon_sym_LPAREN] = ACTIONS(576),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_comment] = ACTIONS(38),
  },
  [177] = {
    [sym_import_specification] = STATE(263),
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_hiding] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [178] = {
    [sym__identifier] = STATE(264),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [179] = {
    [sym__identifier] = STATE(265),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_comment] = ACTIONS(38),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(38),
  },
  [182] = {
    [sym__layout_close_brace] = ACTIONS(590),
    [anon_sym_do] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(594),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(592),
    [sym__octal_literal] = ACTIONS(592),
    [sym__hexidecimal_literal] = ACTIONS(592),
  },
  [183] = {
    [sym__layout_semicolon] = ACTIONS(596),
    [anon_sym_SEMI] = ACTIONS(598),
    [sym_comment] = ACTIONS(38),
  },
  [184] = {
    [sym__layout_close_brace] = ACTIONS(600),
    [anon_sym_do] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(604),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(604),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym__integer_literal] = ACTIONS(602),
    [sym__octal_literal] = ACTIONS(602),
    [sym__hexidecimal_literal] = ACTIONS(602),
  },
  [185] = {
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_do] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(594),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(592),
    [sym__octal_literal] = ACTIONS(592),
    [sym__hexidecimal_literal] = ACTIONS(592),
  },
  [186] = {
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_do] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(604),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(604),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym__integer_literal] = ACTIONS(602),
    [sym__octal_literal] = ACTIONS(602),
    [sym__hexidecimal_literal] = ACTIONS(602),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [sym_class] = STATE(268),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [189] = {
    [anon_sym_EQ_GT] = ACTIONS(606),
    [sym_comment] = ACTIONS(38),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_comment] = ACTIONS(38),
  },
  [191] = {
    [sym__general_declaration] = STATE(273),
    [sym_fixity] = STATE(274),
    [sym_type_signature] = STATE(274),
    [sym__identifier] = STATE(23),
    [aux_sym_general_declarations_repeat1] = STATE(275),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [sym__layout_close_brace] = ACTIONS(612),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [192] = {
    [sym__general_declaration] = STATE(276),
    [sym_fixity] = STATE(274),
    [sym_type_signature] = STATE(274),
    [sym__identifier] = STATE(23),
    [aux_sym_general_declarations_repeat1] = STATE(277),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [sym__layout_semicolon] = ACTIONS(616),
    [anon_sym_SEMI] = ACTIONS(618),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(620),
    [sym_variable_identifier] = ACTIONS(506),
    [sym_comment] = ACTIONS(38),
  },
  [195] = {
    [sym_general_declarations] = STATE(279),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [anon_sym_where] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [anon_sym_where] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [anon_sym_where] = ACTIONS(626),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [sym__layout_semicolon] = ACTIONS(628),
    [anon_sym_SEMI] = ACTIONS(630),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [sym_general_declarations] = STATE(281),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [anon_sym_where] = ACTIONS(632),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [anon_sym_COMMA] = ACTIONS(636),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [sym__symbol] = STATE(124),
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_COMMA] = ACTIONS(644),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(648),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(650),
    [anon_sym_SEMI] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(652),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
    [sym__op] = STATE(284),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__symbol] = STATE(48),
    [aux_sym_variable_symbol_repeat1] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(72),
    [sym_comment] = ACTIONS(74),
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
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(656),
    [anon_sym_COMMA] = ACTIONS(448),
    [sym_comment] = ACTIONS(38),
  },
  [209] = {
    [anon_sym_EQ_GT] = ACTIONS(658),
    [sym_comment] = ACTIONS(38),
  },
  [210] = {
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(38),
  },
  [211] = {
    [sym__layout_semicolon] = ACTIONS(662),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_DASH_GT] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [sym__layout_semicolon] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_DASH_GT] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [213] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_DASH_GT] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [sym_comment] = ACTIONS(38),
  },
  [215] = {
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_DASH_GT] = ACTIONS(254),
    [sym_comment] = ACTIONS(38),
  },
  [216] = {
    [sym__layout_semicolon] = ACTIONS(662),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_EQ] = ACTIONS(622),
    [anon_sym_deriving] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(624),
    [sym_constructor_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(38),
  },
  [217] = {
    [sym__layout_semicolon] = ACTIONS(458),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(412),
    [anon_sym_deriving] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_constructor_identifier] = ACTIONS(416),
    [sym_comment] = ACTIONS(38),
  },
  [218] = {
    [sym_constructors] = STATE(287),
    [sym_constructor] = STATE(140),
    [sym_deriving] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [219] = {
    [sym_deriving] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [220] = {
    [sym__layout_semicolon] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [sym_comment] = ACTIONS(38),
  },
  [221] = {
    [sym__identifier] = STATE(289),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(672),
    [anon_sym_SEMI] = ACTIONS(674),
    [sym_comment] = ACTIONS(38),
  },
  [223] = {
    [sym_field] = STATE(291),
    [sym_variable_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(38),
  },
  [224] = {
    [sym__identifier] = STATE(292),
    [sym_variable_identifier] = ACTIONS(678),
    [sym_constructor_identifier] = ACTIONS(498),
    [sym_module_identifier] = ACTIONS(498),
    [sym_comment] = ACTIONS(38),
  },
  [225] = {
    [sym__layout_semicolon] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_deriving] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [226] = {
    [sym__layout_semicolon] = ACTIONS(680),
    [anon_sym_SEMI] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
    [anon_sym_deriving] = ACTIONS(682),
    [anon_sym_BANG] = ACTIONS(682),
    [sym_variable_identifier] = ACTIONS(684),
    [sym_constructor_identifier] = ACTIONS(684),
    [sym_module_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(38),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(686),
    [anon_sym_SEMI] = ACTIONS(688),
    [anon_sym_PIPE] = ACTIONS(688),
    [anon_sym_deriving] = ACTIONS(688),
    [sym_comment] = ACTIONS(38),
  },
  [228] = {
    [sym_strict] = STATE(293),
    [sym__identifier] = STATE(293),
    [sym__layout_semicolon] = ACTIONS(686),
    [anon_sym_SEMI] = ACTIONS(688),
    [anon_sym_PIPE] = ACTIONS(688),
    [anon_sym_deriving] = ACTIONS(688),
    [anon_sym_BANG] = ACTIONS(496),
    [sym_variable_identifier] = ACTIONS(498),
    [sym_constructor_identifier] = ACTIONS(498),
    [sym_module_identifier] = ACTIONS(498),
    [sym_comment] = ACTIONS(38),
  },
  [229] = {
    [sym_constructor] = STATE(294),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(692),
    [anon_sym_PIPE] = ACTIONS(694),
    [anon_sym_deriving] = ACTIONS(692),
    [sym_comment] = ACTIONS(38),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_EQ] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(622),
    [sym_comment] = ACTIONS(38),
  },
  [232] = {
    [sym_new_constructor] = STATE(296),
    [sym_constructor_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(38),
  },
  [233] = {
    [sym__identifier] = STATE(297),
    [sym_fields] = STATE(297),
    [anon_sym_LBRACE] = ACTIONS(494),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [234] = {
    [sym_deriving] = STATE(298),
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(702),
    [sym_comment] = ACTIONS(38),
  },
  [236] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(704),
  },
  [237] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(706),
  },
  [238] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(708),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(708),
  },
  [239] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(710),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(712),
  },
  [240] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(714),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(714),
  },
  [241] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(710),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(716),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(718),
    [anon_sym_LBRACE] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_LPAREN] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(718),
    [anon_sym_BQUOTE] = ACTIONS(718),
    [anon_sym_COLON] = ACTIONS(718),
    [anon_sym_EQ] = ACTIONS(718),
    [anon_sym_PIPE] = ACTIONS(718),
    [anon_sym_BANG] = ACTIONS(718),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(718),
    [anon_sym_DQUOTE] = ACTIONS(718),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(718),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(718),
    [anon_sym__] = ACTIONS(718),
    [sym__ascii_large] = ACTIONS(718),
    [anon_sym_POUND] = ACTIONS(718),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [anon_sym_PERCENT] = ACTIONS(718),
    [anon_sym_AMP] = ACTIONS(718),
    [anon_sym_1] = ACTIONS(718),
    [anon_sym_PLUS] = ACTIONS(718),
    [anon_sym_DOT] = ACTIONS(718),
    [anon_sym_SLASH] = ACTIONS(718),
    [anon_sym_LT] = ACTIONS(718),
    [anon_sym_GT] = ACTIONS(718),
    [anon_sym_QMARK] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [anon_sym_CARET] = ACTIONS(718),
    [anon_sym_DASH] = ACTIONS(718),
    [anon_sym_TILDE] = ACTIONS(718),
    [anon_sym_BSLASH] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym__space] = ACTIONS(718),
    [sym__newline] = ACTIONS(718),
    [sym__tab] = ACTIONS(718),
    [sym__vertical_tab] = ACTIONS(718),
  },
  [243] = {
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_LPAREN] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
    [anon_sym_BQUOTE] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(720),
    [anon_sym_EQ] = ACTIONS(720),
    [anon_sym_PIPE] = ACTIONS(720),
    [anon_sym_BANG] = ACTIONS(720),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(720),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(720),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(720),
    [anon_sym__] = ACTIONS(720),
    [sym__ascii_large] = ACTIONS(720),
    [anon_sym_POUND] = ACTIONS(720),
    [anon_sym_DOLLAR] = ACTIONS(720),
    [anon_sym_PERCENT] = ACTIONS(720),
    [anon_sym_AMP] = ACTIONS(720),
    [anon_sym_1] = ACTIONS(720),
    [anon_sym_PLUS] = ACTIONS(720),
    [anon_sym_DOT] = ACTIONS(720),
    [anon_sym_SLASH] = ACTIONS(720),
    [anon_sym_LT] = ACTIONS(720),
    [anon_sym_GT] = ACTIONS(720),
    [anon_sym_QMARK] = ACTIONS(720),
    [anon_sym_AT] = ACTIONS(720),
    [anon_sym_CARET] = ACTIONS(720),
    [anon_sym_DASH] = ACTIONS(720),
    [anon_sym_TILDE] = ACTIONS(720),
    [anon_sym_BSLASH] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(720),
    [sym__space] = ACTIONS(720),
    [sym__newline] = ACTIONS(720),
    [sym__tab] = ACTIONS(720),
    [sym__vertical_tab] = ACTIONS(720),
  },
  [244] = {
    [anon_sym_SEMI] = ACTIONS(722),
    [anon_sym_LBRACE] = ACTIONS(722),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_LPAREN] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(722),
    [anon_sym_BQUOTE] = ACTIONS(722),
    [anon_sym_COLON] = ACTIONS(722),
    [anon_sym_EQ] = ACTIONS(722),
    [anon_sym_PIPE] = ACTIONS(722),
    [anon_sym_BANG] = ACTIONS(722),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(722),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(722),
    [anon_sym__] = ACTIONS(722),
    [sym__ascii_large] = ACTIONS(722),
    [anon_sym_POUND] = ACTIONS(722),
    [anon_sym_DOLLAR] = ACTIONS(722),
    [anon_sym_PERCENT] = ACTIONS(722),
    [anon_sym_AMP] = ACTIONS(722),
    [anon_sym_1] = ACTIONS(722),
    [anon_sym_PLUS] = ACTIONS(722),
    [anon_sym_DOT] = ACTIONS(722),
    [anon_sym_SLASH] = ACTIONS(722),
    [anon_sym_LT] = ACTIONS(722),
    [anon_sym_GT] = ACTIONS(722),
    [anon_sym_QMARK] = ACTIONS(722),
    [anon_sym_AT] = ACTIONS(722),
    [anon_sym_CARET] = ACTIONS(722),
    [anon_sym_DASH] = ACTIONS(722),
    [anon_sym_TILDE] = ACTIONS(722),
    [anon_sym_BSLASH] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym__space] = ACTIONS(722),
    [sym__newline] = ACTIONS(722),
    [sym__tab] = ACTIONS(722),
    [sym__vertical_tab] = ACTIONS(722),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(722),
  },
  [245] = {
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_BQUOTE] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(724),
    [anon_sym_EQ] = ACTIONS(724),
    [anon_sym_PIPE] = ACTIONS(724),
    [anon_sym_BANG] = ACTIONS(724),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(724),
    [anon_sym__] = ACTIONS(724),
    [sym__ascii_large] = ACTIONS(724),
    [anon_sym_POUND] = ACTIONS(724),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [anon_sym_PERCENT] = ACTIONS(724),
    [anon_sym_AMP] = ACTIONS(724),
    [anon_sym_1] = ACTIONS(724),
    [anon_sym_PLUS] = ACTIONS(724),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_SLASH] = ACTIONS(724),
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_GT] = ACTIONS(724),
    [anon_sym_QMARK] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_CARET] = ACTIONS(724),
    [anon_sym_DASH] = ACTIONS(724),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_BSLASH] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym__space] = ACTIONS(724),
    [sym__newline] = ACTIONS(724),
    [sym__tab] = ACTIONS(724),
    [sym__vertical_tab] = ACTIONS(724),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(726),
  },
  [246] = {
    [anon_sym_SEMI] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [anon_sym_RBRACE] = ACTIONS(728),
    [anon_sym_LPAREN] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_BQUOTE] = ACTIONS(728),
    [anon_sym_COLON] = ACTIONS(728),
    [anon_sym_EQ] = ACTIONS(728),
    [anon_sym_PIPE] = ACTIONS(728),
    [anon_sym_BANG] = ACTIONS(728),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(728),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(728),
    [anon_sym__] = ACTIONS(728),
    [sym__ascii_large] = ACTIONS(728),
    [anon_sym_POUND] = ACTIONS(728),
    [anon_sym_DOLLAR] = ACTIONS(728),
    [anon_sym_PERCENT] = ACTIONS(728),
    [anon_sym_AMP] = ACTIONS(728),
    [anon_sym_1] = ACTIONS(728),
    [anon_sym_PLUS] = ACTIONS(728),
    [anon_sym_DOT] = ACTIONS(728),
    [anon_sym_SLASH] = ACTIONS(728),
    [anon_sym_LT] = ACTIONS(728),
    [anon_sym_GT] = ACTIONS(728),
    [anon_sym_QMARK] = ACTIONS(728),
    [anon_sym_AT] = ACTIONS(728),
    [anon_sym_CARET] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(728),
    [anon_sym_TILDE] = ACTIONS(728),
    [anon_sym_BSLASH] = ACTIONS(728),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym__space] = ACTIONS(728),
    [sym__newline] = ACTIONS(728),
    [sym__tab] = ACTIONS(728),
    [sym__vertical_tab] = ACTIONS(728),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(728),
  },
  [247] = {
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_LBRACE] = ACTIONS(724),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_LPAREN] = ACTIONS(724),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_BQUOTE] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(724),
    [anon_sym_EQ] = ACTIONS(724),
    [anon_sym_PIPE] = ACTIONS(724),
    [anon_sym_BANG] = ACTIONS(724),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(724),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(724),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(724),
    [anon_sym__] = ACTIONS(724),
    [sym__ascii_large] = ACTIONS(724),
    [anon_sym_POUND] = ACTIONS(724),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [anon_sym_PERCENT] = ACTIONS(724),
    [anon_sym_AMP] = ACTIONS(724),
    [anon_sym_1] = ACTIONS(724),
    [anon_sym_PLUS] = ACTIONS(724),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_SLASH] = ACTIONS(724),
    [anon_sym_LT] = ACTIONS(724),
    [anon_sym_GT] = ACTIONS(724),
    [anon_sym_QMARK] = ACTIONS(724),
    [anon_sym_AT] = ACTIONS(724),
    [anon_sym_CARET] = ACTIONS(724),
    [anon_sym_DASH] = ACTIONS(724),
    [anon_sym_TILDE] = ACTIONS(724),
    [anon_sym_BSLASH] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym__space] = ACTIONS(724),
    [sym__newline] = ACTIONS(724),
    [sym__tab] = ACTIONS(724),
    [sym__vertical_tab] = ACTIONS(724),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(730),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(732),
    [anon_sym_SEMI] = ACTIONS(734),
    [sym_comment] = ACTIONS(38),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_comment] = ACTIONS(38),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(740),
    [sym_comment] = ACTIONS(38),
  },
  [251] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(305),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [sym__layout_close_brace] = ACTIONS(742),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [252] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(84),
    [sym__expression] = STATE(20),
    [sym_default] = STATE(20),
    [sym_do_expression] = STATE(22),
    [sym_type_class] = STATE(20),
    [sym_type_class_instance] = STATE(20),
    [sym_fixity] = STATE(20),
    [sym_type_signature] = STATE(20),
    [sym_algebraic_datatype] = STATE(20),
    [sym_newtype] = STATE(20),
    [sym_type_synonym] = STATE(20),
    [sym__literal] = STATE(22),
    [sym__identifier] = STATE(23),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(744),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(18),
    [anon_sym_class] = ACTIONS(20),
    [anon_sym_instance] = ACTIONS(22),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [anon_sym_data] = ACTIONS(28),
    [anon_sym_newtype] = ACTIONS(30),
    [anon_sym_type] = ACTIONS(32),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [253] = {
    [sym_export] = STATE(306),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [254] = {
    [anon_sym_where] = ACTIONS(746),
    [sym_comment] = ACTIONS(38),
  },
  [255] = {
    [anon_sym_COMMA] = ACTIONS(748),
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym_comment] = ACTIONS(38),
  },
  [256] = {
    [sym__identifier] = STATE(310),
    [anon_sym_DOT_DOT] = ACTIONS(752),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(754),
    [sym_comment] = ACTIONS(38),
  },
  [258] = {
    [sym_import_specification] = STATE(311),
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_hiding] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [259] = {
    [sym__identifier] = STATE(313),
    [anon_sym_DOT_DOT] = ACTIONS(760),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [260] = {
    [sym__identifier] = STATE(314),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(762),
    [anon_sym_SEMI] = ACTIONS(764),
    [sym_comment] = ACTIONS(38),
  },
  [262] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym_comment] = ACTIONS(38),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [sym_comment] = ACTIONS(38),
  },
  [264] = {
    [aux_sym_import_specification_repeat1] = STATE(318),
    [anon_sym_LPAREN] = ACTIONS(770),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym_comment] = ACTIONS(38),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RPAREN] = ACTIONS(772),
    [sym_comment] = ACTIONS(38),
  },
  [266] = {
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(774),
    [anon_sym_SEMI] = ACTIONS(776),
    [sym_comment] = ACTIONS(38),
  },
  [268] = {
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(778),
    [sym_comment] = ACTIONS(38),
  },
  [269] = {
    [sym_constructor_identifier] = ACTIONS(780),
    [sym_comment] = ACTIONS(38),
  },
  [270] = {
    [sym_class] = STATE(320),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(38),
  },
  [271] = {
    [anon_sym_EQ_GT] = ACTIONS(782),
    [sym_comment] = ACTIONS(38),
  },
  [272] = {
    [sym__layout_semicolon] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(786),
    [sym_comment] = ACTIONS(38),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [sym_comment] = ACTIONS(38),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(38),
  },
  [275] = {
    [sym__general_declaration] = STATE(324),
    [sym_fixity] = STATE(274),
    [sym_type_signature] = STATE(274),
    [sym__identifier] = STATE(23),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [sym__layout_close_brace] = ACTIONS(796),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [276] = {
    [sym__layout_semicolon] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(800),
    [sym_comment] = ACTIONS(38),
  },
  [277] = {
    [sym__general_declaration] = STATE(326),
    [sym_fixity] = STATE(274),
    [sym_type_signature] = STATE(274),
    [sym__identifier] = STATE(23),
    [aux_sym_type_signature_repeat1] = STATE(25),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_infixl] = ACTIONS(24),
    [anon_sym_infixr] = ACTIONS(24),
    [anon_sym_infix] = ACTIONS(24),
    [anon_sym_COLON_COLON] = ACTIONS(26),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [278] = {
    [anon_sym_COMMA] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_EQ_GT] = ACTIONS(804),
    [sym_comment] = ACTIONS(38),
  },
  [279] = {
    [sym__layout_semicolon] = ACTIONS(806),
    [anon_sym_SEMI] = ACTIONS(808),
    [sym_comment] = ACTIONS(38),
  },
  [280] = {
    [sym_general_declarations] = STATE(327),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [281] = {
    [sym__layout_semicolon] = ACTIONS(810),
    [anon_sym_SEMI] = ACTIONS(812),
    [sym_comment] = ACTIONS(38),
  },
  [282] = {
    [sym_general_declarations] = STATE(328),
    [sym__layout_open_brace] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(38),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_COMMA] = ACTIONS(816),
    [sym_comment] = ACTIONS(38),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(818),
    [anon_sym_SEMI] = ACTIONS(820),
    [anon_sym_COMMA] = ACTIONS(820),
    [sym_comment] = ACTIONS(38),
  },
  [285] = {
    [sym_variable_identifier] = ACTIONS(822),
    [sym_constructor_identifier] = ACTIONS(780),
    [sym_module_identifier] = ACTIONS(780),
    [sym_comment] = ACTIONS(38),
  },
  [286] = {
    [anon_sym_EQ_GT] = ACTIONS(824),
    [sym_comment] = ACTIONS(38),
  },
  [287] = {
    [sym_deriving] = STATE(330),
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(828),
    [sym_comment] = ACTIONS(38),
  },
  [289] = {
    [aux_sym_export_repeat1] = STATE(332),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_comment] = ACTIONS(38),
  },
  [290] = {
    [aux_sym_field_repeat1] = STATE(335),
    [anon_sym_COMMA] = ACTIONS(832),
    [anon_sym_COLON_COLON] = ACTIONS(834),
    [sym_comment] = ACTIONS(38),
  },
  [291] = {
    [aux_sym_fields_repeat1] = STATE(338),
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(838),
    [sym_comment] = ACTIONS(38),
  },
  [292] = {
    [sym__layout_semicolon] = ACTIONS(840),
    [anon_sym_SEMI] = ACTIONS(842),
    [anon_sym_PIPE] = ACTIONS(842),
    [anon_sym_deriving] = ACTIONS(842),
    [anon_sym_BANG] = ACTIONS(842),
    [sym_variable_identifier] = ACTIONS(844),
    [sym_constructor_identifier] = ACTIONS(844),
    [sym_module_identifier] = ACTIONS(844),
    [sym_comment] = ACTIONS(38),
  },
  [293] = {
    [sym__layout_semicolon] = ACTIONS(846),
    [anon_sym_SEMI] = ACTIONS(848),
    [anon_sym_PIPE] = ACTIONS(848),
    [anon_sym_deriving] = ACTIONS(848),
    [anon_sym_BANG] = ACTIONS(848),
    [sym_variable_identifier] = ACTIONS(850),
    [sym_constructor_identifier] = ACTIONS(850),
    [sym_module_identifier] = ACTIONS(850),
    [sym_comment] = ACTIONS(38),
  },
  [294] = {
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [anon_sym_PIPE] = ACTIONS(854),
    [anon_sym_deriving] = ACTIONS(854),
    [sym_comment] = ACTIONS(38),
  },
  [295] = {
    [sym_constructor] = STATE(339),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [296] = {
    [sym_deriving] = STATE(340),
    [sym__layout_semicolon] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(858),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(860),
    [anon_sym_SEMI] = ACTIONS(862),
    [anon_sym_deriving] = ACTIONS(862),
    [sym_comment] = ACTIONS(38),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(858),
    [sym_comment] = ACTIONS(38),
  },
  [299] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(864),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(864),
  },
  [300] = {
    [sym_comment] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(866),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(866),
  },
  [301] = {
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_LBRACE] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_LPAREN] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_BQUOTE] = ACTIONS(868),
    [anon_sym_COLON] = ACTIONS(868),
    [anon_sym_EQ] = ACTIONS(868),
    [anon_sym_PIPE] = ACTIONS(868),
    [anon_sym_BANG] = ACTIONS(868),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(868),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(868),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(868),
    [anon_sym__] = ACTIONS(868),
    [sym__ascii_large] = ACTIONS(868),
    [anon_sym_POUND] = ACTIONS(868),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [anon_sym_PERCENT] = ACTIONS(868),
    [anon_sym_AMP] = ACTIONS(868),
    [anon_sym_1] = ACTIONS(868),
    [anon_sym_PLUS] = ACTIONS(868),
    [anon_sym_DOT] = ACTIONS(868),
    [anon_sym_SLASH] = ACTIONS(868),
    [anon_sym_LT] = ACTIONS(868),
    [anon_sym_GT] = ACTIONS(868),
    [anon_sym_QMARK] = ACTIONS(868),
    [anon_sym_AT] = ACTIONS(868),
    [anon_sym_CARET] = ACTIONS(868),
    [anon_sym_DASH] = ACTIONS(868),
    [anon_sym_TILDE] = ACTIONS(868),
    [anon_sym_BSLASH] = ACTIONS(868),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_RBRACK] = ACTIONS(868),
    [sym__space] = ACTIONS(868),
    [sym__newline] = ACTIONS(868),
    [sym__tab] = ACTIONS(868),
    [sym__vertical_tab] = ACTIONS(868),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(868),
  },
  [302] = {
    [anon_sym_SEMI] = ACTIONS(870),
    [anon_sym_LBRACE] = ACTIONS(870),
    [anon_sym_RBRACE] = ACTIONS(870),
    [anon_sym_LPAREN] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(870),
    [anon_sym_BQUOTE] = ACTIONS(870),
    [anon_sym_COLON] = ACTIONS(870),
    [anon_sym_EQ] = ACTIONS(870),
    [anon_sym_PIPE] = ACTIONS(870),
    [anon_sym_BANG] = ACTIONS(870),
    [sym_comment] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(870),
    [anon_sym_DQUOTE] = ACTIONS(870),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(870),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(870),
    [anon_sym__] = ACTIONS(870),
    [sym__ascii_large] = ACTIONS(870),
    [anon_sym_POUND] = ACTIONS(870),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [anon_sym_PERCENT] = ACTIONS(870),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_1] = ACTIONS(870),
    [anon_sym_PLUS] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(870),
    [anon_sym_SLASH] = ACTIONS(870),
    [anon_sym_LT] = ACTIONS(870),
    [anon_sym_GT] = ACTIONS(870),
    [anon_sym_QMARK] = ACTIONS(870),
    [anon_sym_AT] = ACTIONS(870),
    [anon_sym_CARET] = ACTIONS(870),
    [anon_sym_DASH] = ACTIONS(870),
    [anon_sym_TILDE] = ACTIONS(870),
    [anon_sym_BSLASH] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(870),
    [anon_sym_RBRACK] = ACTIONS(870),
    [sym__space] = ACTIONS(870),
    [sym__newline] = ACTIONS(870),
    [sym__tab] = ACTIONS(870),
    [sym__vertical_tab] = ACTIONS(870),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(870),
  },
  [303] = {
    [sym__layout_close_brace] = ACTIONS(336),
    [anon_sym_import] = ACTIONS(338),
    [anon_sym_default] = ACTIONS(338),
    [anon_sym_do] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_instance] = ACTIONS(338),
    [anon_sym_infixl] = ACTIONS(338),
    [anon_sym_infixr] = ACTIONS(338),
    [anon_sym_infix] = ACTIONS(338),
    [anon_sym_COLON_COLON] = ACTIONS(338),
    [anon_sym_data] = ACTIONS(338),
    [anon_sym_newtype] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [sym_variable_identifier] = ACTIONS(340),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [sym__integer_literal] = ACTIONS(338),
    [sym__octal_literal] = ACTIONS(338),
    [sym__hexidecimal_literal] = ACTIONS(338),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(872),
    [sym_comment] = ACTIONS(38),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(874),
    [anon_sym_SEMI] = ACTIONS(876),
    [sym_comment] = ACTIONS(38),
  },
  [306] = {
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym_comment] = ACTIONS(38),
  },
  [307] = {
    [sym_export] = STATE(342),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [308] = {
    [anon_sym_where] = ACTIONS(880),
    [sym_comment] = ACTIONS(38),
  },
  [309] = {
    [anon_sym_RPAREN] = ACTIONS(882),
    [sym_comment] = ACTIONS(38),
  },
  [310] = {
    [aux_sym_export_repeat1] = STATE(344),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(882),
    [sym_comment] = ACTIONS(38),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(886),
    [sym_comment] = ACTIONS(38),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym_comment] = ACTIONS(38),
  },
  [313] = {
    [aux_sym_export_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym_comment] = ACTIONS(38),
  },
  [314] = {
    [anon_sym_LPAREN] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(892),
    [sym_comment] = ACTIONS(38),
  },
  [315] = {
    [sym__identifier] = STATE(348),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [316] = {
    [sym__layout_semicolon] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(896),
    [sym_comment] = ACTIONS(38),
  },
  [317] = {
    [sym__identifier] = STATE(350),
    [anon_sym_DOT_DOT] = ACTIONS(898),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(900),
    [sym_comment] = ACTIONS(38),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(902),
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym_comment] = ACTIONS(38),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [sym_comment] = ACTIONS(38),
  },
  [321] = {
    [sym_constructor_identifier] = ACTIONS(906),
    [sym_comment] = ACTIONS(38),
  },
  [322] = {
    [sym__layout_close_brace] = ACTIONS(908),
    [anon_sym_infixl] = ACTIONS(910),
    [anon_sym_infixr] = ACTIONS(910),
    [anon_sym_infix] = ACTIONS(910),
    [anon_sym_COLON_COLON] = ACTIONS(910),
    [sym_variable_identifier] = ACTIONS(912),
    [sym_constructor_identifier] = ACTIONS(912),
    [sym_module_identifier] = ACTIONS(912),
    [sym_comment] = ACTIONS(38),
  },
  [323] = {
    [sym__layout_semicolon] = ACTIONS(914),
    [anon_sym_SEMI] = ACTIONS(916),
    [sym_comment] = ACTIONS(38),
  },
  [324] = {
    [sym__layout_semicolon] = ACTIONS(918),
    [anon_sym_SEMI] = ACTIONS(920),
    [sym_comment] = ACTIONS(38),
  },
  [325] = {
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_infixl] = ACTIONS(910),
    [anon_sym_infixr] = ACTIONS(910),
    [anon_sym_infix] = ACTIONS(910),
    [anon_sym_COLON_COLON] = ACTIONS(910),
    [sym_variable_identifier] = ACTIONS(912),
    [sym_constructor_identifier] = ACTIONS(912),
    [sym_module_identifier] = ACTIONS(912),
    [sym_comment] = ACTIONS(38),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [sym_comment] = ACTIONS(38),
  },
  [327] = {
    [sym__layout_semicolon] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(928),
    [sym_comment] = ACTIONS(38),
  },
  [328] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(932),
    [sym_comment] = ACTIONS(38),
  },
  [329] = {
    [sym_variable_identifier] = ACTIONS(934),
    [sym_constructor_identifier] = ACTIONS(906),
    [sym_module_identifier] = ACTIONS(906),
    [sym_comment] = ACTIONS(38),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(938),
    [sym_comment] = ACTIONS(38),
  },
  [331] = {
    [sym__layout_semicolon] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(942),
    [sym_comment] = ACTIONS(38),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(944),
    [sym_comment] = ACTIONS(38),
  },
  [333] = {
    [sym_variable_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(38),
  },
  [334] = {
    [sym_strict] = STATE(357),
    [sym__identifier] = STATE(357),
    [anon_sym_BANG] = ACTIONS(948),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(950),
    [anon_sym_COLON_COLON] = ACTIONS(952),
    [sym_comment] = ACTIONS(38),
  },
  [336] = {
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [anon_sym_PIPE] = ACTIONS(956),
    [anon_sym_deriving] = ACTIONS(956),
    [sym_comment] = ACTIONS(38),
  },
  [337] = {
    [sym_field] = STATE(360),
    [sym_variable_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(38),
  },
  [338] = {
    [anon_sym_RBRACE] = ACTIONS(958),
    [anon_sym_COMMA] = ACTIONS(960),
    [sym_comment] = ACTIONS(38),
  },
  [339] = {
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_PIPE] = ACTIONS(964),
    [anon_sym_deriving] = ACTIONS(964),
    [sym_comment] = ACTIONS(38),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(966),
    [anon_sym_SEMI] = ACTIONS(968),
    [sym_comment] = ACTIONS(38),
  },
  [341] = {
    [sym__layout_close_brace] = ACTIONS(546),
    [anon_sym_import] = ACTIONS(548),
    [anon_sym_default] = ACTIONS(548),
    [anon_sym_do] = ACTIONS(548),
    [anon_sym_class] = ACTIONS(548),
    [anon_sym_instance] = ACTIONS(548),
    [anon_sym_infixl] = ACTIONS(548),
    [anon_sym_infixr] = ACTIONS(548),
    [anon_sym_infix] = ACTIONS(548),
    [anon_sym_COLON_COLON] = ACTIONS(548),
    [anon_sym_data] = ACTIONS(548),
    [anon_sym_newtype] = ACTIONS(548),
    [anon_sym_type] = ACTIONS(548),
    [sym_variable_identifier] = ACTIONS(550),
    [sym_constructor_identifier] = ACTIONS(550),
    [sym_module_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(38),
    [sym_float] = ACTIONS(550),
    [anon_sym_SQUOTE] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [sym__integer_literal] = ACTIONS(548),
    [sym__octal_literal] = ACTIONS(548),
    [sym__hexidecimal_literal] = ACTIONS(548),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(970),
    [anon_sym_RPAREN] = ACTIONS(970),
    [sym_comment] = ACTIONS(38),
  },
  [343] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(972),
    [sym_comment] = ACTIONS(38),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(974),
    [sym_comment] = ACTIONS(38),
  },
  [345] = {
    [aux_sym_import_specification_repeat1] = STATE(365),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(976),
    [sym_comment] = ACTIONS(38),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(978),
    [sym_comment] = ACTIONS(38),
  },
  [347] = {
    [sym__identifier] = STATE(368),
    [anon_sym_DOT_DOT] = ACTIONS(980),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [348] = {
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_COMMA] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(38),
  },
  [349] = {
    [anon_sym_RPAREN] = ACTIONS(978),
    [sym_comment] = ACTIONS(38),
  },
  [350] = {
    [aux_sym_export_repeat1] = STATE(370),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(978),
    [sym_comment] = ACTIONS(38),
  },
  [351] = {
    [sym__layout_semicolon] = ACTIONS(986),
    [anon_sym_SEMI] = ACTIONS(988),
    [sym_comment] = ACTIONS(38),
  },
  [352] = {
    [sym__layout_close_brace] = ACTIONS(990),
    [anon_sym_infixl] = ACTIONS(992),
    [anon_sym_infixr] = ACTIONS(992),
    [anon_sym_infix] = ACTIONS(992),
    [anon_sym_COLON_COLON] = ACTIONS(992),
    [sym_variable_identifier] = ACTIONS(994),
    [sym_constructor_identifier] = ACTIONS(994),
    [sym_module_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(38),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(992),
    [anon_sym_infixl] = ACTIONS(992),
    [anon_sym_infixr] = ACTIONS(992),
    [anon_sym_infix] = ACTIONS(992),
    [anon_sym_COLON_COLON] = ACTIONS(992),
    [sym_variable_identifier] = ACTIONS(994),
    [sym_constructor_identifier] = ACTIONS(994),
    [sym_module_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(38),
  },
  [354] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [sym_comment] = ACTIONS(38),
  },
  [355] = {
    [anon_sym_COMMA] = ACTIONS(1000),
    [anon_sym_COLON_COLON] = ACTIONS(1000),
    [sym_comment] = ACTIONS(38),
  },
  [356] = {
    [sym__identifier] = STATE(371),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [357] = {
    [anon_sym_RBRACE] = ACTIONS(1002),
    [anon_sym_COMMA] = ACTIONS(1002),
    [sym_comment] = ACTIONS(38),
  },
  [358] = {
    [sym_variable_identifier] = ACTIONS(1004),
    [sym_comment] = ACTIONS(38),
  },
  [359] = {
    [sym_strict] = STATE(373),
    [sym__identifier] = STATE(373),
    [anon_sym_BANG] = ACTIONS(948),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [360] = {
    [anon_sym_RBRACE] = ACTIONS(1006),
    [anon_sym_COMMA] = ACTIONS(1006),
    [sym_comment] = ACTIONS(38),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [anon_sym_PIPE] = ACTIONS(1010),
    [anon_sym_deriving] = ACTIONS(1010),
    [sym_comment] = ACTIONS(38),
  },
  [362] = {
    [sym_field] = STATE(374),
    [sym_variable_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(38),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [sym_comment] = ACTIONS(38),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(1014),
    [anon_sym_SEMI] = ACTIONS(1016),
    [sym_comment] = ACTIONS(38),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(38),
  },
  [366] = {
    [aux_sym_import_specification_repeat1] = STATE(376),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(38),
  },
  [367] = {
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(38),
  },
  [368] = {
    [aux_sym_export_repeat1] = STATE(378),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(38),
  },
  [369] = {
    [sym__identifier] = STATE(380),
    [anon_sym_DOT_DOT] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [370] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(38),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_COMMA] = ACTIONS(842),
    [sym_comment] = ACTIONS(38),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(1026),
    [anon_sym_COLON_COLON] = ACTIONS(1026),
    [sym_comment] = ACTIONS(38),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(1028),
    [anon_sym_COMMA] = ACTIONS(1028),
    [sym_comment] = ACTIONS(38),
  },
  [374] = {
    [anon_sym_RBRACE] = ACTIONS(1030),
    [anon_sym_COMMA] = ACTIONS(1030),
    [sym_comment] = ACTIONS(38),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(1032),
    [anon_sym_SEMI] = ACTIONS(1034),
    [sym_comment] = ACTIONS(38),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(1036),
    [sym_comment] = ACTIONS(38),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(1038),
    [anon_sym_RPAREN] = ACTIONS(1038),
    [sym_comment] = ACTIONS(38),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(1040),
    [sym_comment] = ACTIONS(38),
  },
  [379] = {
    [anon_sym_RPAREN] = ACTIONS(1040),
    [sym_comment] = ACTIONS(38),
  },
  [380] = {
    [aux_sym_export_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(1040),
    [sym_comment] = ACTIONS(38),
  },
  [381] = {
    [aux_sym_import_specification_repeat1] = STATE(385),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(1036),
    [sym_comment] = ACTIONS(38),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(1042),
    [anon_sym_SEMI] = ACTIONS(1044),
    [sym_comment] = ACTIONS(38),
  },
  [383] = {
    [anon_sym_COMMA] = ACTIONS(1046),
    [anon_sym_RPAREN] = ACTIONS(1046),
    [sym_comment] = ACTIONS(38),
  },
  [384] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(1048),
    [sym_comment] = ACTIONS(38),
  },
  [385] = {
    [anon_sym_COMMA] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(1050),
    [sym_comment] = ACTIONS(38),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(1052),
    [anon_sym_RPAREN] = ACTIONS(1052),
    [sym_comment] = ACTIONS(38),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1054),
    [anon_sym_SEMI] = ACTIONS(1056),
    [sym_comment] = ACTIONS(38),
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
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 2),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [430] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [498] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(233),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [720] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [722] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [724] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(301),
  [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [730] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(302),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [844] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [850] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [870] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [994] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
