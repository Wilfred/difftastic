#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 381
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 2
#define TOKEN_COUNT 118
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
  anon_sym_instance = 19,
  anon_sym_infixl = 20,
  anon_sym_infixr = 21,
  anon_sym_infix = 22,
  anon_sym_BQUOTE = 23,
  anon_sym_COLON = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_data = 27,
  anon_sym_EQ = 28,
  anon_sym_EQ_GT = 29,
  anon_sym_PIPE = 30,
  anon_sym_deriving = 31,
  anon_sym_newtype = 32,
  anon_sym_BANG = 33,
  anon_sym_type = 34,
  sym_variable_identifier = 35,
  sym_constructor_identifier = 36,
  sym_module_identifier = 37,
  sym_comment = 38,
  sym_float = 39,
  anon_sym_SQUOTE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 43,
  anon_sym__ = 44,
  sym__ascii_large = 45,
  anon_sym_POUND = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_PERCENT = 48,
  anon_sym_AMP = 49,
  anon_sym_1 = 50,
  anon_sym_PLUS = 51,
  anon_sym_DOT = 52,
  anon_sym_SLASH = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_QMARK = 56,
  anon_sym_AT = 57,
  anon_sym_CARET = 58,
  anon_sym_DASH = 59,
  anon_sym_TILDE = 60,
  anon_sym_BSLASH = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  sym__space = 64,
  sym__newline = 65,
  sym__tab = 66,
  sym__vertical_tab = 67,
  anon_sym_x = 68,
  anon_sym_X = 69,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 70,
  anon_sym_o = 71,
  anon_sym_O = 72,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 73,
  anon_sym_a = 74,
  anon_sym_b = 75,
  anon_sym_f = 76,
  anon_sym_n = 77,
  anon_sym_r = 78,
  anon_sym_t = 79,
  anon_sym_v = 80,
  anon_sym_NUL = 81,
  anon_sym_SOH = 82,
  anon_sym_STX = 83,
  anon_sym_ETX = 84,
  anon_sym_EOT = 85,
  anon_sym_ENQ = 86,
  anon_sym_ACK = 87,
  anon_sym_BEL = 88,
  anon_sym_BS = 89,
  anon_sym_HT = 90,
  anon_sym_LF = 91,
  anon_sym_VT = 92,
  anon_sym_FF = 93,
  anon_sym_CR = 94,
  anon_sym_SO = 95,
  anon_sym_SI = 96,
  anon_sym_DLE = 97,
  anon_sym_DC1 = 98,
  anon_sym_DC2 = 99,
  anon_sym_DC3 = 100,
  anon_sym_DC4 = 101,
  anon_sym_NAK = 102,
  anon_sym_SYN = 103,
  anon_sym_ETB = 104,
  anon_sym_CAN = 105,
  anon_sym_EM = 106,
  anon_sym_SUB = 107,
  anon_sym_ESC = 108,
  anon_sym_FS = 109,
  anon_sym_GS = 110,
  anon_sym_RS = 111,
  anon_sym_US = 112,
  anon_sym_SP = 113,
  anon_sym_DEL = 114,
  sym__integer_literal = 115,
  sym__octal_literal = 116,
  sym__hexidecimal_literal = 117,
  sym_module = 118,
  sym_declarations = 119,
  sym_module_exports = 120,
  sym_export = 121,
  sym_import = 122,
  sym_import_specification = 123,
  sym__declaration = 124,
  sym__expression = 125,
  sym_do_expression = 126,
  sym_statement_list = 127,
  sym__statement = 128,
  sym_type_class = 129,
  sym_general_declarations = 130,
  sym_type_class_instance = 131,
  sym__general_declaration = 132,
  sym_fixity = 133,
  sym__op = 134,
  sym_variable_symbol = 135,
  sym_constructor_symbol = 136,
  sym_type_signature = 137,
  sym__type = 138,
  sym_function_type = 139,
  sym_algebraic_datatype = 140,
  sym_context = 141,
  sym_class = 142,
  sym_constructors = 143,
  sym_constructor = 144,
  sym_deriving = 145,
  sym_newtype = 146,
  sym_new_constructor = 147,
  sym_field = 148,
  sym_strict = 149,
  sym_type_synonym = 150,
  sym__literal = 151,
  sym__identifier = 152,
  sym_simple_type = 153,
  sym_integer = 154,
  sym_char = 155,
  sym_string = 156,
  sym__gap = 157,
  sym__graphic = 158,
  sym__small = 159,
  sym__large = 160,
  sym__symbol = 161,
  sym__special = 162,
  sym__escape = 163,
  sym__char_escape = 164,
  sym__ascii = 165,
  sym__cntrl = 166,
  sym_fields = 167,
  aux_sym_module_repeat1 = 168,
  aux_sym_module_exports_repeat1 = 169,
  aux_sym_export_repeat1 = 170,
  aux_sym_import_specification_repeat1 = 171,
  aux_sym_statement_list_repeat1 = 172,
  aux_sym_type_class_repeat1 = 173,
  aux_sym_general_declarations_repeat1 = 174,
  aux_sym_fixity_repeat1 = 175,
  aux_sym_variable_symbol_repeat1 = 176,
  aux_sym_type_signature_repeat1 = 177,
  aux_sym_context_repeat1 = 178,
  aux_sym_constructors_repeat1 = 179,
  aux_sym_constructor_repeat1 = 180,
  aux_sym_field_repeat1 = 181,
  aux_sym_string_repeat1 = 182,
  aux_sym__escape_repeat1 = 183,
  aux_sym__escape_repeat2 = 184,
  aux_sym_fields_repeat1 = 185,
  alias_sym_type_constructor = 186,
  alias_sym_type_variable = 187,
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
        ADVANCE(239);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(252);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'm')
        ADVANCE(282);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
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
        ADVANCE(220);
      if (lookahead == 'n')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
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
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'a')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
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
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      if (lookahead == 'e')
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
    case 237:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(237);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(238);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(238);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(239);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(252);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'm')
        ADVANCE(282);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      END_STATE();
    case 240:
      if (lookahead == ')')
        ADVANCE(241);
      if (lookahead == ',')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 242:
      if (lookahead == ')')
        ADVANCE(241);
      if (lookahead == ',')
        ADVANCE(242);
      END_STATE();
    case 243:
      if (lookahead == '>')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == ')')
        ADVANCE(241);
      END_STATE();
    case 245:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == 'E')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(247);
      if (lookahead == 'X')
        ADVANCE(249);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(247);
      if (lookahead == 'x')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(248);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(250);
      END_STATE();
    case 251:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 252:
      if (lookahead == 'n')
        SKIP(169);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 's')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 's')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'm')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'p')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'r')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'f')
        ADVANCE(271);
      if (lookahead == 's')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'x')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'r')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'n')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'c')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'd')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'u')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'w')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'y')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'p')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'y')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(300);
      if (lookahead == '.')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == '\\')
        SKIP(306);
      if (lookahead == 'd')
        ADVANCE(307);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(301);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 302:
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(302);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(303);
      if (lookahead == 'd')
        ADVANCE(304);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(238);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 303:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(302);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 304:
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
    case 305:
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(305);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == '\\')
        SKIP(306);
      if (lookahead == 'd')
        ADVANCE(307);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(301);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        SKIP(301);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 308:
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(320);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(321);
      if (lookahead == 'q')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(308);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 309:
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(309);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(310);
      if (lookahead == 'q')
        ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 310:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(309);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 319:
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
    case 320:
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(320);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(321);
      if (lookahead == 'q')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(308);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 321:
      if (lookahead == 'n')
        SKIP(308);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'u')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'a')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'f')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'd')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 331:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(334);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(335);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(332);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(333);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead == '\r')
        ADVANCE(334);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(335);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(331);
      END_STATE();
    case 335:
      if (lookahead == 'n')
        SKIP(331);
      END_STATE();
    case 336:
      if (lookahead == '\n')
        ADVANCE(337);
      if (lookahead == '\r')
        ADVANCE(341);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(336);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 337:
      if (lookahead == '\n')
        ADVANCE(337);
      if (lookahead == '\r')
        ADVANCE(337);
      if (lookahead == '(')
        ADVANCE(338);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
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
    case 339:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(340);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        ADVANCE(337);
      if (lookahead == '\r')
        ADVANCE(341);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(336);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(241);
      if (lookahead == ',')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(243);
      END_STATE();
    case 343:
      if (lookahead == 'n')
        SKIP(336);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(344);
      END_STATE();
    case 345:
      if (lookahead == '\n')
        ADVANCE(346);
      if (lookahead == '\r')
        ADVANCE(354);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(361);
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
        SKIP(345);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(358);
      END_STATE();
    case 346:
      if (lookahead == '\n')
        ADVANCE(346);
      if (lookahead == '\r')
        ADVANCE(346);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(349);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(353);
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
        ADVANCE(346);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 349:
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
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(346);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        ADVANCE(346);
      if (lookahead == '\r')
        ADVANCE(354);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(361);
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
        SKIP(345);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(247);
      if (lookahead == 'X')
        ADVANCE(249);
      if (lookahead == 'o')
        ADVANCE(247);
      if (lookahead == 'x')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 362:
      if (lookahead == '\n')
        ADVANCE(363);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(366);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(362);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(363);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == '(')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '\n')
        ADVANCE(363);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(366);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(362);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 366:
      if (lookahead == 'n')
        SKIP(362);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(378);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(379);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(378);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(379);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      END_STATE();
    case 379:
      if (lookahead == 'n')
        SKIP(367);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'r')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'i')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'v')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'i')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 'n')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'g')
        ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 388:
      if (lookahead == '\n')
        ADVANCE(389);
      if (lookahead == '\r')
        ADVANCE(391);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 389:
      if (lookahead == '\n')
        ADVANCE(389);
      if (lookahead == '\r')
        ADVANCE(389);
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
        ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '\n')
        ADVANCE(389);
      if (lookahead == '\r')
        ADVANCE(391);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(388);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        SKIP(388);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(399);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(394);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(396);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(394);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(399);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(393);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 399:
      if (lookahead == 'n')
        SKIP(393);
      END_STATE();
    case 400:
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      END_STATE();
    case 401:
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(401);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        ADVANCE(401);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(400);
      END_STATE();
    case 404:
      if (lookahead == 'n')
        SKIP(400);
      END_STATE();
    case 405:
      if (lookahead == '\t')
        SKIP(405);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 406:
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(408);
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
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(406);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == ' ')
        ADVANCE(407);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(408);
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
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '\t')
        SKIP(405);
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 413:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(416);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == ' ')
        ADVANCE(418);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(419);
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
        ADVANCE(409);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(416);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == ' ')
        ADVANCE(418);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(419);
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
        ADVANCE(409);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      if (lookahead == '\t')
        ADVANCE(416);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == ' ')
        ADVANCE(418);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(419);
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
        ADVANCE(409);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(416);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == ' ')
        ADVANCE(418);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(419);
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
        ADVANCE(409);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(415);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 421:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(422);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(421);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      END_STATE();
    case 422:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(422);
      if (lookahead == '\r')
        ADVANCE(422);
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
        ADVANCE(423);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'n')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      ADVANCE(8);
      END_STATE();
    case 423:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(422);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(421);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        SKIP(421);
      END_STATE();
    case 426:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(437);
      if (lookahead == 'w')
        ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 427:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(427);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == '=')
        ADVANCE(428);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == 'w')
        ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
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
    case 435:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(437);
      if (lookahead == 'w')
        ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 436:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 437:
      if (lookahead == 'n')
        SKIP(426);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'h')
        ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'r')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 443:
      if (lookahead == '\n')
        ADVANCE(444);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(455);
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(443);
      END_STATE();
    case 444:
      if (lookahead == '\n')
        ADVANCE(444);
      if (lookahead == '\r')
        ADVANCE(444);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(445);
      if (lookahead == 'a')
        ADVANCE(446);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == 'h')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(444);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(444);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(447);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(450);
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
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(453);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      if (lookahead == '\n')
        ADVANCE(444);
      if (lookahead == '\r')
        ADVANCE(454);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(455);
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(443);
      END_STATE();
    case 455:
      if (lookahead == 'n')
        SKIP(443);
      END_STATE();
    case 456:
      if (lookahead == 's')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 458:
      if (lookahead == 'i')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'd')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'i')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'n')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'g')
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 464:
      if (lookahead == '\n')
        ADVANCE(465);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(468);
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(464);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        ADVANCE(465);
      if (lookahead == '\r')
        ADVANCE(465);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(466);
      if (lookahead == 'a')
        ADVANCE(446);
      if (lookahead == 'h')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(465);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(465);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(465);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(468);
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(464);
      END_STATE();
    case 468:
      if (lookahead == 'n')
        SKIP(464);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == '\\')
        SKIP(473);
      if (lookahead == 'd')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(471);
      if (lookahead == 'd')
        ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(470);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == '\\')
        SKIP(473);
      if (lookahead == 'd')
        ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 473:
      if (lookahead == 'n')
        SKIP(469);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(477);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(361);
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
        SKIP(474);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(476);
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
        ADVANCE(475);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(361);
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
        SKIP(474);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(478);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(479);
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
      if (lookahead == '\n')
        ADVANCE(479);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(478);
      END_STATE();
    case 482:
      if (lookahead == 'n')
        SKIP(478);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(484);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 487:
      if (lookahead == 'n')
        SKIP(483);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(491);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(488);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      if (lookahead == '\n')
        ADVANCE(489);
      if (lookahead == '\r')
        ADVANCE(491);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(488);
      END_STATE();
    case 492:
      if (lookahead == 'n')
        SKIP(488);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(505);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(493);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(494);
      if (lookahead == '(')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(495);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
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
    case 504:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == '(')
        ADVANCE(342);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(505);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(493);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 505:
      if (lookahead == 'n')
        SKIP(493);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'r')
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'v')
        ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'i')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'n')
        ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'g')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(517);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '\\')
        SKIP(518);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(514);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(515);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '\\')
        ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(515);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(515);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(517);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '\\')
        SKIP(518);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(514);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 518:
      if (lookahead == 'n')
        SKIP(514);
      END_STATE();
    case 519:
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == 'A')
        ADVANCE(573);
      if (lookahead == 'B')
        ADVANCE(576);
      if (lookahead == 'C')
        ADVANCE(580);
      if (lookahead == 'D')
        ADVANCE(584);
      if (lookahead == 'E')
        ADVANCE(594);
      if (lookahead == 'F')
        ADVANCE(605);
      if (lookahead == 'G')
        ADVANCE(608);
      if (lookahead == 'H')
        ADVANCE(609);
      if (lookahead == 'L')
        ADVANCE(610);
      if (lookahead == 'N')
        ADVANCE(611);
      if (lookahead == 'O')
        ADVANCE(612);
      if (lookahead == 'R')
        ADVANCE(613);
      if (lookahead == 'S')
        ADVANCE(614);
      if (lookahead == 'U')
        ADVANCE(615);
      if (lookahead == 'V')
        ADVANCE(616);
      if (lookahead == 'X')
        ADVANCE(617);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(618);
      if (lookahead == 'b')
        ADVANCE(619);
      if (lookahead == 'f')
        ADVANCE(620);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(621);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(519);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(412);
      END_STATE();
    case 520:
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == 'A')
        ADVANCE(521);
      if (lookahead == 'B')
        ADVANCE(524);
      if (lookahead == 'C')
        ADVANCE(528);
      if (lookahead == 'D')
        ADVANCE(532);
      if (lookahead == 'E')
        ADVANCE(542);
      if (lookahead == 'F')
        ADVANCE(553);
      if (lookahead == 'G')
        ADVANCE(556);
      if (lookahead == 'H')
        ADVANCE(557);
      if (lookahead == 'L')
        ADVANCE(558);
      if (lookahead == 'N')
        ADVANCE(559);
      if (lookahead == 'O')
        ADVANCE(560);
      if (lookahead == 'R')
        ADVANCE(561);
      if (lookahead == 'S')
        ADVANCE(562);
      if (lookahead == 'U')
        ADVANCE(563);
      if (lookahead == 'V')
        ADVANCE(564);
      if (lookahead == 'X')
        ADVANCE(565);
      if (lookahead == '\\')
        ADVANCE(566);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(522);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(523);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(525);
      if (lookahead == 'S')
        ADVANCE(527);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(526);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(529);
      if (lookahead == 'R')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(530);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(533);
      if (lookahead == 'E')
        ADVANCE(538);
      if (lookahead == 'L')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(534);
      if (lookahead == '2')
        ADVANCE(535);
      if (lookahead == '3')
        ADVANCE(536);
      if (lookahead == '4')
        ADVANCE(537);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(543);
      if (lookahead == 'N')
        ADVANCE(544);
      if (lookahead == 'O')
        ADVANCE(546);
      if (lookahead == 'S')
        ADVANCE(548);
      if (lookahead == 'T')
        ADVANCE(550);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(545);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(551);
      if (lookahead == 'X')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(554);
      if (lookahead == 'S')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
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
    case 563:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(520);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == 'A')
        ADVANCE(573);
      if (lookahead == 'B')
        ADVANCE(576);
      if (lookahead == 'C')
        ADVANCE(580);
      if (lookahead == 'D')
        ADVANCE(584);
      if (lookahead == 'E')
        ADVANCE(594);
      if (lookahead == 'F')
        ADVANCE(605);
      if (lookahead == 'G')
        ADVANCE(608);
      if (lookahead == 'H')
        ADVANCE(609);
      if (lookahead == 'L')
        ADVANCE(610);
      if (lookahead == 'N')
        ADVANCE(611);
      if (lookahead == 'O')
        ADVANCE(612);
      if (lookahead == 'R')
        ADVANCE(613);
      if (lookahead == 'S')
        ADVANCE(614);
      if (lookahead == 'U')
        ADVANCE(615);
      if (lookahead == 'V')
        ADVANCE(616);
      if (lookahead == 'X')
        ADVANCE(617);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(618);
      if (lookahead == 'b')
        ADVANCE(619);
      if (lookahead == 'f')
        ADVANCE(620);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(621);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(519);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(412);
      END_STATE();
    case 573:
      if (lookahead == 'C')
        ADVANCE(574);
      END_STATE();
    case 574:
      if (lookahead == 'K')
        ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 576:
      if (lookahead == 'E')
        ADVANCE(577);
      if (lookahead == 'S')
        ADVANCE(579);
      END_STATE();
    case 577:
      if (lookahead == 'L')
        ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 580:
      if (lookahead == 'A')
        ADVANCE(581);
      if (lookahead == 'R')
        ADVANCE(583);
      END_STATE();
    case 581:
      if (lookahead == 'N')
        ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 584:
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'E')
        ADVANCE(590);
      if (lookahead == 'L')
        ADVANCE(592);
      END_STATE();
    case 585:
      if (lookahead == '1')
        ADVANCE(586);
      if (lookahead == '2')
        ADVANCE(587);
      if (lookahead == '3')
        ADVANCE(588);
      if (lookahead == '4')
        ADVANCE(589);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 590:
      if (lookahead == 'L')
        ADVANCE(591);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 592:
      if (lookahead == 'E')
        ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 594:
      if (lookahead == 'M')
        ADVANCE(595);
      if (lookahead == 'N')
        ADVANCE(596);
      if (lookahead == 'O')
        ADVANCE(598);
      if (lookahead == 'S')
        ADVANCE(600);
      if (lookahead == 'T')
        ADVANCE(602);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 596:
      if (lookahead == 'Q')
        ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 598:
      if (lookahead == 'T')
        ADVANCE(599);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 600:
      if (lookahead == 'C')
        ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 602:
      if (lookahead == 'B')
        ADVANCE(603);
      if (lookahead == 'X')
        ADVANCE(604);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 605:
      if (lookahead == 'F')
        ADVANCE(606);
      if (lookahead == 'S')
        ADVANCE(607);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 608:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 609:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 610:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 611:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 613:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 614:
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
    case 615:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 616:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 623:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(636);
      if (lookahead == 'B')
        ADVANCE(637);
      if (lookahead == 'C')
        ADVANCE(638);
      if (lookahead == 'D')
        ADVANCE(639);
      if (lookahead == 'E')
        ADVANCE(640);
      if (lookahead == 'F')
        ADVANCE(641);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(612);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(617);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(618);
      if (lookahead == 'b')
        ADVANCE(619);
      if (lookahead == 'f')
        ADVANCE(620);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(621);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(622);
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
        ADVANCE(412);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(625);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == ' ')
        ADVANCE(627);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(628);
      if (lookahead == 'B')
        ADVANCE(629);
      if (lookahead == 'C')
        ADVANCE(630);
      if (lookahead == 'D')
        ADVANCE(631);
      if (lookahead == 'E')
        ADVANCE(632);
      if (lookahead == 'F')
        ADVANCE(633);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(560);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(565);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(409);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(625);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == ' ')
        ADVANCE(627);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(628);
      if (lookahead == 'B')
        ADVANCE(629);
      if (lookahead == 'C')
        ADVANCE(630);
      if (lookahead == 'D')
        ADVANCE(631);
      if (lookahead == 'E')
        ADVANCE(632);
      if (lookahead == 'F')
        ADVANCE(633);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(560);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(565);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(409);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '\t')
        ADVANCE(625);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == ' ')
        ADVANCE(627);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(628);
      if (lookahead == 'B')
        ADVANCE(629);
      if (lookahead == 'C')
        ADVANCE(630);
      if (lookahead == 'D')
        ADVANCE(631);
      if (lookahead == 'E')
        ADVANCE(632);
      if (lookahead == 'F')
        ADVANCE(633);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(560);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(565);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(409);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(625);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(626);
      if (lookahead == ' ')
        ADVANCE(627);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(628);
      if (lookahead == 'B')
        ADVANCE(629);
      if (lookahead == 'C')
        ADVANCE(630);
      if (lookahead == 'D')
        ADVANCE(631);
      if (lookahead == 'E')
        ADVANCE(632);
      if (lookahead == 'F')
        ADVANCE(633);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(560);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(565);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(634);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(567);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(569);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(571);
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
        ADVANCE(409);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(522);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(525);
      if (lookahead == 'S')
        ADVANCE(527);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(529);
      if (lookahead == 'R')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(533);
      if (lookahead == 'E')
        ADVANCE(538);
      if (lookahead == 'L')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(543);
      if (lookahead == 'N')
        ADVANCE(544);
      if (lookahead == 'O')
        ADVANCE(546);
      if (lookahead == 'S')
        ADVANCE(548);
      if (lookahead == 'T')
        ADVANCE(550);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(554);
      if (lookahead == 'S')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(626);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(624);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(636);
      if (lookahead == 'B')
        ADVANCE(637);
      if (lookahead == 'C')
        ADVANCE(638);
      if (lookahead == 'D')
        ADVANCE(639);
      if (lookahead == 'E')
        ADVANCE(640);
      if (lookahead == 'F')
        ADVANCE(641);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(612);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(617);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(618);
      if (lookahead == 'b')
        ADVANCE(619);
      if (lookahead == 'f')
        ADVANCE(620);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(621);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(622);
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
        ADVANCE(412);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(574);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(577);
      if (lookahead == 'S')
        ADVANCE(579);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(581);
      if (lookahead == 'R')
        ADVANCE(583);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(585);
      if (lookahead == 'E')
        ADVANCE(590);
      if (lookahead == 'L')
        ADVANCE(592);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(595);
      if (lookahead == 'N')
        ADVANCE(596);
      if (lookahead == 'O')
        ADVANCE(598);
      if (lookahead == 'S')
        ADVANCE(600);
      if (lookahead == 'T')
        ADVANCE(602);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(606);
      if (lookahead == 'S')
        ADVANCE(607);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '.')
        ADVANCE(647);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(644);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(645);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(643);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '.')
        ADVANCE(647);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(648);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(642);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 647:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 648:
      if (lookahead == 'n')
        SKIP(642);
      END_STATE();
    case 649:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(652);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(653);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(650);
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
        ADVANCE(428);
      if (lookahead == '\\')
        ADVANCE(651);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      if (lookahead == '\n')
        ADVANCE(650);
      if (lookahead == '\r')
        ADVANCE(652);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(653);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(649);
      END_STATE();
    case 653:
      if (lookahead == 'n')
        SKIP(649);
      END_STATE();
    case 654:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(657);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(658);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(654);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(655);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(428);
      if (lookahead == '\\')
        ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(655);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '\n')
        ADVANCE(655);
      if (lookahead == '\r')
        ADVANCE(657);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(436);
      if (lookahead == '\\')
        SKIP(658);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(654);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 658:
      if (lookahead == 'n')
        SKIP(654);
      END_STATE();
    case 659:
      if (lookahead == '\n')
        ADVANCE(660);
      if (lookahead == '\r')
        ADVANCE(662);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(663);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(659);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(660);
      if (lookahead == '\r')
        ADVANCE(660);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(660);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '\n')
        ADVANCE(660);
      if (lookahead == '\r')
        ADVANCE(662);
      if (lookahead == '-')
        ADVANCE(398);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(663);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(659);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 663:
      if (lookahead == 'n')
        SKIP(659);
      END_STATE();
    case 664:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(667);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(668);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 665:
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(665);
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
        ADVANCE(666);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(665);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(665);
      if (lookahead == '\r')
        ADVANCE(667);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(668);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(664);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 668:
      if (lookahead == 'n')
        SKIP(664);
      END_STATE();
    case 669:
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(672);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(673);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(669);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 670:
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(670);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(671);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(670);
      if (lookahead == '\r')
        ADVANCE(672);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(673);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(669);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 673:
      if (lookahead == 'n')
        SKIP(669);
      END_STATE();
    case 674:
      if (lookahead == '\n')
        ADVANCE(675);
      if (lookahead == '\r')
        ADVANCE(677);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(678);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(674);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      END_STATE();
    case 675:
      if (lookahead == '\n')
        ADVANCE(675);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(676);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      if (lookahead == '\n')
        ADVANCE(675);
      if (lookahead == '\r')
        ADVANCE(677);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(678);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(674);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(344);
      END_STATE();
    case 678:
      if (lookahead == 'n')
        SKIP(674);
      END_STATE();
    case 679:
      if (lookahead == '\n')
        ADVANCE(680);
      if (lookahead == '\r')
        ADVANCE(682);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(683);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(679);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 680:
      if (lookahead == '\n')
        ADVANCE(680);
      if (lookahead == '\r')
        ADVANCE(680);
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
        ADVANCE(681);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(680);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '\n')
        ADVANCE(680);
      if (lookahead == '\r')
        ADVANCE(682);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(683);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(679);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 683:
      if (lookahead == 'n')
        SKIP(679);
      END_STATE();
    case 684:
      if (lookahead == '\n')
        ADVANCE(685);
      if (lookahead == '\r')
        ADVANCE(687);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(688);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(684);
      END_STATE();
    case 685:
      if (lookahead == '\n')
        ADVANCE(685);
      if (lookahead == '\r')
        ADVANCE(685);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(686);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '\n')
        ADVANCE(685);
      if (lookahead == '\r')
        ADVANCE(687);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(688);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(684);
      END_STATE();
    case 688:
      if (lookahead == 'n')
        SKIP(684);
      END_STATE();
    case 689:
      if (lookahead == '\n')
        ADVANCE(690);
      if (lookahead == '\r')
        ADVANCE(692);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(693);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(689);
      END_STATE();
    case 690:
      if (lookahead == '\n')
        ADVANCE(690);
      if (lookahead == '\r')
        ADVANCE(690);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(691);
      if (lookahead == 'd')
        ADVANCE(370);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '\n')
        ADVANCE(690);
      if (lookahead == '\r')
        ADVANCE(692);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(693);
      if (lookahead == 'd')
        ADVANCE(380);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(689);
      END_STATE();
    case 693:
      if (lookahead == 'n')
        SKIP(689);
      END_STATE();
    case 694:
      if (lookahead == '\n')
        ADVANCE(695);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(694);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 695:
      if (lookahead == '\n')
        ADVANCE(695);
      if (lookahead == '\r')
        ADVANCE(695);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(696);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(695);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(695);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '\n')
        ADVANCE(695);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(694);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 698:
      if (lookahead == '\n')
        ADVANCE(699);
      if (lookahead == '\r')
        ADVANCE(702);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(703);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(704);
      END_STATE();
    case 699:
      if (lookahead == '\n')
        ADVANCE(699);
      if (lookahead == '\r')
        ADVANCE(699);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(700);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(701);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(699);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '\n')
        ADVANCE(699);
      if (lookahead == '\r')
        ADVANCE(702);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(703);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(704);
      END_STATE();
    case 703:
      if (lookahead == 'n')
        SKIP(698);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 705:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(709);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(710);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(711);
      END_STATE();
    case 706:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(706);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(708);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      if (lookahead == '\n')
        ADVANCE(706);
      if (lookahead == '\r')
        ADVANCE(709);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '\\')
        SKIP(710);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(705);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(711);
      END_STATE();
    case 710:
      if (lookahead == 'n')
        SKIP(705);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 712:
      if (lookahead == '\n')
        ADVANCE(713);
      if (lookahead == '\r')
        ADVANCE(715);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(716);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(712);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      END_STATE();
    case 713:
      if (lookahead == '\n')
        ADVANCE(713);
      if (lookahead == '\r')
        ADVANCE(713);
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
        ADVANCE(714);
      if (lookahead == 'c')
        ADVANCE(191);
      if (lookahead == 'd')
        ADVANCE(197);
      if (lookahead == 'i')
        ADVANCE(202);
      if (lookahead == 'n')
        ADVANCE(226);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(713);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 714:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(713);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 715:
      if (lookahead == '\n')
        ADVANCE(713);
      if (lookahead == '\r')
        ADVANCE(715);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == '0')
        ADVANCE(246);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(716);
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(288);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(712);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      END_STATE();
    case 716:
      if (lookahead == 'n')
        SKIP(712);
      END_STATE();
    case 717:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(720);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      END_STATE();
    case 718:
      if (lookahead == '\n')
        ADVANCE(718);
      if (lookahead == '\r')
        ADVANCE(718);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(719);
      if (lookahead == 'h')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(718);
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
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(721);
      if (lookahead == 'h')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(717);
      END_STATE();
    case 721:
      if (lookahead == 'n')
        SKIP(717);
      END_STATE();
    case 722:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(727);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(728);
      if (lookahead == 'i')
        ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(722);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 723:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(723);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(724);
      if (lookahead == 'i')
        ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(192);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 726:
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
    case 727:
      if (lookahead == '\n')
        ADVANCE(723);
      if (lookahead == '\r')
        ADVANCE(727);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(728);
      if (lookahead == 'i')
        ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(722);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 728:
      if (lookahead == 'n')
        SKIP(722);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'n')
        ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(254);
      if (lookahead == 'f')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 731:
      if (lookahead == '\n')
        ADVANCE(732);
      if (lookahead == '\r')
        ADVANCE(734);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(735);
      if (lookahead == 'i')
        ADVANCE(729);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(731);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 732:
      if (lookahead == '\n')
        ADVANCE(732);
      if (lookahead == '\r')
        ADVANCE(732);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == ':')
        ADVANCE(182);
      if (lookahead == '[')
        ADVANCE(183);
      if (lookahead == '\\')
        ADVANCE(733);
      if (lookahead == 'i')
        ADVANCE(725);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 733:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(732);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 734:
      if (lookahead == '\n')
        ADVANCE(732);
      if (lookahead == '\r')
        ADVANCE(734);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(251);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(735);
      if (lookahead == 'i')
        ADVANCE(729);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(731);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 735:
      if (lookahead == 'n')
        SKIP(731);
      END_STATE();
    case 736:
      if (lookahead == '\n')
        ADVANCE(737);
      if (lookahead == '\r')
        ADVANCE(739);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(740);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(736);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 737:
      if (lookahead == '\n')
        ADVANCE(737);
      if (lookahead == '\r')
        ADVANCE(737);
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
        ADVANCE(738);
      if (lookahead == 'd')
        ADVANCE(496);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(737);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(237);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 738:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(737);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 739:
      if (lookahead == '\n')
        ADVANCE(737);
      if (lookahead == '\r')
        ADVANCE(739);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(189);
      if (lookahead == '\\')
        SKIP(740);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(736);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(299);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(254);
      END_STATE();
    case 740:
      if (lookahead == 'n')
        SKIP(736);
      END_STATE();
    case 741:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(743);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
        ADVANCE(745);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(746);
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
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(743);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
        ADVANCE(745);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(746);
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
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 744:
      if (lookahead == '\t')
        ADVANCE(743);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
        ADVANCE(745);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(746);
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
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(743);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
        ADVANCE(745);
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
        ADVANCE(347);
      if (lookahead == '.')
        ADVANCE(348);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(352);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(746);
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
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(744);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 747:
      if (lookahead == '\t')
        ADVANCE(414);
      if (lookahead == '\n')
        ADVANCE(742);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(411);
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
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(356);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(360);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(361);
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
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(412);
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
  [2] = {.lex_state = 301},
  [3] = {.lex_state = 308},
  [4] = {.lex_state = 331, .external_lex_state = 2},
  [5] = {.lex_state = 336},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 345},
  [8] = {.lex_state = 362},
  [9] = {.lex_state = 336},
  [10] = {.lex_state = 336},
  [11] = {.lex_state = 367},
  [12] = {.lex_state = 388, .external_lex_state = 3},
  [13] = {.lex_state = 393},
  [14] = {.lex_state = 400, .external_lex_state = 3},
  [15] = {.lex_state = 405},
  [16] = {.lex_state = 413},
  [17] = {.lex_state = 400, .external_lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 400, .external_lex_state = 3},
  [20] = {.lex_state = 400, .external_lex_state = 3},
  [21] = {.lex_state = 400, .external_lex_state = 3},
  [22] = {.lex_state = 388},
  [23] = {.lex_state = 421},
  [24] = {.lex_state = 388},
  [25] = {.lex_state = 426},
  [26] = {.lex_state = 388},
  [27] = {.lex_state = 443, .external_lex_state = 3},
  [28] = {.lex_state = 464, .external_lex_state = 3},
  [29] = {.lex_state = 469, .external_lex_state = 4},
  [30] = {.lex_state = 301},
  [31] = {.lex_state = 400, .external_lex_state = 3},
  [32] = {.lex_state = 367},
  [33] = {.lex_state = 426},
  [34] = {.lex_state = 367},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 426},
  [37] = {.lex_state = 367},
  [38] = {.lex_state = 345},
  [39] = {.lex_state = 388},
  [40] = {.lex_state = 474, .external_lex_state = 3},
  [41] = {.lex_state = 474, .external_lex_state = 3},
  [42] = {.lex_state = 345},
  [43] = {.lex_state = 478, .external_lex_state = 3},
  [44] = {.lex_state = 478, .external_lex_state = 3},
  [45] = {.lex_state = 345},
  [46] = {.lex_state = 474, .external_lex_state = 3},
  [47] = {.lex_state = 474, .external_lex_state = 3},
  [48] = {.lex_state = 367},
  [49] = {.lex_state = 483, .external_lex_state = 3},
  [50] = {.lex_state = 400, .external_lex_state = 3},
  [51] = {.lex_state = 400, .external_lex_state = 3},
  [52] = {.lex_state = 388},
  [53] = {.lex_state = 336},
  [54] = {.lex_state = 426},
  [55] = {.lex_state = 488, .external_lex_state = 3},
  [56] = {.lex_state = 493, .external_lex_state = 3},
  [57] = {.lex_state = 367},
  [58] = {.lex_state = 367, .external_lex_state = 3},
  [59] = {.lex_state = 514},
  [60] = {.lex_state = 367},
  [61] = {.lex_state = 367},
  [62] = {.lex_state = 514},
  [63] = {.lex_state = 367},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 519},
  [71] = {.lex_state = 413},
  [72] = {.lex_state = 413},
  [73] = {.lex_state = 413},
  [74] = {.lex_state = 400, .external_lex_state = 3},
  [75] = {.lex_state = 413},
  [76] = {.lex_state = 413},
  [77] = {.lex_state = 413},
  [78] = {.lex_state = 623},
  [79] = {.lex_state = 413},
  [80] = {.lex_state = 413},
  [81] = {.lex_state = 421},
  [82] = {.lex_state = 400, .external_lex_state = 3},
  [83] = {.lex_state = 362},
  [84] = {.lex_state = 388},
  [85] = {.lex_state = 331, .external_lex_state = 2},
  [86] = {.lex_state = 642},
  [87] = {.lex_state = 426},
  [88] = {.lex_state = 464, .external_lex_state = 3},
  [89] = {.lex_state = 642},
  [90] = {.lex_state = 388},
  [91] = {.lex_state = 426},
  [92] = {.lex_state = 400, .external_lex_state = 3},
  [93] = {.lex_state = 400, .external_lex_state = 3},
  [94] = {.lex_state = 400, .external_lex_state = 3},
  [95] = {.lex_state = 469, .external_lex_state = 4},
  [96] = {.lex_state = 469, .external_lex_state = 4},
  [97] = {.lex_state = 400, .external_lex_state = 3},
  [98] = {.lex_state = 301},
  [99] = {.lex_state = 301},
  [100] = {.lex_state = 483},
  [101] = {.lex_state = 649},
  [102] = {.lex_state = 331, .external_lex_state = 2},
  [103] = {.lex_state = 336},
  [104] = {.lex_state = 426},
  [105] = {.lex_state = 426},
  [106] = {.lex_state = 426},
  [107] = {.lex_state = 367},
  [108] = {.lex_state = 331, .external_lex_state = 2},
  [109] = {.lex_state = 426},
  [110] = {.lex_state = 426},
  [111] = {.lex_state = 474, .external_lex_state = 3},
  [112] = {.lex_state = 474, .external_lex_state = 3},
  [113] = {.lex_state = 649},
  [114] = {.lex_state = 478, .external_lex_state = 3},
  [115] = {.lex_state = 474, .external_lex_state = 3},
  [116] = {.lex_state = 345},
  [117] = {.lex_state = 478, .external_lex_state = 3},
  [118] = {.lex_state = 478, .external_lex_state = 3},
  [119] = {.lex_state = 478, .external_lex_state = 3},
  [120] = {.lex_state = 474, .external_lex_state = 3},
  [121] = {.lex_state = 649},
  [122] = {.lex_state = 654, .external_lex_state = 3},
  [123] = {.lex_state = 659, .external_lex_state = 3},
  [124] = {.lex_state = 659, .external_lex_state = 3},
  [125] = {.lex_state = 400, .external_lex_state = 3},
  [126] = {.lex_state = 388},
  [127] = {.lex_state = 388},
  [128] = {.lex_state = 664, .external_lex_state = 3},
  [129] = {.lex_state = 669, .external_lex_state = 3},
  [130] = {.lex_state = 669, .external_lex_state = 3},
  [131] = {.lex_state = 367, .external_lex_state = 3},
  [132] = {.lex_state = 674, .external_lex_state = 3},
  [133] = {.lex_state = 362},
  [134] = {.lex_state = 679, .external_lex_state = 3},
  [135] = {.lex_state = 684, .external_lex_state = 3},
  [136] = {.lex_state = 689, .external_lex_state = 3},
  [137] = {.lex_state = 400, .external_lex_state = 3},
  [138] = {.lex_state = 336},
  [139] = {.lex_state = 514},
  [140] = {.lex_state = 367},
  [141] = {.lex_state = 367},
  [142] = {.lex_state = 514},
  [143] = {.lex_state = 388},
  [144] = {.lex_state = 400, .external_lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 694},
  [148] = {.lex_state = 698},
  [149] = {.lex_state = 705},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 413},
  [152] = {.lex_state = 413},
  [153] = {.lex_state = 694},
  [154] = {.lex_state = 698},
  [155] = {.lex_state = 705},
  [156] = {.lex_state = 413},
  [157] = {.lex_state = 413},
  [158] = {.lex_state = 400, .external_lex_state = 3},
  [159] = {.lex_state = 421},
  [160] = {.lex_state = 388},
  [161] = {.lex_state = 712, .external_lex_state = 4},
  [162] = {.lex_state = 421},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 426},
  [165] = {.lex_state = 649},
  [166] = {.lex_state = 649},
  [167] = {.lex_state = 649},
  [168] = {.lex_state = 331, .external_lex_state = 2},
  [169] = {.lex_state = 388},
  [170] = {.lex_state = 400, .external_lex_state = 3},
  [171] = {.lex_state = 400, .external_lex_state = 3},
  [172] = {.lex_state = 649},
  [173] = {.lex_state = 717, .external_lex_state = 3},
  [174] = {.lex_state = 642},
  [175] = {.lex_state = 469, .external_lex_state = 4},
  [176] = {.lex_state = 400, .external_lex_state = 3},
  [177] = {.lex_state = 469, .external_lex_state = 4},
  [178] = {.lex_state = 301},
  [179] = {.lex_state = 301},
  [180] = {.lex_state = 649},
  [181] = {.lex_state = 367},
  [182] = {.lex_state = 336},
  [183] = {.lex_state = 649},
  [184] = {.lex_state = 722, .external_lex_state = 4},
  [185] = {.lex_state = 731},
  [186] = {.lex_state = 400, .external_lex_state = 3},
  [187] = {.lex_state = 336},
  [188] = {.lex_state = 331, .external_lex_state = 2},
  [189] = {.lex_state = 426},
  [190] = {.lex_state = 426},
  [191] = {.lex_state = 426},
  [192] = {.lex_state = 400, .external_lex_state = 3},
  [193] = {.lex_state = 331, .external_lex_state = 2},
  [194] = {.lex_state = 426},
  [195] = {.lex_state = 478, .external_lex_state = 3},
  [196] = {.lex_state = 474, .external_lex_state = 3},
  [197] = {.lex_state = 478, .external_lex_state = 3},
  [198] = {.lex_state = 478, .external_lex_state = 3},
  [199] = {.lex_state = 478, .external_lex_state = 3},
  [200] = {.lex_state = 345},
  [201] = {.lex_state = 478, .external_lex_state = 3},
  [202] = {.lex_state = 336},
  [203] = {.lex_state = 649},
  [204] = {.lex_state = 659, .external_lex_state = 3},
  [205] = {.lex_state = 659, .external_lex_state = 3},
  [206] = {.lex_state = 659, .external_lex_state = 3},
  [207] = {.lex_state = 400, .external_lex_state = 3},
  [208] = {.lex_state = 488, .external_lex_state = 3},
  [209] = {.lex_state = 669, .external_lex_state = 3},
  [210] = {.lex_state = 669, .external_lex_state = 3},
  [211] = {.lex_state = 674, .external_lex_state = 3},
  [212] = {.lex_state = 684, .external_lex_state = 3},
  [213] = {.lex_state = 400, .external_lex_state = 3},
  [214] = {.lex_state = 388},
  [215] = {.lex_state = 400, .external_lex_state = 3},
  [216] = {.lex_state = 336},
  [217] = {.lex_state = 388},
  [218] = {.lex_state = 736, .external_lex_state = 3},
  [219] = {.lex_state = 736, .external_lex_state = 3},
  [220] = {.lex_state = 689, .external_lex_state = 3},
  [221] = {.lex_state = 736, .external_lex_state = 3},
  [222] = {.lex_state = 367},
  [223] = {.lex_state = 689, .external_lex_state = 3},
  [224] = {.lex_state = 514},
  [225] = {.lex_state = 367},
  [226] = {.lex_state = 642},
  [227] = {.lex_state = 684, .external_lex_state = 3},
  [228] = {.lex_state = 400, .external_lex_state = 3},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 698},
  [232] = {.lex_state = 698},
  [233] = {.lex_state = 705},
  [234] = {.lex_state = 705},
  [235] = {.lex_state = 413},
  [236] = {.lex_state = 413},
  [237] = {.lex_state = 413},
  [238] = {.lex_state = 413},
  [239] = {.lex_state = 741},
  [240] = {.lex_state = 741},
  [241] = {.lex_state = 400, .external_lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 400, .external_lex_state = 3},
  [244] = {.lex_state = 712, .external_lex_state = 4},
  [245] = {.lex_state = 421},
  [246] = {.lex_state = 388},
  [247] = {.lex_state = 426},
  [248] = {.lex_state = 649},
  [249] = {.lex_state = 642},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 717, .external_lex_state = 3},
  [252] = {.lex_state = 642},
  [253] = {.lex_state = 388},
  [254] = {.lex_state = 400, .external_lex_state = 3},
  [255] = {.lex_state = 649},
  [256] = {.lex_state = 400, .external_lex_state = 3},
  [257] = {.lex_state = 649},
  [258] = {.lex_state = 649},
  [259] = {.lex_state = 367},
  [260] = {.lex_state = 367},
  [261] = {.lex_state = 336},
  [262] = {.lex_state = 400, .external_lex_state = 3},
  [263] = {.lex_state = 400, .external_lex_state = 3},
  [264] = {.lex_state = 400, .external_lex_state = 3},
  [265] = {.lex_state = 722, .external_lex_state = 4},
  [266] = {.lex_state = 400, .external_lex_state = 3},
  [267] = {.lex_state = 731},
  [268] = {.lex_state = 649},
  [269] = {.lex_state = 400, .external_lex_state = 3},
  [270] = {.lex_state = 331, .external_lex_state = 2},
  [271] = {.lex_state = 400, .external_lex_state = 3},
  [272] = {.lex_state = 331, .external_lex_state = 2},
  [273] = {.lex_state = 478, .external_lex_state = 3},
  [274] = {.lex_state = 478, .external_lex_state = 3},
  [275] = {.lex_state = 388},
  [276] = {.lex_state = 336},
  [277] = {.lex_state = 684, .external_lex_state = 3},
  [278] = {.lex_state = 400, .external_lex_state = 3},
  [279] = {.lex_state = 649},
  [280] = {.lex_state = 649},
  [281] = {.lex_state = 649},
  [282] = {.lex_state = 736, .external_lex_state = 3},
  [283] = {.lex_state = 736, .external_lex_state = 3},
  [284] = {.lex_state = 689, .external_lex_state = 3},
  [285] = {.lex_state = 367},
  [286] = {.lex_state = 684, .external_lex_state = 3},
  [287] = {.lex_state = 684, .external_lex_state = 3},
  [288] = {.lex_state = 400, .external_lex_state = 3},
  [289] = {.lex_state = 698},
  [290] = {.lex_state = 705},
  [291] = {.lex_state = 413},
  [292] = {.lex_state = 741},
  [293] = {.lex_state = 712, .external_lex_state = 4},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 400, .external_lex_state = 3},
  [296] = {.lex_state = 649},
  [297] = {.lex_state = 388},
  [298] = {.lex_state = 426},
  [299] = {.lex_state = 308},
  [300] = {.lex_state = 649},
  [301] = {.lex_state = 400, .external_lex_state = 3},
  [302] = {.lex_state = 308},
  [303] = {.lex_state = 649},
  [304] = {.lex_state = 649},
  [305] = {.lex_state = 388},
  [306] = {.lex_state = 400, .external_lex_state = 3},
  [307] = {.lex_state = 642},
  [308] = {.lex_state = 649},
  [309] = {.lex_state = 649},
  [310] = {.lex_state = 367},
  [311] = {.lex_state = 722, .external_lex_state = 4},
  [312] = {.lex_state = 400, .external_lex_state = 3},
  [313] = {.lex_state = 400, .external_lex_state = 3},
  [314] = {.lex_state = 731},
  [315] = {.lex_state = 400, .external_lex_state = 3},
  [316] = {.lex_state = 400, .external_lex_state = 3},
  [317] = {.lex_state = 400, .external_lex_state = 3},
  [318] = {.lex_state = 388},
  [319] = {.lex_state = 400, .external_lex_state = 3},
  [320] = {.lex_state = 388},
  [321] = {.lex_state = 400, .external_lex_state = 3},
  [322] = {.lex_state = 649},
  [323] = {.lex_state = 336},
  [324] = {.lex_state = 642},
  [325] = {.lex_state = 649},
  [326] = {.lex_state = 689, .external_lex_state = 3},
  [327] = {.lex_state = 336},
  [328] = {.lex_state = 649},
  [329] = {.lex_state = 689, .external_lex_state = 3},
  [330] = {.lex_state = 400, .external_lex_state = 3},
  [331] = {.lex_state = 712, .external_lex_state = 4},
  [332] = {.lex_state = 649},
  [333] = {.lex_state = 649},
  [334] = {.lex_state = 649},
  [335] = {.lex_state = 649},
  [336] = {.lex_state = 649},
  [337] = {.lex_state = 642},
  [338] = {.lex_state = 649},
  [339] = {.lex_state = 308},
  [340] = {.lex_state = 649},
  [341] = {.lex_state = 400, .external_lex_state = 3},
  [342] = {.lex_state = 722, .external_lex_state = 4},
  [343] = {.lex_state = 731},
  [344] = {.lex_state = 649},
  [345] = {.lex_state = 388},
  [346] = {.lex_state = 400, .external_lex_state = 3},
  [347] = {.lex_state = 649},
  [348] = {.lex_state = 388},
  [349] = {.lex_state = 649},
  [350] = {.lex_state = 336},
  [351] = {.lex_state = 642},
  [352] = {.lex_state = 649},
  [353] = {.lex_state = 689, .external_lex_state = 3},
  [354] = {.lex_state = 336},
  [355] = {.lex_state = 649},
  [356] = {.lex_state = 400, .external_lex_state = 3},
  [357] = {.lex_state = 649},
  [358] = {.lex_state = 649},
  [359] = {.lex_state = 308},
  [360] = {.lex_state = 649},
  [361] = {.lex_state = 642},
  [362] = {.lex_state = 649},
  [363] = {.lex_state = 649},
  [364] = {.lex_state = 649},
  [365] = {.lex_state = 649},
  [366] = {.lex_state = 649},
  [367] = {.lex_state = 649},
  [368] = {.lex_state = 400, .external_lex_state = 3},
  [369] = {.lex_state = 649},
  [370] = {.lex_state = 649},
  [371] = {.lex_state = 649},
  [372] = {.lex_state = 308},
  [373] = {.lex_state = 649},
  [374] = {.lex_state = 649},
  [375] = {.lex_state = 400, .external_lex_state = 3},
  [376] = {.lex_state = 649},
  [377] = {.lex_state = 649},
  [378] = {.lex_state = 649},
  [379] = {.lex_state = 649},
  [380] = {.lex_state = 400, .external_lex_state = 3},
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
    [sym_module] = STATE(18),
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(23),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(36),
  },
  [3] = {
    [sym__identifier] = STATE(28),
    [anon_sym_qualified] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [sym_statement_list] = STATE(31),
    [sym__layout_open_brace] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [5] = {
    [sym_context] = STATE(34),
    [sym_class] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [sym_context] = STATE(37),
    [sym_class] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(36),
  },
  [7] = {
    [sym__op] = STATE(43),
    [sym_variable_symbol] = STATE(44),
    [sym_constructor_symbol] = STATE(44),
    [sym_integer] = STATE(45),
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
    [sym__integer_literal] = ACTIONS(72),
    [sym__octal_literal] = ACTIONS(72),
    [sym__hexidecimal_literal] = ACTIONS(72),
  },
  [8] = {
    [sym__type] = STATE(50),
    [sym_function_type] = STATE(51),
    [sym_context] = STATE(52),
    [sym_class] = STATE(53),
    [sym__identifier] = STATE(54),
    [sym_simple_type] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(78),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [9] = {
    [sym_context] = STATE(57),
    [sym_class] = STATE(35),
    [sym_simple_type] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(36),
  },
  [10] = {
    [sym_context] = STATE(60),
    [sym_class] = STATE(35),
    [sym_simple_type] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(36),
  },
  [11] = {
    [sym_simple_type] = STATE(63),
    [sym_constructor_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_COLON_COLON] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(90),
    [sym_constructor_identifier] = ACTIONS(92),
    [sym_module_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
  },
  [13] = {
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_BQUOTE] = ACTIONS(90),
    [anon_sym_COLON_COLON] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(90),
    [sym_constructor_identifier] = ACTIONS(92),
    [sym_module_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(96),
    [sym_comment] = ACTIONS(36),
  },
  [15] = {
    [sym__graphic] = STATE(66),
    [sym__small] = STATE(67),
    [sym__large] = STATE(67),
    [sym__symbol] = STATE(67),
    [sym__special] = STATE(67),
    [sym__escape] = STATE(66),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [sym__ascii_large] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [anon_sym_PERCENT] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_1] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [sym__space] = ACTIONS(102),
  },
  [16] = {
    [sym__gap] = STATE(73),
    [sym__graphic] = STATE(73),
    [sym__small] = STATE(75),
    [sym__large] = STATE(75),
    [sym__symbol] = STATE(75),
    [sym__special] = STATE(75),
    [sym__escape] = STATE(73),
    [aux_sym_string_repeat1] = STATE(80),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(114),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym__ascii_large] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_1] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [sym__space] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
    [sym__tab] = ACTIONS(128),
    [sym__vertical_tab] = ACTIONS(128),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_comment] = ACTIONS(36),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(138),
    [sym_comment] = ACTIONS(36),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_comment] = ACTIONS(36),
  },
  [21] = {
    [sym__layout_semicolon] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(88),
    [sym_comment] = ACTIONS(36),
  },
  [22] = {
    [anon_sym_COLON_COLON] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [sym_comment] = ACTIONS(36),
  },
  [23] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(82),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [24] = {
    [sym__identifier] = STATE(84),
    [anon_sym_COLON_COLON] = ACTIONS(150),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [25] = {
    [sym_module_exports] = STATE(87),
    [anon_sym_where] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [sym_comment] = ACTIONS(36),
  },
  [26] = {
    [sym__identifier] = STATE(88),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_as] = ACTIONS(90),
    [anon_sym_hiding] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [anon_sym_deriving] = ACTIONS(90),
    [sym_comment] = ACTIONS(36),
  },
  [28] = {
    [sym_import_specification] = STATE(92),
    [sym__layout_semicolon] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_as] = ACTIONS(166),
    [anon_sym_hiding] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [29] = {
    [sym__expression] = STATE(94),
    [sym_do_expression] = STATE(21),
    [sym__statement] = STATE(95),
    [sym__literal] = STATE(21),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(96),
    [sym__layout_close_brace] = ACTIONS(170),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [30] = {
    [sym__expression] = STATE(97),
    [sym_do_expression] = STATE(21),
    [sym__statement] = STATE(98),
    [sym__literal] = STATE(21),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(99),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [31] = {
    [sym__layout_semicolon] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_comment] = ACTIONS(36),
  },
  [32] = {
    [sym_class] = STATE(101),
    [sym_constructor_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [33] = {
    [aux_sym_type_class_repeat1] = STATE(105),
    [anon_sym_where] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(184),
    [sym_variable_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(36),
  },
  [34] = {
    [sym_constructor_identifier] = ACTIONS(188),
    [sym_comment] = ACTIONS(36),
  },
  [35] = {
    [anon_sym_EQ_GT] = ACTIONS(190),
    [sym_comment] = ACTIONS(36),
  },
  [36] = {
    [aux_sym_type_class_repeat1] = STATE(109),
    [anon_sym_where] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(184),
    [sym_variable_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(36),
  },
  [37] = {
    [sym_constructor_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(36),
  },
  [38] = {
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(112),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [39] = {
    [sym__identifier] = STATE(113),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [40] = {
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(115),
    [sym__layout_semicolon] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(206),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(208),
  },
  [43] = {
    [aux_sym_fixity_repeat1] = STATE(117),
    [sym__layout_semicolon] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(36),
  },
  [44] = {
    [sym__layout_semicolon] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(218),
    [sym_comment] = ACTIONS(36),
  },
  [45] = {
    [sym__op] = STATE(118),
    [sym_variable_symbol] = STATE(44),
    [sym_constructor_symbol] = STATE(44),
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(222),
  },
  [47] = {
    [sym__symbol] = STATE(120),
    [sym__layout_semicolon] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [48] = {
    [sym_class] = STATE(121),
    [sym_constructor_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [49] = {
    [aux_sym_type_class_repeat1] = STATE(123),
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(36),
  },
  [50] = {
    [sym__layout_semicolon] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [sym_comment] = ACTIONS(36),
  },
  [51] = {
    [sym__layout_semicolon] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(242),
    [sym_comment] = ACTIONS(36),
  },
  [52] = {
    [sym__type] = STATE(125),
    [sym_function_type] = STATE(51),
    [sym__identifier] = STATE(54),
    [sym_simple_type] = STATE(55),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(244),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [53] = {
    [anon_sym_EQ_GT] = ACTIONS(246),
    [sym_comment] = ACTIONS(36),
  },
  [54] = {
    [anon_sym_DASH_GT] = ACTIONS(248),
    [sym_comment] = ACTIONS(36),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_DASH_GT] = ACTIONS(248),
    [sym_comment] = ACTIONS(36),
  },
  [56] = {
    [aux_sym_type_class_repeat1] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_deriving] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(250),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(36),
  },
  [57] = {
    [sym_simple_type] = STATE(131),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(36),
  },
  [58] = {
    [sym_constructors] = STATE(135),
    [sym_constructor] = STATE(136),
    [sym_deriving] = STATE(137),
    [sym__layout_semicolon] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [59] = {
    [aux_sym_type_class_repeat1] = STATE(139),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(36),
  },
  [60] = {
    [sym_simple_type] = STATE(140),
    [sym_constructor_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(36),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(268),
    [sym_comment] = ACTIONS(36),
  },
  [62] = {
    [aux_sym_type_class_repeat1] = STATE(139),
    [anon_sym_EQ] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(36),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(272),
    [sym_comment] = ACTIONS(36),
  },
  [64] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(274),
  },
  [65] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(276),
  },
  [66] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(278),
  },
  [67] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(280),
  },
  [68] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(282),
  },
  [69] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [70] = {
    [sym__char_escape] = STATE(146),
    [sym__ascii] = STATE(146),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_AMP] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(290),
    [anon_sym_BSLASH] = ACTIONS(286),
    [anon_sym_x] = ACTIONS(292),
    [anon_sym_X] = ACTIONS(292),
    [anon_sym_o] = ACTIONS(294),
    [anon_sym_O] = ACTIONS(294),
    [anon_sym_a] = ACTIONS(286),
    [anon_sym_b] = ACTIONS(286),
    [anon_sym_f] = ACTIONS(286),
    [anon_sym_n] = ACTIONS(286),
    [anon_sym_r] = ACTIONS(286),
    [anon_sym_t] = ACTIONS(286),
    [anon_sym_v] = ACTIONS(286),
    [anon_sym_NUL] = ACTIONS(296),
    [anon_sym_SOH] = ACTIONS(296),
    [anon_sym_STX] = ACTIONS(296),
    [anon_sym_ETX] = ACTIONS(296),
    [anon_sym_EOT] = ACTIONS(296),
    [anon_sym_ENQ] = ACTIONS(296),
    [anon_sym_ACK] = ACTIONS(296),
    [anon_sym_BEL] = ACTIONS(296),
    [anon_sym_BS] = ACTIONS(296),
    [anon_sym_HT] = ACTIONS(296),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_VT] = ACTIONS(296),
    [anon_sym_FF] = ACTIONS(296),
    [anon_sym_CR] = ACTIONS(296),
    [anon_sym_SO] = ACTIONS(296),
    [anon_sym_SI] = ACTIONS(296),
    [anon_sym_DLE] = ACTIONS(296),
    [anon_sym_DC1] = ACTIONS(296),
    [anon_sym_DC2] = ACTIONS(296),
    [anon_sym_DC3] = ACTIONS(296),
    [anon_sym_DC4] = ACTIONS(296),
    [anon_sym_NAK] = ACTIONS(296),
    [anon_sym_SYN] = ACTIONS(296),
    [anon_sym_ETB] = ACTIONS(296),
    [anon_sym_CAN] = ACTIONS(296),
    [anon_sym_EM] = ACTIONS(296),
    [anon_sym_SUB] = ACTIONS(296),
    [anon_sym_ESC] = ACTIONS(296),
    [anon_sym_FS] = ACTIONS(296),
    [anon_sym_GS] = ACTIONS(296),
    [anon_sym_RS] = ACTIONS(296),
    [anon_sym_US] = ACTIONS(296),
    [anon_sym_SP] = ACTIONS(296),
    [anon_sym_DEL] = ACTIONS(296),
  },
  [71] = {
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
    [sym_comment] = ACTIONS(70),
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
  [72] = {
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
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
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [sym__vertical_tab] = ACTIONS(206),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_BQUOTE] = ACTIONS(300),
    [anon_sym_COLON] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_PIPE] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(300),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(300),
    [anon_sym__] = ACTIONS(300),
    [sym__ascii_large] = ACTIONS(300),
    [anon_sym_POUND] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
    [anon_sym_AMP] = ACTIONS(300),
    [anon_sym_1] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_TILDE] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [sym__space] = ACTIONS(300),
    [sym__newline] = ACTIONS(300),
    [sym__tab] = ACTIONS(300),
    [sym__vertical_tab] = ACTIONS(300),
  },
  [74] = {
    [sym__layout_semicolon] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(304),
    [sym_comment] = ACTIONS(36),
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
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [sym__ascii_large] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_1] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym__space] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
    [sym__tab] = ACTIONS(308),
    [sym__vertical_tab] = ACTIONS(308),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [sym_comment] = ACTIONS(70),
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
  [78] = {
    [sym__char_escape] = STATE(152),
    [sym__ascii] = STATE(152),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_1] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [sym__vertical_tab] = ACTIONS(206),
    [anon_sym_x] = ACTIONS(318),
    [anon_sym_X] = ACTIONS(318),
    [anon_sym_o] = ACTIONS(320),
    [anon_sym_O] = ACTIONS(320),
    [anon_sym_a] = ACTIONS(312),
    [anon_sym_b] = ACTIONS(312),
    [anon_sym_f] = ACTIONS(312),
    [anon_sym_n] = ACTIONS(312),
    [anon_sym_r] = ACTIONS(312),
    [anon_sym_t] = ACTIONS(312),
    [anon_sym_v] = ACTIONS(312),
    [anon_sym_NUL] = ACTIONS(322),
    [anon_sym_SOH] = ACTIONS(322),
    [anon_sym_STX] = ACTIONS(322),
    [anon_sym_ETX] = ACTIONS(322),
    [anon_sym_EOT] = ACTIONS(322),
    [anon_sym_ENQ] = ACTIONS(322),
    [anon_sym_ACK] = ACTIONS(322),
    [anon_sym_BEL] = ACTIONS(322),
    [anon_sym_BS] = ACTIONS(322),
    [anon_sym_HT] = ACTIONS(322),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_VT] = ACTIONS(322),
    [anon_sym_FF] = ACTIONS(322),
    [anon_sym_CR] = ACTIONS(322),
    [anon_sym_SO] = ACTIONS(322),
    [anon_sym_SI] = ACTIONS(322),
    [anon_sym_DLE] = ACTIONS(322),
    [anon_sym_DC1] = ACTIONS(322),
    [anon_sym_DC2] = ACTIONS(322),
    [anon_sym_DC3] = ACTIONS(322),
    [anon_sym_DC4] = ACTIONS(322),
    [anon_sym_NAK] = ACTIONS(322),
    [anon_sym_SYN] = ACTIONS(322),
    [anon_sym_ETB] = ACTIONS(322),
    [anon_sym_CAN] = ACTIONS(322),
    [anon_sym_EM] = ACTIONS(322),
    [anon_sym_SUB] = ACTIONS(322),
    [anon_sym_ESC] = ACTIONS(322),
    [anon_sym_FS] = ACTIONS(322),
    [anon_sym_GS] = ACTIONS(322),
    [anon_sym_RS] = ACTIONS(322),
    [anon_sym_US] = ACTIONS(322),
    [anon_sym_SP] = ACTIONS(322),
    [anon_sym_DEL] = ACTIONS(322),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_BQUOTE] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_BANG] = ACTIONS(324),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [sym__ascii_large] = ACTIONS(324),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_1] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_TILDE] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [sym__space] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [sym__tab] = ACTIONS(324),
    [sym__vertical_tab] = ACTIONS(324),
  },
  [80] = {
    [sym__gap] = STATE(157),
    [sym__graphic] = STATE(157),
    [sym__small] = STATE(75),
    [sym__large] = STATE(75),
    [sym__symbol] = STATE(75),
    [sym__special] = STATE(75),
    [sym__escape] = STATE(157),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(114),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym__ascii_large] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_1] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [sym__space] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
    [sym__tab] = ACTIONS(128),
    [sym__vertical_tab] = ACTIONS(128),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_COLON_COLON] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(334),
    [sym_module_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [82] = {
    [sym__layout_semicolon] = ACTIONS(336),
    [anon_sym_SEMI] = ACTIONS(338),
    [sym_comment] = ACTIONS(36),
  },
  [83] = {
    [sym__type] = STATE(125),
    [sym_function_type] = STATE(51),
    [sym_context] = STATE(160),
    [sym_class] = STATE(53),
    [sym__identifier] = STATE(54),
    [sym_simple_type] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(78),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [84] = {
    [anon_sym_COLON_COLON] = ACTIONS(340),
    [sym_variable_identifier] = ACTIONS(340),
    [sym_constructor_identifier] = ACTIONS(342),
    [sym_module_identifier] = ACTIONS(342),
    [sym_comment] = ACTIONS(36),
  },
  [85] = {
    [sym_declarations] = STATE(163),
    [sym__layout_open_brace] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(36),
  },
  [86] = {
    [sym_export] = STATE(166),
    [sym__identifier] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [87] = {
    [anon_sym_where] = ACTIONS(354),
    [sym_comment] = ACTIONS(36),
  },
  [88] = {
    [sym_import_specification] = STATE(170),
    [sym__layout_semicolon] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_as] = ACTIONS(360),
    [anon_sym_hiding] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [89] = {
    [sym__identifier] = STATE(172),
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [90] = {
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(36),
  },
  [92] = {
    [sym__layout_semicolon] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(358),
    [sym_comment] = ACTIONS(36),
  },
  [93] = {
    [sym__layout_semicolon] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(368),
    [sym_comment] = ACTIONS(36),
  },
  [94] = {
    [sym__layout_semicolon] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(36),
  },
  [95] = {
    [sym__layout_close_brace] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [96] = {
    [sym__expression] = STATE(94),
    [sym_do_expression] = STATE(21),
    [sym__statement] = STATE(177),
    [sym__literal] = STATE(21),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(380),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [97] = {
    [sym__layout_semicolon] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comment] = ACTIONS(36),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_do] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [99] = {
    [sym__expression] = STATE(97),
    [sym_do_expression] = STATE(21),
    [sym__statement] = STATE(179),
    [sym__literal] = STATE(21),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_do] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(184),
    [sym_variable_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(36),
  },
  [101] = {
    [aux_sym_context_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(36),
  },
  [102] = {
    [sym_general_declarations] = STATE(186),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [103] = {
    [aux_sym_type_class_repeat1] = STATE(187),
    [sym_variable_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(36),
  },
  [104] = {
    [anon_sym_where] = ACTIONS(398),
    [anon_sym_EQ_GT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(36),
  },
  [105] = {
    [anon_sym_where] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(36),
  },
  [106] = {
    [aux_sym_type_class_repeat1] = STATE(191),
    [anon_sym_where] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(36),
  },
  [107] = {
    [sym_constructor_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(36),
  },
  [108] = {
    [sym_general_declarations] = STATE(192),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [109] = {
    [anon_sym_where] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(36),
  },
  [110] = {
    [aux_sym_type_class_repeat1] = STATE(194),
    [anon_sym_where] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(36),
  },
  [111] = {
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(196),
    [sym__layout_semicolon] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [112] = {
    [sym__symbol] = STATE(120),
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [113] = {
    [anon_sym_BQUOTE] = ACTIONS(426),
    [sym_comment] = ACTIONS(36),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [sym_comment] = ACTIONS(36),
  },
  [115] = {
    [sym__symbol] = STATE(120),
    [sym__layout_semicolon] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [116] = {
    [sym__op] = STATE(199),
    [sym_variable_symbol] = STATE(44),
    [sym_constructor_symbol] = STATE(44),
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(434),
    [sym_comment] = ACTIONS(36),
  },
  [118] = {
    [aux_sym_fixity_repeat1] = STATE(201),
    [sym__layout_semicolon] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(36),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(436),
    [anon_sym_COMMA] = ACTIONS(436),
    [sym_comment] = ACTIONS(36),
  },
  [120] = {
    [sym__layout_semicolon] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(440),
    [anon_sym_BANG] = ACTIONS(440),
    [sym_comment] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_DOLLAR] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(440),
    [anon_sym_1] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_QMARK] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_BSLASH] = ACTIONS(440),
  },
  [121] = {
    [aux_sym_context_repeat1] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(36),
  },
  [122] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [anon_sym_EQ_GT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [123] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(36),
  },
  [124] = {
    [aux_sym_type_class_repeat1] = STATE(123),
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(36),
  },
  [125] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(456),
    [sym_comment] = ACTIONS(36),
  },
  [126] = {
    [sym_variable_identifier] = ACTIONS(458),
    [sym_constructor_identifier] = ACTIONS(410),
    [sym_module_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(36),
  },
  [127] = {
    [sym__type] = STATE(207),
    [sym_function_type] = STATE(51),
    [sym__identifier] = STATE(208),
    [sym_simple_type] = STATE(55),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(460),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [128] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_EQ_GT] = ACTIONS(400),
    [anon_sym_deriving] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_constructor_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(36),
  },
  [129] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_constructor_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(36),
  },
  [130] = {
    [aux_sym_type_class_repeat1] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_deriving] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(36),
  },
  [131] = {
    [sym_constructors] = STATE(212),
    [sym_constructor] = STATE(136),
    [sym_deriving] = STATE(213),
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_EQ] = ACTIONS(472),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [132] = {
    [sym_constructors] = STATE(212),
    [sym_constructor] = STATE(136),
    [sym_deriving] = STATE(213),
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [133] = {
    [sym__identifier] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [134] = {
    [sym_strict] = STATE(219),
    [sym__identifier] = STATE(219),
    [sym_fields] = STATE(220),
    [aux_sym_constructor_repeat1] = STATE(221),
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(478),
    [anon_sym_LBRACE] = ACTIONS(480),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_deriving] = ACTIONS(478),
    [anon_sym_BANG] = ACTIONS(482),
    [sym_variable_identifier] = ACTIONS(484),
    [sym_constructor_identifier] = ACTIONS(484),
    [sym_module_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [135] = {
    [sym_deriving] = STATE(213),
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_comment] = ACTIONS(36),
  },
  [136] = {
    [aux_sym_constructors_repeat1] = STATE(223),
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_deriving] = ACTIONS(488),
    [sym_comment] = ACTIONS(36),
  },
  [137] = {
    [sym__layout_semicolon] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(470),
    [sym_comment] = ACTIONS(36),
  },
  [138] = {
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_EQ_GT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [139] = {
    [anon_sym_EQ] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(36),
  },
  [140] = {
    [anon_sym_EQ] = ACTIONS(494),
    [sym_comment] = ACTIONS(36),
  },
  [141] = {
    [sym_new_constructor] = STATE(227),
    [sym_constructor_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [143] = {
    [sym__type] = STATE(228),
    [sym_function_type] = STATE(51),
    [sym__identifier] = STATE(54),
    [sym_simple_type] = STATE(55),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(244),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(500),
    [sym_comment] = ACTIONS(36),
  },
  [145] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(502),
  },
  [146] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(504),
  },
  [147] = {
    [sym__cntrl] = STATE(230),
    [sym_comment] = ACTIONS(70),
    [anon_sym__] = ACTIONS(506),
    [sym__ascii_large] = ACTIONS(506),
    [anon_sym_AT] = ACTIONS(506),
    [anon_sym_CARET] = ACTIONS(506),
    [anon_sym_BSLASH] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_RBRACK] = ACTIONS(506),
  },
  [148] = {
    [aux_sym__escape_repeat1] = STATE(232),
    [sym_comment] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(508),
  },
  [149] = {
    [aux_sym__escape_repeat2] = STATE(234),
    [sym_comment] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(510),
  },
  [150] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(512),
  },
  [151] = {
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_BQUOTE] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(514),
    [anon_sym_PIPE] = ACTIONS(514),
    [anon_sym_BANG] = ACTIONS(514),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(514),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(514),
    [anon_sym__] = ACTIONS(514),
    [sym__ascii_large] = ACTIONS(514),
    [anon_sym_POUND] = ACTIONS(514),
    [anon_sym_DOLLAR] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_AMP] = ACTIONS(514),
    [anon_sym_1] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(514),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_QMARK] = ACTIONS(514),
    [anon_sym_AT] = ACTIONS(514),
    [anon_sym_CARET] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_TILDE] = ACTIONS(514),
    [anon_sym_BSLASH] = ACTIONS(514),
    [anon_sym_LBRACK] = ACTIONS(514),
    [anon_sym_RBRACK] = ACTIONS(514),
    [sym__space] = ACTIONS(514),
    [sym__newline] = ACTIONS(514),
    [sym__tab] = ACTIONS(514),
    [sym__vertical_tab] = ACTIONS(514),
  },
  [152] = {
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_BQUOTE] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(516),
    [anon_sym_EQ] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(516),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(516),
    [anon_sym__] = ACTIONS(516),
    [sym__ascii_large] = ACTIONS(516),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_DOLLAR] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(516),
    [anon_sym_1] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(516),
    [anon_sym_QMARK] = ACTIONS(516),
    [anon_sym_AT] = ACTIONS(516),
    [anon_sym_CARET] = ACTIONS(516),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_TILDE] = ACTIONS(516),
    [anon_sym_BSLASH] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [sym__space] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
    [sym__tab] = ACTIONS(516),
    [sym__vertical_tab] = ACTIONS(516),
  },
  [153] = {
    [sym__cntrl] = STATE(236),
    [sym_comment] = ACTIONS(70),
    [anon_sym__] = ACTIONS(518),
    [sym__ascii_large] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_BSLASH] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(518),
    [anon_sym_RBRACK] = ACTIONS(518),
  },
  [154] = {
    [aux_sym__escape_repeat1] = STATE(238),
    [sym_comment] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(520),
  },
  [155] = {
    [aux_sym__escape_repeat2] = STATE(240),
    [sym_comment] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(522),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_BQUOTE] = ACTIONS(524),
    [anon_sym_COLON] = ACTIONS(524),
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_BANG] = ACTIONS(524),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(524),
    [anon_sym_DQUOTE] = ACTIONS(524),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [sym__ascii_large] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(524),
    [anon_sym_1] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_LT] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [anon_sym_QMARK] = ACTIONS(524),
    [anon_sym_AT] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(524),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_BSLASH] = ACTIONS(524),
    [anon_sym_LBRACK] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [sym__space] = ACTIONS(524),
    [sym__newline] = ACTIONS(524),
    [sym__tab] = ACTIONS(524),
    [sym__vertical_tab] = ACTIONS(524),
  },
  [157] = {
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_BQUOTE] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_EQ] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(526),
    [anon_sym_BANG] = ACTIONS(526),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(526),
    [anon_sym_DQUOTE] = ACTIONS(526),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(526),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(526),
    [anon_sym__] = ACTIONS(526),
    [sym__ascii_large] = ACTIONS(526),
    [anon_sym_POUND] = ACTIONS(526),
    [anon_sym_DOLLAR] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_1] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DOT] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_TILDE] = ACTIONS(526),
    [anon_sym_BSLASH] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym__space] = ACTIONS(526),
    [sym__newline] = ACTIONS(526),
    [sym__tab] = ACTIONS(526),
    [sym__vertical_tab] = ACTIONS(526),
  },
  [158] = {
    [sym__layout_semicolon] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(530),
    [sym_comment] = ACTIONS(36),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_import] = ACTIONS(534),
    [anon_sym_do] = ACTIONS(534),
    [anon_sym_class] = ACTIONS(534),
    [anon_sym_instance] = ACTIONS(534),
    [anon_sym_infixl] = ACTIONS(534),
    [anon_sym_infixr] = ACTIONS(534),
    [anon_sym_infix] = ACTIONS(534),
    [anon_sym_COLON_COLON] = ACTIONS(534),
    [anon_sym_data] = ACTIONS(534),
    [anon_sym_newtype] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [sym_variable_identifier] = ACTIONS(536),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_module_identifier] = ACTIONS(536),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [sym__integer_literal] = ACTIONS(534),
    [sym__octal_literal] = ACTIONS(534),
    [sym__hexidecimal_literal] = ACTIONS(534),
  },
  [160] = {
    [sym__type] = STATE(241),
    [sym_function_type] = STATE(51),
    [sym__identifier] = STATE(54),
    [sym_simple_type] = STATE(55),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(244),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [161] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(243),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(244),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(538),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [162] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(245),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(540),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [sym_comment] = ACTIONS(36),
  },
  [164] = {
    [anon_sym_where] = ACTIONS(544),
    [sym_comment] = ACTIONS(36),
  },
  [165] = {
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [sym_comment] = ACTIONS(36),
  },
  [166] = {
    [aux_sym_module_exports_repeat1] = STATE(248),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(36),
  },
  [167] = {
    [anon_sym_LPAREN] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(552),
    [sym_comment] = ACTIONS(36),
  },
  [168] = {
    [sym_declarations] = STATE(250),
    [sym__layout_open_brace] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_comment] = ACTIONS(36),
  },
  [169] = {
    [sym__identifier] = STATE(251),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(554),
    [anon_sym_SEMI] = ACTIONS(556),
    [sym_comment] = ACTIONS(36),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(558),
    [anon_sym_SEMI] = ACTIONS(560),
    [sym_comment] = ACTIONS(36),
  },
  [172] = {
    [aux_sym_import_specification_repeat1] = STATE(255),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_comment] = ACTIONS(36),
  },
  [173] = {
    [sym_import_specification] = STATE(256),
    [sym__layout_semicolon] = ACTIONS(554),
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_hiding] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [174] = {
    [sym__identifier] = STATE(257),
    [anon_sym_RPAREN] = ACTIONS(566),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [175] = {
    [sym__layout_close_brace] = ACTIONS(568),
    [anon_sym_do] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [176] = {
    [sym__layout_semicolon] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(576),
    [sym_comment] = ACTIONS(36),
  },
  [177] = {
    [sym__layout_close_brace] = ACTIONS(578),
    [anon_sym_do] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(582),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [sym__integer_literal] = ACTIONS(580),
    [sym__octal_literal] = ACTIONS(580),
    [sym__hexidecimal_literal] = ACTIONS(580),
  },
  [178] = {
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_do] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [sym__integer_literal] = ACTIONS(570),
    [sym__octal_literal] = ACTIONS(570),
    [sym__hexidecimal_literal] = ACTIONS(570),
  },
  [179] = {
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_do] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(582),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [sym__integer_literal] = ACTIONS(580),
    [sym__octal_literal] = ACTIONS(580),
    [sym__hexidecimal_literal] = ACTIONS(580),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(36),
  },
  [181] = {
    [sym_class] = STATE(258),
    [sym_constructor_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [182] = {
    [anon_sym_EQ_GT] = ACTIONS(584),
    [sym_comment] = ACTIONS(36),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(36),
  },
  [184] = {
    [sym__general_declaration] = STATE(263),
    [sym_fixity] = STATE(264),
    [sym_type_signature] = STATE(264),
    [sym__identifier] = STATE(22),
    [aux_sym_general_declarations_repeat1] = STATE(265),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(590),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [185] = {
    [sym__general_declaration] = STATE(266),
    [sym_fixity] = STATE(264),
    [sym_type_signature] = STATE(264),
    [sym__identifier] = STATE(22),
    [aux_sym_general_declarations_repeat1] = STATE(267),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [186] = {
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(596),
    [sym_comment] = ACTIONS(36),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_variable_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(36),
  },
  [188] = {
    [sym_general_declarations] = STATE(269),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [189] = {
    [anon_sym_where] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(602),
    [sym_comment] = ACTIONS(36),
  },
  [190] = {
    [anon_sym_where] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(36),
  },
  [191] = {
    [anon_sym_where] = ACTIONS(604),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(36),
  },
  [192] = {
    [sym__layout_semicolon] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(608),
    [sym_comment] = ACTIONS(36),
  },
  [193] = {
    [sym_general_declarations] = STATE(271),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [194] = {
    [anon_sym_where] = ACTIONS(610),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(36),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [sym_comment] = ACTIONS(36),
  },
  [196] = {
    [sym__symbol] = STATE(120),
    [sym__layout_semicolon] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_COMMA] = ACTIONS(622),
    [sym_comment] = ACTIONS(36),
  },
  [198] = {
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_COMMA] = ACTIONS(626),
    [sym_comment] = ACTIONS(36),
  },
  [199] = {
    [sym__layout_semicolon] = ACTIONS(628),
    [anon_sym_SEMI] = ACTIONS(630),
    [anon_sym_COMMA] = ACTIONS(630),
    [sym_comment] = ACTIONS(36),
  },
  [200] = {
    [sym__op] = STATE(274),
    [sym_variable_symbol] = STATE(44),
    [sym_constructor_symbol] = STATE(44),
    [sym__symbol] = STATE(46),
    [aux_sym_variable_symbol_repeat1] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_comment] = ACTIONS(70),
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
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(632),
    [anon_sym_SEMI] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(434),
    [sym_comment] = ACTIONS(36),
  },
  [202] = {
    [anon_sym_EQ_GT] = ACTIONS(636),
    [sym_comment] = ACTIONS(36),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(36),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_DASH_GT] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(36),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_DASH_GT] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(36),
  },
  [206] = {
    [aux_sym_type_class_repeat1] = STATE(123),
    [sym__layout_semicolon] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_DASH_GT] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(36),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [sym_comment] = ACTIONS(36),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_DASH_GT] = ACTIONS(248),
    [sym_comment] = ACTIONS(36),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_deriving] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(602),
    [sym_constructor_identifier] = ACTIONS(602),
    [sym_comment] = ACTIONS(36),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_deriving] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_constructor_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(36),
  },
  [211] = {
    [sym_constructors] = STATE(277),
    [sym_constructor] = STATE(136),
    [sym_deriving] = STATE(278),
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [212] = {
    [sym_deriving] = STATE(278),
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_comment] = ACTIONS(36),
  },
  [213] = {
    [sym__layout_semicolon] = ACTIONS(646),
    [anon_sym_SEMI] = ACTIONS(648),
    [sym_comment] = ACTIONS(36),
  },
  [214] = {
    [sym__identifier] = STATE(279),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [215] = {
    [sym__layout_semicolon] = ACTIONS(650),
    [anon_sym_SEMI] = ACTIONS(652),
    [sym_comment] = ACTIONS(36),
  },
  [216] = {
    [sym_field] = STATE(281),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(36),
  },
  [217] = {
    [sym__identifier] = STATE(282),
    [sym_variable_identifier] = ACTIONS(656),
    [sym_constructor_identifier] = ACTIONS(484),
    [sym_module_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [218] = {
    [sym__layout_semicolon] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_deriving] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(92),
    [sym_constructor_identifier] = ACTIONS(92),
    [sym_module_identifier] = ACTIONS(92),
    [sym_comment] = ACTIONS(36),
  },
  [219] = {
    [sym__layout_semicolon] = ACTIONS(658),
    [anon_sym_SEMI] = ACTIONS(660),
    [anon_sym_PIPE] = ACTIONS(660),
    [anon_sym_deriving] = ACTIONS(660),
    [anon_sym_BANG] = ACTIONS(660),
    [sym_variable_identifier] = ACTIONS(662),
    [sym_constructor_identifier] = ACTIONS(662),
    [sym_module_identifier] = ACTIONS(662),
    [sym_comment] = ACTIONS(36),
  },
  [220] = {
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_PIPE] = ACTIONS(666),
    [anon_sym_deriving] = ACTIONS(666),
    [sym_comment] = ACTIONS(36),
  },
  [221] = {
    [sym_strict] = STATE(283),
    [sym__identifier] = STATE(283),
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [anon_sym_PIPE] = ACTIONS(666),
    [anon_sym_deriving] = ACTIONS(666),
    [anon_sym_BANG] = ACTIONS(482),
    [sym_variable_identifier] = ACTIONS(484),
    [sym_constructor_identifier] = ACTIONS(484),
    [sym_module_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(36),
  },
  [222] = {
    [sym_constructor] = STATE(284),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [223] = {
    [sym__layout_semicolon] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_PIPE] = ACTIONS(672),
    [anon_sym_deriving] = ACTIONS(670),
    [sym_comment] = ACTIONS(36),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(36),
  },
  [225] = {
    [sym_new_constructor] = STATE(286),
    [sym_constructor_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(36),
  },
  [226] = {
    [sym__identifier] = STATE(287),
    [sym_fields] = STATE(287),
    [anon_sym_LBRACE] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [227] = {
    [sym_deriving] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_comment] = ACTIONS(36),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(680),
    [sym_comment] = ACTIONS(36),
  },
  [229] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(682),
  },
  [230] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(684),
  },
  [231] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(686),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(686),
  },
  [232] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(690),
  },
  [233] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(692),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(692),
  },
  [234] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(694),
  },
  [235] = {
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_RBRACE] = ACTIONS(696),
    [anon_sym_LPAREN] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_BQUOTE] = ACTIONS(696),
    [anon_sym_COLON] = ACTIONS(696),
    [anon_sym_EQ] = ACTIONS(696),
    [anon_sym_PIPE] = ACTIONS(696),
    [anon_sym_BANG] = ACTIONS(696),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(696),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(696),
    [anon_sym__] = ACTIONS(696),
    [sym__ascii_large] = ACTIONS(696),
    [anon_sym_POUND] = ACTIONS(696),
    [anon_sym_DOLLAR] = ACTIONS(696),
    [anon_sym_PERCENT] = ACTIONS(696),
    [anon_sym_AMP] = ACTIONS(696),
    [anon_sym_1] = ACTIONS(696),
    [anon_sym_PLUS] = ACTIONS(696),
    [anon_sym_DOT] = ACTIONS(696),
    [anon_sym_SLASH] = ACTIONS(696),
    [anon_sym_LT] = ACTIONS(696),
    [anon_sym_GT] = ACTIONS(696),
    [anon_sym_QMARK] = ACTIONS(696),
    [anon_sym_AT] = ACTIONS(696),
    [anon_sym_CARET] = ACTIONS(696),
    [anon_sym_DASH] = ACTIONS(696),
    [anon_sym_TILDE] = ACTIONS(696),
    [anon_sym_BSLASH] = ACTIONS(696),
    [anon_sym_LBRACK] = ACTIONS(696),
    [anon_sym_RBRACK] = ACTIONS(696),
    [sym__space] = ACTIONS(696),
    [sym__newline] = ACTIONS(696),
    [sym__tab] = ACTIONS(696),
    [sym__vertical_tab] = ACTIONS(696),
  },
  [236] = {
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_LBRACE] = ACTIONS(698),
    [anon_sym_RBRACE] = ACTIONS(698),
    [anon_sym_LPAREN] = ACTIONS(698),
    [anon_sym_RPAREN] = ACTIONS(698),
    [anon_sym_BQUOTE] = ACTIONS(698),
    [anon_sym_COLON] = ACTIONS(698),
    [anon_sym_EQ] = ACTIONS(698),
    [anon_sym_PIPE] = ACTIONS(698),
    [anon_sym_BANG] = ACTIONS(698),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(698),
    [anon_sym__] = ACTIONS(698),
    [sym__ascii_large] = ACTIONS(698),
    [anon_sym_POUND] = ACTIONS(698),
    [anon_sym_DOLLAR] = ACTIONS(698),
    [anon_sym_PERCENT] = ACTIONS(698),
    [anon_sym_AMP] = ACTIONS(698),
    [anon_sym_1] = ACTIONS(698),
    [anon_sym_PLUS] = ACTIONS(698),
    [anon_sym_DOT] = ACTIONS(698),
    [anon_sym_SLASH] = ACTIONS(698),
    [anon_sym_LT] = ACTIONS(698),
    [anon_sym_GT] = ACTIONS(698),
    [anon_sym_QMARK] = ACTIONS(698),
    [anon_sym_AT] = ACTIONS(698),
    [anon_sym_CARET] = ACTIONS(698),
    [anon_sym_DASH] = ACTIONS(698),
    [anon_sym_TILDE] = ACTIONS(698),
    [anon_sym_BSLASH] = ACTIONS(698),
    [anon_sym_LBRACK] = ACTIONS(698),
    [anon_sym_RBRACK] = ACTIONS(698),
    [sym__space] = ACTIONS(698),
    [sym__newline] = ACTIONS(698),
    [sym__tab] = ACTIONS(698),
    [sym__vertical_tab] = ACTIONS(698),
  },
  [237] = {
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(700),
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_BQUOTE] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_PIPE] = ACTIONS(700),
    [anon_sym_BANG] = ACTIONS(700),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(700),
    [anon_sym__] = ACTIONS(700),
    [sym__ascii_large] = ACTIONS(700),
    [anon_sym_POUND] = ACTIONS(700),
    [anon_sym_DOLLAR] = ACTIONS(700),
    [anon_sym_PERCENT] = ACTIONS(700),
    [anon_sym_AMP] = ACTIONS(700),
    [anon_sym_1] = ACTIONS(700),
    [anon_sym_PLUS] = ACTIONS(700),
    [anon_sym_DOT] = ACTIONS(700),
    [anon_sym_SLASH] = ACTIONS(700),
    [anon_sym_LT] = ACTIONS(700),
    [anon_sym_GT] = ACTIONS(700),
    [anon_sym_QMARK] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_CARET] = ACTIONS(700),
    [anon_sym_DASH] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [anon_sym_LBRACK] = ACTIONS(700),
    [anon_sym_RBRACK] = ACTIONS(700),
    [sym__space] = ACTIONS(700),
    [sym__newline] = ACTIONS(700),
    [sym__tab] = ACTIONS(700),
    [sym__vertical_tab] = ACTIONS(700),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(700),
  },
  [238] = {
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_BQUOTE] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_EQ] = ACTIONS(702),
    [anon_sym_PIPE] = ACTIONS(702),
    [anon_sym_BANG] = ACTIONS(702),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(702),
    [anon_sym__] = ACTIONS(702),
    [sym__ascii_large] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [anon_sym_PERCENT] = ACTIONS(702),
    [anon_sym_AMP] = ACTIONS(702),
    [anon_sym_1] = ACTIONS(702),
    [anon_sym_PLUS] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(702),
    [anon_sym_SLASH] = ACTIONS(702),
    [anon_sym_LT] = ACTIONS(702),
    [anon_sym_GT] = ACTIONS(702),
    [anon_sym_QMARK] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(702),
    [anon_sym_CARET] = ACTIONS(702),
    [anon_sym_DASH] = ACTIONS(702),
    [anon_sym_TILDE] = ACTIONS(702),
    [anon_sym_BSLASH] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [sym__space] = ACTIONS(702),
    [sym__newline] = ACTIONS(702),
    [sym__tab] = ACTIONS(702),
    [sym__vertical_tab] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(704),
  },
  [239] = {
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_RBRACE] = ACTIONS(706),
    [anon_sym_LPAREN] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(706),
    [anon_sym_BQUOTE] = ACTIONS(706),
    [anon_sym_COLON] = ACTIONS(706),
    [anon_sym_EQ] = ACTIONS(706),
    [anon_sym_PIPE] = ACTIONS(706),
    [anon_sym_BANG] = ACTIONS(706),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(706),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(706),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(706),
    [anon_sym__] = ACTIONS(706),
    [sym__ascii_large] = ACTIONS(706),
    [anon_sym_POUND] = ACTIONS(706),
    [anon_sym_DOLLAR] = ACTIONS(706),
    [anon_sym_PERCENT] = ACTIONS(706),
    [anon_sym_AMP] = ACTIONS(706),
    [anon_sym_1] = ACTIONS(706),
    [anon_sym_PLUS] = ACTIONS(706),
    [anon_sym_DOT] = ACTIONS(706),
    [anon_sym_SLASH] = ACTIONS(706),
    [anon_sym_LT] = ACTIONS(706),
    [anon_sym_GT] = ACTIONS(706),
    [anon_sym_QMARK] = ACTIONS(706),
    [anon_sym_AT] = ACTIONS(706),
    [anon_sym_CARET] = ACTIONS(706),
    [anon_sym_DASH] = ACTIONS(706),
    [anon_sym_TILDE] = ACTIONS(706),
    [anon_sym_BSLASH] = ACTIONS(706),
    [anon_sym_LBRACK] = ACTIONS(706),
    [anon_sym_RBRACK] = ACTIONS(706),
    [sym__space] = ACTIONS(706),
    [sym__newline] = ACTIONS(706),
    [sym__tab] = ACTIONS(706),
    [sym__vertical_tab] = ACTIONS(706),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(706),
  },
  [240] = {
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_BQUOTE] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(702),
    [anon_sym_EQ] = ACTIONS(702),
    [anon_sym_PIPE] = ACTIONS(702),
    [anon_sym_BANG] = ACTIONS(702),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(702),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(702),
    [anon_sym__] = ACTIONS(702),
    [sym__ascii_large] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [anon_sym_DOLLAR] = ACTIONS(702),
    [anon_sym_PERCENT] = ACTIONS(702),
    [anon_sym_AMP] = ACTIONS(702),
    [anon_sym_1] = ACTIONS(702),
    [anon_sym_PLUS] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(702),
    [anon_sym_SLASH] = ACTIONS(702),
    [anon_sym_LT] = ACTIONS(702),
    [anon_sym_GT] = ACTIONS(702),
    [anon_sym_QMARK] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(702),
    [anon_sym_CARET] = ACTIONS(702),
    [anon_sym_DASH] = ACTIONS(702),
    [anon_sym_TILDE] = ACTIONS(702),
    [anon_sym_BSLASH] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_RBRACK] = ACTIONS(702),
    [sym__space] = ACTIONS(702),
    [sym__newline] = ACTIONS(702),
    [sym__tab] = ACTIONS(702),
    [sym__vertical_tab] = ACTIONS(702),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(708),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(712),
    [sym_comment] = ACTIONS(36),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(714),
    [sym_comment] = ACTIONS(36),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(718),
    [sym_comment] = ACTIONS(36),
  },
  [244] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(295),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(720),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [245] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(82),
    [sym__expression] = STATE(19),
    [sym_do_expression] = STATE(21),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(21),
    [sym__identifier] = STATE(22),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(18),
    [anon_sym_instance] = ACTIONS(20),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [anon_sym_data] = ACTIONS(26),
    [anon_sym_newtype] = ACTIONS(28),
    [anon_sym_type] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [246] = {
    [sym_export] = STATE(296),
    [sym__identifier] = STATE(167),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [247] = {
    [anon_sym_where] = ACTIONS(724),
    [sym_comment] = ACTIONS(36),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(36),
  },
  [249] = {
    [sym__identifier] = STATE(300),
    [anon_sym_DOT_DOT] = ACTIONS(730),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [sym_comment] = ACTIONS(36),
  },
  [251] = {
    [sym_import_specification] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_hiding] = ACTIONS(168),
    [sym_comment] = ACTIONS(36),
  },
  [252] = {
    [sym__identifier] = STATE(303),
    [anon_sym_DOT_DOT] = ACTIONS(738),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [253] = {
    [sym__identifier] = STATE(304),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [sym_comment] = ACTIONS(36),
  },
  [255] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(36),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [sym_comment] = ACTIONS(36),
  },
  [257] = {
    [aux_sym_import_specification_repeat1] = STATE(308),
    [anon_sym_LPAREN] = ACTIONS(748),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(746),
    [sym_comment] = ACTIONS(36),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(750),
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym_comment] = ACTIONS(36),
  },
  [259] = {
    [sym_constructor_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(36),
  },
  [260] = {
    [sym_class] = STATE(309),
    [sym_constructor_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(36),
  },
  [261] = {
    [anon_sym_EQ_GT] = ACTIONS(754),
    [sym_comment] = ACTIONS(36),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [sym_comment] = ACTIONS(36),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [sym_comment] = ACTIONS(36),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(764),
    [anon_sym_SEMI] = ACTIONS(766),
    [sym_comment] = ACTIONS(36),
  },
  [265] = {
    [sym__general_declaration] = STATE(313),
    [sym_fixity] = STATE(264),
    [sym_type_signature] = STATE(264),
    [sym__identifier] = STATE(22),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [sym__layout_close_brace] = ACTIONS(768),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [266] = {
    [sym__layout_semicolon] = ACTIONS(770),
    [anon_sym_SEMI] = ACTIONS(772),
    [sym_comment] = ACTIONS(36),
  },
  [267] = {
    [sym__general_declaration] = STATE(315),
    [sym_fixity] = STATE(264),
    [sym_type_signature] = STATE(264),
    [sym__identifier] = STATE(22),
    [aux_sym_type_signature_repeat1] = STATE(24),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_infixl] = ACTIONS(22),
    [anon_sym_infixr] = ACTIONS(22),
    [anon_sym_infix] = ACTIONS(22),
    [anon_sym_COLON_COLON] = ACTIONS(24),
    [sym_variable_identifier] = ACTIONS(34),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [268] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_EQ_GT] = ACTIONS(776),
    [sym_comment] = ACTIONS(36),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(778),
    [anon_sym_SEMI] = ACTIONS(780),
    [sym_comment] = ACTIONS(36),
  },
  [270] = {
    [sym_general_declarations] = STATE(316),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(784),
    [sym_comment] = ACTIONS(36),
  },
  [272] = {
    [sym_general_declarations] = STATE(317),
    [sym__layout_open_brace] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(36),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(788),
    [sym_comment] = ACTIONS(36),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(790),
    [anon_sym_SEMI] = ACTIONS(792),
    [anon_sym_COMMA] = ACTIONS(792),
    [sym_comment] = ACTIONS(36),
  },
  [275] = {
    [sym_variable_identifier] = ACTIONS(794),
    [sym_constructor_identifier] = ACTIONS(752),
    [sym_module_identifier] = ACTIONS(752),
    [sym_comment] = ACTIONS(36),
  },
  [276] = {
    [anon_sym_EQ_GT] = ACTIONS(796),
    [sym_comment] = ACTIONS(36),
  },
  [277] = {
    [sym_deriving] = STATE(319),
    [sym__layout_semicolon] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_comment] = ACTIONS(36),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(800),
    [sym_comment] = ACTIONS(36),
  },
  [279] = {
    [aux_sym_export_repeat1] = STATE(322),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(804),
    [sym_comment] = ACTIONS(36),
  },
  [280] = {
    [aux_sym_field_repeat1] = STATE(325),
    [anon_sym_COMMA] = ACTIONS(806),
    [anon_sym_COLON_COLON] = ACTIONS(808),
    [sym_comment] = ACTIONS(36),
  },
  [281] = {
    [aux_sym_fields_repeat1] = STATE(328),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_COMMA] = ACTIONS(812),
    [sym_comment] = ACTIONS(36),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_PIPE] = ACTIONS(816),
    [anon_sym_deriving] = ACTIONS(816),
    [anon_sym_BANG] = ACTIONS(816),
    [sym_variable_identifier] = ACTIONS(818),
    [sym_constructor_identifier] = ACTIONS(818),
    [sym_module_identifier] = ACTIONS(818),
    [sym_comment] = ACTIONS(36),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_PIPE] = ACTIONS(822),
    [anon_sym_deriving] = ACTIONS(822),
    [anon_sym_BANG] = ACTIONS(822),
    [sym_variable_identifier] = ACTIONS(824),
    [sym_constructor_identifier] = ACTIONS(824),
    [sym_module_identifier] = ACTIONS(824),
    [sym_comment] = ACTIONS(36),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(828),
    [anon_sym_PIPE] = ACTIONS(828),
    [anon_sym_deriving] = ACTIONS(828),
    [sym_comment] = ACTIONS(36),
  },
  [285] = {
    [sym_constructor] = STATE(329),
    [sym_constructor_identifier] = ACTIONS(264),
    [sym_comment] = ACTIONS(36),
  },
  [286] = {
    [sym_deriving] = STATE(330),
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_deriving] = ACTIONS(262),
    [sym_comment] = ACTIONS(36),
  },
  [287] = {
    [sym__layout_semicolon] = ACTIONS(834),
    [anon_sym_SEMI] = ACTIONS(836),
    [anon_sym_deriving] = ACTIONS(836),
    [sym_comment] = ACTIONS(36),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [sym_comment] = ACTIONS(36),
  },
  [289] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(838),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(838),
  },
  [290] = {
    [sym_comment] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(840),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(840),
  },
  [291] = {
    [anon_sym_SEMI] = ACTIONS(842),
    [anon_sym_LBRACE] = ACTIONS(842),
    [anon_sym_RBRACE] = ACTIONS(842),
    [anon_sym_LPAREN] = ACTIONS(842),
    [anon_sym_RPAREN] = ACTIONS(842),
    [anon_sym_BQUOTE] = ACTIONS(842),
    [anon_sym_COLON] = ACTIONS(842),
    [anon_sym_EQ] = ACTIONS(842),
    [anon_sym_PIPE] = ACTIONS(842),
    [anon_sym_BANG] = ACTIONS(842),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(842),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(842),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(842),
    [anon_sym__] = ACTIONS(842),
    [sym__ascii_large] = ACTIONS(842),
    [anon_sym_POUND] = ACTIONS(842),
    [anon_sym_DOLLAR] = ACTIONS(842),
    [anon_sym_PERCENT] = ACTIONS(842),
    [anon_sym_AMP] = ACTIONS(842),
    [anon_sym_1] = ACTIONS(842),
    [anon_sym_PLUS] = ACTIONS(842),
    [anon_sym_DOT] = ACTIONS(842),
    [anon_sym_SLASH] = ACTIONS(842),
    [anon_sym_LT] = ACTIONS(842),
    [anon_sym_GT] = ACTIONS(842),
    [anon_sym_QMARK] = ACTIONS(842),
    [anon_sym_AT] = ACTIONS(842),
    [anon_sym_CARET] = ACTIONS(842),
    [anon_sym_DASH] = ACTIONS(842),
    [anon_sym_TILDE] = ACTIONS(842),
    [anon_sym_BSLASH] = ACTIONS(842),
    [anon_sym_LBRACK] = ACTIONS(842),
    [anon_sym_RBRACK] = ACTIONS(842),
    [sym__space] = ACTIONS(842),
    [sym__newline] = ACTIONS(842),
    [sym__tab] = ACTIONS(842),
    [sym__vertical_tab] = ACTIONS(842),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(842),
  },
  [292] = {
    [anon_sym_SEMI] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_RBRACE] = ACTIONS(844),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_BQUOTE] = ACTIONS(844),
    [anon_sym_COLON] = ACTIONS(844),
    [anon_sym_EQ] = ACTIONS(844),
    [anon_sym_PIPE] = ACTIONS(844),
    [anon_sym_BANG] = ACTIONS(844),
    [sym_comment] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(844),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(844),
    [anon_sym__] = ACTIONS(844),
    [sym__ascii_large] = ACTIONS(844),
    [anon_sym_POUND] = ACTIONS(844),
    [anon_sym_DOLLAR] = ACTIONS(844),
    [anon_sym_PERCENT] = ACTIONS(844),
    [anon_sym_AMP] = ACTIONS(844),
    [anon_sym_1] = ACTIONS(844),
    [anon_sym_PLUS] = ACTIONS(844),
    [anon_sym_DOT] = ACTIONS(844),
    [anon_sym_SLASH] = ACTIONS(844),
    [anon_sym_LT] = ACTIONS(844),
    [anon_sym_GT] = ACTIONS(844),
    [anon_sym_QMARK] = ACTIONS(844),
    [anon_sym_AT] = ACTIONS(844),
    [anon_sym_CARET] = ACTIONS(844),
    [anon_sym_DASH] = ACTIONS(844),
    [anon_sym_TILDE] = ACTIONS(844),
    [anon_sym_BSLASH] = ACTIONS(844),
    [anon_sym_LBRACK] = ACTIONS(844),
    [anon_sym_RBRACK] = ACTIONS(844),
    [sym__space] = ACTIONS(844),
    [sym__newline] = ACTIONS(844),
    [sym__tab] = ACTIONS(844),
    [sym__vertical_tab] = ACTIONS(844),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(844),
  },
  [293] = {
    [sym__layout_close_brace] = ACTIONS(330),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_COLON_COLON] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(334),
    [sym_module_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(846),
    [sym_comment] = ACTIONS(36),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(848),
    [anon_sym_SEMI] = ACTIONS(850),
    [sym_comment] = ACTIONS(36),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [sym_comment] = ACTIONS(36),
  },
  [297] = {
    [sym_export] = STATE(332),
    [sym__identifier] = STATE(167),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [298] = {
    [anon_sym_where] = ACTIONS(854),
    [sym_comment] = ACTIONS(36),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(36),
  },
  [300] = {
    [aux_sym_export_repeat1] = STATE(334),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(36),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(860),
    [sym_comment] = ACTIONS(36),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym_comment] = ACTIONS(36),
  },
  [303] = {
    [aux_sym_export_repeat1] = STATE(336),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym_comment] = ACTIONS(36),
  },
  [304] = {
    [anon_sym_LPAREN] = ACTIONS(864),
    [anon_sym_COMMA] = ACTIONS(866),
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(36),
  },
  [305] = {
    [sym__identifier] = STATE(338),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [sym_comment] = ACTIONS(36),
  },
  [306] = {
    [sym__layout_semicolon] = ACTIONS(868),
    [anon_sym_SEMI] = ACTIONS(870),
    [sym_comment] = ACTIONS(36),
  },
  [307] = {
    [sym__identifier] = STATE(340),
    [anon_sym_DOT_DOT] = ACTIONS(872),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(874),
    [sym_comment] = ACTIONS(36),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(876),
    [anon_sym_RPAREN] = ACTIONS(876),
    [sym_comment] = ACTIONS(36),
  },
  [310] = {
    [sym_constructor_identifier] = ACTIONS(878),
    [sym_comment] = ACTIONS(36),
  },
  [311] = {
    [sym__layout_close_brace] = ACTIONS(880),
    [anon_sym_infixl] = ACTIONS(882),
    [anon_sym_infixr] = ACTIONS(882),
    [anon_sym_infix] = ACTIONS(882),
    [anon_sym_COLON_COLON] = ACTIONS(882),
    [sym_variable_identifier] = ACTIONS(884),
    [sym_constructor_identifier] = ACTIONS(884),
    [sym_module_identifier] = ACTIONS(884),
    [sym_comment] = ACTIONS(36),
  },
  [312] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(888),
    [sym_comment] = ACTIONS(36),
  },
  [313] = {
    [sym__layout_semicolon] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(892),
    [sym_comment] = ACTIONS(36),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(882),
    [anon_sym_infixl] = ACTIONS(882),
    [anon_sym_infixr] = ACTIONS(882),
    [anon_sym_infix] = ACTIONS(882),
    [anon_sym_COLON_COLON] = ACTIONS(882),
    [sym_variable_identifier] = ACTIONS(884),
    [sym_constructor_identifier] = ACTIONS(884),
    [sym_module_identifier] = ACTIONS(884),
    [sym_comment] = ACTIONS(36),
  },
  [315] = {
    [sym__layout_semicolon] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(896),
    [sym_comment] = ACTIONS(36),
  },
  [316] = {
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [sym_comment] = ACTIONS(36),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(902),
    [anon_sym_SEMI] = ACTIONS(904),
    [sym_comment] = ACTIONS(36),
  },
  [318] = {
    [sym_variable_identifier] = ACTIONS(906),
    [sym_constructor_identifier] = ACTIONS(878),
    [sym_module_identifier] = ACTIONS(878),
    [sym_comment] = ACTIONS(36),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(908),
    [anon_sym_SEMI] = ACTIONS(910),
    [sym_comment] = ACTIONS(36),
  },
  [320] = {
    [sym__identifier] = STATE(344),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [321] = {
    [sym__layout_semicolon] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(914),
    [sym_comment] = ACTIONS(36),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(918),
    [sym_comment] = ACTIONS(36),
  },
  [323] = {
    [sym_variable_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(36),
  },
  [324] = {
    [sym_strict] = STATE(349),
    [sym__identifier] = STATE(349),
    [anon_sym_BANG] = ACTIONS(922),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(924),
    [anon_sym_COLON_COLON] = ACTIONS(926),
    [sym_comment] = ACTIONS(36),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(928),
    [anon_sym_SEMI] = ACTIONS(930),
    [anon_sym_PIPE] = ACTIONS(930),
    [anon_sym_deriving] = ACTIONS(930),
    [sym_comment] = ACTIONS(36),
  },
  [327] = {
    [sym_field] = STATE(352),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(36),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(932),
    [anon_sym_COMMA] = ACTIONS(934),
    [sym_comment] = ACTIONS(36),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(938),
    [anon_sym_PIPE] = ACTIONS(938),
    [anon_sym_deriving] = ACTIONS(938),
    [sym_comment] = ACTIONS(36),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(942),
    [sym_comment] = ACTIONS(36),
  },
  [331] = {
    [sym__layout_close_brace] = ACTIONS(532),
    [anon_sym_import] = ACTIONS(534),
    [anon_sym_do] = ACTIONS(534),
    [anon_sym_class] = ACTIONS(534),
    [anon_sym_instance] = ACTIONS(534),
    [anon_sym_infixl] = ACTIONS(534),
    [anon_sym_infixr] = ACTIONS(534),
    [anon_sym_infix] = ACTIONS(534),
    [anon_sym_COLON_COLON] = ACTIONS(534),
    [anon_sym_data] = ACTIONS(534),
    [anon_sym_newtype] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [sym_variable_identifier] = ACTIONS(536),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_module_identifier] = ACTIONS(536),
    [sym_comment] = ACTIONS(36),
    [sym_float] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [sym__integer_literal] = ACTIONS(534),
    [sym__octal_literal] = ACTIONS(534),
    [sym__hexidecimal_literal] = ACTIONS(534),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(944),
    [sym_comment] = ACTIONS(36),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(946),
    [sym_comment] = ACTIONS(36),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(36),
  },
  [335] = {
    [aux_sym_import_specification_repeat1] = STATE(357),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(950),
    [sym_comment] = ACTIONS(36),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(36),
  },
  [337] = {
    [sym__identifier] = STATE(360),
    [anon_sym_DOT_DOT] = ACTIONS(954),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [338] = {
    [anon_sym_LPAREN] = ACTIONS(956),
    [anon_sym_COMMA] = ACTIONS(958),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(36),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(36),
  },
  [340] = {
    [aux_sym_export_repeat1] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(36),
  },
  [341] = {
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(962),
    [sym_comment] = ACTIONS(36),
  },
  [342] = {
    [sym__layout_close_brace] = ACTIONS(964),
    [anon_sym_infixl] = ACTIONS(966),
    [anon_sym_infixr] = ACTIONS(966),
    [anon_sym_infix] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [sym_variable_identifier] = ACTIONS(968),
    [sym_constructor_identifier] = ACTIONS(968),
    [sym_module_identifier] = ACTIONS(968),
    [sym_comment] = ACTIONS(36),
  },
  [343] = {
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_infixl] = ACTIONS(966),
    [anon_sym_infixr] = ACTIONS(966),
    [anon_sym_infix] = ACTIONS(966),
    [anon_sym_COLON_COLON] = ACTIONS(966),
    [sym_variable_identifier] = ACTIONS(968),
    [sym_constructor_identifier] = ACTIONS(968),
    [sym_module_identifier] = ACTIONS(968),
    [sym_comment] = ACTIONS(36),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(970),
    [anon_sym_RPAREN] = ACTIONS(970),
    [sym_comment] = ACTIONS(36),
  },
  [345] = {
    [sym__identifier] = STATE(363),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [sym_comment] = ACTIONS(36),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(976),
    [anon_sym_COLON_COLON] = ACTIONS(976),
    [sym_comment] = ACTIONS(36),
  },
  [348] = {
    [sym__identifier] = STATE(364),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [349] = {
    [anon_sym_RBRACE] = ACTIONS(978),
    [anon_sym_COMMA] = ACTIONS(978),
    [sym_comment] = ACTIONS(36),
  },
  [350] = {
    [sym_variable_identifier] = ACTIONS(980),
    [sym_comment] = ACTIONS(36),
  },
  [351] = {
    [sym_strict] = STATE(366),
    [sym__identifier] = STATE(366),
    [anon_sym_BANG] = ACTIONS(922),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [352] = {
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_COMMA] = ACTIONS(982),
    [sym_comment] = ACTIONS(36),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(986),
    [anon_sym_PIPE] = ACTIONS(986),
    [anon_sym_deriving] = ACTIONS(986),
    [sym_comment] = ACTIONS(36),
  },
  [354] = {
    [sym_field] = STATE(367),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(36),
  },
  [355] = {
    [anon_sym_COMMA] = ACTIONS(988),
    [anon_sym_RPAREN] = ACTIONS(988),
    [sym_comment] = ACTIONS(36),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(992),
    [sym_comment] = ACTIONS(36),
  },
  [357] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(994),
    [sym_comment] = ACTIONS(36),
  },
  [358] = {
    [aux_sym_import_specification_repeat1] = STATE(369),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(994),
    [sym_comment] = ACTIONS(36),
  },
  [359] = {
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_comment] = ACTIONS(36),
  },
  [360] = {
    [aux_sym_export_repeat1] = STATE(371),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(996),
    [sym_comment] = ACTIONS(36),
  },
  [361] = {
    [sym__identifier] = STATE(373),
    [anon_sym_DOT_DOT] = ACTIONS(998),
    [sym_variable_identifier] = ACTIONS(76),
    [sym_constructor_identifier] = ACTIONS(34),
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(1000),
    [sym_comment] = ACTIONS(36),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1002),
    [sym_comment] = ACTIONS(36),
  },
  [364] = {
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_COMMA] = ACTIONS(816),
    [sym_comment] = ACTIONS(36),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(1004),
    [anon_sym_COLON_COLON] = ACTIONS(1004),
    [sym_comment] = ACTIONS(36),
  },
  [366] = {
    [anon_sym_RBRACE] = ACTIONS(1006),
    [anon_sym_COMMA] = ACTIONS(1006),
    [sym_comment] = ACTIONS(36),
  },
  [367] = {
    [anon_sym_RBRACE] = ACTIONS(1008),
    [anon_sym_COMMA] = ACTIONS(1008),
    [sym_comment] = ACTIONS(36),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1012),
    [sym_comment] = ACTIONS(36),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(36),
  },
  [370] = {
    [anon_sym_COMMA] = ACTIONS(1016),
    [anon_sym_RPAREN] = ACTIONS(1016),
    [sym_comment] = ACTIONS(36),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(36),
  },
  [372] = {
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(36),
  },
  [373] = {
    [aux_sym_export_repeat1] = STATE(377),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(36),
  },
  [374] = {
    [aux_sym_import_specification_repeat1] = STATE(378),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(36),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(1020),
    [anon_sym_SEMI] = ACTIONS(1022),
    [sym_comment] = ACTIONS(36),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(1024),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(36),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [sym_comment] = ACTIONS(36),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_RPAREN] = ACTIONS(1028),
    [sym_comment] = ACTIONS(36),
  },
  [379] = {
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_RPAREN] = ACTIONS(1030),
    [sym_comment] = ACTIONS(36),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(1032),
    [anon_sym_SEMI] = ACTIONS(1034),
    [sym_comment] = ACTIONS(36),
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
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
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
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_signature_repeat1, 2),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(226),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(235),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [524] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [616] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [662] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [706] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [708] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [752] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [824] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [844] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [878] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [968] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
