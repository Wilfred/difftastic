#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 489
#define SYMBOL_COUNT 210
#define ALIAS_COUNT 2
#define TOKEN_COUNT 128
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
  anon_sym_AT = 17,
  anon_sym_EQ = 18,
  anon_sym_BQUOTE = 19,
  anon_sym_DASH = 20,
  anon_sym__ = 21,
  anon_sym_foreign = 22,
  sym_foreign_export = 23,
  anon_sym_ccall = 24,
  anon_sym_stdcall = 25,
  anon_sym_cplusplus = 26,
  anon_sym_jvm = 27,
  anon_sym_dotnet = 28,
  anon_sym_unsafe = 29,
  anon_sym_safe = 30,
  anon_sym_default = 31,
  anon_sym_do = 32,
  anon_sym_class = 33,
  anon_sym_instance = 34,
  anon_sym_infixl = 35,
  anon_sym_infixr = 36,
  anon_sym_infix = 37,
  anon_sym_COLON = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_DASH_GT = 40,
  anon_sym_data = 41,
  anon_sym_EQ_GT = 42,
  anon_sym_PIPE = 43,
  anon_sym_deriving = 44,
  anon_sym_newtype = 45,
  anon_sym_BANG = 46,
  anon_sym_type = 47,
  sym_variable_identifier = 48,
  sym_constructor_identifier = 49,
  sym_module_identifier = 50,
  sym_comment = 51,
  sym_float = 52,
  anon_sym_SQUOTE = 53,
  anon_sym_DQUOTE = 54,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 55,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 56,
  sym__ascii_large = 57,
  anon_sym_POUND = 58,
  anon_sym_DOLLAR = 59,
  anon_sym_PERCENT = 60,
  anon_sym_AMP = 61,
  anon_sym_1 = 62,
  anon_sym_PLUS = 63,
  anon_sym_DOT = 64,
  anon_sym_SLASH = 65,
  anon_sym_LT = 66,
  anon_sym_GT = 67,
  anon_sym_QMARK = 68,
  anon_sym_CARET = 69,
  anon_sym_TILDE = 70,
  anon_sym_BSLASH = 71,
  anon_sym_LBRACK = 72,
  anon_sym_RBRACK = 73,
  sym__space = 74,
  sym__newline = 75,
  sym__tab = 76,
  sym__vertical_tab = 77,
  anon_sym_x = 78,
  anon_sym_X = 79,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 80,
  anon_sym_o = 81,
  anon_sym_O = 82,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 83,
  anon_sym_a = 84,
  anon_sym_b = 85,
  anon_sym_f = 86,
  anon_sym_n = 87,
  anon_sym_r = 88,
  anon_sym_t = 89,
  anon_sym_v = 90,
  anon_sym_NUL = 91,
  anon_sym_SOH = 92,
  anon_sym_STX = 93,
  anon_sym_ETX = 94,
  anon_sym_EOT = 95,
  anon_sym_ENQ = 96,
  anon_sym_ACK = 97,
  anon_sym_BEL = 98,
  anon_sym_BS = 99,
  anon_sym_HT = 100,
  anon_sym_LF = 101,
  anon_sym_VT = 102,
  anon_sym_FF = 103,
  anon_sym_CR = 104,
  anon_sym_SO = 105,
  anon_sym_SI = 106,
  anon_sym_DLE = 107,
  anon_sym_DC1 = 108,
  anon_sym_DC2 = 109,
  anon_sym_DC3 = 110,
  anon_sym_DC4 = 111,
  anon_sym_NAK = 112,
  anon_sym_SYN = 113,
  anon_sym_ETB = 114,
  anon_sym_CAN = 115,
  anon_sym_EM = 116,
  anon_sym_SUB = 117,
  anon_sym_ESC = 118,
  anon_sym_FS = 119,
  anon_sym_GS = 120,
  anon_sym_RS = 121,
  anon_sym_US = 122,
  anon_sym_SP = 123,
  anon_sym_DEL = 124,
  sym__integer_literal = 125,
  sym__octal_literal = 126,
  sym__hexidecimal_literal = 127,
  sym_module = 128,
  sym_declarations = 129,
  sym_module_exports = 130,
  sym_export = 131,
  sym_import = 132,
  sym_import_specification = 133,
  sym__declaration = 134,
  sym_flhs = 135,
  sym__apat = 136,
  sym__fpat = 137,
  sym__pat = 138,
  sym__qconop = 139,
  sym__lpat = 140,
  sym_wildcard = 141,
  sym__var = 142,
  sym__expression = 143,
  sym_foreign = 144,
  sym_foreign_import = 145,
  sym_calling_convention = 146,
  sym_safety = 147,
  sym_default = 148,
  sym_do_expression = 149,
  sym_statement_list = 150,
  sym__statement = 151,
  sym_type_class = 152,
  sym_general_declarations = 153,
  sym_type_class_instance = 154,
  sym__general_declaration = 155,
  sym_fixity = 156,
  sym__op = 157,
  sym_variable_symbol = 158,
  sym_constructor_symbol = 159,
  sym_type_signature = 160,
  sym__type = 161,
  sym_function_type = 162,
  sym_algebraic_datatype = 163,
  sym_context = 164,
  sym_class = 165,
  sym_constructors = 166,
  sym_constructor = 167,
  sym_deriving = 168,
  sym_newtype = 169,
  sym_new_constructor = 170,
  sym_field = 171,
  sym_strict = 172,
  sym_type_synonym = 173,
  sym__literal = 174,
  sym__identifier = 175,
  sym_simple_type = 176,
  sym_integer = 177,
  sym_char = 178,
  sym_string = 179,
  sym__gap = 180,
  sym__graphic = 181,
  sym__small = 182,
  sym__large = 183,
  sym__symbol = 184,
  sym__special = 185,
  sym__escape = 186,
  sym__char_escape = 187,
  sym__ascii = 188,
  sym__cntrl = 189,
  sym_fields = 190,
  aux_sym_module_repeat1 = 191,
  aux_sym_module_exports_repeat1 = 192,
  aux_sym_export_repeat1 = 193,
  aux_sym_import_specification_repeat1 = 194,
  aux_sym__lpat_repeat1 = 195,
  aux_sym_statement_list_repeat1 = 196,
  aux_sym_type_class_repeat1 = 197,
  aux_sym_general_declarations_repeat1 = 198,
  aux_sym_fixity_repeat1 = 199,
  aux_sym_variable_symbol_repeat1 = 200,
  aux_sym_function_type_repeat1 = 201,
  aux_sym_context_repeat1 = 202,
  aux_sym_constructors_repeat1 = 203,
  aux_sym_constructor_repeat1 = 204,
  aux_sym_field_repeat1 = 205,
  aux_sym_string_repeat1 = 206,
  aux_sym__escape_repeat1 = 207,
  aux_sym__escape_repeat2 = 208,
  aux_sym_fields_repeat1 = 209,
  alias_sym_type_constructor = 210,
  alias_sym_type_variable = 211,
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
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DASH] = "-",
  [anon_sym__] = "_",
  [anon_sym_foreign] = "foreign",
  [sym_foreign_export] = "foreign_export",
  [anon_sym_ccall] = "ccall",
  [anon_sym_stdcall] = "stdcall",
  [anon_sym_cplusplus] = "cplusplus",
  [anon_sym_jvm] = "jvm",
  [anon_sym_dotnet] = "dotnet",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_safe] = "safe",
  [anon_sym_default] = "default",
  [anon_sym_do] = "do",
  [anon_sym_class] = "class",
  [anon_sym_instance] = "instance",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_infix] = "infix",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_data] = "data",
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
  [anon_sym_CARET] = "^",
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
  [sym_flhs] = "flhs",
  [sym__apat] = "_apat",
  [sym__fpat] = "_fpat",
  [sym__pat] = "_pat",
  [sym__qconop] = "_qconop",
  [sym__lpat] = "_lpat",
  [sym_wildcard] = "wildcard",
  [sym__var] = "_var",
  [sym__expression] = "_expression",
  [sym_foreign] = "foreign",
  [sym_foreign_import] = "foreign_import",
  [sym_calling_convention] = "calling_convention",
  [sym_safety] = "safety",
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
  [aux_sym__lpat_repeat1] = "_lpat_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_type_class_repeat1] = "type_class_repeat1",
  [aux_sym_general_declarations_repeat1] = "general_declarations_repeat1",
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [sym_foreign_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ccall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cplusplus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jvm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dotnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_safe] = {
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
  [anon_sym_CARET] = {
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
  [sym_flhs] = {
    .visible = true,
    .named = true,
  },
  [sym__apat] = {
    .visible = false,
    .named = true,
  },
  [sym__fpat] = {
    .visible = false,
    .named = true,
  },
  [sym__pat] = {
    .visible = false,
    .named = true,
  },
  [sym__qconop] = {
    .visible = false,
    .named = true,
  },
  [sym__lpat] = {
    .visible = false,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym__var] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_foreign] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_import] = {
    .visible = true,
    .named = true,
  },
  [sym_calling_convention] = {
    .visible = true,
    .named = true,
  },
  [sym_safety] = {
    .visible = true,
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
  [aux_sym__lpat_repeat1] = {
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
  [aux_sym_function_type_repeat1] = {
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

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_constructor,
  },
  [2] = {
    [0] = alias_sym_type_constructor,
    [1] = alias_sym_type_variable,
  },
  [3] = {
    [0] = alias_sym_type_variable,
  },
  [4] = {
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
        ADVANCE(147);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(147);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(254);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'm')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(170);
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
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(192);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(193);
      if (lookahead == 'd')
        ADVANCE(199);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
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
        ADVANCE(170);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 171:
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
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(84);
      if (lookahead == 'O')
        ADVANCE(179);
      if (lookahead == 'X')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(179);
      if (lookahead == 'x')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(180);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(180);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(186);
      if (lookahead == ']')
        ADVANCE(187);
      if (lookahead != 0)
        ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(187);
      if (lookahead == '}')
        ADVANCE(188);
      if (lookahead != 0)
        ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(186);
      if (lookahead == ']')
        ADVANCE(187);
      if (lookahead != 0)
        ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(189);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead != 0)
        ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(200);
      if (lookahead == 'e')
        ADVANCE(203);
      if (lookahead == 'o')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
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
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(194);
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
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(252);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(253);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(170);
      if (lookahead == '\r')
        ADVANCE(254);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'm')
        ADVANCE(311);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(256);
      if (lookahead == ',')
        ADVANCE(257);
      if (lookahead == '-')
        ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_constructor_identifier);
      END_STATE();
    case 257:
      if (lookahead == ')')
        ADVANCE(256);
      if (lookahead == ',')
        ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == '>')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == ')')
        ADVANCE(256);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOT);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(276);
      if (lookahead == 'e')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 't')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 't')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'g')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(294);
      if (lookahead == 'n')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'p')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 't')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(300);
      if (lookahead == 's')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'x')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 't')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'c')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'd')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'w')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 't')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'y')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'p')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'y')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'p')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(328);
      if (lookahead == '.')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(329);
      if (lookahead == '.')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(329);
      END_STATE();
    case 330:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(331);
      if (lookahead == '\r')
        ADVANCE(336);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 331:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(331);
      if (lookahead == '\r')
        ADVANCE(331);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(334);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(331);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(331);
      if (lookahead == '\r')
        ADVANCE(336);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 338:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 339:
      if (lookahead == 'n')
        SKIP(330);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(354);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(356);
      if (lookahead == 'q')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(342);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == 'q')
        ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 343:
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 344:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(342);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(354);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(356);
      if (lookahead == 'q')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 355:
      if (lookahead == ')')
        ADVANCE(256);
      if (lookahead == ',')
        ADVANCE(257);
      if (lookahead == '-')
        ADVANCE(258);
      END_STATE();
    case 356:
      if (lookahead == 'n')
        SKIP(341);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
        ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'd')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 366:
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(370);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(371);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(366);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(367);
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
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(368);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(369);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(367);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(370);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(371);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(366);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 372:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(421);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(422);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(423);
      if (lookahead == 'd')
        ADVANCE(436);
      if (lookahead == 'e')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(448);
      if (lookahead == 'j')
        ADVANCE(454);
      if (lookahead == 's')
        ADVANCE(457);
      if (lookahead == 'w')
        ADVANCE(464);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(373);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(374);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(388);
      if (lookahead == 'e')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(400);
      if (lookahead == 'j')
        ADVANCE(406);
      if (lookahead == 's')
        ADVANCE(409);
      if (lookahead == 'w')
        ADVANCE(416);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(373);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(376);
      if (lookahead == 'p')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == 't')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(413);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(414);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(421);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(422);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(423);
      if (lookahead == 'd')
        ADVANCE(436);
      if (lookahead == 'e')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(448);
      if (lookahead == 'j')
        ADVANCE(454);
      if (lookahead == 's')
        ADVANCE(457);
      if (lookahead == 'w')
        ADVANCE(464);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 422:
      if (lookahead == 'n')
        SKIP(372);
      END_STATE();
    case 423:
      if (lookahead == 'c')
        ADVANCE(424);
      if (lookahead == 'p')
        ADVANCE(428);
      END_STATE();
    case 424:
      if (lookahead == 'a')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'l')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'l')
        ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 428:
      if (lookahead == 'l')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'u')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 's')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'p')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'l')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'u')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 's')
        ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 436:
      if (lookahead == 'o')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'n')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'e')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 't')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 442:
      if (lookahead == 'x')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'p')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'o')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'r')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 't')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 448:
      if (lookahead == 'm')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'p')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'o')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'r')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 't')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 454:
      if (lookahead == 'v')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'm')
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 457:
      if (lookahead == 't')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'd')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'c')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'a')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'l')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'l')
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 464:
      if (lookahead == 'h')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'e')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'r')
        ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 'e')
        ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(473);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(470);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(471);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(470);
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
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(473);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(469);
      END_STATE();
    case 473:
      if (lookahead == 'n')
        SKIP(469);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(477);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 479:
      if (lookahead == 'n')
        SKIP(474);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(480);
      END_STATE();
    case 481:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(486);
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
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
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
        SKIP(481);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(482);
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
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(483);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(485);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '`')
        ADVANCE(72);
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
        ADVANCE(482);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'O')
        ADVANCE(179);
      if (lookahead == 'X')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(179);
      if (lookahead == 'x')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(482);
      if (lookahead == '\r')
        ADVANCE(486);
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
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
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
        SKIP(481);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      END_STATE();
    case 487:
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
        ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(489);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 490:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(497);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(489);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 501:
      if (lookahead == 'n')
        SKIP(489);
      END_STATE();
    case 502:
      if (lookahead == 'e')
        ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 'r')
        ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == 'i')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'v')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'i')
        ADVANCE(507);
      END_STATE();
    case 507:
      if (lookahead == 'n')
        ADVANCE(508);
      END_STATE();
    case 508:
      if (lookahead == 'g')
        ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(109);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(371);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
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
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(512);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(109);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(371);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(517);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(518);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(514);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(515);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(515);
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
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(518);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(514);
      END_STATE();
    case 518:
      if (lookahead == 'n')
        SKIP(514);
      END_STATE();
    case 519:
      if (lookahead == '\t')
        SKIP(519);
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(524);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 520:
      if (lookahead == '\t')
        ADVANCE(520);
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == ' ')
        ADVANCE(521);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(522);
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
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(520);
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == ' ')
        ADVANCE(521);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(522);
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
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(520);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      if (lookahead == '\t')
        SKIP(519);
      if (lookahead == '\n')
        ADVANCE(520);
      if (lookahead == '\r')
        ADVANCE(524);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 527:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == ' ')
        ADVANCE(532);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(533);
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
        ADVANCE(523);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == ' ')
        ADVANCE(532);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(533);
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
        ADVANCE(523);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == ' ')
        ADVANCE(532);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(533);
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
        ADVANCE(523);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(531);
      if (lookahead == ' ')
        ADVANCE(532);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(533);
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
        ADVANCE(523);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 535:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 536:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
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
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(193);
      if (lookahead == 'd')
        ADVANCE(199);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
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
        ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(536);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(544);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(545);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(539);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == '\r')
        ADVANCE(540);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(541);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '\n')
        ADVANCE(540);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(544);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(545);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(539);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 544:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 545:
      if (lookahead == 'n')
        SKIP(539);
      END_STATE();
    case 546:
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(557);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(558);
      if (lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(546);
      END_STATE();
    case 547:
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(547);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(548);
      if (lookahead == 'a')
        ADVANCE(549);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == 'h')
        ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(550);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(553);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(554);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(556);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == '\r')
        ADVANCE(557);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(558);
      if (lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(546);
      END_STATE();
    case 558:
      if (lookahead == 'n')
        SKIP(546);
      END_STATE();
    case 559:
      if (lookahead == 's')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 561:
      if (lookahead == 'i')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 'd')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'i')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'n')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == 'g')
        ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(568);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(567);
      END_STATE();
    case 568:
      if (lookahead == '\n')
        ADVANCE(568);
      if (lookahead == '\r')
        ADVANCE(568);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(569);
      if (lookahead == 'a')
        ADVANCE(549);
      if (lookahead == 'h')
        ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(568);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'a')
        ADVANCE(559);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(567);
      END_STATE();
    case 571:
      if (lookahead == 'n')
        SKIP(567);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(576);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(572);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(573);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(573);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '\n')
        ADVANCE(573);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(576);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(572);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 576:
      if (lookahead == 'n')
        SKIP(572);
      END_STATE();
    case 577:
      if (lookahead == '\n')
        ADVANCE(578);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'w')
        ADVANCE(589);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(577);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(578);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '=')
        ADVANCE(579);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(578);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(578);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(578);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'w')
        ADVANCE(589);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(577);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 587:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 588:
      if (lookahead == 'n')
        SKIP(577);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'h')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(597);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(147);
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
        SKIP(594);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(595);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(596);
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
        ADVANCE(595);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(595);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(597);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '\\')
        ADVANCE(147);
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
        SKIP(594);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(602);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(602);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 602:
      if (lookahead == 'n')
        SKIP(598);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(615);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 604:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 614:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(615);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(603);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 615:
      if (lookahead == 'n')
        SKIP(603);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'v')
        ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'g')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(630);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(625);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(630);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 630:
      if (lookahead == 'n')
        SKIP(624);
      END_STATE();
    case 631:
      if (lookahead == '\n')
        ADVANCE(632);
      if (lookahead == '\r')
        ADVANCE(684);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == 'A')
        ADVANCE(685);
      if (lookahead == 'B')
        ADVANCE(688);
      if (lookahead == 'C')
        ADVANCE(692);
      if (lookahead == 'D')
        ADVANCE(696);
      if (lookahead == 'E')
        ADVANCE(706);
      if (lookahead == 'F')
        ADVANCE(717);
      if (lookahead == 'G')
        ADVANCE(720);
      if (lookahead == 'H')
        ADVANCE(721);
      if (lookahead == 'L')
        ADVANCE(722);
      if (lookahead == 'N')
        ADVANCE(723);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(725);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'U')
        ADVANCE(727);
      if (lookahead == 'V')
        ADVANCE(728);
      if (lookahead == 'X')
        ADVANCE(729);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(730);
      if (lookahead == 'b')
        ADVANCE(731);
      if (lookahead == 'f')
        ADVANCE(732);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(733);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(631);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(526);
      END_STATE();
    case 632:
      if (lookahead == '\n')
        ADVANCE(632);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == 'A')
        ADVANCE(633);
      if (lookahead == 'B')
        ADVANCE(636);
      if (lookahead == 'C')
        ADVANCE(640);
      if (lookahead == 'D')
        ADVANCE(644);
      if (lookahead == 'E')
        ADVANCE(654);
      if (lookahead == 'F')
        ADVANCE(665);
      if (lookahead == 'G')
        ADVANCE(668);
      if (lookahead == 'H')
        ADVANCE(669);
      if (lookahead == 'L')
        ADVANCE(670);
      if (lookahead == 'N')
        ADVANCE(671);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(673);
      if (lookahead == 'S')
        ADVANCE(674);
      if (lookahead == 'U')
        ADVANCE(675);
      if (lookahead == 'V')
        ADVANCE(676);
      if (lookahead == 'X')
        ADVANCE(677);
      if (lookahead == '\\')
        ADVANCE(678);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(679);
      if (lookahead == 'b')
        ADVANCE(680);
      if (lookahead == 'f')
        ADVANCE(681);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(682);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(523);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(637);
      if (lookahead == 'S')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(641);
      if (lookahead == 'R')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(645);
      if (lookahead == 'E')
        ADVANCE(650);
      if (lookahead == 'L')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(646);
      if (lookahead == '2')
        ADVANCE(647);
      if (lookahead == '3')
        ADVANCE(648);
      if (lookahead == '4')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(651);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(655);
      if (lookahead == 'N')
        ADVANCE(656);
      if (lookahead == 'O')
        ADVANCE(658);
      if (lookahead == 'S')
        ADVANCE(660);
      if (lookahead == 'T')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
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
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(663);
      if (lookahead == 'X')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
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
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '\n')
        ADVANCE(632);
      if (lookahead == '\r')
        ADVANCE(684);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == 'A')
        ADVANCE(685);
      if (lookahead == 'B')
        ADVANCE(688);
      if (lookahead == 'C')
        ADVANCE(692);
      if (lookahead == 'D')
        ADVANCE(696);
      if (lookahead == 'E')
        ADVANCE(706);
      if (lookahead == 'F')
        ADVANCE(717);
      if (lookahead == 'G')
        ADVANCE(720);
      if (lookahead == 'H')
        ADVANCE(721);
      if (lookahead == 'L')
        ADVANCE(722);
      if (lookahead == 'N')
        ADVANCE(723);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(725);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'U')
        ADVANCE(727);
      if (lookahead == 'V')
        ADVANCE(728);
      if (lookahead == 'X')
        ADVANCE(729);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(730);
      if (lookahead == 'b')
        ADVANCE(731);
      if (lookahead == 'f')
        ADVANCE(732);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(733);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(631);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(526);
      END_STATE();
    case 685:
      if (lookahead == 'C')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'K')
        ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 688:
      if (lookahead == 'E')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(691);
      END_STATE();
    case 689:
      if (lookahead == 'L')
        ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 692:
      if (lookahead == 'A')
        ADVANCE(693);
      if (lookahead == 'R')
        ADVANCE(695);
      END_STATE();
    case 693:
      if (lookahead == 'N')
        ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 696:
      if (lookahead == 'C')
        ADVANCE(697);
      if (lookahead == 'E')
        ADVANCE(702);
      if (lookahead == 'L')
        ADVANCE(704);
      END_STATE();
    case 697:
      if (lookahead == '1')
        ADVANCE(698);
      if (lookahead == '2')
        ADVANCE(699);
      if (lookahead == '3')
        ADVANCE(700);
      if (lookahead == '4')
        ADVANCE(701);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 702:
      if (lookahead == 'L')
        ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 704:
      if (lookahead == 'E')
        ADVANCE(705);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 706:
      if (lookahead == 'M')
        ADVANCE(707);
      if (lookahead == 'N')
        ADVANCE(708);
      if (lookahead == 'O')
        ADVANCE(710);
      if (lookahead == 'S')
        ADVANCE(712);
      if (lookahead == 'T')
        ADVANCE(714);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 708:
      if (lookahead == 'Q')
        ADVANCE(709);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 710:
      if (lookahead == 'T')
        ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 712:
      if (lookahead == 'C')
        ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 714:
      if (lookahead == 'B')
        ADVANCE(715);
      if (lookahead == 'X')
        ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 717:
      if (lookahead == 'F')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 720:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 721:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 722:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 723:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 725:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 726:
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
    case 727:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 728:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 735:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(748);
      if (lookahead == 'B')
        ADVANCE(749);
      if (lookahead == 'C')
        ADVANCE(750);
      if (lookahead == 'D')
        ADVANCE(751);
      if (lookahead == 'E')
        ADVANCE(752);
      if (lookahead == 'F')
        ADVANCE(753);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(729);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(730);
      if (lookahead == 'b')
        ADVANCE(731);
      if (lookahead == 'f')
        ADVANCE(732);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(733);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(734);
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
        ADVANCE(526);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(737);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(738);
      if (lookahead == ' ')
        ADVANCE(739);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'B')
        ADVANCE(741);
      if (lookahead == 'C')
        ADVANCE(742);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(744);
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(677);
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
      if (lookahead == 'a')
        ADVANCE(679);
      if (lookahead == 'b')
        ADVANCE(680);
      if (lookahead == 'f')
        ADVANCE(681);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(682);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(683);
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
        ADVANCE(523);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(737);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(738);
      if (lookahead == ' ')
        ADVANCE(739);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'B')
        ADVANCE(741);
      if (lookahead == 'C')
        ADVANCE(742);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(744);
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(677);
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
      if (lookahead == 'a')
        ADVANCE(679);
      if (lookahead == 'b')
        ADVANCE(680);
      if (lookahead == 'f')
        ADVANCE(681);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(682);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(683);
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
        ADVANCE(523);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 738:
      if (lookahead == '\t')
        ADVANCE(737);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(738);
      if (lookahead == ' ')
        ADVANCE(739);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'B')
        ADVANCE(741);
      if (lookahead == 'C')
        ADVANCE(742);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(744);
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(677);
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
      if (lookahead == 'a')
        ADVANCE(679);
      if (lookahead == 'b')
        ADVANCE(680);
      if (lookahead == 'f')
        ADVANCE(681);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(682);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(683);
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
        ADVANCE(523);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(737);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(738);
      if (lookahead == ' ')
        ADVANCE(739);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == 'A')
        ADVANCE(740);
      if (lookahead == 'B')
        ADVANCE(741);
      if (lookahead == 'C')
        ADVANCE(742);
      if (lookahead == 'D')
        ADVANCE(743);
      if (lookahead == 'E')
        ADVANCE(744);
      if (lookahead == 'F')
        ADVANCE(745);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(677);
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
      if (lookahead == 'a')
        ADVANCE(679);
      if (lookahead == 'b')
        ADVANCE(680);
      if (lookahead == 'f')
        ADVANCE(681);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(682);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(683);
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
        ADVANCE(523);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(637);
      if (lookahead == 'S')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(641);
      if (lookahead == 'R')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(645);
      if (lookahead == 'E')
        ADVANCE(650);
      if (lookahead == 'L')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(655);
      if (lookahead == 'N')
        ADVANCE(656);
      if (lookahead == 'O')
        ADVANCE(658);
      if (lookahead == 'S')
        ADVANCE(660);
      if (lookahead == 'T')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(738);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 747:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(748);
      if (lookahead == 'B')
        ADVANCE(749);
      if (lookahead == 'C')
        ADVANCE(750);
      if (lookahead == 'D')
        ADVANCE(751);
      if (lookahead == 'E')
        ADVANCE(752);
      if (lookahead == 'F')
        ADVANCE(753);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(729);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'a')
        ADVANCE(730);
      if (lookahead == 'b')
        ADVANCE(731);
      if (lookahead == 'f')
        ADVANCE(732);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(733);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(734);
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
        ADVANCE(526);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(686);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(689);
      if (lookahead == 'S')
        ADVANCE(691);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(693);
      if (lookahead == 'R')
        ADVANCE(695);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(697);
      if (lookahead == 'E')
        ADVANCE(702);
      if (lookahead == 'L')
        ADVANCE(704);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(707);
      if (lookahead == 'N')
        ADVANCE(708);
      if (lookahead == 'O')
        ADVANCE(710);
      if (lookahead == 'S')
        ADVANCE(712);
      if (lookahead == 'T')
        ADVANCE(714);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(719);
      END_STATE();
    case 754:
      if (lookahead == '\n')
        ADVANCE(755);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(768);
      if (lookahead == 's')
        ADVANCE(769);
      if (lookahead == 'u')
        ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(754);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 755:
      if (lookahead == '\n')
        ADVANCE(755);
      if (lookahead == '\r')
        ADVANCE(755);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(756);
      if (lookahead == 's')
        ADVANCE(757);
      if (lookahead == 'u')
        ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(755);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(755);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      if (lookahead == '\n')
        ADVANCE(755);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(768);
      if (lookahead == 's')
        ADVANCE(769);
      if (lookahead == 'u')
        ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(754);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 768:
      if (lookahead == 'n')
        SKIP(754);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 779:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(782);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(783);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(779);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(780);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 781:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(780);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(780);
      if (lookahead == '\r')
        ADVANCE(782);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(783);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(779);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 783:
      if (lookahead == 'n')
        SKIP(779);
      END_STATE();
    case 784:
      if (lookahead == '\n')
        ADVANCE(785);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(784);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(785);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(786);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(785);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(785);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(784);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 788:
      if (lookahead == 'n')
        SKIP(784);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(790);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(790);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(791);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
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
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 793:
      if (lookahead == 'n')
        SKIP(789);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(795);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(796);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(795);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(795);
      if (lookahead == '\r')
        ADVANCE(797);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 798:
      if (lookahead == 'n')
        SKIP(794);
      END_STATE();
    case 799:
      if (lookahead == '\n')
        ADVANCE(800);
      if (lookahead == '\r')
        ADVANCE(802);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(803);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(799);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(800);
      if (lookahead == '\r')
        ADVANCE(800);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(800);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      if (lookahead == '\n')
        ADVANCE(800);
      if (lookahead == '\r')
        ADVANCE(802);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(803);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(799);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 803:
      if (lookahead == 'n')
        SKIP(799);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(808);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(804);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(805);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(806);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '\n')
        ADVANCE(805);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(808);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(804);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 808:
      if (lookahead == 'n')
        SKIP(804);
      END_STATE();
    case 809:
      if (lookahead == '\n')
        ADVANCE(810);
      if (lookahead == '\r')
        ADVANCE(812);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(813);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(809);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(810);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(811);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(810);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 811:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(810);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(810);
      if (lookahead == '\r')
        ADVANCE(812);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(813);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(809);
      END_STATE();
    case 813:
      if (lookahead == 'n')
        SKIP(809);
      END_STATE();
    case 814:
      if (lookahead == '\n')
        ADVANCE(815);
      if (lookahead == '\r')
        ADVANCE(817);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(818);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(814);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(815);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(816);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(815);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 816:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(815);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(815);
      if (lookahead == '\r')
        ADVANCE(817);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(818);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(814);
      END_STATE();
    case 818:
      if (lookahead == 'n')
        SKIP(814);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(819);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(821);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == ']')
        ADVANCE(148);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(819);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(829);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(824);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(826);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(824);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(828);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(829);
      END_STATE();
    case 828:
      if (lookahead == 'n')
        SKIP(823);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(836);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(833);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 832:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(831);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 834:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(836);
      END_STATE();
    case 835:
      if (lookahead == 'n')
        SKIP(830);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 839:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(838);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(840);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(841);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 841:
      if (lookahead == 'n')
        SKIP(837);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(843);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      END_STATE();
    case 846:
      if (lookahead == 'n')
        SKIP(842);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(850);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(848);
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
        ADVANCE(171);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(849);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(193);
      if (lookahead == 'd')
        ADVANCE(199);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
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
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(848);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(850);
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
        ADVANCE(255);
      if (lookahead == '+')
        ADVANCE(102);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'd')
        ADVANCE(275);
      if (lookahead == 'f')
        ADVANCE(286);
      if (lookahead == 'i')
        ADVANCE(293);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 't')
        ADVANCE(324);
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
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(855);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(851);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(853);
      if (lookahead == 'h')
        ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(852);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 853:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(852);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 854:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(855);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(851);
      END_STATE();
    case 855:
      if (lookahead == 'n')
        SKIP(851);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(862);
      if (lookahead == 'i')
        ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(858);
      if (lookahead == 'i')
        ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(857);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 858:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(857);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(862);
      if (lookahead == 'i')
        ADVANCE(863);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 862:
      if (lookahead == 'n')
        SKIP(856);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'i')
        ADVANCE(863);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == 'i')
        ADVANCE(859);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 867:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(866);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'i')
        ADVANCE(863);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 869:
      if (lookahead == 'n')
        SKIP(865);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(871);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(872);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 872:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(871);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 874:
      if (lookahead == 'n')
        SKIP(870);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(878);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(877);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 877:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(876);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(878);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 879:
      if (lookahead == 'n')
        SKIP(875);
      END_STATE();
    case 880:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(882);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == ' ')
        ADVANCE(884);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(882);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == ' ')
        ADVANCE(884);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '\t')
        ADVANCE(882);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == ' ')
        ADVANCE(884);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(882);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == ' ')
        ADVANCE(884);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(183);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(883);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 886:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(525);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ':')
        ADVANCE(267);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '>')
        ADVANCE(115);
      if (lookahead == '?')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(117);
      if (lookahead == '[')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
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
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 887:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(887);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(579);
      if (lookahead == '\\')
        ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(888);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(888);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(887);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 891:
      if (lookahead == 'n')
        SKIP(887);
      END_STATE();
    case 892:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(579);
      if (lookahead == '\\')
        ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(893);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 894:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(893);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(893);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(587);
      if (lookahead == '\\')
        SKIP(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(892);
      END_STATE();
    case 896:
      if (lookahead == 'n')
        SKIP(892);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 330},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 341},
  [5] = {.lex_state = 366},
  [6] = {.lex_state = 372},
  [7] = {.lex_state = 330},
  [8] = {.lex_state = 469, .external_lex_state = 2},
  [9] = {.lex_state = 474},
  [10] = {.lex_state = 474},
  [11] = {.lex_state = 481},
  [12] = {.lex_state = 474},
  [13] = {.lex_state = 474},
  [14] = {.lex_state = 489},
  [15] = {.lex_state = 510, .external_lex_state = 3},
  [16] = {.lex_state = 372},
  [17] = {.lex_state = 514, .external_lex_state = 3},
  [18] = {.lex_state = 519},
  [19] = {.lex_state = 527},
  [20] = {.lex_state = 514, .external_lex_state = 3},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 514, .external_lex_state = 3},
  [23] = {.lex_state = 514, .external_lex_state = 3},
  [24] = {.lex_state = 366},
  [25] = {.lex_state = 514, .external_lex_state = 3},
  [26] = {.lex_state = 514, .external_lex_state = 3},
  [27] = {.lex_state = 366},
  [28] = {.lex_state = 330},
  [29] = {.lex_state = 366},
  [30] = {.lex_state = 535},
  [31] = {.lex_state = 366},
  [32] = {.lex_state = 372},
  [33] = {.lex_state = 366},
  [34] = {.lex_state = 539},
  [35] = {.lex_state = 546, .external_lex_state = 3},
  [36] = {.lex_state = 567, .external_lex_state = 3},
  [37] = {.lex_state = 372},
  [38] = {.lex_state = 372},
  [39] = {.lex_state = 539},
  [40] = {.lex_state = 572, .external_lex_state = 4},
  [41] = {.lex_state = 330},
  [42] = {.lex_state = 514, .external_lex_state = 3},
  [43] = {.lex_state = 489},
  [44] = {.lex_state = 577},
  [45] = {.lex_state = 489},
  [46] = {.lex_state = 474},
  [47] = {.lex_state = 577},
  [48] = {.lex_state = 489},
  [49] = {.lex_state = 169},
  [50] = {.lex_state = 594, .external_lex_state = 3},
  [51] = {.lex_state = 539},
  [52] = {.lex_state = 594, .external_lex_state = 3},
  [53] = {.lex_state = 481},
  [54] = {.lex_state = 598, .external_lex_state = 3},
  [55] = {.lex_state = 598, .external_lex_state = 3},
  [56] = {.lex_state = 481},
  [57] = {.lex_state = 594, .external_lex_state = 3},
  [58] = {.lex_state = 594, .external_lex_state = 3},
  [59] = {.lex_state = 603, .external_lex_state = 3},
  [60] = {.lex_state = 489},
  [61] = {.lex_state = 489, .external_lex_state = 3},
  [62] = {.lex_state = 624},
  [63] = {.lex_state = 489},
  [64] = {.lex_state = 330},
  [65] = {.lex_state = 539},
  [66] = {.lex_state = 330},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 330},
  [70] = {.lex_state = 330},
  [71] = {.lex_state = 330},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 631},
  [74] = {.lex_state = 527},
  [75] = {.lex_state = 527},
  [76] = {.lex_state = 527},
  [77] = {.lex_state = 527},
  [78] = {.lex_state = 514, .external_lex_state = 3},
  [79] = {.lex_state = 527},
  [80] = {.lex_state = 527},
  [81] = {.lex_state = 735},
  [82] = {.lex_state = 527},
  [83] = {.lex_state = 527},
  [84] = {.lex_state = 535},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 577},
  [87] = {.lex_state = 577},
  [88] = {.lex_state = 577},
  [89] = {.lex_state = 519},
  [90] = {.lex_state = 527},
  [91] = {.lex_state = 577},
  [92] = {.lex_state = 330},
  [93] = {.lex_state = 577},
  [94] = {.lex_state = 330},
  [95] = {.lex_state = 577},
  [96] = {.lex_state = 330},
  [97] = {.lex_state = 169},
  [98] = {.lex_state = 474},
  [99] = {.lex_state = 514, .external_lex_state = 3},
  [100] = {.lex_state = 366},
  [101] = {.lex_state = 366},
  [102] = {.lex_state = 469, .external_lex_state = 2},
  [103] = {.lex_state = 539},
  [104] = {.lex_state = 372},
  [105] = {.lex_state = 366},
  [106] = {.lex_state = 567, .external_lex_state = 3},
  [107] = {.lex_state = 539},
  [108] = {.lex_state = 539},
  [109] = {.lex_state = 330},
  [110] = {.lex_state = 514, .external_lex_state = 3},
  [111] = {.lex_state = 754},
  [112] = {.lex_state = 754},
  [113] = {.lex_state = 514, .external_lex_state = 3},
  [114] = {.lex_state = 372},
  [115] = {.lex_state = 514, .external_lex_state = 3},
  [116] = {.lex_state = 514, .external_lex_state = 3},
  [117] = {.lex_state = 572, .external_lex_state = 4},
  [118] = {.lex_state = 572, .external_lex_state = 4},
  [119] = {.lex_state = 514, .external_lex_state = 3},
  [120] = {.lex_state = 330},
  [121] = {.lex_state = 330},
  [122] = {.lex_state = 624},
  [123] = {.lex_state = 372},
  [124] = {.lex_state = 469, .external_lex_state = 2},
  [125] = {.lex_state = 474},
  [126] = {.lex_state = 577},
  [127] = {.lex_state = 577},
  [128] = {.lex_state = 577},
  [129] = {.lex_state = 779},
  [130] = {.lex_state = 469, .external_lex_state = 2},
  [131] = {.lex_state = 577},
  [132] = {.lex_state = 577},
  [133] = {.lex_state = 594, .external_lex_state = 3},
  [134] = {.lex_state = 594, .external_lex_state = 3},
  [135] = {.lex_state = 330},
  [136] = {.lex_state = 598, .external_lex_state = 3},
  [137] = {.lex_state = 594, .external_lex_state = 3},
  [138] = {.lex_state = 481},
  [139] = {.lex_state = 598, .external_lex_state = 3},
  [140] = {.lex_state = 598, .external_lex_state = 3},
  [141] = {.lex_state = 598, .external_lex_state = 3},
  [142] = {.lex_state = 594, .external_lex_state = 3},
  [143] = {.lex_state = 784, .external_lex_state = 3},
  [144] = {.lex_state = 789, .external_lex_state = 3},
  [145] = {.lex_state = 789, .external_lex_state = 3},
  [146] = {.lex_state = 489, .external_lex_state = 3},
  [147] = {.lex_state = 794, .external_lex_state = 3},
  [148] = {.lex_state = 799},
  [149] = {.lex_state = 804, .external_lex_state = 3},
  [150] = {.lex_state = 809, .external_lex_state = 3},
  [151] = {.lex_state = 814, .external_lex_state = 3},
  [152] = {.lex_state = 514, .external_lex_state = 3},
  [153] = {.lex_state = 474},
  [154] = {.lex_state = 539},
  [155] = {.lex_state = 330},
  [156] = {.lex_state = 489},
  [157] = {.lex_state = 539},
  [158] = {.lex_state = 779},
  [159] = {.lex_state = 514, .external_lex_state = 3},
  [160] = {.lex_state = 330},
  [161] = {.lex_state = 330},
  [162] = {.lex_state = 819},
  [163] = {.lex_state = 823},
  [164] = {.lex_state = 830},
  [165] = {.lex_state = 330},
  [166] = {.lex_state = 527},
  [167] = {.lex_state = 527},
  [168] = {.lex_state = 819},
  [169] = {.lex_state = 823},
  [170] = {.lex_state = 830},
  [171] = {.lex_state = 527},
  [172] = {.lex_state = 527},
  [173] = {.lex_state = 514, .external_lex_state = 3},
  [174] = {.lex_state = 169},
  [175] = {.lex_state = 330},
  [176] = {.lex_state = 539},
  [177] = {.lex_state = 527},
  [178] = {.lex_state = 366},
  [179] = {.lex_state = 366},
  [180] = {.lex_state = 539},
  [181] = {.lex_state = 577},
  [182] = {.lex_state = 624},
  [183] = {.lex_state = 837, .external_lex_state = 3},
  [184] = {.lex_state = 514, .external_lex_state = 3},
  [185] = {.lex_state = 514, .external_lex_state = 3},
  [186] = {.lex_state = 779},
  [187] = {.lex_state = 842, .external_lex_state = 3},
  [188] = {.lex_state = 624},
  [189] = {.lex_state = 535},
  [190] = {.lex_state = 847, .external_lex_state = 4},
  [191] = {.lex_state = 535},
  [192] = {.lex_state = 330},
  [193] = {.lex_state = 372},
  [194] = {.lex_state = 372},
  [195] = {.lex_state = 372},
  [196] = {.lex_state = 469, .external_lex_state = 2},
  [197] = {.lex_state = 539},
  [198] = {.lex_state = 514, .external_lex_state = 3},
  [199] = {.lex_state = 514, .external_lex_state = 3},
  [200] = {.lex_state = 372},
  [201] = {.lex_state = 851, .external_lex_state = 3},
  [202] = {.lex_state = 539},
  [203] = {.lex_state = 539},
  [204] = {.lex_state = 539},
  [205] = {.lex_state = 514, .external_lex_state = 3},
  [206] = {.lex_state = 539},
  [207] = {.lex_state = 539},
  [208] = {.lex_state = 514, .external_lex_state = 3},
  [209] = {.lex_state = 372},
  [210] = {.lex_state = 572, .external_lex_state = 4},
  [211] = {.lex_state = 514, .external_lex_state = 3},
  [212] = {.lex_state = 572, .external_lex_state = 4},
  [213] = {.lex_state = 330},
  [214] = {.lex_state = 330},
  [215] = {.lex_state = 372},
  [216] = {.lex_state = 489},
  [217] = {.lex_state = 474},
  [218] = {.lex_state = 372},
  [219] = {.lex_state = 856, .external_lex_state = 4},
  [220] = {.lex_state = 865},
  [221] = {.lex_state = 514, .external_lex_state = 3},
  [222] = {.lex_state = 474},
  [223] = {.lex_state = 469, .external_lex_state = 2},
  [224] = {.lex_state = 577},
  [225] = {.lex_state = 577},
  [226] = {.lex_state = 577},
  [227] = {.lex_state = 514, .external_lex_state = 3},
  [228] = {.lex_state = 469, .external_lex_state = 2},
  [229] = {.lex_state = 577},
  [230] = {.lex_state = 598, .external_lex_state = 3},
  [231] = {.lex_state = 594, .external_lex_state = 3},
  [232] = {.lex_state = 598, .external_lex_state = 3},
  [233] = {.lex_state = 598, .external_lex_state = 3},
  [234] = {.lex_state = 598, .external_lex_state = 3},
  [235] = {.lex_state = 481},
  [236] = {.lex_state = 598, .external_lex_state = 3},
  [237] = {.lex_state = 789, .external_lex_state = 3},
  [238] = {.lex_state = 789, .external_lex_state = 3},
  [239] = {.lex_state = 794, .external_lex_state = 3},
  [240] = {.lex_state = 809, .external_lex_state = 3},
  [241] = {.lex_state = 514, .external_lex_state = 3},
  [242] = {.lex_state = 539},
  [243] = {.lex_state = 514, .external_lex_state = 3},
  [244] = {.lex_state = 474},
  [245] = {.lex_state = 539},
  [246] = {.lex_state = 870, .external_lex_state = 3},
  [247] = {.lex_state = 870, .external_lex_state = 3},
  [248] = {.lex_state = 814, .external_lex_state = 3},
  [249] = {.lex_state = 870, .external_lex_state = 3},
  [250] = {.lex_state = 489},
  [251] = {.lex_state = 814, .external_lex_state = 3},
  [252] = {.lex_state = 539},
  [253] = {.lex_state = 489},
  [254] = {.lex_state = 539},
  [255] = {.lex_state = 809, .external_lex_state = 3},
  [256] = {.lex_state = 875, .external_lex_state = 3},
  [257] = {.lex_state = 514, .external_lex_state = 3},
  [258] = {.lex_state = 330},
  [259] = {.lex_state = 330},
  [260] = {.lex_state = 823},
  [261] = {.lex_state = 823},
  [262] = {.lex_state = 830},
  [263] = {.lex_state = 830},
  [264] = {.lex_state = 527},
  [265] = {.lex_state = 527},
  [266] = {.lex_state = 527},
  [267] = {.lex_state = 527},
  [268] = {.lex_state = 880},
  [269] = {.lex_state = 880},
  [270] = {.lex_state = 577},
  [271] = {.lex_state = 577},
  [272] = {.lex_state = 539},
  [273] = {.lex_state = 330},
  [274] = {.lex_state = 330},
  [275] = {.lex_state = 577},
  [276] = {.lex_state = 577},
  [277] = {.lex_state = 330},
  [278] = {.lex_state = 330},
  [279] = {.lex_state = 887, .external_lex_state = 3},
  [280] = {.lex_state = 875, .external_lex_state = 3},
  [281] = {.lex_state = 514, .external_lex_state = 3},
  [282] = {.lex_state = 779},
  [283] = {.lex_state = 624},
  [284] = {.lex_state = 330},
  [285] = {.lex_state = 514, .external_lex_state = 3},
  [286] = {.lex_state = 847, .external_lex_state = 4},
  [287] = {.lex_state = 535},
  [288] = {.lex_state = 539},
  [289] = {.lex_state = 372},
  [290] = {.lex_state = 372},
  [291] = {.lex_state = 539},
  [292] = {.lex_state = 330},
  [293] = {.lex_state = 851, .external_lex_state = 3},
  [294] = {.lex_state = 539},
  [295] = {.lex_state = 539},
  [296] = {.lex_state = 514, .external_lex_state = 3},
  [297] = {.lex_state = 372},
  [298] = {.lex_state = 514, .external_lex_state = 3},
  [299] = {.lex_state = 372},
  [300] = {.lex_state = 514, .external_lex_state = 3},
  [301] = {.lex_state = 539},
  [302] = {.lex_state = 372},
  [303] = {.lex_state = 539},
  [304] = {.lex_state = 514, .external_lex_state = 3},
  [305] = {.lex_state = 372},
  [306] = {.lex_state = 779},
  [307] = {.lex_state = 489},
  [308] = {.lex_state = 474},
  [309] = {.lex_state = 514, .external_lex_state = 3},
  [310] = {.lex_state = 514, .external_lex_state = 3},
  [311] = {.lex_state = 856, .external_lex_state = 4},
  [312] = {.lex_state = 514, .external_lex_state = 3},
  [313] = {.lex_state = 865},
  [314] = {.lex_state = 892},
  [315] = {.lex_state = 514, .external_lex_state = 3},
  [316] = {.lex_state = 469, .external_lex_state = 2},
  [317] = {.lex_state = 514, .external_lex_state = 3},
  [318] = {.lex_state = 469, .external_lex_state = 2},
  [319] = {.lex_state = 598, .external_lex_state = 3},
  [320] = {.lex_state = 598, .external_lex_state = 3},
  [321] = {.lex_state = 809, .external_lex_state = 3},
  [322] = {.lex_state = 514, .external_lex_state = 3},
  [323] = {.lex_state = 372},
  [324] = {.lex_state = 372},
  [325] = {.lex_state = 372},
  [326] = {.lex_state = 870, .external_lex_state = 3},
  [327] = {.lex_state = 870, .external_lex_state = 3},
  [328] = {.lex_state = 814, .external_lex_state = 3},
  [329] = {.lex_state = 489},
  [330] = {.lex_state = 809, .external_lex_state = 3},
  [331] = {.lex_state = 809, .external_lex_state = 3},
  [332] = {.lex_state = 514, .external_lex_state = 3},
  [333] = {.lex_state = 875, .external_lex_state = 3},
  [334] = {.lex_state = 823},
  [335] = {.lex_state = 830},
  [336] = {.lex_state = 527},
  [337] = {.lex_state = 880},
  [338] = {.lex_state = 514, .external_lex_state = 3},
  [339] = {.lex_state = 366},
  [340] = {.lex_state = 577},
  [341] = {.lex_state = 366},
  [342] = {.lex_state = 875, .external_lex_state = 3},
  [343] = {.lex_state = 875, .external_lex_state = 3},
  [344] = {.lex_state = 514, .external_lex_state = 3},
  [345] = {.lex_state = 875, .external_lex_state = 3},
  [346] = {.lex_state = 847, .external_lex_state = 4},
  [347] = {.lex_state = 330},
  [348] = {.lex_state = 514, .external_lex_state = 3},
  [349] = {.lex_state = 372},
  [350] = {.lex_state = 539},
  [351] = {.lex_state = 372},
  [352] = {.lex_state = 330},
  [353] = {.lex_state = 372},
  [354] = {.lex_state = 514, .external_lex_state = 3},
  [355] = {.lex_state = 330},
  [356] = {.lex_state = 372},
  [357] = {.lex_state = 372},
  [358] = {.lex_state = 539},
  [359] = {.lex_state = 514, .external_lex_state = 3},
  [360] = {.lex_state = 539},
  [361] = {.lex_state = 372},
  [362] = {.lex_state = 514, .external_lex_state = 3},
  [363] = {.lex_state = 372},
  [364] = {.lex_state = 372},
  [365] = {.lex_state = 779},
  [366] = {.lex_state = 856, .external_lex_state = 4},
  [367] = {.lex_state = 514, .external_lex_state = 3},
  [368] = {.lex_state = 514, .external_lex_state = 3},
  [369] = {.lex_state = 865},
  [370] = {.lex_state = 514, .external_lex_state = 3},
  [371] = {.lex_state = 514, .external_lex_state = 3},
  [372] = {.lex_state = 514, .external_lex_state = 3},
  [373] = {.lex_state = 514, .external_lex_state = 3},
  [374] = {.lex_state = 514, .external_lex_state = 3},
  [375] = {.lex_state = 372},
  [376] = {.lex_state = 474},
  [377] = {.lex_state = 539},
  [378] = {.lex_state = 372},
  [379] = {.lex_state = 814, .external_lex_state = 3},
  [380] = {.lex_state = 474},
  [381] = {.lex_state = 372},
  [382] = {.lex_state = 814, .external_lex_state = 3},
  [383] = {.lex_state = 514, .external_lex_state = 3},
  [384] = {.lex_state = 169},
  [385] = {.lex_state = 481},
  [386] = {.lex_state = 481},
  [387] = {.lex_state = 366},
  [388] = {.lex_state = 527},
  [389] = {.lex_state = 577},
  [390] = {.lex_state = 330},
  [391] = {.lex_state = 577},
  [392] = {.lex_state = 577},
  [393] = {.lex_state = 366},
  [394] = {.lex_state = 481},
  [395] = {.lex_state = 481},
  [396] = {.lex_state = 875, .external_lex_state = 3},
  [397] = {.lex_state = 847, .external_lex_state = 4},
  [398] = {.lex_state = 372},
  [399] = {.lex_state = 372},
  [400] = {.lex_state = 372},
  [401] = {.lex_state = 372},
  [402] = {.lex_state = 372},
  [403] = {.lex_state = 539},
  [404] = {.lex_state = 372},
  [405] = {.lex_state = 330},
  [406] = {.lex_state = 372},
  [407] = {.lex_state = 514, .external_lex_state = 3},
  [408] = {.lex_state = 856, .external_lex_state = 4},
  [409] = {.lex_state = 865},
  [410] = {.lex_state = 514, .external_lex_state = 3},
  [411] = {.lex_state = 372},
  [412] = {.lex_state = 539},
  [413] = {.lex_state = 372},
  [414] = {.lex_state = 474},
  [415] = {.lex_state = 539},
  [416] = {.lex_state = 372},
  [417] = {.lex_state = 814, .external_lex_state = 3},
  [418] = {.lex_state = 474},
  [419] = {.lex_state = 481},
  [420] = {.lex_state = 330},
  [421] = {.lex_state = 577},
  [422] = {.lex_state = 527},
  [423] = {.lex_state = 341},
  [424] = {.lex_state = 539},
  [425] = {.lex_state = 366},
  [426] = {.lex_state = 366},
  [427] = {.lex_state = 366},
  [428] = {.lex_state = 366},
  [429] = {.lex_state = 366},
  [430] = {.lex_state = 366},
  [431] = {.lex_state = 519},
  [432] = {.lex_state = 527},
  [433] = {.lex_state = 366},
  [434] = {.lex_state = 366},
  [435] = {.lex_state = 366},
  [436] = {.lex_state = 366},
  [437] = {.lex_state = 366},
  [438] = {.lex_state = 366},
  [439] = {.lex_state = 481},
  [440] = {.lex_state = 372},
  [441] = {.lex_state = 514, .external_lex_state = 3},
  [442] = {.lex_state = 372},
  [443] = {.lex_state = 372},
  [444] = {.lex_state = 330},
  [445] = {.lex_state = 372},
  [446] = {.lex_state = 539},
  [447] = {.lex_state = 372},
  [448] = {.lex_state = 372},
  [449] = {.lex_state = 372},
  [450] = {.lex_state = 372},
  [451] = {.lex_state = 372},
  [452] = {.lex_state = 330},
  [453] = {.lex_state = 577},
  [454] = {.lex_state = 366},
  [455] = {.lex_state = 330},
  [456] = {.lex_state = 366},
  [457] = {.lex_state = 366},
  [458] = {.lex_state = 330},
  [459] = {.lex_state = 577},
  [460] = {.lex_state = 330},
  [461] = {.lex_state = 366},
  [462] = {.lex_state = 527},
  [463] = {.lex_state = 366},
  [464] = {.lex_state = 539},
  [465] = {.lex_state = 366},
  [466] = {.lex_state = 514, .external_lex_state = 3},
  [467] = {.lex_state = 372},
  [468] = {.lex_state = 372},
  [469] = {.lex_state = 372},
  [470] = {.lex_state = 330},
  [471] = {.lex_state = 372},
  [472] = {.lex_state = 372},
  [473] = {.lex_state = 577},
  [474] = {.lex_state = 366},
  [475] = {.lex_state = 366},
  [476] = {.lex_state = 366},
  [477] = {.lex_state = 366},
  [478] = {.lex_state = 366},
  [479] = {.lex_state = 366},
  [480] = {.lex_state = 330},
  [481] = {.lex_state = 514, .external_lex_state = 3},
  [482] = {.lex_state = 372},
  [483] = {.lex_state = 372},
  [484] = {.lex_state = 372},
  [485] = {.lex_state = 366},
  [486] = {.lex_state = 366},
  [487] = {.lex_state = 372},
  [488] = {.lex_state = 514, .external_lex_state = 3},
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DASH_GT] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(3),
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
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [sym__vertical_tab] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(3),
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
    [sym__integer_literal] = ACTIONS(3),
  },
  [1] = {
    [sym_module] = STATE(21),
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_module_repeat1] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(52),
  },
  [3] = {
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(33),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
  },
  [4] = {
    [sym__identifier] = STATE(36),
    [anon_sym_qualified] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [5] = {
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [6] = {
    [sym_foreign_import] = STATE(38),
    [anon_sym_import] = ACTIONS(60),
    [sym_foreign_export] = ACTIONS(62),
    [sym_comment] = ACTIONS(52),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(52),
  },
  [8] = {
    [sym_statement_list] = STATE(42),
    [sym__layout_open_brace] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [9] = {
    [sym_context] = STATE(45),
    [sym_class] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(52),
  },
  [10] = {
    [sym_context] = STATE(48),
    [sym_class] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(52),
  },
  [11] = {
    [sym__op] = STATE(54),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym_integer] = STATE(56),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [12] = {
    [sym_context] = STATE(60),
    [sym_class] = STATE(46),
    [sym_simple_type] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(52),
  },
  [13] = {
    [sym_context] = STATE(63),
    [sym_class] = STATE(46),
    [sym_simple_type] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(52),
  },
  [14] = {
    [sym_simple_type] = STATE(66),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_COLON_COLON] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
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
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [sym__integer_literal] = ACTIONS(96),
    [sym__octal_literal] = ACTIONS(96),
    [sym__hexidecimal_literal] = ACTIONS(96),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COLON_COLON] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_comment] = ACTIONS(52),
  },
  [18] = {
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(71),
    [sym__large] = STATE(71),
    [sym__symbol] = STATE(71),
    [sym__special] = STATE(71),
    [sym__escape] = STATE(70),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(116),
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
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__space] = ACTIONS(112),
  },
  [19] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(83),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment] = ACTIONS(52),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_comment] = ACTIONS(52),
  },
  [24] = {
    [sym__apat] = STATE(92),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(94),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(166),
    [sym_comment] = ACTIONS(52),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_comment] = ACTIONS(52),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_BQUOTE] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(96),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
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
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_TILDE] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [sym__integer_literal] = ACTIONS(96),
    [sym__octal_literal] = ACTIONS(96),
    [sym__hexidecimal_literal] = ACTIONS(96),
  },
  [28] = {
    [anon_sym_COLON_COLON] = ACTIONS(172),
    [sym_comment] = ACTIONS(52),
  },
  [29] = {
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(174),
    [sym_variable_identifier] = ACTIONS(174),
    [sym_constructor_identifier] = ACTIONS(174),
    [sym_module_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [anon_sym_AMP] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(174),
    [sym__integer_literal] = ACTIONS(174),
    [sym__octal_literal] = ACTIONS(174),
    [sym__hexidecimal_literal] = ACTIONS(174),
  },
  [30] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(99),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [31] = {
    [sym__symbol] = STATE(101),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(178),
    [sym__octal_literal] = ACTIONS(178),
    [sym__hexidecimal_literal] = ACTIONS(178),
  },
  [32] = {
    [sym_module_exports] = STATE(104),
    [anon_sym_where] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(52),
  },
  [33] = {
    [sym__symbol] = STATE(101),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(186),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_module_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(186),
    [sym__octal_literal] = ACTIONS(186),
    [sym__hexidecimal_literal] = ACTIONS(186),
  },
  [34] = {
    [sym__identifier] = STATE(106),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [35] = {
    [sym__layout_semicolon] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_hiding] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym_import_specification] = STATE(110),
    [sym__layout_semicolon] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_as] = ACTIONS(200),
    [anon_sym_hiding] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [anon_sym_ccall] = ACTIONS(204),
    [anon_sym_stdcall] = ACTIONS(204),
    [anon_sym_cplusplus] = ACTIONS(204),
    [anon_sym_jvm] = ACTIONS(204),
    [anon_sym_dotnet] = ACTIONS(204),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [sym_calling_convention] = STATE(112),
    [anon_sym_ccall] = ACTIONS(206),
    [anon_sym_stdcall] = ACTIONS(206),
    [anon_sym_cplusplus] = ACTIONS(206),
    [anon_sym_jvm] = ACTIONS(206),
    [anon_sym_dotnet] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [sym__identifier] = STATE(114),
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [40] = {
    [sym__expression] = STATE(116),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(117),
    [sym__literal] = STATE(25),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(118),
    [sym__layout_close_brace] = ACTIONS(212),
    [anon_sym_do] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym__integer_literal] = ACTIONS(222),
    [sym__octal_literal] = ACTIONS(222),
    [sym__hexidecimal_literal] = ACTIONS(222),
  },
  [41] = {
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(120),
    [sym__literal] = STATE(25),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(121),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_do] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym__integer_literal] = ACTIONS(222),
    [sym__octal_literal] = ACTIONS(222),
    [sym__hexidecimal_literal] = ACTIONS(222),
  },
  [42] = {
    [sym__layout_semicolon] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [43] = {
    [sym_class] = STATE(123),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [anon_sym_where] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(234),
    [sym_variable_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [sym_constructor_identifier] = ACTIONS(238),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [anon_sym_EQ_GT] = ACTIONS(240),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [aux_sym_type_class_repeat1] = STATE(131),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(234),
    [sym_variable_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [sym_constructor_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(134),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [50] = {
    [sym__layout_semicolon] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
  },
  [51] = {
    [sym__identifier] = STATE(135),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [52] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(137),
    [sym__layout_semicolon] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(256),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_1] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(256),
  },
  [54] = {
    [aux_sym_fixity_repeat1] = STATE(139),
    [sym__layout_semicolon] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(262),
    [sym_comment] = ACTIONS(52),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [sym__op] = STATE(140),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [57] = {
    [sym__layout_semicolon] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(174),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [anon_sym_AMP] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(174),
  },
  [58] = {
    [sym__symbol] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [59] = {
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [60] = {
    [sym_simple_type] = STATE(146),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [sym_constructors] = STATE(150),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(152),
    [sym__layout_semicolon] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(286),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [aux_sym_type_class_repeat1] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [sym_simple_type] = STATE(155),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(296),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [aux_sym_type_class_repeat1] = STATE(154),
    [anon_sym_EQ] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(300),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(302),
  },
  [68] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(304),
  },
  [69] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(306),
  },
  [70] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(308),
  },
  [71] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(310),
  },
  [72] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(312),
  },
  [73] = {
    [sym__char_escape] = STATE(161),
    [sym__ascii] = STATE(161),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_x] = ACTIONS(320),
    [anon_sym_X] = ACTIONS(320),
    [anon_sym_o] = ACTIONS(322),
    [anon_sym_O] = ACTIONS(322),
    [anon_sym_a] = ACTIONS(314),
    [anon_sym_b] = ACTIONS(314),
    [anon_sym_f] = ACTIONS(314),
    [anon_sym_n] = ACTIONS(314),
    [anon_sym_r] = ACTIONS(314),
    [anon_sym_t] = ACTIONS(314),
    [anon_sym_v] = ACTIONS(314),
    [anon_sym_NUL] = ACTIONS(324),
    [anon_sym_SOH] = ACTIONS(324),
    [anon_sym_STX] = ACTIONS(324),
    [anon_sym_ETX] = ACTIONS(324),
    [anon_sym_EOT] = ACTIONS(324),
    [anon_sym_ENQ] = ACTIONS(324),
    [anon_sym_ACK] = ACTIONS(324),
    [anon_sym_BEL] = ACTIONS(324),
    [anon_sym_BS] = ACTIONS(324),
    [anon_sym_HT] = ACTIONS(324),
    [anon_sym_LF] = ACTIONS(324),
    [anon_sym_VT] = ACTIONS(324),
    [anon_sym_FF] = ACTIONS(324),
    [anon_sym_CR] = ACTIONS(324),
    [anon_sym_SO] = ACTIONS(324),
    [anon_sym_SI] = ACTIONS(324),
    [anon_sym_DLE] = ACTIONS(324),
    [anon_sym_DC1] = ACTIONS(324),
    [anon_sym_DC2] = ACTIONS(324),
    [anon_sym_DC3] = ACTIONS(324),
    [anon_sym_DC4] = ACTIONS(324),
    [anon_sym_NAK] = ACTIONS(324),
    [anon_sym_SYN] = ACTIONS(324),
    [anon_sym_ETB] = ACTIONS(324),
    [anon_sym_CAN] = ACTIONS(324),
    [anon_sym_EM] = ACTIONS(324),
    [anon_sym_SUB] = ACTIONS(324),
    [anon_sym_ESC] = ACTIONS(324),
    [anon_sym_FS] = ACTIONS(324),
    [anon_sym_GS] = ACTIONS(324),
    [anon_sym_RS] = ACTIONS(324),
    [anon_sym_US] = ACTIONS(324),
    [anon_sym_SP] = ACTIONS(324),
    [anon_sym_DEL] = ACTIONS(324),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(326),
    [sym__ascii_large] = ACTIONS(326),
    [anon_sym_POUND] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_1] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym__space] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [sym__tab] = ACTIONS(326),
    [sym__vertical_tab] = ACTIONS(326),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_BQUOTE] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(328),
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
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [sym__space] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
    [sym__tab] = ACTIONS(328),
    [sym__vertical_tab] = ACTIONS(328),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_AT] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_BQUOTE] = ACTIONS(330),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_BANG] = ACTIONS(330),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(330),
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
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_TILDE] = ACTIONS(330),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym__space] = ACTIONS(330),
    [sym__newline] = ACTIONS(330),
    [sym__tab] = ACTIONS(330),
    [sym__vertical_tab] = ACTIONS(330),
  },
  [78] = {
    [sym__layout_semicolon] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(334),
    [sym_comment] = ACTIONS(52),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_BQUOTE] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_BANG] = ACTIONS(336),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(336),
    [anon_sym_BSLASH] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [sym__space] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
    [sym__tab] = ACTIONS(336),
    [sym__vertical_tab] = ACTIONS(336),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym__space] = ACTIONS(338),
    [sym__newline] = ACTIONS(338),
    [sym__tab] = ACTIONS(338),
    [sym__vertical_tab] = ACTIONS(338),
  },
  [81] = {
    [sym__char_escape] = STATE(167),
    [sym__ascii] = STATE(167),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(346),
    [anon_sym_X] = ACTIONS(346),
    [anon_sym_o] = ACTIONS(348),
    [anon_sym_O] = ACTIONS(348),
    [anon_sym_a] = ACTIONS(340),
    [anon_sym_b] = ACTIONS(340),
    [anon_sym_f] = ACTIONS(340),
    [anon_sym_n] = ACTIONS(340),
    [anon_sym_r] = ACTIONS(340),
    [anon_sym_t] = ACTIONS(340),
    [anon_sym_v] = ACTIONS(340),
    [anon_sym_NUL] = ACTIONS(350),
    [anon_sym_SOH] = ACTIONS(350),
    [anon_sym_STX] = ACTIONS(350),
    [anon_sym_ETX] = ACTIONS(350),
    [anon_sym_EOT] = ACTIONS(350),
    [anon_sym_ENQ] = ACTIONS(350),
    [anon_sym_ACK] = ACTIONS(350),
    [anon_sym_BEL] = ACTIONS(350),
    [anon_sym_BS] = ACTIONS(350),
    [anon_sym_HT] = ACTIONS(350),
    [anon_sym_LF] = ACTIONS(350),
    [anon_sym_VT] = ACTIONS(350),
    [anon_sym_FF] = ACTIONS(350),
    [anon_sym_CR] = ACTIONS(350),
    [anon_sym_SO] = ACTIONS(350),
    [anon_sym_SI] = ACTIONS(350),
    [anon_sym_DLE] = ACTIONS(350),
    [anon_sym_DC1] = ACTIONS(350),
    [anon_sym_DC2] = ACTIONS(350),
    [anon_sym_DC3] = ACTIONS(350),
    [anon_sym_DC4] = ACTIONS(350),
    [anon_sym_NAK] = ACTIONS(350),
    [anon_sym_SYN] = ACTIONS(350),
    [anon_sym_ETB] = ACTIONS(350),
    [anon_sym_CAN] = ACTIONS(350),
    [anon_sym_EM] = ACTIONS(350),
    [anon_sym_SUB] = ACTIONS(350),
    [anon_sym_ESC] = ACTIONS(350),
    [anon_sym_FS] = ACTIONS(350),
    [anon_sym_GS] = ACTIONS(350),
    [anon_sym_RS] = ACTIONS(350),
    [anon_sym_US] = ACTIONS(350),
    [anon_sym_SP] = ACTIONS(350),
    [anon_sym_DEL] = ACTIONS(350),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_BQUOTE] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(352),
    [anon_sym_BSLASH] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(352),
    [sym__space] = ACTIONS(352),
    [sym__newline] = ACTIONS(352),
    [sym__tab] = ACTIONS(352),
    [sym__vertical_tab] = ACTIONS(352),
  },
  [83] = {
    [sym__gap] = STATE(172),
    [sym__graphic] = STATE(172),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(172),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(358),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_1] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [85] = {
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(174),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
  },
  [86] = {
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_BQUOTE] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(360),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [sym_comment] = ACTIONS(52),
  },
  [89] = {
    [sym__graphic] = STATE(175),
    [sym__small] = STATE(71),
    [sym__large] = STATE(71),
    [sym__symbol] = STATE(71),
    [sym__special] = STATE(71),
    [sym__escape] = STATE(175),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(116),
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
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__space] = ACTIONS(364),
  },
  [90] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(177),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_comment] = ACTIONS(52),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(52),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(372),
    [sym_comment] = ACTIONS(52),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [sym_comment] = ACTIONS(52),
  },
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [97] = {
    [sym__symbol] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
  },
  [98] = {
    [sym__type] = STATE(184),
    [sym_function_type] = STATE(185),
    [sym_context] = STATE(186),
    [sym_class] = STATE(46),
    [sym_simple_type] = STATE(187),
    [aux_sym_function_type_repeat1] = STATE(188),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(380),
    [sym_comment] = ACTIONS(52),
  },
  [99] = {
    [sym__layout_semicolon] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comment] = ACTIONS(52),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_BANG] = ACTIONS(186),
    [sym_variable_identifier] = ACTIONS(186),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_module_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_1] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(186),
    [sym__integer_literal] = ACTIONS(186),
    [sym__octal_literal] = ACTIONS(186),
    [sym__hexidecimal_literal] = ACTIONS(186),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym__] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_constructor_identifier] = ACTIONS(386),
    [sym_module_identifier] = ACTIONS(386),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_BSLASH] = ACTIONS(386),
    [sym__integer_literal] = ACTIONS(386),
    [sym__octal_literal] = ACTIONS(386),
    [sym__hexidecimal_literal] = ACTIONS(386),
  },
  [102] = {
    [sym_declarations] = STATE(192),
    [sym__layout_open_brace] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(52),
  },
  [103] = {
    [sym_export] = STATE(194),
    [sym__identifier] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [104] = {
    [anon_sym_where] = ACTIONS(394),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_BQUOTE] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym__] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_BANG] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(396),
    [sym_constructor_identifier] = ACTIONS(396),
    [sym_module_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
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
    [anon_sym_CARET] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_BSLASH] = ACTIONS(396),
    [sym__integer_literal] = ACTIONS(396),
    [sym__octal_literal] = ACTIONS(396),
    [sym__hexidecimal_literal] = ACTIONS(396),
  },
  [106] = {
    [sym_import_specification] = STATE(198),
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_as] = ACTIONS(402),
    [anon_sym_hiding] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
    [sym__identifier] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [108] = {
    [sym__identifier] = STATE(201),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(52),
  },
  [110] = {
    [sym__layout_semicolon] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(400),
    [sym_comment] = ACTIONS(52),
  },
  [111] = {
    [anon_sym_unsafe] = ACTIONS(408),
    [anon_sym_safe] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_constructor_identifier] = ACTIONS(410),
    [sym_module_identifier] = ACTIONS(410),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(408),
  },
  [112] = {
    [sym_safety] = STATE(204),
    [sym_type_signature] = STATE(205),
    [sym__identifier] = STATE(28),
    [sym_string] = STATE(206),
    [anon_sym_unsafe] = ACTIONS(412),
    [anon_sym_safe] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(414),
  },
  [113] = {
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [114] = {
    [aux_sym_export_repeat1] = STATE(209),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(426),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(430),
    [sym_comment] = ACTIONS(52),
  },
  [117] = {
    [sym__layout_close_brace] = ACTIONS(432),
    [anon_sym_do] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [sym__integer_literal] = ACTIONS(434),
    [sym__octal_literal] = ACTIONS(434),
    [sym__hexidecimal_literal] = ACTIONS(434),
  },
  [118] = {
    [sym__expression] = STATE(116),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(212),
    [sym__literal] = STATE(25),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_close_brace] = ACTIONS(438),
    [anon_sym_do] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym__integer_literal] = ACTIONS(222),
    [sym__octal_literal] = ACTIONS(222),
    [sym__hexidecimal_literal] = ACTIONS(222),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [120] = {
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_do] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [sym__integer_literal] = ACTIONS(434),
    [sym__octal_literal] = ACTIONS(434),
    [sym__hexidecimal_literal] = ACTIONS(434),
  },
  [121] = {
    [sym__expression] = STATE(119),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(214),
    [sym__literal] = STATE(25),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_do] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym__integer_literal] = ACTIONS(222),
    [sym__octal_literal] = ACTIONS(222),
    [sym__hexidecimal_literal] = ACTIONS(222),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(234),
    [sym_variable_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [aux_sym_context_repeat1] = STATE(218),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [124] = {
    [sym_general_declarations] = STATE(221),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [aux_sym_type_class_repeat1] = STATE(222),
    [sym_variable_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [anon_sym_where] = ACTIONS(456),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [anon_sym_where] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [aux_sym_type_class_repeat1] = STATE(226),
    [anon_sym_where] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [sym_variable_identifier] = ACTIONS(468),
    [sym_constructor_identifier] = ACTIONS(470),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [sym_general_declarations] = STATE(227),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [anon_sym_where] = ACTIONS(472),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [aux_sym_type_class_repeat1] = STATE(229),
    [anon_sym_where] = ACTIONS(472),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [133] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(231),
    [sym__layout_semicolon] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [134] = {
    [sym__symbol] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [135] = {
    [anon_sym_BQUOTE] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [136] = {
    [sym__layout_semicolon] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [sym_comment] = ACTIONS(52),
  },
  [137] = {
    [sym__symbol] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [138] = {
    [sym__op] = STATE(234),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [aux_sym_fixity_repeat1] = STATE(236),
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(262),
    [sym_comment] = ACTIONS(52),
  },
  [141] = {
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_BSLASH] = ACTIONS(386),
  },
  [143] = {
    [sym__layout_semicolon] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [anon_sym_deriving] = ACTIONS(456),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_constructor_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(502),
    [sym_variable_identifier] = ACTIONS(504),
    [sym_constructor_identifier] = ACTIONS(506),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(508),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym_constructors] = STATE(240),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(241),
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_EQ] = ACTIONS(514),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [sym_constructors] = STATE(240),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(241),
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [148] = {
    [sym__identifier] = STATE(243),
    [anon_sym_LPAREN] = ACTIONS(516),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [sym_strict] = STATE(247),
    [sym__identifier] = STATE(247),
    [sym_fields] = STATE(248),
    [aux_sym_constructor_repeat1] = STATE(249),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_deriving] = ACTIONS(520),
    [anon_sym_BANG] = ACTIONS(524),
    [sym_variable_identifier] = ACTIONS(526),
    [sym_constructor_identifier] = ACTIONS(526),
    [sym_module_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [sym_deriving] = STATE(241),
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [aux_sym_constructors_repeat1] = STATE(251),
    [sym__layout_semicolon] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(532),
    [anon_sym_deriving] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [154] = {
    [anon_sym_EQ] = ACTIONS(502),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [anon_sym_EQ] = ACTIONS(536),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [sym_new_constructor] = STATE(255),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(52),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [158] = {
    [sym__type] = STATE(257),
    [sym_function_type] = STATE(185),
    [sym_simple_type] = STATE(187),
    [aux_sym_function_type_repeat1] = STATE(188),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(52),
  },
  [159] = {
    [sym__layout_semicolon] = ACTIONS(542),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_comment] = ACTIONS(52),
  },
  [160] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(546),
  },
  [161] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(548),
  },
  [162] = {
    [sym__cntrl] = STATE(259),
    [anon_sym_AT] = ACTIONS(550),
    [anon_sym__] = ACTIONS(550),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(550),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_BSLASH] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(550),
    [anon_sym_RBRACK] = ACTIONS(550),
  },
  [163] = {
    [aux_sym__escape_repeat1] = STATE(261),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(552),
  },
  [164] = {
    [aux_sym__escape_repeat2] = STATE(263),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(554),
  },
  [165] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(556),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_RBRACE] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_BQUOTE] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [anon_sym_COLON] = ACTIONS(558),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_BANG] = ACTIONS(558),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(558),
    [anon_sym_DQUOTE] = ACTIONS(558),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(558),
    [sym__ascii_large] = ACTIONS(558),
    [anon_sym_POUND] = ACTIONS(558),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_PERCENT] = ACTIONS(558),
    [anon_sym_AMP] = ACTIONS(558),
    [anon_sym_1] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DOT] = ACTIONS(558),
    [anon_sym_SLASH] = ACTIONS(558),
    [anon_sym_LT] = ACTIONS(558),
    [anon_sym_GT] = ACTIONS(558),
    [anon_sym_QMARK] = ACTIONS(558),
    [anon_sym_CARET] = ACTIONS(558),
    [anon_sym_TILDE] = ACTIONS(558),
    [anon_sym_BSLASH] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(558),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym__space] = ACTIONS(558),
    [sym__newline] = ACTIONS(558),
    [sym__tab] = ACTIONS(558),
    [sym__vertical_tab] = ACTIONS(558),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_LBRACE] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(560),
    [anon_sym_AT] = ACTIONS(560),
    [anon_sym_EQ] = ACTIONS(560),
    [anon_sym_BQUOTE] = ACTIONS(560),
    [anon_sym_DASH] = ACTIONS(560),
    [anon_sym__] = ACTIONS(560),
    [anon_sym_COLON] = ACTIONS(560),
    [anon_sym_PIPE] = ACTIONS(560),
    [anon_sym_BANG] = ACTIONS(560),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(560),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(560),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(560),
    [sym__ascii_large] = ACTIONS(560),
    [anon_sym_POUND] = ACTIONS(560),
    [anon_sym_DOLLAR] = ACTIONS(560),
    [anon_sym_PERCENT] = ACTIONS(560),
    [anon_sym_AMP] = ACTIONS(560),
    [anon_sym_1] = ACTIONS(560),
    [anon_sym_PLUS] = ACTIONS(560),
    [anon_sym_DOT] = ACTIONS(560),
    [anon_sym_SLASH] = ACTIONS(560),
    [anon_sym_LT] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(560),
    [anon_sym_QMARK] = ACTIONS(560),
    [anon_sym_CARET] = ACTIONS(560),
    [anon_sym_TILDE] = ACTIONS(560),
    [anon_sym_BSLASH] = ACTIONS(560),
    [anon_sym_LBRACK] = ACTIONS(560),
    [anon_sym_RBRACK] = ACTIONS(560),
    [sym__space] = ACTIONS(560),
    [sym__newline] = ACTIONS(560),
    [sym__tab] = ACTIONS(560),
    [sym__vertical_tab] = ACTIONS(560),
  },
  [168] = {
    [sym__cntrl] = STATE(265),
    [anon_sym_AT] = ACTIONS(562),
    [anon_sym__] = ACTIONS(562),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(562),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_BSLASH] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
  },
  [169] = {
    [aux_sym__escape_repeat1] = STATE(267),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(564),
  },
  [170] = {
    [aux_sym__escape_repeat2] = STATE(269),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(566),
  },
  [171] = {
    [anon_sym_SEMI] = ACTIONS(568),
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_RBRACE] = ACTIONS(568),
    [anon_sym_LPAREN] = ACTIONS(568),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_AT] = ACTIONS(568),
    [anon_sym_EQ] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym__] = ACTIONS(568),
    [anon_sym_COLON] = ACTIONS(568),
    [anon_sym_PIPE] = ACTIONS(568),
    [anon_sym_BANG] = ACTIONS(568),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(568),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(568),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(568),
    [sym__ascii_large] = ACTIONS(568),
    [anon_sym_POUND] = ACTIONS(568),
    [anon_sym_DOLLAR] = ACTIONS(568),
    [anon_sym_PERCENT] = ACTIONS(568),
    [anon_sym_AMP] = ACTIONS(568),
    [anon_sym_1] = ACTIONS(568),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(568),
    [anon_sym_SLASH] = ACTIONS(568),
    [anon_sym_LT] = ACTIONS(568),
    [anon_sym_GT] = ACTIONS(568),
    [anon_sym_QMARK] = ACTIONS(568),
    [anon_sym_CARET] = ACTIONS(568),
    [anon_sym_TILDE] = ACTIONS(568),
    [anon_sym_BSLASH] = ACTIONS(568),
    [anon_sym_LBRACK] = ACTIONS(568),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym__space] = ACTIONS(568),
    [sym__newline] = ACTIONS(568),
    [sym__tab] = ACTIONS(568),
    [sym__vertical_tab] = ACTIONS(568),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(570),
    [anon_sym_LBRACE] = ACTIONS(570),
    [anon_sym_RBRACE] = ACTIONS(570),
    [anon_sym_LPAREN] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_AT] = ACTIONS(570),
    [anon_sym_EQ] = ACTIONS(570),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [anon_sym_DASH] = ACTIONS(570),
    [anon_sym__] = ACTIONS(570),
    [anon_sym_COLON] = ACTIONS(570),
    [anon_sym_PIPE] = ACTIONS(570),
    [anon_sym_BANG] = ACTIONS(570),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(570),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(570),
    [sym__ascii_large] = ACTIONS(570),
    [anon_sym_POUND] = ACTIONS(570),
    [anon_sym_DOLLAR] = ACTIONS(570),
    [anon_sym_PERCENT] = ACTIONS(570),
    [anon_sym_AMP] = ACTIONS(570),
    [anon_sym_1] = ACTIONS(570),
    [anon_sym_PLUS] = ACTIONS(570),
    [anon_sym_DOT] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_LT] = ACTIONS(570),
    [anon_sym_GT] = ACTIONS(570),
    [anon_sym_QMARK] = ACTIONS(570),
    [anon_sym_CARET] = ACTIONS(570),
    [anon_sym_TILDE] = ACTIONS(570),
    [anon_sym_BSLASH] = ACTIONS(570),
    [anon_sym_LBRACK] = ACTIONS(570),
    [anon_sym_RBRACK] = ACTIONS(570),
    [sym__space] = ACTIONS(570),
    [sym__newline] = ACTIONS(570),
    [sym__tab] = ACTIONS(570),
    [sym__vertical_tab] = ACTIONS(570),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_comment] = ACTIONS(52),
  },
  [174] = {
    [sym__symbol] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
  },
  [175] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(578),
  },
  [176] = {
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(580),
    [sym_module_identifier] = ACTIONS(580),
    [sym_comment] = ACTIONS(52),
  },
  [177] = {
    [sym__gap] = STATE(172),
    [sym__graphic] = STATE(172),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(172),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [178] = {
    [sym__apat] = STATE(273),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(274),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(275),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [179] = {
    [sym__apat] = STATE(276),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(94),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [180] = {
    [sym__fpat] = STATE(277),
    [sym__identifier] = STATE(278),
    [anon_sym_RBRACE] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(494),
    [anon_sym_AT] = ACTIONS(494),
    [anon_sym_BQUOTE] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(494),
    [sym_comment] = ACTIONS(52),
  },
  [182] = {
    [anon_sym_DASH_GT] = ACTIONS(586),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [aux_sym_type_class_repeat1] = STATE(280),
    [sym__layout_semicolon] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_DASH_GT] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(588),
    [sym_comment] = ACTIONS(52),
  },
  [184] = {
    [sym__layout_semicolon] = ACTIONS(590),
    [anon_sym_SEMI] = ACTIONS(592),
    [sym_comment] = ACTIONS(52),
  },
  [185] = {
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(596),
    [sym_comment] = ACTIONS(52),
  },
  [186] = {
    [sym__type] = STATE(281),
    [sym_function_type] = STATE(185),
    [sym_simple_type] = STATE(187),
    [aux_sym_function_type_repeat1] = STATE(188),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(52),
  },
  [187] = {
    [sym__layout_semicolon] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(596),
    [anon_sym_DASH_GT] = ACTIONS(598),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [anon_sym_DASH_GT] = ACTIONS(598),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_import] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(602),
    [anon_sym_DASH] = ACTIONS(602),
    [anon_sym_foreign] = ACTIONS(602),
    [anon_sym_default] = ACTIONS(602),
    [anon_sym_do] = ACTIONS(602),
    [anon_sym_class] = ACTIONS(602),
    [anon_sym_instance] = ACTIONS(602),
    [anon_sym_infixl] = ACTIONS(602),
    [anon_sym_infixr] = ACTIONS(602),
    [anon_sym_infix] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_data] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(602),
    [anon_sym_newtype] = ACTIONS(602),
    [anon_sym_BANG] = ACTIONS(602),
    [anon_sym_type] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(602),
    [sym_constructor_identifier] = ACTIONS(602),
    [sym_module_identifier] = ACTIONS(602),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(602),
    [anon_sym_PERCENT] = ACTIONS(602),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_1] = ACTIONS(602),
    [anon_sym_PLUS] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_SLASH] = ACTIONS(602),
    [anon_sym_LT] = ACTIONS(602),
    [anon_sym_GT] = ACTIONS(602),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_CARET] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [sym__integer_literal] = ACTIONS(602),
    [sym__octal_literal] = ACTIONS(602),
    [sym__hexidecimal_literal] = ACTIONS(602),
  },
  [190] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(285),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_module_repeat1] = STATE(286),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(604),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [191] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_module_repeat1] = STATE(287),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(606),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(608),
    [sym_comment] = ACTIONS(52),
  },
  [193] = {
    [anon_sym_where] = ACTIONS(610),
    [sym_comment] = ACTIONS(52),
  },
  [194] = {
    [aux_sym_module_exports_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [sym_declarations] = STATE(292),
    [sym__layout_open_brace] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [sym__identifier] = STATE(293),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [198] = {
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [sym__layout_semicolon] = ACTIONS(624),
    [anon_sym_SEMI] = ACTIONS(626),
    [sym_comment] = ACTIONS(52),
  },
  [200] = {
    [aux_sym_import_specification_repeat1] = STATE(297),
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [sym_import_specification] = STATE(298),
    [sym__layout_semicolon] = ACTIONS(620),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_hiding] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [202] = {
    [sym__identifier] = STATE(299),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [sym_variable_identifier] = ACTIONS(634),
    [sym_constructor_identifier] = ACTIONS(636),
    [sym_module_identifier] = ACTIONS(636),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(634),
  },
  [204] = {
    [sym_type_signature] = STATE(300),
    [sym__identifier] = STATE(28),
    [sym_string] = STATE(301),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(414),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [206] = {
    [sym_type_signature] = STATE(300),
    [sym__identifier] = STATE(28),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
    [sym__identifier] = STATE(302),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [208] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [sym_comment] = ACTIONS(52),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_comment] = ACTIONS(52),
  },
  [210] = {
    [sym__layout_close_brace] = ACTIONS(650),
    [anon_sym_do] = ACTIONS(652),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [sym__integer_literal] = ACTIONS(652),
    [sym__octal_literal] = ACTIONS(652),
    [sym__hexidecimal_literal] = ACTIONS(652),
  },
  [211] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [sym_comment] = ACTIONS(52),
  },
  [212] = {
    [sym__layout_close_brace] = ACTIONS(660),
    [anon_sym_do] = ACTIONS(662),
    [sym_variable_identifier] = ACTIONS(664),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [sym__integer_literal] = ACTIONS(662),
    [sym__octal_literal] = ACTIONS(662),
    [sym__hexidecimal_literal] = ACTIONS(662),
  },
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(652),
    [anon_sym_do] = ACTIONS(652),
    [sym_variable_identifier] = ACTIONS(654),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [sym__integer_literal] = ACTIONS(652),
    [sym__octal_literal] = ACTIONS(652),
    [sym__hexidecimal_literal] = ACTIONS(652),
  },
  [214] = {
    [anon_sym_RBRACE] = ACTIONS(662),
    [anon_sym_do] = ACTIONS(662),
    [sym_variable_identifier] = ACTIONS(664),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [sym__integer_literal] = ACTIONS(662),
    [sym__octal_literal] = ACTIONS(662),
    [sym__hexidecimal_literal] = ACTIONS(662),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [216] = {
    [sym_class] = STATE(305),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [217] = {
    [anon_sym_EQ_GT] = ACTIONS(666),
    [sym_comment] = ACTIONS(52),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(52),
  },
  [219] = {
    [sym__general_declaration] = STATE(310),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(28),
    [aux_sym_general_declarations_repeat1] = STATE(311),
    [sym__layout_close_brace] = ACTIONS(672),
    [anon_sym_infixl] = ACTIONS(674),
    [anon_sym_infixr] = ACTIONS(674),
    [anon_sym_infix] = ACTIONS(674),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [sym__general_declaration] = STATE(312),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(28),
    [aux_sym_general_declarations_repeat1] = STATE(313),
    [anon_sym_RBRACE] = ACTIONS(676),
    [anon_sym_infixl] = ACTIONS(674),
    [anon_sym_infixr] = ACTIONS(674),
    [anon_sym_infix] = ACTIONS(674),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [sym__layout_semicolon] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_variable_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym_general_declarations] = STATE(315),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [224] = {
    [anon_sym_where] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(52),
  },
  [225] = {
    [anon_sym_where] = ACTIONS(456),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [anon_sym_where] = ACTIONS(688),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(52),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(692),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [sym_general_declarations] = STATE(317),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [anon_sym_where] = ACTIONS(694),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_COMMA] = ACTIONS(698),
    [sym_comment] = ACTIONS(52),
  },
  [231] = {
    [sym__symbol] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [232] = {
    [sym__layout_semicolon] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_COMMA] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_COMMA] = ACTIONS(714),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [sym__op] = STATE(320),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(78),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(718),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_comment] = ACTIONS(52),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_deriving] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(686),
    [sym_constructor_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [sym__layout_semicolon] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_EQ] = ACTIONS(456),
    [anon_sym_deriving] = ACTIONS(456),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_constructor_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym_constructors] = STATE(321),
    [sym_constructor] = STATE(151),
    [sym_deriving] = STATE(322),
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [sym_deriving] = STATE(322),
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [sym_field] = STATE(325),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [sym__identifier] = STATE(326),
    [sym_variable_identifier] = ACTIONS(732),
    [sym_constructor_identifier] = ACTIONS(526),
    [sym_module_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_PIPE] = ACTIONS(736),
    [anon_sym_deriving] = ACTIONS(736),
    [anon_sym_BANG] = ACTIONS(736),
    [sym_variable_identifier] = ACTIONS(738),
    [sym_constructor_identifier] = ACTIONS(738),
    [sym_module_identifier] = ACTIONS(738),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(742),
    [sym_comment] = ACTIONS(52),
  },
  [249] = {
    [sym_strict] = STATE(327),
    [sym__identifier] = STATE(327),
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(742),
    [anon_sym_BANG] = ACTIONS(524),
    [sym_variable_identifier] = ACTIONS(526),
    [sym_constructor_identifier] = ACTIONS(526),
    [sym_module_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [sym_constructor] = STATE(328),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [sym__layout_semicolon] = ACTIONS(744),
    [anon_sym_SEMI] = ACTIONS(746),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_deriving] = ACTIONS(746),
    [sym_comment] = ACTIONS(52),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [253] = {
    [sym_new_constructor] = STATE(330),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(52),
  },
  [254] = {
    [sym__identifier] = STATE(331),
    [sym_fields] = STATE(331),
    [anon_sym_LBRACE] = ACTIONS(522),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [255] = {
    [sym_deriving] = STATE(332),
    [sym__layout_semicolon] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [256] = {
    [aux_sym_type_class_repeat1] = STATE(280),
    [sym__layout_semicolon] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_DASH_GT] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [257] = {
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [sym_comment] = ACTIONS(52),
  },
  [258] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(760),
  },
  [259] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(762),
  },
  [260] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(764),
  },
  [261] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(768),
  },
  [262] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(770),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(770),
  },
  [263] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(772),
  },
  [264] = {
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_AT] = ACTIONS(774),
    [anon_sym_EQ] = ACTIONS(774),
    [anon_sym_BQUOTE] = ACTIONS(774),
    [anon_sym_DASH] = ACTIONS(774),
    [anon_sym__] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(774),
    [anon_sym_PIPE] = ACTIONS(774),
    [anon_sym_BANG] = ACTIONS(774),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(774),
    [sym__ascii_large] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
    [anon_sym_DOLLAR] = ACTIONS(774),
    [anon_sym_PERCENT] = ACTIONS(774),
    [anon_sym_AMP] = ACTIONS(774),
    [anon_sym_1] = ACTIONS(774),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_DOT] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(774),
    [anon_sym_LT] = ACTIONS(774),
    [anon_sym_GT] = ACTIONS(774),
    [anon_sym_QMARK] = ACTIONS(774),
    [anon_sym_CARET] = ACTIONS(774),
    [anon_sym_TILDE] = ACTIONS(774),
    [anon_sym_BSLASH] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_RBRACK] = ACTIONS(774),
    [sym__space] = ACTIONS(774),
    [sym__newline] = ACTIONS(774),
    [sym__tab] = ACTIONS(774),
    [sym__vertical_tab] = ACTIONS(774),
  },
  [265] = {
    [anon_sym_SEMI] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_AT] = ACTIONS(776),
    [anon_sym_EQ] = ACTIONS(776),
    [anon_sym_BQUOTE] = ACTIONS(776),
    [anon_sym_DASH] = ACTIONS(776),
    [anon_sym__] = ACTIONS(776),
    [anon_sym_COLON] = ACTIONS(776),
    [anon_sym_PIPE] = ACTIONS(776),
    [anon_sym_BANG] = ACTIONS(776),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(776),
    [anon_sym_DQUOTE] = ACTIONS(776),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(776),
    [sym__ascii_large] = ACTIONS(776),
    [anon_sym_POUND] = ACTIONS(776),
    [anon_sym_DOLLAR] = ACTIONS(776),
    [anon_sym_PERCENT] = ACTIONS(776),
    [anon_sym_AMP] = ACTIONS(776),
    [anon_sym_1] = ACTIONS(776),
    [anon_sym_PLUS] = ACTIONS(776),
    [anon_sym_DOT] = ACTIONS(776),
    [anon_sym_SLASH] = ACTIONS(776),
    [anon_sym_LT] = ACTIONS(776),
    [anon_sym_GT] = ACTIONS(776),
    [anon_sym_QMARK] = ACTIONS(776),
    [anon_sym_CARET] = ACTIONS(776),
    [anon_sym_TILDE] = ACTIONS(776),
    [anon_sym_BSLASH] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(776),
    [anon_sym_RBRACK] = ACTIONS(776),
    [sym__space] = ACTIONS(776),
    [sym__newline] = ACTIONS(776),
    [sym__tab] = ACTIONS(776),
    [sym__vertical_tab] = ACTIONS(776),
  },
  [266] = {
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(778),
    [anon_sym_AT] = ACTIONS(778),
    [anon_sym_EQ] = ACTIONS(778),
    [anon_sym_BQUOTE] = ACTIONS(778),
    [anon_sym_DASH] = ACTIONS(778),
    [anon_sym__] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(778),
    [anon_sym_PIPE] = ACTIONS(778),
    [anon_sym_BANG] = ACTIONS(778),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(778),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(778),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(778),
    [sym__ascii_large] = ACTIONS(778),
    [anon_sym_POUND] = ACTIONS(778),
    [anon_sym_DOLLAR] = ACTIONS(778),
    [anon_sym_PERCENT] = ACTIONS(778),
    [anon_sym_AMP] = ACTIONS(778),
    [anon_sym_1] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [anon_sym_SLASH] = ACTIONS(778),
    [anon_sym_LT] = ACTIONS(778),
    [anon_sym_GT] = ACTIONS(778),
    [anon_sym_QMARK] = ACTIONS(778),
    [anon_sym_CARET] = ACTIONS(778),
    [anon_sym_TILDE] = ACTIONS(778),
    [anon_sym_BSLASH] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_RBRACK] = ACTIONS(778),
    [sym__space] = ACTIONS(778),
    [sym__newline] = ACTIONS(778),
    [sym__tab] = ACTIONS(778),
    [sym__vertical_tab] = ACTIONS(778),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(778),
  },
  [267] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_BQUOTE] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym__] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_PIPE] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(780),
    [sym__ascii_large] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [anon_sym_AMP] = ACTIONS(780),
    [anon_sym_1] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_DOT] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [anon_sym_QMARK] = ACTIONS(780),
    [anon_sym_CARET] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym__space] = ACTIONS(780),
    [sym__newline] = ACTIONS(780),
    [sym__tab] = ACTIONS(780),
    [sym__vertical_tab] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(782),
  },
  [268] = {
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
    [anon_sym_EQ] = ACTIONS(784),
    [anon_sym_BQUOTE] = ACTIONS(784),
    [anon_sym_DASH] = ACTIONS(784),
    [anon_sym__] = ACTIONS(784),
    [anon_sym_COLON] = ACTIONS(784),
    [anon_sym_PIPE] = ACTIONS(784),
    [anon_sym_BANG] = ACTIONS(784),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [anon_sym_DQUOTE] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(784),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(784),
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
    [anon_sym_CARET] = ACTIONS(784),
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
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_BQUOTE] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym__] = ACTIONS(780),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_PIPE] = ACTIONS(780),
    [anon_sym_BANG] = ACTIONS(780),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [anon_sym_DQUOTE] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(780),
    [sym__ascii_large] = ACTIONS(780),
    [anon_sym_POUND] = ACTIONS(780),
    [anon_sym_DOLLAR] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [anon_sym_AMP] = ACTIONS(780),
    [anon_sym_1] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_DOT] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [anon_sym_QMARK] = ACTIONS(780),
    [anon_sym_CARET] = ACTIONS(780),
    [anon_sym_TILDE] = ACTIONS(780),
    [anon_sym_BSLASH] = ACTIONS(780),
    [anon_sym_LBRACK] = ACTIONS(780),
    [anon_sym_RBRACK] = ACTIONS(780),
    [sym__space] = ACTIONS(780),
    [sym__newline] = ACTIONS(780),
    [sym__tab] = ACTIONS(780),
    [sym__vertical_tab] = ACTIONS(780),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(786),
  },
  [270] = {
    [anon_sym_LBRACE] = ACTIONS(706),
    [anon_sym_RBRACE] = ACTIONS(706),
    [anon_sym_LPAREN] = ACTIONS(706),
    [anon_sym_AT] = ACTIONS(706),
    [anon_sym_BQUOTE] = ACTIONS(706),
    [anon_sym_COLON] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(544),
    [anon_sym_LPAREN] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_BQUOTE] = ACTIONS(544),
    [anon_sym_COLON] = ACTIONS(544),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_variable_identifier] = ACTIONS(574),
    [sym_constructor_identifier] = ACTIONS(788),
    [sym_module_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(52),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(790),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(792),
    [sym_comment] = ACTIONS(52),
  },
  [275] = {
    [anon_sym_LBRACE] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [276] = {
    [anon_sym_LBRACE] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(794),
    [anon_sym_LPAREN] = ACTIONS(794),
    [anon_sym_BQUOTE] = ACTIONS(794),
    [anon_sym_COLON] = ACTIONS(794),
    [sym_comment] = ACTIONS(52),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(796),
    [sym_comment] = ACTIONS(52),
  },
  [278] = {
    [anon_sym_EQ] = ACTIONS(798),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [sym__layout_semicolon] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_DASH_GT] = ACTIONS(456),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_DASH_GT] = ACTIONS(502),
    [sym_variable_identifier] = ACTIONS(800),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [sym__type] = STATE(344),
    [sym_function_type] = STATE(185),
    [sym_simple_type] = STATE(187),
    [aux_sym_function_type_repeat1] = STATE(345),
    [sym_variable_identifier] = ACTIONS(806),
    [sym_constructor_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [anon_sym_DASH_GT] = ACTIONS(808),
    [sym_variable_identifier] = ACTIONS(808),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [ts_builtin_sym_end] = ACTIONS(810),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [sym__layout_semicolon] = ACTIONS(812),
    [anon_sym_SEMI] = ACTIONS(814),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(348),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [287] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(99),
    [sym_flhs] = STATE(22),
    [sym__var] = STATE(24),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(25),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(26),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(26),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(25),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(818),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(18),
    [anon_sym_default] = ACTIONS(20),
    [anon_sym_do] = ACTIONS(22),
    [anon_sym_class] = ACTIONS(24),
    [anon_sym_instance] = ACTIONS(26),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(30),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(48),
    [sym__octal_literal] = ACTIONS(48),
    [sym__hexidecimal_literal] = ACTIONS(48),
  },
  [288] = {
    [sym_export] = STATE(349),
    [sym__identifier] = STATE(195),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [anon_sym_where] = ACTIONS(820),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [anon_sym_COMMA] = ACTIONS(822),
    [anon_sym_RPAREN] = ACTIONS(824),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [sym__identifier] = STATE(353),
    [anon_sym_DOT_DOT] = ACTIONS(826),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(828),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym_import_specification] = STATE(354),
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_hiding] = ACTIONS(202),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [sym__identifier] = STATE(356),
    [anon_sym_DOT_DOT] = ACTIONS(834),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [sym__identifier] = STATE(357),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(836),
    [anon_sym_SEMI] = ACTIONS(838),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [sym_comment] = ACTIONS(52),
  },
  [299] = {
    [aux_sym_import_specification_repeat1] = STATE(361),
    [anon_sym_LPAREN] = ACTIONS(844),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(846),
    [anon_sym_SEMI] = ACTIONS(848),
    [sym_comment] = ACTIONS(52),
  },
  [301] = {
    [sym_type_signature] = STATE(362),
    [sym__identifier] = STATE(28),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(52),
  },
  [303] = {
    [sym__identifier] = STATE(363),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [304] = {
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [sym_comment] = ACTIONS(52),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(856),
    [anon_sym_RPAREN] = ACTIONS(856),
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [sym_variable_identifier] = ACTIONS(858),
    [sym_constructor_identifier] = ACTIONS(860),
    [sym_comment] = ACTIONS(52),
  },
  [307] = {
    [sym_class] = STATE(364),
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [anon_sym_EQ_GT] = ACTIONS(862),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [sym__layout_semicolon] = ACTIONS(864),
    [anon_sym_SEMI] = ACTIONS(866),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(868),
    [anon_sym_SEMI] = ACTIONS(870),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [sym__general_declaration] = STATE(368),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym__layout_close_brace] = ACTIONS(872),
    [anon_sym_infixl] = ACTIONS(674),
    [anon_sym_infixr] = ACTIONS(674),
    [anon_sym_infix] = ACTIONS(674),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [312] = {
    [sym__layout_semicolon] = ACTIONS(874),
    [anon_sym_SEMI] = ACTIONS(876),
    [sym_comment] = ACTIONS(52),
  },
  [313] = {
    [sym__general_declaration] = STATE(370),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(28),
    [anon_sym_RBRACE] = ACTIONS(878),
    [anon_sym_infixl] = ACTIONS(674),
    [anon_sym_infixr] = ACTIONS(674),
    [anon_sym_infix] = ACTIONS(674),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [314] = {
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_RPAREN] = ACTIONS(880),
    [anon_sym_EQ_GT] = ACTIONS(880),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [sym_comment] = ACTIONS(52),
  },
  [316] = {
    [sym_general_declarations] = STATE(371),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(888),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
    [sym_general_declarations] = STATE(372),
    [sym__layout_open_brace] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(892),
    [anon_sym_COMMA] = ACTIONS(892),
    [sym_comment] = ACTIONS(52),
  },
  [320] = {
    [sym__layout_semicolon] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(896),
    [sym_comment] = ACTIONS(52),
  },
  [321] = {
    [sym_deriving] = STATE(373),
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [322] = {
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [sym_comment] = ACTIONS(52),
  },
  [323] = {
    [aux_sym_export_repeat1] = STATE(375),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym_comment] = ACTIONS(52),
  },
  [324] = {
    [aux_sym_field_repeat1] = STATE(378),
    [anon_sym_COMMA] = ACTIONS(904),
    [anon_sym_COLON_COLON] = ACTIONS(906),
    [sym_comment] = ACTIONS(52),
  },
  [325] = {
    [aux_sym_fields_repeat1] = STATE(381),
    [anon_sym_RBRACE] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(910),
    [sym_comment] = ACTIONS(52),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(914),
    [anon_sym_PIPE] = ACTIONS(914),
    [anon_sym_deriving] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(914),
    [sym_variable_identifier] = ACTIONS(916),
    [sym_constructor_identifier] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(916),
    [sym_comment] = ACTIONS(52),
  },
  [327] = {
    [sym__layout_semicolon] = ACTIONS(918),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_PIPE] = ACTIONS(920),
    [anon_sym_deriving] = ACTIONS(920),
    [anon_sym_BANG] = ACTIONS(920),
    [sym_variable_identifier] = ACTIONS(922),
    [sym_constructor_identifier] = ACTIONS(922),
    [sym_module_identifier] = ACTIONS(922),
    [sym_comment] = ACTIONS(52),
  },
  [328] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(926),
    [anon_sym_PIPE] = ACTIONS(926),
    [anon_sym_deriving] = ACTIONS(926),
    [sym_comment] = ACTIONS(52),
  },
  [329] = {
    [sym_constructor] = STATE(382),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [330] = {
    [sym_deriving] = STATE(383),
    [sym__layout_semicolon] = ACTIONS(928),
    [anon_sym_SEMI] = ACTIONS(930),
    [anon_sym_deriving] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [331] = {
    [sym__layout_semicolon] = ACTIONS(932),
    [anon_sym_SEMI] = ACTIONS(934),
    [anon_sym_deriving] = ACTIONS(934),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [sym__layout_semicolon] = ACTIONS(928),
    [anon_sym_SEMI] = ACTIONS(930),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [sym__layout_semicolon] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(456),
    [anon_sym_DASH_GT] = ACTIONS(456),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [334] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(936),
  },
  [335] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(938),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(938),
  },
  [336] = {
    [anon_sym_SEMI] = ACTIONS(940),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(940),
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_AT] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(940),
    [anon_sym_BQUOTE] = ACTIONS(940),
    [anon_sym_DASH] = ACTIONS(940),
    [anon_sym__] = ACTIONS(940),
    [anon_sym_COLON] = ACTIONS(940),
    [anon_sym_PIPE] = ACTIONS(940),
    [anon_sym_BANG] = ACTIONS(940),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(940),
    [anon_sym_DQUOTE] = ACTIONS(940),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(940),
    [sym__ascii_large] = ACTIONS(940),
    [anon_sym_POUND] = ACTIONS(940),
    [anon_sym_DOLLAR] = ACTIONS(940),
    [anon_sym_PERCENT] = ACTIONS(940),
    [anon_sym_AMP] = ACTIONS(940),
    [anon_sym_1] = ACTIONS(940),
    [anon_sym_PLUS] = ACTIONS(940),
    [anon_sym_DOT] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(940),
    [anon_sym_LT] = ACTIONS(940),
    [anon_sym_GT] = ACTIONS(940),
    [anon_sym_QMARK] = ACTIONS(940),
    [anon_sym_CARET] = ACTIONS(940),
    [anon_sym_TILDE] = ACTIONS(940),
    [anon_sym_BSLASH] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(940),
    [anon_sym_RBRACK] = ACTIONS(940),
    [sym__space] = ACTIONS(940),
    [sym__newline] = ACTIONS(940),
    [sym__tab] = ACTIONS(940),
    [sym__vertical_tab] = ACTIONS(940),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(940),
  },
  [337] = {
    [anon_sym_SEMI] = ACTIONS(942),
    [anon_sym_LBRACE] = ACTIONS(942),
    [anon_sym_RBRACE] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(942),
    [anon_sym_AT] = ACTIONS(942),
    [anon_sym_EQ] = ACTIONS(942),
    [anon_sym_BQUOTE] = ACTIONS(942),
    [anon_sym_DASH] = ACTIONS(942),
    [anon_sym__] = ACTIONS(942),
    [anon_sym_COLON] = ACTIONS(942),
    [anon_sym_PIPE] = ACTIONS(942),
    [anon_sym_BANG] = ACTIONS(942),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(942),
    [anon_sym_DQUOTE] = ACTIONS(942),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(942),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(942),
    [sym__ascii_large] = ACTIONS(942),
    [anon_sym_POUND] = ACTIONS(942),
    [anon_sym_DOLLAR] = ACTIONS(942),
    [anon_sym_PERCENT] = ACTIONS(942),
    [anon_sym_AMP] = ACTIONS(942),
    [anon_sym_1] = ACTIONS(942),
    [anon_sym_PLUS] = ACTIONS(942),
    [anon_sym_DOT] = ACTIONS(942),
    [anon_sym_SLASH] = ACTIONS(942),
    [anon_sym_LT] = ACTIONS(942),
    [anon_sym_GT] = ACTIONS(942),
    [anon_sym_QMARK] = ACTIONS(942),
    [anon_sym_CARET] = ACTIONS(942),
    [anon_sym_TILDE] = ACTIONS(942),
    [anon_sym_BSLASH] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(942),
    [sym__space] = ACTIONS(942),
    [sym__newline] = ACTIONS(942),
    [sym__tab] = ACTIONS(942),
    [sym__vertical_tab] = ACTIONS(942),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(942),
  },
  [338] = {
    [sym__layout_semicolon] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(946),
    [sym_comment] = ACTIONS(52),
  },
  [339] = {
    [sym__apat] = STATE(276),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(274),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(275),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [340] = {
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_BQUOTE] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [sym__apat] = STATE(389),
    [sym__pat] = STATE(390),
    [sym__lpat] = STATE(391),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(392),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(393),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(394),
    [aux_sym_variable_symbol_repeat1] = STATE(395),
    [anon_sym_LPAREN] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_DASH] = ACTIONS(954),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_variable_identifier] = ACTIONS(956),
    [sym_constructor_identifier] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [342] = {
    [sym__layout_semicolon] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_DASH_GT] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_DASH_GT] = ACTIONS(586),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [sym_comment] = ACTIONS(52),
  },
  [345] = {
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_DASH_GT] = ACTIONS(598),
    [sym_variable_identifier] = ACTIONS(966),
    [sym_comment] = ACTIONS(52),
  },
  [346] = {
    [sym__layout_close_brace] = ACTIONS(968),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(358),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_1] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(970),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [sym_comment] = ACTIONS(52),
  },
  [349] = {
    [anon_sym_COMMA] = ACTIONS(976),
    [anon_sym_RPAREN] = ACTIONS(976),
    [sym_comment] = ACTIONS(52),
  },
  [350] = {
    [sym_export] = STATE(398),
    [sym__identifier] = STATE(195),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [anon_sym_where] = ACTIONS(978),
    [sym_comment] = ACTIONS(52),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(52),
  },
  [353] = {
    [aux_sym_export_repeat1] = STATE(400),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [sym__layout_semicolon] = ACTIONS(982),
    [anon_sym_SEMI] = ACTIONS(984),
    [sym_comment] = ACTIONS(52),
  },
  [355] = {
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [356] = {
    [aux_sym_export_repeat1] = STATE(402),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [357] = {
    [anon_sym_LPAREN] = ACTIONS(988),
    [anon_sym_COMMA] = ACTIONS(990),
    [anon_sym_RPAREN] = ACTIONS(990),
    [sym_comment] = ACTIONS(52),
  },
  [358] = {
    [sym__identifier] = STATE(404),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [sym__layout_semicolon] = ACTIONS(992),
    [anon_sym_SEMI] = ACTIONS(994),
    [sym_comment] = ACTIONS(52),
  },
  [360] = {
    [sym__identifier] = STATE(406),
    [anon_sym_DOT_DOT] = ACTIONS(996),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(998),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1002),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(1004),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [anon_sym_COMMA] = ACTIONS(1006),
    [anon_sym_RPAREN] = ACTIONS(1006),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [sym_variable_identifier] = ACTIONS(1008),
    [sym_constructor_identifier] = ACTIONS(1010),
    [sym_comment] = ACTIONS(52),
  },
  [366] = {
    [sym__layout_close_brace] = ACTIONS(1012),
    [anon_sym_infixl] = ACTIONS(1014),
    [anon_sym_infixr] = ACTIONS(1014),
    [anon_sym_infix] = ACTIONS(1014),
    [sym_variable_identifier] = ACTIONS(1016),
    [sym_constructor_identifier] = ACTIONS(1016),
    [sym_module_identifier] = ACTIONS(1016),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1018),
    [anon_sym_SEMI] = ACTIONS(1020),
    [sym_comment] = ACTIONS(52),
  },
  [368] = {
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [sym_comment] = ACTIONS(52),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(1014),
    [anon_sym_infixl] = ACTIONS(1014),
    [anon_sym_infixr] = ACTIONS(1014),
    [anon_sym_infix] = ACTIONS(1014),
    [sym_variable_identifier] = ACTIONS(1016),
    [sym_constructor_identifier] = ACTIONS(1016),
    [sym_module_identifier] = ACTIONS(1016),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1026),
    [anon_sym_SEMI] = ACTIONS(1028),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1030),
    [anon_sym_SEMI] = ACTIONS(1032),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(1034),
    [anon_sym_SEMI] = ACTIONS(1036),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1038),
    [anon_sym_SEMI] = ACTIONS(1040),
    [sym_comment] = ACTIONS(52),
  },
  [374] = {
    [sym__layout_semicolon] = ACTIONS(1042),
    [anon_sym_SEMI] = ACTIONS(1044),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1046),
    [sym_comment] = ACTIONS(52),
  },
  [376] = {
    [sym_variable_identifier] = ACTIONS(1048),
    [sym_comment] = ACTIONS(52),
  },
  [377] = {
    [sym_strict] = STATE(413),
    [sym__identifier] = STATE(413),
    [anon_sym_BANG] = ACTIONS(1050),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(1052),
    [anon_sym_COLON_COLON] = ACTIONS(1054),
    [sym_comment] = ACTIONS(52),
  },
  [379] = {
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [anon_sym_PIPE] = ACTIONS(1058),
    [anon_sym_deriving] = ACTIONS(1058),
    [sym_comment] = ACTIONS(52),
  },
  [380] = {
    [sym_field] = STATE(416),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(1060),
    [anon_sym_COMMA] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(1064),
    [anon_sym_SEMI] = ACTIONS(1066),
    [anon_sym_PIPE] = ACTIONS(1066),
    [anon_sym_deriving] = ACTIONS(1066),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1068),
    [anon_sym_SEMI] = ACTIONS(1070),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [sym__symbol] = STATE(394),
    [aux_sym_variable_symbol_repeat1] = STATE(419),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_DASH] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(1072),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(58),
  },
  [387] = {
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_1] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_TILDE] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [388] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(422),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(1074),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_LPAREN] = ACTIONS(1076),
    [anon_sym_BQUOTE] = ACTIONS(1076),
    [anon_sym_COLON] = ACTIONS(1076),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(1078),
    [sym_comment] = ACTIONS(52),
  },
  [391] = {
    [sym__qconop] = STATE(426),
    [sym_constructor_symbol] = STATE(427),
    [anon_sym_RBRACE] = ACTIONS(1080),
    [anon_sym_LPAREN] = ACTIONS(1082),
    [anon_sym_BQUOTE] = ACTIONS(1084),
    [anon_sym_COLON] = ACTIONS(1086),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(1088),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [sym__apat] = STATE(434),
    [sym_wildcard] = STATE(435),
    [sym__var] = STATE(436),
    [sym_variable_symbol] = STATE(27),
    [sym__literal] = STATE(435),
    [sym__identifier] = STATE(437),
    [sym_integer] = STATE(430),
    [sym_char] = STATE(430),
    [sym_string] = STATE(430),
    [sym__symbol] = STATE(29),
    [aux_sym__lpat_repeat1] = STATE(438),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(1090),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_BQUOTE] = ACTIONS(1092),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(1094),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(956),
    [sym_constructor_identifier] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1096),
    [anon_sym_SQUOTE] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(1102),
    [sym__octal_literal] = ACTIONS(1102),
    [sym__hexidecimal_literal] = ACTIONS(1102),
  },
  [394] = {
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(174),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [anon_sym_AMP] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(174),
  },
  [395] = {
    [sym__symbol] = STATE(439),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1104),
    [anon_sym_SEMI] = ACTIONS(808),
    [anon_sym_DASH_GT] = ACTIONS(808),
    [sym_variable_identifier] = ACTIONS(808),
    [sym_comment] = ACTIONS(52),
  },
  [397] = {
    [sym__layout_close_brace] = ACTIONS(1106),
    [anon_sym_LPAREN] = ACTIONS(602),
    [anon_sym_import] = ACTIONS(602),
    [anon_sym_AT] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(602),
    [anon_sym_DASH] = ACTIONS(602),
    [anon_sym_foreign] = ACTIONS(602),
    [anon_sym_default] = ACTIONS(602),
    [anon_sym_do] = ACTIONS(602),
    [anon_sym_class] = ACTIONS(602),
    [anon_sym_instance] = ACTIONS(602),
    [anon_sym_infixl] = ACTIONS(602),
    [anon_sym_infixr] = ACTIONS(602),
    [anon_sym_infix] = ACTIONS(602),
    [anon_sym_COLON] = ACTIONS(602),
    [anon_sym_data] = ACTIONS(602),
    [anon_sym_PIPE] = ACTIONS(602),
    [anon_sym_newtype] = ACTIONS(602),
    [anon_sym_BANG] = ACTIONS(602),
    [anon_sym_type] = ACTIONS(602),
    [sym_variable_identifier] = ACTIONS(602),
    [sym_constructor_identifier] = ACTIONS(602),
    [sym_module_identifier] = ACTIONS(602),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(602),
    [anon_sym_DOLLAR] = ACTIONS(602),
    [anon_sym_PERCENT] = ACTIONS(602),
    [anon_sym_AMP] = ACTIONS(602),
    [anon_sym_1] = ACTIONS(602),
    [anon_sym_PLUS] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_SLASH] = ACTIONS(602),
    [anon_sym_LT] = ACTIONS(602),
    [anon_sym_GT] = ACTIONS(602),
    [anon_sym_QMARK] = ACTIONS(602),
    [anon_sym_CARET] = ACTIONS(602),
    [anon_sym_TILDE] = ACTIONS(602),
    [anon_sym_BSLASH] = ACTIONS(602),
    [sym__integer_literal] = ACTIONS(602),
    [sym__octal_literal] = ACTIONS(602),
    [sym__hexidecimal_literal] = ACTIONS(602),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(1108),
    [anon_sym_RPAREN] = ACTIONS(1108),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(1110),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [401] = {
    [aux_sym_import_specification_repeat1] = STATE(442),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(1114),
    [sym_comment] = ACTIONS(52),
  },
  [402] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [403] = {
    [sym__identifier] = STATE(445),
    [anon_sym_DOT_DOT] = ACTIONS(1118),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [404] = {
    [anon_sym_LPAREN] = ACTIONS(1120),
    [anon_sym_COMMA] = ACTIONS(1122),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [aux_sym_export_repeat1] = STATE(447),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [408] = {
    [sym__layout_close_brace] = ACTIONS(1128),
    [anon_sym_infixl] = ACTIONS(1130),
    [anon_sym_infixr] = ACTIONS(1130),
    [anon_sym_infix] = ACTIONS(1130),
    [sym_variable_identifier] = ACTIONS(1132),
    [sym_constructor_identifier] = ACTIONS(1132),
    [sym_module_identifier] = ACTIONS(1132),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [anon_sym_RBRACE] = ACTIONS(1130),
    [anon_sym_infixl] = ACTIONS(1130),
    [anon_sym_infixr] = ACTIONS(1130),
    [anon_sym_infix] = ACTIONS(1130),
    [sym_variable_identifier] = ACTIONS(1132),
    [sym_constructor_identifier] = ACTIONS(1132),
    [sym_module_identifier] = ACTIONS(1132),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [sym__layout_semicolon] = ACTIONS(1134),
    [anon_sym_SEMI] = ACTIONS(1136),
    [sym_comment] = ACTIONS(52),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_COLON_COLON] = ACTIONS(1138),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [sym__identifier] = STATE(448),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [anon_sym_RBRACE] = ACTIONS(1140),
    [anon_sym_COMMA] = ACTIONS(1140),
    [sym_comment] = ACTIONS(52),
  },
  [414] = {
    [sym_variable_identifier] = ACTIONS(1142),
    [sym_comment] = ACTIONS(52),
  },
  [415] = {
    [sym_strict] = STATE(450),
    [sym__identifier] = STATE(450),
    [anon_sym_BANG] = ACTIONS(1050),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [416] = {
    [anon_sym_RBRACE] = ACTIONS(1144),
    [anon_sym_COMMA] = ACTIONS(1144),
    [sym_comment] = ACTIONS(52),
  },
  [417] = {
    [sym__layout_semicolon] = ACTIONS(1146),
    [anon_sym_SEMI] = ACTIONS(1148),
    [anon_sym_PIPE] = ACTIONS(1148),
    [anon_sym_deriving] = ACTIONS(1148),
    [sym_comment] = ACTIONS(52),
  },
  [418] = {
    [sym_field] = STATE(451),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [419] = {
    [sym__symbol] = STATE(439),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(952),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
  },
  [420] = {
    [sym__literal] = STATE(452),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(1150),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(1152),
    [sym__octal_literal] = ACTIONS(1152),
    [sym__hexidecimal_literal] = ACTIONS(1152),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_BQUOTE] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [sym_comment] = ACTIONS(52),
  },
  [422] = {
    [sym__gap] = STATE(172),
    [sym__graphic] = STATE(172),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(172),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(1154),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [423] = {
    [anon_sym_COLON] = ACTIONS(1156),
    [sym_comment] = ACTIONS(52),
  },
  [424] = {
    [sym__identifier] = STATE(455),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [425] = {
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(457),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(1158),
    [anon_sym_AT] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_BANG] = ACTIONS(252),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_POUND] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_1] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_TILDE] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(252),
    [sym__integer_literal] = ACTIONS(252),
    [sym__octal_literal] = ACTIONS(252),
    [sym__hexidecimal_literal] = ACTIONS(252),
  },
  [426] = {
    [sym__apat] = STATE(389),
    [sym__pat] = STATE(458),
    [sym__lpat] = STATE(391),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(392),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(393),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(394),
    [aux_sym_variable_symbol_repeat1] = STATE(395),
    [anon_sym_LPAREN] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_DASH] = ACTIONS(954),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_variable_identifier] = ACTIONS(956),
    [sym_constructor_identifier] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [427] = {
    [anon_sym_LPAREN] = ACTIONS(1160),
    [anon_sym_AT] = ACTIONS(1160),
    [anon_sym_EQ] = ACTIONS(1160),
    [anon_sym_DASH] = ACTIONS(1160),
    [anon_sym__] = ACTIONS(1160),
    [anon_sym_COLON] = ACTIONS(1160),
    [anon_sym_PIPE] = ACTIONS(1160),
    [anon_sym_BANG] = ACTIONS(1160),
    [sym_variable_identifier] = ACTIONS(1160),
    [sym_constructor_identifier] = ACTIONS(1160),
    [sym_module_identifier] = ACTIONS(1160),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1160),
    [anon_sym_SQUOTE] = ACTIONS(1160),
    [anon_sym_DQUOTE] = ACTIONS(1160),
    [anon_sym_POUND] = ACTIONS(1160),
    [anon_sym_DOLLAR] = ACTIONS(1160),
    [anon_sym_PERCENT] = ACTIONS(1160),
    [anon_sym_AMP] = ACTIONS(1160),
    [anon_sym_1] = ACTIONS(1160),
    [anon_sym_PLUS] = ACTIONS(1160),
    [anon_sym_DOT] = ACTIONS(1160),
    [anon_sym_SLASH] = ACTIONS(1160),
    [anon_sym_LT] = ACTIONS(1160),
    [anon_sym_GT] = ACTIONS(1160),
    [anon_sym_QMARK] = ACTIONS(1160),
    [anon_sym_CARET] = ACTIONS(1160),
    [anon_sym_TILDE] = ACTIONS(1160),
    [anon_sym_BSLASH] = ACTIONS(1160),
    [sym__integer_literal] = ACTIONS(1160),
    [sym__octal_literal] = ACTIONS(1160),
    [sym__hexidecimal_literal] = ACTIONS(1160),
  },
  [428] = {
    [sym__apat] = STATE(276),
    [sym_wildcard] = STATE(93),
    [sym__var] = STATE(392),
    [sym_variable_symbol] = STATE(95),
    [sym__literal] = STATE(93),
    [sym__identifier] = STATE(275),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym__symbol] = STATE(394),
    [aux_sym_variable_symbol_repeat1] = STATE(395),
    [anon_sym_LPAREN] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(952),
    [anon_sym_EQ] = ACTIONS(952),
    [anon_sym_DASH] = ACTIONS(952),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(952),
    [anon_sym_PIPE] = ACTIONS(952),
    [anon_sym_BANG] = ACTIONS(952),
    [sym_variable_identifier] = ACTIONS(156),
    [sym_constructor_identifier] = ACTIONS(1162),
    [sym_module_identifier] = ACTIONS(1162),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_POUND] = ACTIONS(952),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [anon_sym_PERCENT] = ACTIONS(952),
    [anon_sym_AMP] = ACTIONS(952),
    [anon_sym_1] = ACTIONS(952),
    [anon_sym_PLUS] = ACTIONS(952),
    [anon_sym_DOT] = ACTIONS(952),
    [anon_sym_SLASH] = ACTIONS(952),
    [anon_sym_LT] = ACTIONS(952),
    [anon_sym_GT] = ACTIONS(952),
    [anon_sym_QMARK] = ACTIONS(952),
    [anon_sym_CARET] = ACTIONS(952),
    [anon_sym_TILDE] = ACTIONS(952),
    [anon_sym_BSLASH] = ACTIONS(952),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [429] = {
    [anon_sym_RBRACE] = ACTIONS(1164),
    [anon_sym_LPAREN] = ACTIONS(1164),
    [anon_sym_AT] = ACTIONS(1164),
    [anon_sym_EQ] = ACTIONS(1164),
    [anon_sym_BQUOTE] = ACTIONS(1164),
    [anon_sym_DASH] = ACTIONS(1164),
    [anon_sym__] = ACTIONS(1164),
    [anon_sym_COLON] = ACTIONS(1164),
    [anon_sym_PIPE] = ACTIONS(1164),
    [anon_sym_BANG] = ACTIONS(1164),
    [sym_variable_identifier] = ACTIONS(1164),
    [sym_constructor_identifier] = ACTIONS(1164),
    [sym_module_identifier] = ACTIONS(1164),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1164),
    [anon_sym_SQUOTE] = ACTIONS(1164),
    [anon_sym_DQUOTE] = ACTIONS(1164),
    [anon_sym_POUND] = ACTIONS(1164),
    [anon_sym_DOLLAR] = ACTIONS(1164),
    [anon_sym_PERCENT] = ACTIONS(1164),
    [anon_sym_AMP] = ACTIONS(1164),
    [anon_sym_1] = ACTIONS(1164),
    [anon_sym_PLUS] = ACTIONS(1164),
    [anon_sym_DOT] = ACTIONS(1164),
    [anon_sym_SLASH] = ACTIONS(1164),
    [anon_sym_LT] = ACTIONS(1164),
    [anon_sym_GT] = ACTIONS(1164),
    [anon_sym_QMARK] = ACTIONS(1164),
    [anon_sym_CARET] = ACTIONS(1164),
    [anon_sym_TILDE] = ACTIONS(1164),
    [anon_sym_BSLASH] = ACTIONS(1164),
    [sym__integer_literal] = ACTIONS(1164),
    [sym__octal_literal] = ACTIONS(1164),
    [sym__hexidecimal_literal] = ACTIONS(1164),
  },
  [430] = {
    [anon_sym_RBRACE] = ACTIONS(1166),
    [anon_sym_LPAREN] = ACTIONS(1166),
    [anon_sym_AT] = ACTIONS(1166),
    [anon_sym_EQ] = ACTIONS(1166),
    [anon_sym_BQUOTE] = ACTIONS(1166),
    [anon_sym_DASH] = ACTIONS(1166),
    [anon_sym__] = ACTIONS(1166),
    [anon_sym_COLON] = ACTIONS(1166),
    [anon_sym_PIPE] = ACTIONS(1166),
    [anon_sym_BANG] = ACTIONS(1166),
    [sym_variable_identifier] = ACTIONS(1166),
    [sym_constructor_identifier] = ACTIONS(1166),
    [sym_module_identifier] = ACTIONS(1166),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1166),
    [anon_sym_DQUOTE] = ACTIONS(1166),
    [anon_sym_POUND] = ACTIONS(1166),
    [anon_sym_DOLLAR] = ACTIONS(1166),
    [anon_sym_PERCENT] = ACTIONS(1166),
    [anon_sym_AMP] = ACTIONS(1166),
    [anon_sym_1] = ACTIONS(1166),
    [anon_sym_PLUS] = ACTIONS(1166),
    [anon_sym_DOT] = ACTIONS(1166),
    [anon_sym_SLASH] = ACTIONS(1166),
    [anon_sym_LT] = ACTIONS(1166),
    [anon_sym_GT] = ACTIONS(1166),
    [anon_sym_QMARK] = ACTIONS(1166),
    [anon_sym_CARET] = ACTIONS(1166),
    [anon_sym_TILDE] = ACTIONS(1166),
    [anon_sym_BSLASH] = ACTIONS(1166),
    [sym__integer_literal] = ACTIONS(1166),
    [sym__octal_literal] = ACTIONS(1166),
    [sym__hexidecimal_literal] = ACTIONS(1166),
  },
  [431] = {
    [sym__graphic] = STATE(460),
    [sym__small] = STATE(71),
    [sym__large] = STATE(71),
    [sym__symbol] = STATE(71),
    [sym__special] = STATE(71),
    [sym__escape] = STATE(460),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(1168),
    [anon_sym_DQUOTE] = ACTIONS(1168),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(110),
    [sym__ascii_large] = ACTIONS(116),
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
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__space] = ACTIONS(1168),
  },
  [432] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(462),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(1170),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(256),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_1] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(256),
    [sym__integer_literal] = ACTIONS(256),
    [sym__octal_literal] = ACTIONS(256),
    [sym__hexidecimal_literal] = ACTIONS(256),
  },
  [434] = {
    [anon_sym_RBRACE] = ACTIONS(1172),
    [anon_sym_LPAREN] = ACTIONS(1172),
    [anon_sym_AT] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1172),
    [anon_sym_BQUOTE] = ACTIONS(1172),
    [anon_sym_DASH] = ACTIONS(1172),
    [anon_sym__] = ACTIONS(1172),
    [anon_sym_COLON] = ACTIONS(1172),
    [anon_sym_PIPE] = ACTIONS(1172),
    [anon_sym_BANG] = ACTIONS(1172),
    [sym_variable_identifier] = ACTIONS(1172),
    [sym_constructor_identifier] = ACTIONS(1172),
    [sym_module_identifier] = ACTIONS(1172),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1172),
    [anon_sym_SQUOTE] = ACTIONS(1172),
    [anon_sym_DQUOTE] = ACTIONS(1172),
    [anon_sym_POUND] = ACTIONS(1172),
    [anon_sym_DOLLAR] = ACTIONS(1172),
    [anon_sym_PERCENT] = ACTIONS(1172),
    [anon_sym_AMP] = ACTIONS(1172),
    [anon_sym_1] = ACTIONS(1172),
    [anon_sym_PLUS] = ACTIONS(1172),
    [anon_sym_DOT] = ACTIONS(1172),
    [anon_sym_SLASH] = ACTIONS(1172),
    [anon_sym_LT] = ACTIONS(1172),
    [anon_sym_GT] = ACTIONS(1172),
    [anon_sym_QMARK] = ACTIONS(1172),
    [anon_sym_CARET] = ACTIONS(1172),
    [anon_sym_TILDE] = ACTIONS(1172),
    [anon_sym_BSLASH] = ACTIONS(1172),
    [sym__integer_literal] = ACTIONS(1172),
    [sym__octal_literal] = ACTIONS(1172),
    [sym__hexidecimal_literal] = ACTIONS(1172),
  },
  [435] = {
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_LPAREN] = ACTIONS(1092),
    [anon_sym_AT] = ACTIONS(1092),
    [anon_sym_EQ] = ACTIONS(1092),
    [anon_sym_BQUOTE] = ACTIONS(1092),
    [anon_sym_DASH] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_COLON] = ACTIONS(1092),
    [anon_sym_PIPE] = ACTIONS(1092),
    [anon_sym_BANG] = ACTIONS(1092),
    [sym_variable_identifier] = ACTIONS(1092),
    [sym_constructor_identifier] = ACTIONS(1092),
    [sym_module_identifier] = ACTIONS(1092),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1092),
    [anon_sym_SQUOTE] = ACTIONS(1092),
    [anon_sym_DQUOTE] = ACTIONS(1092),
    [anon_sym_POUND] = ACTIONS(1092),
    [anon_sym_DOLLAR] = ACTIONS(1092),
    [anon_sym_PERCENT] = ACTIONS(1092),
    [anon_sym_AMP] = ACTIONS(1092),
    [anon_sym_1] = ACTIONS(1092),
    [anon_sym_PLUS] = ACTIONS(1092),
    [anon_sym_DOT] = ACTIONS(1092),
    [anon_sym_SLASH] = ACTIONS(1092),
    [anon_sym_LT] = ACTIONS(1092),
    [anon_sym_GT] = ACTIONS(1092),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_CARET] = ACTIONS(1092),
    [anon_sym_TILDE] = ACTIONS(1092),
    [anon_sym_BSLASH] = ACTIONS(1092),
    [sym__integer_literal] = ACTIONS(1092),
    [sym__octal_literal] = ACTIONS(1092),
    [sym__hexidecimal_literal] = ACTIONS(1092),
  },
  [436] = {
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_LPAREN] = ACTIONS(1092),
    [anon_sym_AT] = ACTIONS(1174),
    [anon_sym_EQ] = ACTIONS(1092),
    [anon_sym_BQUOTE] = ACTIONS(1092),
    [anon_sym_DASH] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_COLON] = ACTIONS(1092),
    [anon_sym_PIPE] = ACTIONS(1092),
    [anon_sym_BANG] = ACTIONS(1092),
    [sym_variable_identifier] = ACTIONS(1092),
    [sym_constructor_identifier] = ACTIONS(1092),
    [sym_module_identifier] = ACTIONS(1092),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1092),
    [anon_sym_SQUOTE] = ACTIONS(1092),
    [anon_sym_DQUOTE] = ACTIONS(1092),
    [anon_sym_POUND] = ACTIONS(1092),
    [anon_sym_DOLLAR] = ACTIONS(1092),
    [anon_sym_PERCENT] = ACTIONS(1092),
    [anon_sym_AMP] = ACTIONS(1092),
    [anon_sym_1] = ACTIONS(1092),
    [anon_sym_PLUS] = ACTIONS(1092),
    [anon_sym_DOT] = ACTIONS(1092),
    [anon_sym_SLASH] = ACTIONS(1092),
    [anon_sym_LT] = ACTIONS(1092),
    [anon_sym_GT] = ACTIONS(1092),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_CARET] = ACTIONS(1092),
    [anon_sym_TILDE] = ACTIONS(1092),
    [anon_sym_BSLASH] = ACTIONS(1092),
    [sym__integer_literal] = ACTIONS(1092),
    [sym__octal_literal] = ACTIONS(1092),
    [sym__hexidecimal_literal] = ACTIONS(1092),
  },
  [437] = {
    [anon_sym_LBRACE] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_LPAREN] = ACTIONS(1092),
    [anon_sym_AT] = ACTIONS(1092),
    [anon_sym_EQ] = ACTIONS(1092),
    [anon_sym_BQUOTE] = ACTIONS(1092),
    [anon_sym_DASH] = ACTIONS(1092),
    [anon_sym__] = ACTIONS(1092),
    [anon_sym_COLON] = ACTIONS(1092),
    [anon_sym_PIPE] = ACTIONS(1092),
    [anon_sym_BANG] = ACTIONS(1092),
    [sym_variable_identifier] = ACTIONS(1092),
    [sym_constructor_identifier] = ACTIONS(1092),
    [sym_module_identifier] = ACTIONS(1092),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1092),
    [anon_sym_SQUOTE] = ACTIONS(1092),
    [anon_sym_DQUOTE] = ACTIONS(1092),
    [anon_sym_POUND] = ACTIONS(1092),
    [anon_sym_DOLLAR] = ACTIONS(1092),
    [anon_sym_PERCENT] = ACTIONS(1092),
    [anon_sym_AMP] = ACTIONS(1092),
    [anon_sym_1] = ACTIONS(1092),
    [anon_sym_PLUS] = ACTIONS(1092),
    [anon_sym_DOT] = ACTIONS(1092),
    [anon_sym_SLASH] = ACTIONS(1092),
    [anon_sym_LT] = ACTIONS(1092),
    [anon_sym_GT] = ACTIONS(1092),
    [anon_sym_QMARK] = ACTIONS(1092),
    [anon_sym_CARET] = ACTIONS(1092),
    [anon_sym_TILDE] = ACTIONS(1092),
    [anon_sym_BSLASH] = ACTIONS(1092),
    [sym__integer_literal] = ACTIONS(1092),
    [sym__octal_literal] = ACTIONS(1092),
    [sym__hexidecimal_literal] = ACTIONS(1092),
  },
  [438] = {
    [sym__apat] = STATE(465),
    [sym_wildcard] = STATE(435),
    [sym__var] = STATE(436),
    [sym_variable_symbol] = STATE(27),
    [sym__literal] = STATE(435),
    [sym__identifier] = STATE(437),
    [sym_integer] = STATE(430),
    [sym_char] = STATE(430),
    [sym_string] = STATE(430),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(1178),
    [anon_sym_LPAREN] = ACTIONS(1178),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_BQUOTE] = ACTIONS(1178),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(1094),
    [anon_sym_COLON] = ACTIONS(1178),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(956),
    [sym_constructor_identifier] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1096),
    [anon_sym_SQUOTE] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(1102),
    [sym__octal_literal] = ACTIONS(1102),
    [sym__hexidecimal_literal] = ACTIONS(1102),
  },
  [439] = {
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_BQUOTE] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_BANG] = ACTIONS(386),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_DOLLAR] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_1] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_BSLASH] = ACTIONS(386),
  },
  [440] = {
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [sym_comment] = ACTIONS(52),
  },
  [441] = {
    [sym__layout_semicolon] = ACTIONS(1182),
    [anon_sym_SEMI] = ACTIONS(1184),
    [sym_comment] = ACTIONS(52),
  },
  [442] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(1186),
    [sym_comment] = ACTIONS(52),
  },
  [443] = {
    [aux_sym_import_specification_repeat1] = STATE(467),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(1186),
    [sym_comment] = ACTIONS(52),
  },
  [444] = {
    [anon_sym_RPAREN] = ACTIONS(1188),
    [sym_comment] = ACTIONS(52),
  },
  [445] = {
    [aux_sym_export_repeat1] = STATE(469),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(1188),
    [sym_comment] = ACTIONS(52),
  },
  [446] = {
    [sym__identifier] = STATE(471),
    [anon_sym_DOT_DOT] = ACTIONS(1190),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1192),
    [sym_comment] = ACTIONS(52),
  },
  [448] = {
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_COMMA] = ACTIONS(914),
    [sym_comment] = ACTIONS(52),
  },
  [449] = {
    [anon_sym_COMMA] = ACTIONS(1194),
    [anon_sym_COLON_COLON] = ACTIONS(1194),
    [sym_comment] = ACTIONS(52),
  },
  [450] = {
    [anon_sym_RBRACE] = ACTIONS(1196),
    [anon_sym_COMMA] = ACTIONS(1196),
    [sym_comment] = ACTIONS(52),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(1198),
    [anon_sym_COMMA] = ACTIONS(1198),
    [sym_comment] = ACTIONS(52),
  },
  [452] = {
    [anon_sym_RPAREN] = ACTIONS(1200),
    [sym_comment] = ACTIONS(52),
  },
  [453] = {
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [sym_comment] = ACTIONS(52),
  },
  [454] = {
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(475),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(1202),
    [anon_sym_AT] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(476),
    [anon_sym_1] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_SLASH] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_GT] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_CARET] = ACTIONS(476),
    [anon_sym_TILDE] = ACTIONS(476),
    [anon_sym_BSLASH] = ACTIONS(476),
    [sym__integer_literal] = ACTIONS(476),
    [sym__octal_literal] = ACTIONS(476),
    [sym__hexidecimal_literal] = ACTIONS(476),
  },
  [455] = {
    [anon_sym_BQUOTE] = ACTIONS(1204),
    [sym_comment] = ACTIONS(52),
  },
  [456] = {
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_AT] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(476),
    [anon_sym_1] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_SLASH] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_GT] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_CARET] = ACTIONS(476),
    [anon_sym_TILDE] = ACTIONS(476),
    [anon_sym_BSLASH] = ACTIONS(476),
    [sym__integer_literal] = ACTIONS(476),
    [sym__octal_literal] = ACTIONS(476),
    [sym__hexidecimal_literal] = ACTIONS(476),
  },
  [457] = {
    [sym__symbol] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(1202),
    [anon_sym_AT] = ACTIONS(476),
    [anon_sym_EQ] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_BANG] = ACTIONS(476),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [anon_sym_POUND] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(476),
    [anon_sym_AMP] = ACTIONS(476),
    [anon_sym_1] = ACTIONS(476),
    [anon_sym_PLUS] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_SLASH] = ACTIONS(476),
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_GT] = ACTIONS(476),
    [anon_sym_QMARK] = ACTIONS(476),
    [anon_sym_CARET] = ACTIONS(476),
    [anon_sym_TILDE] = ACTIONS(476),
    [anon_sym_BSLASH] = ACTIONS(476),
    [sym__integer_literal] = ACTIONS(476),
    [sym__octal_literal] = ACTIONS(476),
    [sym__hexidecimal_literal] = ACTIONS(476),
  },
  [458] = {
    [anon_sym_RBRACE] = ACTIONS(1206),
    [sym_comment] = ACTIONS(52),
  },
  [459] = {
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [460] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(1208),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_AT] = ACTIONS(580),
    [anon_sym_EQ] = ACTIONS(580),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(580),
    [anon_sym_BANG] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_constructor_identifier] = ACTIONS(580),
    [sym_module_identifier] = ACTIONS(580),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_POUND] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_1] = ACTIONS(580),
    [anon_sym_PLUS] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_SLASH] = ACTIONS(580),
    [anon_sym_LT] = ACTIONS(580),
    [anon_sym_GT] = ACTIONS(580),
    [anon_sym_QMARK] = ACTIONS(580),
    [anon_sym_CARET] = ACTIONS(580),
    [anon_sym_TILDE] = ACTIONS(580),
    [anon_sym_BSLASH] = ACTIONS(580),
    [sym__integer_literal] = ACTIONS(580),
    [sym__octal_literal] = ACTIONS(580),
    [sym__hexidecimal_literal] = ACTIONS(580),
  },
  [462] = {
    [sym__gap] = STATE(172),
    [sym__graphic] = STATE(172),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(172),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(1210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
    [sym__vertical_tab] = ACTIONS(136),
  },
  [463] = {
    [sym__apat] = STATE(479),
    [sym_wildcard] = STATE(435),
    [sym__var] = STATE(436),
    [sym_variable_symbol] = STATE(27),
    [sym__literal] = STATE(435),
    [sym__identifier] = STATE(437),
    [sym_integer] = STATE(430),
    [sym_char] = STATE(430),
    [sym_string] = STATE(430),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(1094),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(956),
    [sym_constructor_identifier] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(956),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1096),
    [anon_sym_SQUOTE] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [anon_sym_POUND] = ACTIONS(16),
    [anon_sym_DOLLAR] = ACTIONS(16),
    [anon_sym_PERCENT] = ACTIONS(16),
    [anon_sym_AMP] = ACTIONS(16),
    [anon_sym_1] = ACTIONS(16),
    [anon_sym_PLUS] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(16),
    [anon_sym_SLASH] = ACTIONS(16),
    [anon_sym_LT] = ACTIONS(16),
    [anon_sym_GT] = ACTIONS(16),
    [anon_sym_QMARK] = ACTIONS(16),
    [anon_sym_CARET] = ACTIONS(16),
    [anon_sym_TILDE] = ACTIONS(16),
    [anon_sym_BSLASH] = ACTIONS(16),
    [sym__integer_literal] = ACTIONS(1102),
    [sym__octal_literal] = ACTIONS(1102),
    [sym__hexidecimal_literal] = ACTIONS(1102),
  },
  [464] = {
    [sym__fpat] = STATE(480),
    [sym__identifier] = STATE(278),
    [anon_sym_RBRACE] = ACTIONS(1212),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [465] = {
    [anon_sym_RBRACE] = ACTIONS(1214),
    [anon_sym_LPAREN] = ACTIONS(1214),
    [anon_sym_AT] = ACTIONS(1214),
    [anon_sym_EQ] = ACTIONS(1214),
    [anon_sym_BQUOTE] = ACTIONS(1214),
    [anon_sym_DASH] = ACTIONS(1214),
    [anon_sym__] = ACTIONS(1214),
    [anon_sym_COLON] = ACTIONS(1214),
    [anon_sym_PIPE] = ACTIONS(1214),
    [anon_sym_BANG] = ACTIONS(1214),
    [sym_variable_identifier] = ACTIONS(1214),
    [sym_constructor_identifier] = ACTIONS(1214),
    [sym_module_identifier] = ACTIONS(1214),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1214),
    [anon_sym_SQUOTE] = ACTIONS(1214),
    [anon_sym_DQUOTE] = ACTIONS(1214),
    [anon_sym_POUND] = ACTIONS(1214),
    [anon_sym_DOLLAR] = ACTIONS(1214),
    [anon_sym_PERCENT] = ACTIONS(1214),
    [anon_sym_AMP] = ACTIONS(1214),
    [anon_sym_1] = ACTIONS(1214),
    [anon_sym_PLUS] = ACTIONS(1214),
    [anon_sym_DOT] = ACTIONS(1214),
    [anon_sym_SLASH] = ACTIONS(1214),
    [anon_sym_LT] = ACTIONS(1214),
    [anon_sym_GT] = ACTIONS(1214),
    [anon_sym_QMARK] = ACTIONS(1214),
    [anon_sym_CARET] = ACTIONS(1214),
    [anon_sym_TILDE] = ACTIONS(1214),
    [anon_sym_BSLASH] = ACTIONS(1214),
    [sym__integer_literal] = ACTIONS(1214),
    [sym__octal_literal] = ACTIONS(1214),
    [sym__hexidecimal_literal] = ACTIONS(1214),
  },
  [466] = {
    [sym__layout_semicolon] = ACTIONS(1216),
    [anon_sym_SEMI] = ACTIONS(1218),
    [sym_comment] = ACTIONS(52),
  },
  [467] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(1220),
    [sym_comment] = ACTIONS(52),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(1222),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [sym_comment] = ACTIONS(52),
  },
  [469] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [sym_comment] = ACTIONS(52),
  },
  [470] = {
    [anon_sym_RPAREN] = ACTIONS(1224),
    [sym_comment] = ACTIONS(52),
  },
  [471] = {
    [aux_sym_export_repeat1] = STATE(483),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [sym_comment] = ACTIONS(52),
  },
  [472] = {
    [aux_sym_import_specification_repeat1] = STATE(484),
    [anon_sym_COMMA] = ACTIONS(630),
    [anon_sym_RPAREN] = ACTIONS(1220),
    [sym_comment] = ACTIONS(52),
  },
  [473] = {
    [anon_sym_RBRACE] = ACTIONS(1226),
    [anon_sym_LPAREN] = ACTIONS(1226),
    [anon_sym_BQUOTE] = ACTIONS(1226),
    [anon_sym_COLON] = ACTIONS(1226),
    [sym_comment] = ACTIONS(52),
  },
  [474] = {
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_DASH] = ACTIONS(700),
    [anon_sym__] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_PIPE] = ACTIONS(700),
    [anon_sym_BANG] = ACTIONS(700),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(700),
    [sym_module_identifier] = ACTIONS(700),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
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
    [anon_sym_CARET] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [sym__integer_literal] = ACTIONS(700),
    [sym__octal_literal] = ACTIONS(700),
    [sym__hexidecimal_literal] = ACTIONS(700),
  },
  [475] = {
    [sym__symbol] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_AT] = ACTIONS(700),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_DASH] = ACTIONS(700),
    [anon_sym__] = ACTIONS(700),
    [anon_sym_COLON] = ACTIONS(700),
    [anon_sym_PIPE] = ACTIONS(700),
    [anon_sym_BANG] = ACTIONS(700),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(700),
    [sym_module_identifier] = ACTIONS(700),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(700),
    [anon_sym_SQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(700),
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
    [anon_sym_CARET] = ACTIONS(700),
    [anon_sym_TILDE] = ACTIONS(700),
    [anon_sym_BSLASH] = ACTIONS(700),
    [sym__integer_literal] = ACTIONS(700),
    [sym__octal_literal] = ACTIONS(700),
    [sym__hexidecimal_literal] = ACTIONS(700),
  },
  [476] = {
    [anon_sym_LPAREN] = ACTIONS(1230),
    [anon_sym_AT] = ACTIONS(1230),
    [anon_sym_EQ] = ACTIONS(1230),
    [anon_sym_DASH] = ACTIONS(1230),
    [anon_sym__] = ACTIONS(1230),
    [anon_sym_COLON] = ACTIONS(1230),
    [anon_sym_PIPE] = ACTIONS(1230),
    [anon_sym_BANG] = ACTIONS(1230),
    [sym_variable_identifier] = ACTIONS(1230),
    [sym_constructor_identifier] = ACTIONS(1230),
    [sym_module_identifier] = ACTIONS(1230),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1230),
    [anon_sym_SQUOTE] = ACTIONS(1230),
    [anon_sym_DQUOTE] = ACTIONS(1230),
    [anon_sym_POUND] = ACTIONS(1230),
    [anon_sym_DOLLAR] = ACTIONS(1230),
    [anon_sym_PERCENT] = ACTIONS(1230),
    [anon_sym_AMP] = ACTIONS(1230),
    [anon_sym_1] = ACTIONS(1230),
    [anon_sym_PLUS] = ACTIONS(1230),
    [anon_sym_DOT] = ACTIONS(1230),
    [anon_sym_SLASH] = ACTIONS(1230),
    [anon_sym_LT] = ACTIONS(1230),
    [anon_sym_GT] = ACTIONS(1230),
    [anon_sym_QMARK] = ACTIONS(1230),
    [anon_sym_CARET] = ACTIONS(1230),
    [anon_sym_TILDE] = ACTIONS(1230),
    [anon_sym_BSLASH] = ACTIONS(1230),
    [sym__integer_literal] = ACTIONS(1230),
    [sym__octal_literal] = ACTIONS(1230),
    [sym__hexidecimal_literal] = ACTIONS(1230),
  },
  [477] = {
    [anon_sym_RBRACE] = ACTIONS(1232),
    [anon_sym_LPAREN] = ACTIONS(1232),
    [anon_sym_AT] = ACTIONS(1232),
    [anon_sym_EQ] = ACTIONS(1232),
    [anon_sym_BQUOTE] = ACTIONS(1232),
    [anon_sym_DASH] = ACTIONS(1232),
    [anon_sym__] = ACTIONS(1232),
    [anon_sym_COLON] = ACTIONS(1232),
    [anon_sym_PIPE] = ACTIONS(1232),
    [anon_sym_BANG] = ACTIONS(1232),
    [sym_variable_identifier] = ACTIONS(1232),
    [sym_constructor_identifier] = ACTIONS(1232),
    [sym_module_identifier] = ACTIONS(1232),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1232),
    [anon_sym_SQUOTE] = ACTIONS(1232),
    [anon_sym_DQUOTE] = ACTIONS(1232),
    [anon_sym_POUND] = ACTIONS(1232),
    [anon_sym_DOLLAR] = ACTIONS(1232),
    [anon_sym_PERCENT] = ACTIONS(1232),
    [anon_sym_AMP] = ACTIONS(1232),
    [anon_sym_1] = ACTIONS(1232),
    [anon_sym_PLUS] = ACTIONS(1232),
    [anon_sym_DOT] = ACTIONS(1232),
    [anon_sym_SLASH] = ACTIONS(1232),
    [anon_sym_LT] = ACTIONS(1232),
    [anon_sym_GT] = ACTIONS(1232),
    [anon_sym_QMARK] = ACTIONS(1232),
    [anon_sym_CARET] = ACTIONS(1232),
    [anon_sym_TILDE] = ACTIONS(1232),
    [anon_sym_BSLASH] = ACTIONS(1232),
    [sym__integer_literal] = ACTIONS(1232),
    [sym__octal_literal] = ACTIONS(1232),
    [sym__hexidecimal_literal] = ACTIONS(1232),
  },
  [478] = {
    [anon_sym_RBRACE] = ACTIONS(788),
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_EQ] = ACTIONS(788),
    [anon_sym_BQUOTE] = ACTIONS(788),
    [anon_sym_DASH] = ACTIONS(788),
    [anon_sym__] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [anon_sym_PIPE] = ACTIONS(788),
    [anon_sym_BANG] = ACTIONS(788),
    [sym_variable_identifier] = ACTIONS(788),
    [sym_constructor_identifier] = ACTIONS(788),
    [sym_module_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(788),
    [anon_sym_SQUOTE] = ACTIONS(788),
    [anon_sym_DQUOTE] = ACTIONS(788),
    [anon_sym_POUND] = ACTIONS(788),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [anon_sym_PERCENT] = ACTIONS(788),
    [anon_sym_AMP] = ACTIONS(788),
    [anon_sym_1] = ACTIONS(788),
    [anon_sym_PLUS] = ACTIONS(788),
    [anon_sym_DOT] = ACTIONS(788),
    [anon_sym_SLASH] = ACTIONS(788),
    [anon_sym_LT] = ACTIONS(788),
    [anon_sym_GT] = ACTIONS(788),
    [anon_sym_QMARK] = ACTIONS(788),
    [anon_sym_CARET] = ACTIONS(788),
    [anon_sym_TILDE] = ACTIONS(788),
    [anon_sym_BSLASH] = ACTIONS(788),
    [sym__integer_literal] = ACTIONS(788),
    [sym__octal_literal] = ACTIONS(788),
    [sym__hexidecimal_literal] = ACTIONS(788),
  },
  [479] = {
    [anon_sym_RBRACE] = ACTIONS(1234),
    [anon_sym_LPAREN] = ACTIONS(1234),
    [anon_sym_AT] = ACTIONS(1234),
    [anon_sym_EQ] = ACTIONS(1234),
    [anon_sym_BQUOTE] = ACTIONS(1234),
    [anon_sym_DASH] = ACTIONS(1234),
    [anon_sym__] = ACTIONS(1234),
    [anon_sym_COLON] = ACTIONS(1234),
    [anon_sym_PIPE] = ACTIONS(1234),
    [anon_sym_BANG] = ACTIONS(1234),
    [sym_variable_identifier] = ACTIONS(1234),
    [sym_constructor_identifier] = ACTIONS(1234),
    [sym_module_identifier] = ACTIONS(1234),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1234),
    [anon_sym_SQUOTE] = ACTIONS(1234),
    [anon_sym_DQUOTE] = ACTIONS(1234),
    [anon_sym_POUND] = ACTIONS(1234),
    [anon_sym_DOLLAR] = ACTIONS(1234),
    [anon_sym_PERCENT] = ACTIONS(1234),
    [anon_sym_AMP] = ACTIONS(1234),
    [anon_sym_1] = ACTIONS(1234),
    [anon_sym_PLUS] = ACTIONS(1234),
    [anon_sym_DOT] = ACTIONS(1234),
    [anon_sym_SLASH] = ACTIONS(1234),
    [anon_sym_LT] = ACTIONS(1234),
    [anon_sym_GT] = ACTIONS(1234),
    [anon_sym_QMARK] = ACTIONS(1234),
    [anon_sym_CARET] = ACTIONS(1234),
    [anon_sym_TILDE] = ACTIONS(1234),
    [anon_sym_BSLASH] = ACTIONS(1234),
    [sym__integer_literal] = ACTIONS(1234),
    [sym__octal_literal] = ACTIONS(1234),
    [sym__hexidecimal_literal] = ACTIONS(1234),
  },
  [480] = {
    [anon_sym_RBRACE] = ACTIONS(1236),
    [sym_comment] = ACTIONS(52),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1238),
    [anon_sym_SEMI] = ACTIONS(1240),
    [sym_comment] = ACTIONS(52),
  },
  [482] = {
    [anon_sym_COMMA] = ACTIONS(1242),
    [anon_sym_RPAREN] = ACTIONS(1242),
    [sym_comment] = ACTIONS(52),
  },
  [483] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(52),
  },
  [484] = {
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(1246),
    [sym_comment] = ACTIONS(52),
  },
  [485] = {
    [anon_sym_LPAREN] = ACTIONS(1248),
    [anon_sym_AT] = ACTIONS(1248),
    [anon_sym_EQ] = ACTIONS(1248),
    [anon_sym_DASH] = ACTIONS(1248),
    [anon_sym__] = ACTIONS(1248),
    [anon_sym_COLON] = ACTIONS(1248),
    [anon_sym_PIPE] = ACTIONS(1248),
    [anon_sym_BANG] = ACTIONS(1248),
    [sym_variable_identifier] = ACTIONS(1248),
    [sym_constructor_identifier] = ACTIONS(1248),
    [sym_module_identifier] = ACTIONS(1248),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1248),
    [anon_sym_SQUOTE] = ACTIONS(1248),
    [anon_sym_DQUOTE] = ACTIONS(1248),
    [anon_sym_POUND] = ACTIONS(1248),
    [anon_sym_DOLLAR] = ACTIONS(1248),
    [anon_sym_PERCENT] = ACTIONS(1248),
    [anon_sym_AMP] = ACTIONS(1248),
    [anon_sym_1] = ACTIONS(1248),
    [anon_sym_PLUS] = ACTIONS(1248),
    [anon_sym_DOT] = ACTIONS(1248),
    [anon_sym_SLASH] = ACTIONS(1248),
    [anon_sym_LT] = ACTIONS(1248),
    [anon_sym_GT] = ACTIONS(1248),
    [anon_sym_QMARK] = ACTIONS(1248),
    [anon_sym_CARET] = ACTIONS(1248),
    [anon_sym_TILDE] = ACTIONS(1248),
    [anon_sym_BSLASH] = ACTIONS(1248),
    [sym__integer_literal] = ACTIONS(1248),
    [sym__octal_literal] = ACTIONS(1248),
    [sym__hexidecimal_literal] = ACTIONS(1248),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(1250),
    [anon_sym_LPAREN] = ACTIONS(1250),
    [anon_sym_AT] = ACTIONS(1250),
    [anon_sym_EQ] = ACTIONS(1250),
    [anon_sym_BQUOTE] = ACTIONS(1250),
    [anon_sym_DASH] = ACTIONS(1250),
    [anon_sym__] = ACTIONS(1250),
    [anon_sym_COLON] = ACTIONS(1250),
    [anon_sym_PIPE] = ACTIONS(1250),
    [anon_sym_BANG] = ACTIONS(1250),
    [sym_variable_identifier] = ACTIONS(1250),
    [sym_constructor_identifier] = ACTIONS(1250),
    [sym_module_identifier] = ACTIONS(1250),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(1250),
    [anon_sym_SQUOTE] = ACTIONS(1250),
    [anon_sym_DQUOTE] = ACTIONS(1250),
    [anon_sym_POUND] = ACTIONS(1250),
    [anon_sym_DOLLAR] = ACTIONS(1250),
    [anon_sym_PERCENT] = ACTIONS(1250),
    [anon_sym_AMP] = ACTIONS(1250),
    [anon_sym_1] = ACTIONS(1250),
    [anon_sym_PLUS] = ACTIONS(1250),
    [anon_sym_DOT] = ACTIONS(1250),
    [anon_sym_SLASH] = ACTIONS(1250),
    [anon_sym_LT] = ACTIONS(1250),
    [anon_sym_GT] = ACTIONS(1250),
    [anon_sym_QMARK] = ACTIONS(1250),
    [anon_sym_CARET] = ACTIONS(1250),
    [anon_sym_TILDE] = ACTIONS(1250),
    [anon_sym_BSLASH] = ACTIONS(1250),
    [sym__integer_literal] = ACTIONS(1250),
    [sym__octal_literal] = ACTIONS(1250),
    [sym__hexidecimal_literal] = ACTIONS(1250),
  },
  [487] = {
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(52),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1254),
    [anon_sym_SEMI] = ACTIONS(1256),
    [sym_comment] = ACTIONS(52),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 0),
  [10] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__var, 1, .fragile = true),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__var, 1, .fragile = true),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__apat, 1, .fragile = true),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(224),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [508] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(246),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(254),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(256),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(319),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [778] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(336),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [786] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(337),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__apat, 3),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(347),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [860] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [922] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [942] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_flhs, 5),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_flhs, 5),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__apat, 4),
  [950] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [952] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(387),
  [958] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1010] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1016] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__lpat, 1),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__fpat, 3),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pat, 1),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [1090] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [1092] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__apat, 1, .fragile = true),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(429),
  [1096] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(430),
  [1098] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
  [1100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(432),
  [1102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(433),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [1154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(453),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [1158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(456),
  [1160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__qconop, 1),
  [1162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [1164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [1166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [1168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(460),
  [1170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(461),
  [1172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__lpat_repeat1, 1),
  [1174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(463),
  [1176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(464),
  [1178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__lpat, 2),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(474),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pat, 3),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [1214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__lpat_repeat1, 2),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__lpat, 4),
  [1228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [1230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__qconop, 3),
  [1232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [1234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__apat, 3),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [1250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__apat, 4),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
