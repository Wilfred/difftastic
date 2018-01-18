#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 431
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
  anon_sym_EQ = 17,
  anon_sym_AT = 18,
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
  sym_function_binding = 135,
  sym_function_lhs = 136,
  sym_function_rhs = 137,
  sym__abstract_pattern = 138,
  sym_wildcard = 139,
  sym__var = 140,
  sym__expression = 141,
  sym_foreign = 142,
  sym_foreign_import = 143,
  sym_calling_convention = 144,
  sym_safety = 145,
  sym_default = 146,
  sym_do_expression = 147,
  sym_statement_list = 148,
  sym__statement = 149,
  sym_type_class = 150,
  sym_general_declarations = 151,
  sym_type_class_instance = 152,
  sym__general_declaration = 153,
  sym_fixity = 154,
  sym__op = 155,
  sym_variable_symbol = 156,
  sym_constructor_symbol = 157,
  sym_type_signature = 158,
  sym__type = 159,
  sym_function_type = 160,
  sym_algebraic_datatype = 161,
  sym_context = 162,
  sym_class = 163,
  sym_constructors = 164,
  sym_constructor = 165,
  sym_deriving = 166,
  sym_newtype = 167,
  sym_new_constructor = 168,
  sym_field = 169,
  sym_strict = 170,
  sym_type_synonym = 171,
  sym__literal = 172,
  sym__identifier = 173,
  sym_simple_type = 174,
  sym_integer = 175,
  sym_char = 176,
  sym_string = 177,
  sym__gap = 178,
  sym__graphic = 179,
  sym__small = 180,
  sym__large = 181,
  sym__symbol = 182,
  sym__special = 183,
  sym__escape = 184,
  sym__char_escape = 185,
  sym__ascii = 186,
  sym__cntrl = 187,
  sym_fields = 188,
  aux_sym_module_repeat1 = 189,
  aux_sym_module_exports_repeat1 = 190,
  aux_sym_export_repeat1 = 191,
  aux_sym_import_specification_repeat1 = 192,
  aux_sym_function_lhs_repeat1 = 193,
  aux_sym_function_rhs_repeat1 = 194,
  aux_sym__abstract_pattern_repeat1 = 195,
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
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
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
  [sym_function_binding] = "function_binding",
  [sym_function_lhs] = "function_lhs",
  [sym_function_rhs] = "function_rhs",
  [sym__abstract_pattern] = "_abstract_pattern",
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
  [aux_sym_function_lhs_repeat1] = "function_lhs_repeat1",
  [aux_sym_function_rhs_repeat1] = "function_rhs_repeat1",
  [aux_sym__abstract_pattern_repeat1] = "_abstract_pattern_repeat1",
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [sym_function_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_function_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_function_rhs] = {
    .visible = true,
    .named = true,
  },
  [sym__abstract_pattern] = {
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
  [aux_sym_function_lhs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_rhs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__abstract_pattern_repeat1] = {
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
      if (lookahead == '|')
        ADVANCE(157);
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
      if (lookahead == '|')
        ADVANCE(78);
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
      if (lookahead == '|')
        ADVANCE(157);
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
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '\\')
        ADVANCE(334);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(331);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '|')
        ADVANCE(157);
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
      if (lookahead == '|')
        ADVANCE(78);
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
      if (lookahead == '|')
        ADVANCE(157);
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
        ADVANCE(422);
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
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(424);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(425);
      if (lookahead == 'd')
        ADVANCE(438);
      if (lookahead == 'e')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(450);
      if (lookahead == 'j')
        ADVANCE(456);
      if (lookahead == 's')
        ADVANCE(459);
      if (lookahead == 'w')
        ADVANCE(466);
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
        ADVANCE(374);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(376);
      if (lookahead == 'd')
        ADVANCE(389);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead == 'j')
        ADVANCE(407);
      if (lookahead == 's')
        ADVANCE(410);
      if (lookahead == 'w')
        ADVANCE(417);
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
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'p')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(413);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(421);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\r')
        ADVANCE(422);
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
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(424);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(425);
      if (lookahead == 'd')
        ADVANCE(438);
      if (lookahead == 'e')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(450);
      if (lookahead == 'j')
        ADVANCE(456);
      if (lookahead == 's')
        ADVANCE(459);
      if (lookahead == 'w')
        ADVANCE(466);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 423:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 424:
      if (lookahead == 'n')
        SKIP(372);
      END_STATE();
    case 425:
      if (lookahead == 'c')
        ADVANCE(426);
      if (lookahead == 'p')
        ADVANCE(430);
      END_STATE();
    case 426:
      if (lookahead == 'a')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'l')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'l')
        ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 430:
      if (lookahead == 'l')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'u')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 's')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'p')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'l')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'u')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 's')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 438:
      if (lookahead == 'o')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'n')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 't')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 444:
      if (lookahead == 'x')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'p')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'o')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'r')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 't')
        ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 450:
      if (lookahead == 'm')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'p')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'o')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'r')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 456:
      if (lookahead == 'v')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'm')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 459:
      if (lookahead == 't')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'd')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'c')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'a')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'l')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'l')
        ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 466:
      if (lookahead == 'h')
        ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 'e')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'r')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'e')
        ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(474);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(475);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(472);
      if (lookahead == '\r')
        ADVANCE(472);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(472);
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
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(475);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(471);
      END_STATE();
    case 475:
      if (lookahead == 'n')
        SKIP(471);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(488);
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
        SKIP(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(477);
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
        ADVANCE(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
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
    case 487:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(487);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(477);
      if (lookahead == '\r')
        ADVANCE(488);
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
        SKIP(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(476);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 489:
      if (lookahead == 'n')
        SKIP(476);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'v')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'g')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(498);
      END_STATE();
    case 499:
      if (lookahead == '\n')
        ADVANCE(500);
      if (lookahead == '\r')
        ADVANCE(504);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(505);
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
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(499);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 500:
      if (lookahead == '\n')
        ADVANCE(500);
      if (lookahead == '\r')
        ADVANCE(500);
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
        ADVANCE(176);
      if (lookahead == '.')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(501);
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
        ADVANCE(503);
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
        ADVANCE(500);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(502);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
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
        ADVANCE(502);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(502);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(500);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '\n')
        ADVANCE(500);
      if (lookahead == '\r')
        ADVANCE(504);
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
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(505);
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
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(499);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 505:
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
        ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 507:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(518);
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
        SKIP(519);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(508);
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
        ADVANCE(509);
      if (lookahead == 'd')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(512);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(513);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(514);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(515);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(517);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(508);
      if (lookahead == '\r')
        ADVANCE(518);
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
        SKIP(519);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(507);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      END_STATE();
    case 519:
      if (lookahead == 'n')
        SKIP(507);
      END_STATE();
    case 520:
      if (lookahead == 'e')
        ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == 'r')
        ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == 'i')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 'v')
        ADVANCE(524);
      END_STATE();
    case 524:
      if (lookahead == 'i')
        ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 'n')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'g')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(531);
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
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 529:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(529);
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
        ADVANCE(530);
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
        ADVANCE(529);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(529);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(531);
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
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 532:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(536);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(532);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 533:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(536);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(532);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 536:
      if (lookahead == 'n')
        SKIP(532);
      END_STATE();
    case 537:
      if (lookahead == '\t')
        SKIP(537);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 538:
      if (lookahead == '\t')
        ADVANCE(538);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == ' ')
        ADVANCE(539);
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
        ADVANCE(540);
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
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(538);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == ' ')
        ADVANCE(539);
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
        ADVANCE(540);
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
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '\t')
        SKIP(537);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 545:
      if (lookahead == '\t')
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(552);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(548);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == ' ')
        ADVANCE(550);
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
        ADVANCE(551);
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
        ADVANCE(541);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(548);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == ' ')
        ADVANCE(550);
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
        ADVANCE(551);
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
        ADVANCE(541);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '\t')
        ADVANCE(548);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == ' ')
        ADVANCE(550);
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
        ADVANCE(551);
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
        ADVANCE(541);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(548);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == ' ')
        ADVANCE(550);
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
        ADVANCE(551);
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
        ADVANCE(541);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      if (lookahead == '\t')
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(547);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(552);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 553:
      if (lookahead == '\n')
        ADVANCE(554);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(553);
      END_STATE();
    case 554:
      if (lookahead == '\n')
        ADVANCE(554);
      if (lookahead == '\r')
        ADVANCE(554);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(554);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(554);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(553);
      END_STATE();
    case 557:
      if (lookahead == 'n')
        SKIP(553);
      END_STATE();
    case 558:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(561);
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
        SKIP(558);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 559:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(559);
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
        ADVANCE(560);
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
        ADVANCE(559);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(559);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(561);
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
        SKIP(558);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(574);
      if (lookahead == 'a')
        ADVANCE(575);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(562);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(564);
      if (lookahead == 'a')
        ADVANCE(565);
      if (lookahead == 'd')
        ADVANCE(510);
      if (lookahead == 'h')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(563);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(563);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(566);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(571);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(563);
      if (lookahead == '\r')
        ADVANCE(573);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(574);
      if (lookahead == 'a')
        ADVANCE(575);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(562);
      END_STATE();
    case 574:
      if (lookahead == 'n')
        SKIP(562);
      END_STATE();
    case 575:
      if (lookahead == 's')
        ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 577:
      if (lookahead == 'i')
        ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == 'd')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == 'i')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'n')
        ADVANCE(581);
      END_STATE();
    case 581:
      if (lookahead == 'g')
        ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == 'a')
        ADVANCE(575);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(584);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(585);
      if (lookahead == 'a')
        ADVANCE(565);
      if (lookahead == 'h')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == 'a')
        ADVANCE(575);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        SKIP(583);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(594);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(590);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(591);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '.')
        ADVANCE(593);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(594);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 593:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 594:
      if (lookahead == 'n')
        SKIP(588);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == '\\')
        ADVANCE(597);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(596);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(596);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(599);
      if (lookahead == 'd')
        ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 599:
      if (lookahead == 'n')
        SKIP(595);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(609);
      if (lookahead == 'w')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(374);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == 'w')
        ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
    case 608:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(609);
      if (lookahead == 'w')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 609:
      if (lookahead == 'n')
        SKIP(600);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'h')
        ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 615:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(618);
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
        SKIP(615);
      END_STATE();
    case 616:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(616);
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
        ADVANCE(617);
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
        ADVANCE(616);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(616);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      if (lookahead == '\n')
        ADVANCE(616);
      if (lookahead == '\r')
        ADVANCE(618);
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
        SKIP(615);
      END_STATE();
    case 619:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(620);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      END_STATE();
    case 623:
      if (lookahead == 'n')
        SKIP(619);
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
        ADVANCE(544);
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
        ADVANCE(541);
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
        ADVANCE(544);
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
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
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
        ADVANCE(541);
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
        ADVANCE(541);
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
        ADVANCE(541);
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
        ADVANCE(541);
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
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(736);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(747);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
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
        ADVANCE(757);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(758);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(754);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 755:
      if (lookahead == '\n')
        ADVANCE(755);
      if (lookahead == '\r')
        ADVANCE(755);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '\n')
        ADVANCE(755);
      if (lookahead == '\r')
        ADVANCE(757);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(758);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(754);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 758:
      if (lookahead == 'n')
        SKIP(754);
      END_STATE();
    case 759:
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == 's')
        ADVANCE(774);
      if (lookahead == 'u')
        ADVANCE(778);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(759);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 760:
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == '\r')
        ADVANCE(760);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(761);
      if (lookahead == 's')
        ADVANCE(762);
      if (lookahead == 'u')
        ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(760);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(760);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
        ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'e')
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
    case 766:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
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
    case 772:
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == 's')
        ADVANCE(774);
      if (lookahead == 'u')
        ADVANCE(778);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(759);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 773:
      if (lookahead == 'n')
        SKIP(759);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(784);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
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
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
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
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(784);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
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
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
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
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(791);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
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
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
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
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(796);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(798);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(794);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(803);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(799);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(800);
      if (lookahead == '\r')
        ADVANCE(800);
      if (lookahead == '(')
        ADVANCE(343);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(801);
      if (lookahead == 'd')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(487);
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
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(803);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(799);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(498);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(808);
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
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(806);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(808);
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
        SKIP(813);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(809);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(810);
      if (lookahead == '\r')
        ADVANCE(810);
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
        ADVANCE(811);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
        SKIP(813);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(809);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
        ADVANCE(520);
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
        ADVANCE(510);
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
        ADVANCE(520);
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
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(819);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(820);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(821);
      if (lookahead == 'd')
        ADVANCE(510);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(820);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
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
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(823);
      if (lookahead == 'd')
        ADVANCE(520);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(819);
      END_STATE();
    case 823:
      if (lookahead == 'n')
        SKIP(819);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(827);
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
        SKIP(824);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(826);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(825);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(827);
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
        SKIP(824);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(833);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(834);
      END_STATE();
    case 829:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(829);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(831);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(829);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(833);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(834);
      END_STATE();
    case 833:
      if (lookahead == 'n')
        SKIP(828);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(841);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(838);
      if (lookahead != 0)
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 839:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == '\\')
        SKIP(840);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(841);
      END_STATE();
    case 840:
      if (lookahead == 'n')
        SKIP(835);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(843);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(843);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(842);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(848);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 849:
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
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(851);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(847);
      END_STATE();
    case 851:
      if (lookahead == 'n')
        SKIP(847);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(855);
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
        SKIP(852);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(853);
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
        ADVANCE(854);
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
        ADVANCE(853);
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
    case 854:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(853);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(853);
      if (lookahead == '\r')
        ADVANCE(855);
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
        SKIP(852);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(859);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(858);
      if (lookahead == 'h')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(857);
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
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(859);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'h')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(856);
      END_STATE();
    case 860:
      if (lookahead == 'n')
        SKIP(856);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(866);
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
        ADVANCE(255);
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
      if (lookahead == 'i')
        ADVANCE(867);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 862:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(862);
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
        ADVANCE(171);
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
        ADVANCE(863);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(864);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(862);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(862);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 865:
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
    case 866:
      if (lookahead == '\n')
        ADVANCE(862);
      if (lookahead == '\r')
        ADVANCE(866);
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
        ADVANCE(255);
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
      if (lookahead == 'i')
        ADVANCE(867);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 868:
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
    case 869:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(872);
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
        ADVANCE(255);
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
      if (lookahead == 'i')
        ADVANCE(867);
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
        SKIP(869);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(870);
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
        ADVANCE(171);
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
        ADVANCE(871);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(864);
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
        ADVANCE(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(870);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(870);
      if (lookahead == '\r')
        ADVANCE(872);
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
        ADVANCE(255);
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
      if (lookahead == 'i')
        ADVANCE(867);
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
        SKIP(869);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(876);
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
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(873);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 874:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(874);
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
        ADVANCE(875);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(874);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(874);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(876);
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
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(873);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 877:
      if (lookahead == 'n')
        SKIP(873);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(881);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(882);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(879);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(879);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 880:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(879);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(881);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(882);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 882:
      if (lookahead == 'n')
        SKIP(878);
      END_STATE();
    case 883:
      if (lookahead == '\t')
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(885);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(887);
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
        ADVANCE(888);
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
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(885);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(887);
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
        ADVANCE(888);
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
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 886:
      if (lookahead == '\t')
        ADVANCE(885);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(887);
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
        ADVANCE(888);
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
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(885);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == ' ')
        ADVANCE(887);
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
        ADVANCE(888);
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
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(886);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      if (lookahead == '\t')
        ADVANCE(546);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == ' ')
        ADVANCE(543);
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
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(891);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(890);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 891:
      if (lookahead == '\n')
        ADVANCE(891);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(626);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(374);
      if (lookahead == '\\')
        ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(891);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 892:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(891);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(891);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '-')
        ADVANCE(629);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(423);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(890);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 894:
      if (lookahead == 'n')
        SKIP(890);
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
  [8] = {.lex_state = 471, .external_lex_state = 2},
  [9] = {.lex_state = 476},
  [10] = {.lex_state = 476},
  [11] = {.lex_state = 499},
  [12] = {.lex_state = 476},
  [13] = {.lex_state = 476},
  [14] = {.lex_state = 507},
  [15] = {.lex_state = 528, .external_lex_state = 3},
  [16] = {.lex_state = 372},
  [17] = {.lex_state = 532, .external_lex_state = 3},
  [18] = {.lex_state = 537},
  [19] = {.lex_state = 545},
  [20] = {.lex_state = 532, .external_lex_state = 3},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 553, .external_lex_state = 3},
  [23] = {.lex_state = 553, .external_lex_state = 3},
  [24] = {.lex_state = 553, .external_lex_state = 3},
  [25] = {.lex_state = 330},
  [26] = {.lex_state = 366},
  [27] = {.lex_state = 553, .external_lex_state = 3},
  [28] = {.lex_state = 366},
  [29] = {.lex_state = 330},
  [30] = {.lex_state = 366},
  [31] = {.lex_state = 558},
  [32] = {.lex_state = 366},
  [33] = {.lex_state = 372},
  [34] = {.lex_state = 366},
  [35] = {.lex_state = 532},
  [36] = {.lex_state = 562, .external_lex_state = 3},
  [37] = {.lex_state = 583, .external_lex_state = 3},
  [38] = {.lex_state = 372},
  [39] = {.lex_state = 372},
  [40] = {.lex_state = 588},
  [41] = {.lex_state = 595, .external_lex_state = 4},
  [42] = {.lex_state = 330},
  [43] = {.lex_state = 553, .external_lex_state = 3},
  [44] = {.lex_state = 507},
  [45] = {.lex_state = 600},
  [46] = {.lex_state = 507},
  [47] = {.lex_state = 372},
  [48] = {.lex_state = 600},
  [49] = {.lex_state = 507},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 615, .external_lex_state = 3},
  [52] = {.lex_state = 532},
  [53] = {.lex_state = 615, .external_lex_state = 3},
  [54] = {.lex_state = 499},
  [55] = {.lex_state = 619, .external_lex_state = 3},
  [56] = {.lex_state = 619, .external_lex_state = 3},
  [57] = {.lex_state = 499},
  [58] = {.lex_state = 615, .external_lex_state = 3},
  [59] = {.lex_state = 615, .external_lex_state = 3},
  [60] = {.lex_state = 476, .external_lex_state = 3},
  [61] = {.lex_state = 507},
  [62] = {.lex_state = 507, .external_lex_state = 3},
  [63] = {.lex_state = 624},
  [64] = {.lex_state = 507},
  [65] = {.lex_state = 330},
  [66] = {.lex_state = 588},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 330},
  [70] = {.lex_state = 330},
  [71] = {.lex_state = 330},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 330},
  [74] = {.lex_state = 631},
  [75] = {.lex_state = 545},
  [76] = {.lex_state = 545},
  [77] = {.lex_state = 545},
  [78] = {.lex_state = 545},
  [79] = {.lex_state = 532, .external_lex_state = 3},
  [80] = {.lex_state = 545},
  [81] = {.lex_state = 545},
  [82] = {.lex_state = 735},
  [83] = {.lex_state = 545},
  [84] = {.lex_state = 545},
  [85] = {.lex_state = 558},
  [86] = {.lex_state = 532, .external_lex_state = 3},
  [87] = {.lex_state = 553, .external_lex_state = 3},
  [88] = {.lex_state = 366},
  [89] = {.lex_state = 366},
  [90] = {.lex_state = 366},
  [91] = {.lex_state = 537},
  [92] = {.lex_state = 545},
  [93] = {.lex_state = 366},
  [94] = {.lex_state = 366},
  [95] = {.lex_state = 366},
  [96] = {.lex_state = 366},
  [97] = {.lex_state = 366},
  [98] = {.lex_state = 366},
  [99] = {.lex_state = 366},
  [100] = {.lex_state = 754},
  [101] = {.lex_state = 553, .external_lex_state = 3},
  [102] = {.lex_state = 366},
  [103] = {.lex_state = 366},
  [104] = {.lex_state = 471, .external_lex_state = 2},
  [105] = {.lex_state = 588},
  [106] = {.lex_state = 372},
  [107] = {.lex_state = 366},
  [108] = {.lex_state = 583, .external_lex_state = 3},
  [109] = {.lex_state = 588},
  [110] = {.lex_state = 532},
  [111] = {.lex_state = 330},
  [112] = {.lex_state = 553, .external_lex_state = 3},
  [113] = {.lex_state = 759},
  [114] = {.lex_state = 759},
  [115] = {.lex_state = 553, .external_lex_state = 3},
  [116] = {.lex_state = 372},
  [117] = {.lex_state = 553, .external_lex_state = 3},
  [118] = {.lex_state = 553, .external_lex_state = 3},
  [119] = {.lex_state = 595, .external_lex_state = 4},
  [120] = {.lex_state = 595, .external_lex_state = 4},
  [121] = {.lex_state = 553, .external_lex_state = 3},
  [122] = {.lex_state = 330},
  [123] = {.lex_state = 330},
  [124] = {.lex_state = 624},
  [125] = {.lex_state = 372},
  [126] = {.lex_state = 471, .external_lex_state = 2},
  [127] = {.lex_state = 532},
  [128] = {.lex_state = 600},
  [129] = {.lex_state = 600},
  [130] = {.lex_state = 600},
  [131] = {.lex_state = 784},
  [132] = {.lex_state = 471, .external_lex_state = 2},
  [133] = {.lex_state = 600},
  [134] = {.lex_state = 600},
  [135] = {.lex_state = 615, .external_lex_state = 3},
  [136] = {.lex_state = 615, .external_lex_state = 3},
  [137] = {.lex_state = 372},
  [138] = {.lex_state = 619, .external_lex_state = 3},
  [139] = {.lex_state = 615, .external_lex_state = 3},
  [140] = {.lex_state = 499},
  [141] = {.lex_state = 619, .external_lex_state = 3},
  [142] = {.lex_state = 619, .external_lex_state = 3},
  [143] = {.lex_state = 619, .external_lex_state = 3},
  [144] = {.lex_state = 615, .external_lex_state = 3},
  [145] = {.lex_state = 789, .external_lex_state = 3},
  [146] = {.lex_state = 794, .external_lex_state = 3},
  [147] = {.lex_state = 794, .external_lex_state = 3},
  [148] = {.lex_state = 507, .external_lex_state = 3},
  [149] = {.lex_state = 799, .external_lex_state = 3},
  [150] = {.lex_state = 804},
  [151] = {.lex_state = 809, .external_lex_state = 3},
  [152] = {.lex_state = 814, .external_lex_state = 3},
  [153] = {.lex_state = 819, .external_lex_state = 3},
  [154] = {.lex_state = 553, .external_lex_state = 3},
  [155] = {.lex_state = 754},
  [156] = {.lex_state = 588},
  [157] = {.lex_state = 330},
  [158] = {.lex_state = 507},
  [159] = {.lex_state = 588},
  [160] = {.lex_state = 784},
  [161] = {.lex_state = 532, .external_lex_state = 3},
  [162] = {.lex_state = 330},
  [163] = {.lex_state = 330},
  [164] = {.lex_state = 824},
  [165] = {.lex_state = 828},
  [166] = {.lex_state = 835},
  [167] = {.lex_state = 330},
  [168] = {.lex_state = 545},
  [169] = {.lex_state = 545},
  [170] = {.lex_state = 824},
  [171] = {.lex_state = 828},
  [172] = {.lex_state = 835},
  [173] = {.lex_state = 545},
  [174] = {.lex_state = 545},
  [175] = {.lex_state = 532, .external_lex_state = 3},
  [176] = {.lex_state = 532, .external_lex_state = 3},
  [177] = {.lex_state = 532, .external_lex_state = 3},
  [178] = {.lex_state = 532, .external_lex_state = 3},
  [179] = {.lex_state = 330},
  [180] = {.lex_state = 366},
  [181] = {.lex_state = 545},
  [182] = {.lex_state = 366},
  [183] = {.lex_state = 366},
  [184] = {.lex_state = 366},
  [185] = {.lex_state = 624},
  [186] = {.lex_state = 842, .external_lex_state = 3},
  [187] = {.lex_state = 553, .external_lex_state = 3},
  [188] = {.lex_state = 553, .external_lex_state = 3},
  [189] = {.lex_state = 784},
  [190] = {.lex_state = 847, .external_lex_state = 3},
  [191] = {.lex_state = 624},
  [192] = {.lex_state = 558},
  [193] = {.lex_state = 852, .external_lex_state = 4},
  [194] = {.lex_state = 558},
  [195] = {.lex_state = 330},
  [196] = {.lex_state = 372},
  [197] = {.lex_state = 372},
  [198] = {.lex_state = 372},
  [199] = {.lex_state = 471, .external_lex_state = 2},
  [200] = {.lex_state = 532},
  [201] = {.lex_state = 553, .external_lex_state = 3},
  [202] = {.lex_state = 553, .external_lex_state = 3},
  [203] = {.lex_state = 372},
  [204] = {.lex_state = 856, .external_lex_state = 3},
  [205] = {.lex_state = 588},
  [206] = {.lex_state = 532},
  [207] = {.lex_state = 545},
  [208] = {.lex_state = 532},
  [209] = {.lex_state = 553, .external_lex_state = 3},
  [210] = {.lex_state = 532},
  [211] = {.lex_state = 532},
  [212] = {.lex_state = 553, .external_lex_state = 3},
  [213] = {.lex_state = 372},
  [214] = {.lex_state = 595, .external_lex_state = 4},
  [215] = {.lex_state = 553, .external_lex_state = 3},
  [216] = {.lex_state = 595, .external_lex_state = 4},
  [217] = {.lex_state = 330},
  [218] = {.lex_state = 330},
  [219] = {.lex_state = 372},
  [220] = {.lex_state = 507},
  [221] = {.lex_state = 372},
  [222] = {.lex_state = 372},
  [223] = {.lex_state = 861, .external_lex_state = 4},
  [224] = {.lex_state = 869},
  [225] = {.lex_state = 553, .external_lex_state = 3},
  [226] = {.lex_state = 588},
  [227] = {.lex_state = 471, .external_lex_state = 2},
  [228] = {.lex_state = 600},
  [229] = {.lex_state = 600},
  [230] = {.lex_state = 600},
  [231] = {.lex_state = 553, .external_lex_state = 3},
  [232] = {.lex_state = 471, .external_lex_state = 2},
  [233] = {.lex_state = 600},
  [234] = {.lex_state = 619, .external_lex_state = 3},
  [235] = {.lex_state = 615, .external_lex_state = 3},
  [236] = {.lex_state = 619, .external_lex_state = 3},
  [237] = {.lex_state = 619, .external_lex_state = 3},
  [238] = {.lex_state = 619, .external_lex_state = 3},
  [239] = {.lex_state = 499},
  [240] = {.lex_state = 619, .external_lex_state = 3},
  [241] = {.lex_state = 794, .external_lex_state = 3},
  [242] = {.lex_state = 794, .external_lex_state = 3},
  [243] = {.lex_state = 799, .external_lex_state = 3},
  [244] = {.lex_state = 814, .external_lex_state = 3},
  [245] = {.lex_state = 553, .external_lex_state = 3},
  [246] = {.lex_state = 532},
  [247] = {.lex_state = 553, .external_lex_state = 3},
  [248] = {.lex_state = 532},
  [249] = {.lex_state = 532},
  [250] = {.lex_state = 873, .external_lex_state = 3},
  [251] = {.lex_state = 873, .external_lex_state = 3},
  [252] = {.lex_state = 819, .external_lex_state = 3},
  [253] = {.lex_state = 873, .external_lex_state = 3},
  [254] = {.lex_state = 507},
  [255] = {.lex_state = 819, .external_lex_state = 3},
  [256] = {.lex_state = 588},
  [257] = {.lex_state = 507},
  [258] = {.lex_state = 588},
  [259] = {.lex_state = 814, .external_lex_state = 3},
  [260] = {.lex_state = 878, .external_lex_state = 3},
  [261] = {.lex_state = 553, .external_lex_state = 3},
  [262] = {.lex_state = 330},
  [263] = {.lex_state = 330},
  [264] = {.lex_state = 828},
  [265] = {.lex_state = 828},
  [266] = {.lex_state = 835},
  [267] = {.lex_state = 835},
  [268] = {.lex_state = 545},
  [269] = {.lex_state = 545},
  [270] = {.lex_state = 545},
  [271] = {.lex_state = 545},
  [272] = {.lex_state = 883},
  [273] = {.lex_state = 883},
  [274] = {.lex_state = 532, .external_lex_state = 3},
  [275] = {.lex_state = 366},
  [276] = {.lex_state = 366},
  [277] = {.lex_state = 366},
  [278] = {.lex_state = 890, .external_lex_state = 3},
  [279] = {.lex_state = 878, .external_lex_state = 3},
  [280] = {.lex_state = 553, .external_lex_state = 3},
  [281] = {.lex_state = 784},
  [282] = {.lex_state = 624},
  [283] = {.lex_state = 330},
  [284] = {.lex_state = 553, .external_lex_state = 3},
  [285] = {.lex_state = 852, .external_lex_state = 4},
  [286] = {.lex_state = 558},
  [287] = {.lex_state = 532},
  [288] = {.lex_state = 372},
  [289] = {.lex_state = 372},
  [290] = {.lex_state = 588},
  [291] = {.lex_state = 330},
  [292] = {.lex_state = 856, .external_lex_state = 3},
  [293] = {.lex_state = 588},
  [294] = {.lex_state = 532},
  [295] = {.lex_state = 553, .external_lex_state = 3},
  [296] = {.lex_state = 372},
  [297] = {.lex_state = 553, .external_lex_state = 3},
  [298] = {.lex_state = 372},
  [299] = {.lex_state = 532},
  [300] = {.lex_state = 545},
  [301] = {.lex_state = 553, .external_lex_state = 3},
  [302] = {.lex_state = 532},
  [303] = {.lex_state = 372},
  [304] = {.lex_state = 532},
  [305] = {.lex_state = 553, .external_lex_state = 3},
  [306] = {.lex_state = 372},
  [307] = {.lex_state = 784},
  [308] = {.lex_state = 507},
  [309] = {.lex_state = 372},
  [310] = {.lex_state = 553, .external_lex_state = 3},
  [311] = {.lex_state = 528},
  [312] = {.lex_state = 553, .external_lex_state = 3},
  [313] = {.lex_state = 861, .external_lex_state = 4},
  [314] = {.lex_state = 553, .external_lex_state = 3},
  [315] = {.lex_state = 869},
  [316] = {.lex_state = 372},
  [317] = {.lex_state = 553, .external_lex_state = 3},
  [318] = {.lex_state = 471, .external_lex_state = 2},
  [319] = {.lex_state = 553, .external_lex_state = 3},
  [320] = {.lex_state = 471, .external_lex_state = 2},
  [321] = {.lex_state = 619, .external_lex_state = 3},
  [322] = {.lex_state = 619, .external_lex_state = 3},
  [323] = {.lex_state = 814, .external_lex_state = 3},
  [324] = {.lex_state = 553, .external_lex_state = 3},
  [325] = {.lex_state = 372},
  [326] = {.lex_state = 372},
  [327] = {.lex_state = 372},
  [328] = {.lex_state = 873, .external_lex_state = 3},
  [329] = {.lex_state = 873, .external_lex_state = 3},
  [330] = {.lex_state = 819, .external_lex_state = 3},
  [331] = {.lex_state = 507},
  [332] = {.lex_state = 814, .external_lex_state = 3},
  [333] = {.lex_state = 814, .external_lex_state = 3},
  [334] = {.lex_state = 553, .external_lex_state = 3},
  [335] = {.lex_state = 878, .external_lex_state = 3},
  [336] = {.lex_state = 828},
  [337] = {.lex_state = 835},
  [338] = {.lex_state = 545},
  [339] = {.lex_state = 883},
  [340] = {.lex_state = 878, .external_lex_state = 3},
  [341] = {.lex_state = 878, .external_lex_state = 3},
  [342] = {.lex_state = 553, .external_lex_state = 3},
  [343] = {.lex_state = 878, .external_lex_state = 3},
  [344] = {.lex_state = 852, .external_lex_state = 4},
  [345] = {.lex_state = 330},
  [346] = {.lex_state = 553, .external_lex_state = 3},
  [347] = {.lex_state = 372},
  [348] = {.lex_state = 532},
  [349] = {.lex_state = 372},
  [350] = {.lex_state = 330},
  [351] = {.lex_state = 372},
  [352] = {.lex_state = 553, .external_lex_state = 3},
  [353] = {.lex_state = 330},
  [354] = {.lex_state = 372},
  [355] = {.lex_state = 372},
  [356] = {.lex_state = 532},
  [357] = {.lex_state = 553, .external_lex_state = 3},
  [358] = {.lex_state = 588},
  [359] = {.lex_state = 372},
  [360] = {.lex_state = 532},
  [361] = {.lex_state = 553, .external_lex_state = 3},
  [362] = {.lex_state = 372},
  [363] = {.lex_state = 372},
  [364] = {.lex_state = 784},
  [365] = {.lex_state = 861, .external_lex_state = 4},
  [366] = {.lex_state = 553, .external_lex_state = 3},
  [367] = {.lex_state = 553, .external_lex_state = 3},
  [368] = {.lex_state = 869},
  [369] = {.lex_state = 553, .external_lex_state = 3},
  [370] = {.lex_state = 553, .external_lex_state = 3},
  [371] = {.lex_state = 553, .external_lex_state = 3},
  [372] = {.lex_state = 553, .external_lex_state = 3},
  [373] = {.lex_state = 553, .external_lex_state = 3},
  [374] = {.lex_state = 372},
  [375] = {.lex_state = 532},
  [376] = {.lex_state = 588},
  [377] = {.lex_state = 372},
  [378] = {.lex_state = 819, .external_lex_state = 3},
  [379] = {.lex_state = 532},
  [380] = {.lex_state = 372},
  [381] = {.lex_state = 819, .external_lex_state = 3},
  [382] = {.lex_state = 553, .external_lex_state = 3},
  [383] = {.lex_state = 878, .external_lex_state = 3},
  [384] = {.lex_state = 852, .external_lex_state = 4},
  [385] = {.lex_state = 372},
  [386] = {.lex_state = 372},
  [387] = {.lex_state = 372},
  [388] = {.lex_state = 372},
  [389] = {.lex_state = 372},
  [390] = {.lex_state = 588},
  [391] = {.lex_state = 372},
  [392] = {.lex_state = 330},
  [393] = {.lex_state = 372},
  [394] = {.lex_state = 553, .external_lex_state = 3},
  [395] = {.lex_state = 861, .external_lex_state = 4},
  [396] = {.lex_state = 869},
  [397] = {.lex_state = 553, .external_lex_state = 3},
  [398] = {.lex_state = 372},
  [399] = {.lex_state = 532},
  [400] = {.lex_state = 372},
  [401] = {.lex_state = 532},
  [402] = {.lex_state = 588},
  [403] = {.lex_state = 372},
  [404] = {.lex_state = 819, .external_lex_state = 3},
  [405] = {.lex_state = 532},
  [406] = {.lex_state = 372},
  [407] = {.lex_state = 553, .external_lex_state = 3},
  [408] = {.lex_state = 372},
  [409] = {.lex_state = 372},
  [410] = {.lex_state = 330},
  [411] = {.lex_state = 372},
  [412] = {.lex_state = 588},
  [413] = {.lex_state = 372},
  [414] = {.lex_state = 372},
  [415] = {.lex_state = 372},
  [416] = {.lex_state = 372},
  [417] = {.lex_state = 372},
  [418] = {.lex_state = 553, .external_lex_state = 3},
  [419] = {.lex_state = 372},
  [420] = {.lex_state = 372},
  [421] = {.lex_state = 372},
  [422] = {.lex_state = 330},
  [423] = {.lex_state = 372},
  [424] = {.lex_state = 372},
  [425] = {.lex_state = 553, .external_lex_state = 3},
  [426] = {.lex_state = 372},
  [427] = {.lex_state = 372},
  [428] = {.lex_state = 372},
  [429] = {.lex_state = 372},
  [430] = {.lex_state = 553, .external_lex_state = 3},
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
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
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
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_module_repeat1] = STATE(31),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(34),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
    [sym__identifier] = STATE(37),
    [anon_sym_qualified] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
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
    [sym_foreign_import] = STATE(39),
    [anon_sym_import] = ACTIONS(60),
    [sym_foreign_export] = ACTIONS(62),
    [sym_comment] = ACTIONS(52),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(52),
  },
  [8] = {
    [sym_statement_list] = STATE(43),
    [sym__layout_open_brace] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(68),
    [sym_comment] = ACTIONS(52),
  },
  [9] = {
    [sym_context] = STATE(46),
    [sym_class] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(52),
  },
  [10] = {
    [sym_context] = STATE(49),
    [sym_class] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(74),
    [sym_comment] = ACTIONS(52),
  },
  [11] = {
    [sym__op] = STATE(55),
    [sym_variable_symbol] = STATE(56),
    [sym_constructor_symbol] = STATE(56),
    [sym_integer] = STATE(57),
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
    [sym_context] = STATE(61),
    [sym_class] = STATE(47),
    [sym_simple_type] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(52),
  },
  [13] = {
    [sym_context] = STATE(64),
    [sym_class] = STATE(47),
    [sym_simple_type] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_constructor_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(52),
  },
  [14] = {
    [sym_simple_type] = STATE(67),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [15] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
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
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_BQUOTE] = ACTIONS(100),
    [anon_sym_COLON_COLON] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(102),
    [anon_sym_SEMI] = ACTIONS(104),
    [sym_variable_identifier] = ACTIONS(104),
    [sym_constructor_identifier] = ACTIONS(106),
    [sym_module_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym__integer_literal] = ACTIONS(104),
    [sym__octal_literal] = ACTIONS(104),
    [sym__hexidecimal_literal] = ACTIONS(104),
  },
  [18] = {
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym__] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_BANG] = ACTIONS(110),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(112),
    [sym__ascii_large] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_1] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym__space] = ACTIONS(114),
  },
  [19] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_variable_identifier] = ACTIONS(142),
    [sym_constructor_identifier] = ACTIONS(144),
    [sym_module_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [sym__integer_literal] = ACTIONS(142),
    [sym__octal_literal] = ACTIONS(142),
    [sym__hexidecimal_literal] = ACTIONS(142),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_comment] = ACTIONS(52),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_comment] = ACTIONS(52),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [sym_comment] = ACTIONS(52),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_comment] = ACTIONS(52),
  },
  [25] = {
    [sym_function_rhs] = STATE(87),
    [anon_sym_EQ] = ACTIONS(160),
    [sym_comment] = ACTIONS(52),
  },
  [26] = {
    [sym__abstract_pattern] = STATE(94),
    [sym_wildcard] = STATE(95),
    [sym__var] = STATE(96),
    [sym_variable_symbol] = STATE(28),
    [sym__literal] = STATE(95),
    [sym__identifier] = STATE(97),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym__symbol] = STATE(30),
    [aux_sym_function_lhs_repeat1] = STATE(98),
    [aux_sym__abstract_pattern_repeat1] = STATE(99),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
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
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
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
  [29] = {
    [anon_sym_COLON_COLON] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
    [sym__integer_literal] = ACTIONS(178),
    [sym__octal_literal] = ACTIONS(178),
    [sym__hexidecimal_literal] = ACTIONS(178),
  },
  [31] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(101),
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
  [32] = {
    [sym__symbol] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(182),
    [sym_module_identifier] = ACTIONS(182),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
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
    [sym__integer_literal] = ACTIONS(182),
    [sym__octal_literal] = ACTIONS(182),
    [sym__hexidecimal_literal] = ACTIONS(182),
  },
  [33] = {
    [sym_module_exports] = STATE(106),
    [anon_sym_where] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(188),
    [sym_comment] = ACTIONS(52),
  },
  [34] = {
    [sym__symbol] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(190),
    [sym_module_identifier] = ACTIONS(190),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
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
    [sym__integer_literal] = ACTIONS(190),
    [sym__octal_literal] = ACTIONS(190),
    [sym__hexidecimal_literal] = ACTIONS(190),
  },
  [35] = {
    [sym__identifier] = STATE(108),
    [sym_variable_identifier] = ACTIONS(194),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym__layout_semicolon] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_hiding] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [sym_import_specification] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_as] = ACTIONS(204),
    [anon_sym_hiding] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [anon_sym_ccall] = ACTIONS(208),
    [anon_sym_stdcall] = ACTIONS(208),
    [anon_sym_cplusplus] = ACTIONS(208),
    [anon_sym_jvm] = ACTIONS(208),
    [anon_sym_dotnet] = ACTIONS(208),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [sym_calling_convention] = STATE(114),
    [anon_sym_ccall] = ACTIONS(210),
    [anon_sym_stdcall] = ACTIONS(210),
    [anon_sym_cplusplus] = ACTIONS(210),
    [anon_sym_jvm] = ACTIONS(210),
    [anon_sym_dotnet] = ACTIONS(210),
    [sym_comment] = ACTIONS(52),
  },
  [40] = {
    [sym__identifier] = STATE(116),
    [anon_sym_RPAREN] = ACTIONS(212),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [41] = {
    [sym__expression] = STATE(118),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(119),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(120),
    [sym__layout_close_brace] = ACTIONS(216),
    [anon_sym_do] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [42] = {
    [sym__expression] = STATE(121),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(122),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(123),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_do] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [43] = {
    [sym__layout_semicolon] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(232),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [sym_class] = STATE(125),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [aux_sym_type_class_repeat1] = STATE(129),
    [anon_sym_where] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [anon_sym_EQ_GT] = ACTIONS(244),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [aux_sym_type_class_repeat1] = STATE(133),
    [anon_sym_where] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(240),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(52),
  },
  [50] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(136),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(250),
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
  [51] = {
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
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
  [52] = {
    [sym__identifier] = STATE(137),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [53] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(139),
    [sym__layout_semicolon] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_1] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_BSLASH] = ACTIONS(144),
  },
  [55] = {
    [aux_sym_fixity_repeat1] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(52),
  },
  [57] = {
    [sym__op] = STATE(142),
    [sym_variable_symbol] = STATE(56),
    [sym_constructor_symbol] = STATE(56),
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [58] = {
    [sym__layout_semicolon] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
  },
  [59] = {
    [sym__symbol] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [60] = {
    [aux_sym_type_class_repeat1] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [sym_simple_type] = STATE(148),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [sym_constructors] = STATE(152),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [aux_sym_type_class_repeat1] = STATE(156),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [sym_simple_type] = STATE(157),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(298),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [aux_sym_type_class_repeat1] = STATE(156),
    [anon_sym_EQ] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(302),
    [sym_comment] = ACTIONS(52),
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
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(314),
  },
  [74] = {
    [sym__char_escape] = STATE(163),
    [sym__ascii] = STATE(163),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(316),
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
  [75] = {
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(328),
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
  [76] = {
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
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
  [77] = {
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_LBRACE] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_AT] = ACTIONS(330),
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
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_BQUOTE] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_BANG] = ACTIONS(332),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(332),
    [sym__ascii_large] = ACTIONS(332),
    [anon_sym_POUND] = ACTIONS(332),
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_1] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [sym__space] = ACTIONS(332),
    [sym__newline] = ACTIONS(332),
    [sym__tab] = ACTIONS(332),
    [sym__vertical_tab] = ACTIONS(332),
  },
  [79] = {
    [sym__layout_semicolon] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(336),
    [sym_constructor_identifier] = ACTIONS(338),
    [sym_module_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [sym__integer_literal] = ACTIONS(336),
    [sym__octal_literal] = ACTIONS(336),
    [sym__hexidecimal_literal] = ACTIONS(336),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_BQUOTE] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(340),
    [sym__ascii_large] = ACTIONS(340),
    [anon_sym_POUND] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_1] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_AT] = ACTIONS(342),
    [anon_sym_BQUOTE] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(342),
    [anon_sym__] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(342),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_BANG] = ACTIONS(342),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(342),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(342),
    [sym__ascii_large] = ACTIONS(342),
    [anon_sym_POUND] = ACTIONS(342),
    [anon_sym_DOLLAR] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_AMP] = ACTIONS(342),
    [anon_sym_1] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_GT] = ACTIONS(342),
    [anon_sym_QMARK] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(342),
    [anon_sym_TILDE] = ACTIONS(342),
    [anon_sym_BSLASH] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym__space] = ACTIONS(342),
    [sym__newline] = ACTIONS(342),
    [sym__tab] = ACTIONS(342),
    [sym__vertical_tab] = ACTIONS(342),
  },
  [82] = {
    [sym__char_escape] = STATE(169),
    [sym__ascii] = STATE(169),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(58),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(344),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(350),
    [anon_sym_X] = ACTIONS(350),
    [anon_sym_o] = ACTIONS(352),
    [anon_sym_O] = ACTIONS(352),
    [anon_sym_a] = ACTIONS(344),
    [anon_sym_b] = ACTIONS(344),
    [anon_sym_f] = ACTIONS(344),
    [anon_sym_n] = ACTIONS(344),
    [anon_sym_r] = ACTIONS(344),
    [anon_sym_t] = ACTIONS(344),
    [anon_sym_v] = ACTIONS(344),
    [anon_sym_NUL] = ACTIONS(354),
    [anon_sym_SOH] = ACTIONS(354),
    [anon_sym_STX] = ACTIONS(354),
    [anon_sym_ETX] = ACTIONS(354),
    [anon_sym_EOT] = ACTIONS(354),
    [anon_sym_ENQ] = ACTIONS(354),
    [anon_sym_ACK] = ACTIONS(354),
    [anon_sym_BEL] = ACTIONS(354),
    [anon_sym_BS] = ACTIONS(354),
    [anon_sym_HT] = ACTIONS(354),
    [anon_sym_LF] = ACTIONS(354),
    [anon_sym_VT] = ACTIONS(354),
    [anon_sym_FF] = ACTIONS(354),
    [anon_sym_CR] = ACTIONS(354),
    [anon_sym_SO] = ACTIONS(354),
    [anon_sym_SI] = ACTIONS(354),
    [anon_sym_DLE] = ACTIONS(354),
    [anon_sym_DC1] = ACTIONS(354),
    [anon_sym_DC2] = ACTIONS(354),
    [anon_sym_DC3] = ACTIONS(354),
    [anon_sym_DC4] = ACTIONS(354),
    [anon_sym_NAK] = ACTIONS(354),
    [anon_sym_SYN] = ACTIONS(354),
    [anon_sym_ETB] = ACTIONS(354),
    [anon_sym_CAN] = ACTIONS(354),
    [anon_sym_EM] = ACTIONS(354),
    [anon_sym_SUB] = ACTIONS(354),
    [anon_sym_ESC] = ACTIONS(354),
    [anon_sym_FS] = ACTIONS(354),
    [anon_sym_GS] = ACTIONS(354),
    [anon_sym_RS] = ACTIONS(354),
    [anon_sym_US] = ACTIONS(354),
    [anon_sym_SP] = ACTIONS(354),
    [anon_sym_DEL] = ACTIONS(354),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_BQUOTE] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_BANG] = ACTIONS(356),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(356),
    [sym__ascii_large] = ACTIONS(356),
    [anon_sym_POUND] = ACTIONS(356),
    [anon_sym_DOLLAR] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(356),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_1] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym__space] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
    [sym__tab] = ACTIONS(356),
    [sym__vertical_tab] = ACTIONS(356),
  },
  [84] = {
    [sym__gap] = STATE(174),
    [sym__graphic] = STATE(174),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(174),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_foreign] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_instance] = ACTIONS(362),
    [anon_sym_infixl] = ACTIONS(362),
    [anon_sym_infixr] = ACTIONS(362),
    [anon_sym_infix] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_data] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_newtype] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_type] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(362),
    [sym_module_identifier] = ACTIONS(362),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_1] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(362),
    [sym__integer_literal] = ACTIONS(362),
    [sym__octal_literal] = ACTIONS(362),
    [sym__hexidecimal_literal] = ACTIONS(362),
  },
  [86] = {
    [sym__literal] = STATE(177),
    [sym__identifier] = STATE(177),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_function_rhs_repeat1] = STATE(178),
    [sym__layout_semicolon] = ACTIONS(364),
    [anon_sym_SEMI] = ACTIONS(366),
    [sym_variable_identifier] = ACTIONS(368),
    [sym_constructor_identifier] = ACTIONS(370),
    [sym_module_identifier] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(374),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym__] = ACTIONS(376),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_BANG] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(376),
    [sym_constructor_identifier] = ACTIONS(376),
    [sym_module_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(376),
    [anon_sym_POUND] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(376),
    [anon_sym_AMP] = ACTIONS(376),
    [anon_sym_1] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(376),
    [anon_sym_LT] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(376),
    [anon_sym_CARET] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(376),
    [anon_sym_BSLASH] = ACTIONS(376),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
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
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(106),
    [sym_variable_identifier] = ACTIONS(106),
    [sym_constructor_identifier] = ACTIONS(106),
    [sym_module_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
    [anon_sym_AMP] = ACTIONS(106),
    [anon_sym_1] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_QMARK] = ACTIONS(106),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(106),
    [sym__integer_literal] = ACTIONS(106),
    [sym__octal_literal] = ACTIONS(106),
    [sym__hexidecimal_literal] = ACTIONS(106),
  },
  [91] = {
    [sym__graphic] = STATE(179),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(179),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym__] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_BANG] = ACTIONS(110),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(112),
    [sym__ascii_large] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_PERCENT] = ACTIONS(110),
    [anon_sym_AMP] = ACTIONS(110),
    [anon_sym_1] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym__space] = ACTIONS(378),
  },
  [92] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(181),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(144),
    [sym_module_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_1] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_BSLASH] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(144),
    [sym__octal_literal] = ACTIONS(144),
    [sym__hexidecimal_literal] = ACTIONS(144),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(382),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym__] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_BANG] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(382),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [anon_sym_POUND] = ACTIONS(382),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(382),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_1] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_SLASH] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_CARET] = ACTIONS(382),
    [anon_sym_TILDE] = ACTIONS(382),
    [anon_sym_BSLASH] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_1] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_1] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_AT] = ACTIONS(386),
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
  [98] = {
    [sym__abstract_pattern] = STATE(183),
    [sym_wildcard] = STATE(95),
    [sym__var] = STATE(96),
    [sym_variable_symbol] = STATE(28),
    [sym__literal] = STATE(95),
    [sym__identifier] = STATE(97),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym__symbol] = STATE(30),
    [aux_sym__abstract_pattern_repeat1] = STATE(99),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
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
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [99] = {
    [sym__identifier] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_1] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [100] = {
    [sym__type] = STATE(187),
    [sym_function_type] = STATE(188),
    [sym_context] = STATE(189),
    [sym_class] = STATE(47),
    [sym_simple_type] = STATE(190),
    [aux_sym_function_type_repeat1] = STATE(191),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_constructor_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [sym__layout_semicolon] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(396),
    [sym_comment] = ACTIONS(52),
  },
  [102] = {
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(190),
    [sym_module_identifier] = ACTIONS(190),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
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
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(190),
    [sym__integer_literal] = ACTIONS(190),
    [sym__octal_literal] = ACTIONS(190),
    [sym__hexidecimal_literal] = ACTIONS(190),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_constructor_identifier] = ACTIONS(398),
    [sym_module_identifier] = ACTIONS(398),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_TILDE] = ACTIONS(398),
    [anon_sym_BSLASH] = ACTIONS(398),
    [sym__integer_literal] = ACTIONS(398),
    [sym__octal_literal] = ACTIONS(398),
    [sym__hexidecimal_literal] = ACTIONS(398),
  },
  [104] = {
    [sym_declarations] = STATE(195),
    [sym__layout_open_brace] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [sym_export] = STATE(197),
    [sym__identifier] = STATE(198),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [106] = {
    [anon_sym_where] = ACTIONS(406),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_EQ] = ACTIONS(408),
    [anon_sym_AT] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym__] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(408),
    [anon_sym_BANG] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(408),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(408),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_DOLLAR] = ACTIONS(408),
    [anon_sym_PERCENT] = ACTIONS(408),
    [anon_sym_AMP] = ACTIONS(408),
    [anon_sym_1] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_SLASH] = ACTIONS(408),
    [anon_sym_LT] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_QMARK] = ACTIONS(408),
    [anon_sym_CARET] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(408),
    [anon_sym_BSLASH] = ACTIONS(408),
    [sym__integer_literal] = ACTIONS(408),
    [sym__octal_literal] = ACTIONS(408),
    [sym__hexidecimal_literal] = ACTIONS(408),
  },
  [108] = {
    [sym_import_specification] = STATE(201),
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_as] = ACTIONS(414),
    [anon_sym_hiding] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [109] = {
    [sym__identifier] = STATE(203),
    [anon_sym_RPAREN] = ACTIONS(416),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [110] = {
    [sym__identifier] = STATE(204),
    [sym_variable_identifier] = ACTIONS(194),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [112] = {
    [sym__layout_semicolon] = ACTIONS(410),
    [anon_sym_SEMI] = ACTIONS(412),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [anon_sym_unsafe] = ACTIONS(420),
    [anon_sym_safe] = ACTIONS(420),
    [sym_variable_identifier] = ACTIONS(422),
    [sym_constructor_identifier] = ACTIONS(422),
    [sym_module_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(420),
  },
  [114] = {
    [sym_safety] = STATE(208),
    [sym_type_signature] = STATE(209),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(210),
    [anon_sym_unsafe] = ACTIONS(424),
    [anon_sym_safe] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(426),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(430),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [aux_sym_export_repeat1] = STATE(213),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(52),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [118] = {
    [sym__layout_semicolon] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [119] = {
    [sym__layout_close_brace] = ACTIONS(444),
    [anon_sym_do] = ACTIONS(446),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(446),
    [sym__integer_literal] = ACTIONS(446),
    [sym__octal_literal] = ACTIONS(446),
    [sym__hexidecimal_literal] = ACTIONS(446),
  },
  [120] = {
    [sym__expression] = STATE(118),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(216),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_close_brace] = ACTIONS(450),
    [anon_sym_do] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [121] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_do] = ACTIONS(446),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(446),
    [sym__integer_literal] = ACTIONS(446),
    [sym__octal_literal] = ACTIONS(446),
    [sym__hexidecimal_literal] = ACTIONS(446),
  },
  [123] = {
    [sym__expression] = STATE(121),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(218),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_do] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [124] = {
    [anon_sym_LPAREN] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [aux_sym_context_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [sym_general_declarations] = STATE(225),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [aux_sym_type_class_repeat1] = STATE(226),
    [sym_variable_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [anon_sym_where] = ACTIONS(468),
    [anon_sym_EQ_GT] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [anon_sym_where] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [aux_sym_type_class_repeat1] = STATE(230),
    [anon_sym_where] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [sym_variable_identifier] = ACTIONS(480),
    [sym_constructor_identifier] = ACTIONS(482),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [sym_general_declarations] = STATE(231),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [133] = {
    [anon_sym_where] = ACTIONS(484),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [134] = {
    [aux_sym_type_class_repeat1] = STATE(233),
    [anon_sym_where] = ACTIONS(484),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(52),
  },
  [135] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(235),
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [136] = {
    [sym__symbol] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [137] = {
    [anon_sym_BQUOTE] = ACTIONS(496),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(52),
  },
  [139] = {
    [sym__symbol] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [140] = {
    [sym__op] = STATE(238),
    [sym_variable_symbol] = STATE(56),
    [sym_constructor_symbol] = STATE(56),
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [141] = {
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [aux_sym_fixity_repeat1] = STATE(240),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comment] = ACTIONS(52),
  },
  [143] = {
    [sym__layout_semicolon] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(506),
    [anon_sym_COMMA] = ACTIONS(506),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [sym__layout_semicolon] = ACTIONS(508),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_TILDE] = ACTIONS(398),
    [anon_sym_BSLASH] = ACTIONS(398),
  },
  [145] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_EQ_GT] = ACTIONS(470),
    [anon_sym_deriving] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym__layout_semicolon] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_EQ] = ACTIONS(514),
    [anon_sym_deriving] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(516),
    [sym_constructor_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [aux_sym_type_class_repeat1] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(520),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [148] = {
    [sym_constructors] = STATE(244),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(245),
    [sym__layout_semicolon] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_EQ] = ACTIONS(526),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [sym_constructors] = STATE(244),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(245),
    [sym__layout_semicolon] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [sym__identifier] = STATE(247),
    [anon_sym_LPAREN] = ACTIONS(528),
    [sym_variable_identifier] = ACTIONS(194),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [sym_strict] = STATE(251),
    [sym__identifier] = STATE(251),
    [sym_fields] = STATE(252),
    [aux_sym_constructor_repeat1] = STATE(253),
    [sym__layout_semicolon] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_PIPE] = ACTIONS(532),
    [anon_sym_deriving] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(536),
    [sym_variable_identifier] = ACTIONS(538),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_module_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [sym_deriving] = STATE(245),
    [sym__layout_semicolon] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [aux_sym_constructors_repeat1] = STATE(255),
    [sym__layout_semicolon] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_deriving] = ACTIONS(542),
    [sym_comment] = ACTIONS(52),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(522),
    [anon_sym_SEMI] = ACTIONS(524),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_EQ_GT] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [anon_sym_EQ] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(546),
    [sym_comment] = ACTIONS(52),
  },
  [157] = {
    [anon_sym_EQ] = ACTIONS(548),
    [sym_comment] = ACTIONS(52),
  },
  [158] = {
    [sym_new_constructor] = STATE(259),
    [sym_constructor_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(52),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(52),
  },
  [160] = {
    [sym__type] = STATE(261),
    [sym_function_type] = STATE(188),
    [sym_simple_type] = STATE(190),
    [aux_sym_function_type_repeat1] = STATE(191),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_constructor_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(52),
  },
  [161] = {
    [sym__layout_semicolon] = ACTIONS(554),
    [anon_sym_SEMI] = ACTIONS(556),
    [sym_variable_identifier] = ACTIONS(556),
    [sym_constructor_identifier] = ACTIONS(558),
    [sym_module_identifier] = ACTIONS(558),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(558),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [sym__integer_literal] = ACTIONS(556),
    [sym__octal_literal] = ACTIONS(556),
    [sym__hexidecimal_literal] = ACTIONS(556),
  },
  [162] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(560),
  },
  [163] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(562),
  },
  [164] = {
    [sym__cntrl] = STATE(263),
    [anon_sym_AT] = ACTIONS(564),
    [anon_sym__] = ACTIONS(564),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(564),
    [anon_sym_BSLASH] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_RBRACK] = ACTIONS(564),
  },
  [165] = {
    [aux_sym__escape_repeat1] = STATE(265),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(566),
  },
  [166] = {
    [aux_sym__escape_repeat2] = STATE(267),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(568),
  },
  [167] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(570),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_LPAREN] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(572),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_BANG] = ACTIONS(572),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_BSLASH] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_RBRACK] = ACTIONS(572),
    [sym__space] = ACTIONS(572),
    [sym__newline] = ACTIONS(572),
    [sym__tab] = ACTIONS(572),
    [sym__vertical_tab] = ACTIONS(572),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_EQ] = ACTIONS(574),
    [anon_sym_AT] = ACTIONS(574),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_BANG] = ACTIONS(574),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(574),
    [anon_sym_TILDE] = ACTIONS(574),
    [anon_sym_BSLASH] = ACTIONS(574),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym__space] = ACTIONS(574),
    [sym__newline] = ACTIONS(574),
    [sym__tab] = ACTIONS(574),
    [sym__vertical_tab] = ACTIONS(574),
  },
  [170] = {
    [sym__cntrl] = STATE(269),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym__] = ACTIONS(576),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_BSLASH] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(576),
    [anon_sym_RBRACK] = ACTIONS(576),
  },
  [171] = {
    [aux_sym__escape_repeat1] = STATE(271),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(578),
  },
  [172] = {
    [aux_sym__escape_repeat2] = STATE(273),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(580),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(582),
    [anon_sym_RBRACE] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_EQ] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(582),
    [anon_sym_BQUOTE] = ACTIONS(582),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym__] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(582),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_BANG] = ACTIONS(582),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(582),
    [sym__ascii_large] = ACTIONS(582),
    [anon_sym_POUND] = ACTIONS(582),
    [anon_sym_DOLLAR] = ACTIONS(582),
    [anon_sym_PERCENT] = ACTIONS(582),
    [anon_sym_AMP] = ACTIONS(582),
    [anon_sym_1] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_DOT] = ACTIONS(582),
    [anon_sym_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(582),
    [anon_sym_GT] = ACTIONS(582),
    [anon_sym_QMARK] = ACTIONS(582),
    [anon_sym_CARET] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(582),
    [anon_sym_BSLASH] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [sym__space] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
    [sym__tab] = ACTIONS(582),
    [sym__vertical_tab] = ACTIONS(582),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [anon_sym_RBRACE] = ACTIONS(584),
    [anon_sym_LPAREN] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_AT] = ACTIONS(584),
    [anon_sym_BQUOTE] = ACTIONS(584),
    [anon_sym_DASH] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_COLON] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(584),
    [anon_sym_BANG] = ACTIONS(584),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(584),
    [anon_sym_DQUOTE] = ACTIONS(584),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(584),
    [sym__ascii_large] = ACTIONS(584),
    [anon_sym_POUND] = ACTIONS(584),
    [anon_sym_DOLLAR] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(584),
    [anon_sym_AMP] = ACTIONS(584),
    [anon_sym_1] = ACTIONS(584),
    [anon_sym_PLUS] = ACTIONS(584),
    [anon_sym_DOT] = ACTIONS(584),
    [anon_sym_SLASH] = ACTIONS(584),
    [anon_sym_LT] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_CARET] = ACTIONS(584),
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_BSLASH] = ACTIONS(584),
    [anon_sym_LBRACK] = ACTIONS(584),
    [anon_sym_RBRACK] = ACTIONS(584),
    [sym__space] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
    [sym__tab] = ACTIONS(584),
    [sym__vertical_tab] = ACTIONS(584),
  },
  [175] = {
    [sym__layout_semicolon] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(588),
    [sym_constructor_identifier] = ACTIONS(590),
    [sym_module_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [sym__integer_literal] = ACTIONS(588),
    [sym__octal_literal] = ACTIONS(588),
    [sym__hexidecimal_literal] = ACTIONS(588),
  },
  [176] = {
    [sym__layout_semicolon] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym__integer_literal] = ACTIONS(100),
    [sym__octal_literal] = ACTIONS(100),
    [sym__hexidecimal_literal] = ACTIONS(100),
  },
  [177] = {
    [sym__layout_semicolon] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(594),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_constructor_identifier] = ACTIONS(596),
    [sym_module_identifier] = ACTIONS(596),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DQUOTE] = ACTIONS(594),
    [sym__integer_literal] = ACTIONS(594),
    [sym__octal_literal] = ACTIONS(594),
    [sym__hexidecimal_literal] = ACTIONS(594),
  },
  [178] = {
    [sym__literal] = STATE(274),
    [sym__identifier] = STATE(274),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_semicolon] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(368),
    [sym_constructor_identifier] = ACTIONS(370),
    [sym_module_identifier] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [179] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(602),
  },
  [180] = {
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [sym_variable_identifier] = ACTIONS(338),
    [sym_constructor_identifier] = ACTIONS(338),
    [sym_module_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
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
    [sym__integer_literal] = ACTIONS(338),
    [sym__octal_literal] = ACTIONS(338),
    [sym__hexidecimal_literal] = ACTIONS(338),
  },
  [181] = {
    [sym__gap] = STATE(174),
    [sym__graphic] = STATE(174),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(174),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [182] = {
    [sym__abstract_pattern] = STATE(277),
    [sym_wildcard] = STATE(95),
    [sym__var] = STATE(96),
    [sym_variable_symbol] = STATE(28),
    [sym__literal] = STATE(95),
    [sym__identifier] = STATE(97),
    [sym_integer] = STATE(90),
    [sym_char] = STATE(90),
    [sym_string] = STATE(90),
    [sym__symbol] = STATE(30),
    [aux_sym__abstract_pattern_repeat1] = STATE(99),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
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
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(606),
    [anon_sym_EQ] = ACTIONS(606),
    [anon_sym_AT] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [anon_sym__] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(606),
    [anon_sym_PIPE] = ACTIONS(606),
    [anon_sym_BANG] = ACTIONS(606),
    [sym_variable_identifier] = ACTIONS(606),
    [sym_constructor_identifier] = ACTIONS(606),
    [sym_module_identifier] = ACTIONS(606),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(606),
    [anon_sym_SQUOTE] = ACTIONS(606),
    [anon_sym_DQUOTE] = ACTIONS(606),
    [anon_sym_POUND] = ACTIONS(606),
    [anon_sym_DOLLAR] = ACTIONS(606),
    [anon_sym_PERCENT] = ACTIONS(606),
    [anon_sym_AMP] = ACTIONS(606),
    [anon_sym_1] = ACTIONS(606),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DOT] = ACTIONS(606),
    [anon_sym_SLASH] = ACTIONS(606),
    [anon_sym_LT] = ACTIONS(606),
    [anon_sym_GT] = ACTIONS(606),
    [anon_sym_QMARK] = ACTIONS(606),
    [anon_sym_CARET] = ACTIONS(606),
    [anon_sym_TILDE] = ACTIONS(606),
    [anon_sym_BSLASH] = ACTIONS(606),
    [sym__integer_literal] = ACTIONS(606),
    [sym__octal_literal] = ACTIONS(606),
    [sym__hexidecimal_literal] = ACTIONS(606),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(608),
    [anon_sym_EQ] = ACTIONS(608),
    [anon_sym_AT] = ACTIONS(608),
    [anon_sym_DASH] = ACTIONS(608),
    [anon_sym__] = ACTIONS(608),
    [anon_sym_COLON] = ACTIONS(608),
    [anon_sym_PIPE] = ACTIONS(608),
    [anon_sym_BANG] = ACTIONS(608),
    [sym_variable_identifier] = ACTIONS(608),
    [sym_constructor_identifier] = ACTIONS(608),
    [sym_module_identifier] = ACTIONS(608),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(608),
    [anon_sym_SQUOTE] = ACTIONS(608),
    [anon_sym_DQUOTE] = ACTIONS(608),
    [anon_sym_POUND] = ACTIONS(608),
    [anon_sym_DOLLAR] = ACTIONS(608),
    [anon_sym_PERCENT] = ACTIONS(608),
    [anon_sym_AMP] = ACTIONS(608),
    [anon_sym_1] = ACTIONS(608),
    [anon_sym_PLUS] = ACTIONS(608),
    [anon_sym_DOT] = ACTIONS(608),
    [anon_sym_SLASH] = ACTIONS(608),
    [anon_sym_LT] = ACTIONS(608),
    [anon_sym_GT] = ACTIONS(608),
    [anon_sym_QMARK] = ACTIONS(608),
    [anon_sym_CARET] = ACTIONS(608),
    [anon_sym_TILDE] = ACTIONS(608),
    [anon_sym_BSLASH] = ACTIONS(608),
    [sym__integer_literal] = ACTIONS(608),
    [sym__octal_literal] = ACTIONS(608),
    [sym__hexidecimal_literal] = ACTIONS(608),
  },
  [185] = {
    [anon_sym_DASH_GT] = ACTIONS(610),
    [sym_variable_identifier] = ACTIONS(610),
    [sym_comment] = ACTIONS(52),
  },
  [186] = {
    [aux_sym_type_class_repeat1] = STATE(279),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_DASH_GT] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(612),
    [sym_comment] = ACTIONS(52),
  },
  [187] = {
    [sym__layout_semicolon] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(616),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [sym__type] = STATE(280),
    [sym_function_type] = STATE(188),
    [sym_simple_type] = STATE(190),
    [aux_sym_function_type_repeat1] = STATE(191),
    [sym_variable_identifier] = ACTIONS(390),
    [sym_constructor_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [anon_sym_DASH_GT] = ACTIONS(622),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [anon_sym_DASH_GT] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(52),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(626),
    [anon_sym_RBRACE] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_import] = ACTIONS(626),
    [anon_sym_EQ] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym_DASH] = ACTIONS(626),
    [anon_sym_foreign] = ACTIONS(626),
    [anon_sym_default] = ACTIONS(626),
    [anon_sym_do] = ACTIONS(626),
    [anon_sym_class] = ACTIONS(626),
    [anon_sym_instance] = ACTIONS(626),
    [anon_sym_infixl] = ACTIONS(626),
    [anon_sym_infixr] = ACTIONS(626),
    [anon_sym_infix] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_data] = ACTIONS(626),
    [anon_sym_PIPE] = ACTIONS(626),
    [anon_sym_newtype] = ACTIONS(626),
    [anon_sym_BANG] = ACTIONS(626),
    [anon_sym_type] = ACTIONS(626),
    [sym_variable_identifier] = ACTIONS(626),
    [sym_constructor_identifier] = ACTIONS(626),
    [sym_module_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(626),
    [anon_sym_DOLLAR] = ACTIONS(626),
    [anon_sym_PERCENT] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_1] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(626),
    [anon_sym_DOT] = ACTIONS(626),
    [anon_sym_SLASH] = ACTIONS(626),
    [anon_sym_LT] = ACTIONS(626),
    [anon_sym_GT] = ACTIONS(626),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_CARET] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [sym__integer_literal] = ACTIONS(626),
    [sym__octal_literal] = ACTIONS(626),
    [sym__hexidecimal_literal] = ACTIONS(626),
  },
  [193] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(284),
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_module_repeat1] = STATE(285),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
  [194] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_module_repeat1] = STATE(286),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(630),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [anon_sym_where] = ACTIONS(634),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [aux_sym_module_exports_repeat1] = STATE(289),
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(52),
  },
  [198] = {
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(642),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [sym_declarations] = STATE(291),
    [sym__layout_open_brace] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(402),
    [sym_comment] = ACTIONS(52),
  },
  [200] = {
    [sym__identifier] = STATE(292),
    [sym_variable_identifier] = ACTIONS(194),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [sym_comment] = ACTIONS(52),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(648),
    [anon_sym_SEMI] = ACTIONS(650),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [aux_sym_import_specification_repeat1] = STATE(296),
    [anon_sym_LPAREN] = ACTIONS(652),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym_comment] = ACTIONS(52),
  },
  [204] = {
    [sym_import_specification] = STATE(297),
    [sym__layout_semicolon] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(646),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_hiding] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [sym__identifier] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [206] = {
    [sym_variable_identifier] = ACTIONS(658),
    [sym_constructor_identifier] = ACTIONS(660),
    [sym_module_identifier] = ACTIONS(660),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(658),
  },
  [207] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(300),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [208] = {
    [sym_type_signature] = STATE(301),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(302),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(426),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(664),
    [anon_sym_SEMI] = ACTIONS(666),
    [sym_comment] = ACTIONS(52),
  },
  [210] = {
    [sym_type_signature] = STATE(301),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [211] = {
    [sym__identifier] = STATE(303),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [212] = {
    [sym__layout_semicolon] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [sym__layout_close_brace] = ACTIONS(676),
    [anon_sym_do] = ACTIONS(678),
    [sym_variable_identifier] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [sym__integer_literal] = ACTIONS(678),
    [sym__octal_literal] = ACTIONS(678),
    [sym__hexidecimal_literal] = ACTIONS(678),
  },
  [215] = {
    [sym__layout_semicolon] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [216] = {
    [sym__layout_close_brace] = ACTIONS(686),
    [anon_sym_do] = ACTIONS(688),
    [sym_variable_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(690),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [sym__integer_literal] = ACTIONS(688),
    [sym__octal_literal] = ACTIONS(688),
    [sym__hexidecimal_literal] = ACTIONS(688),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(678),
    [anon_sym_do] = ACTIONS(678),
    [sym_variable_identifier] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [sym__integer_literal] = ACTIONS(678),
    [sym__octal_literal] = ACTIONS(678),
    [sym__hexidecimal_literal] = ACTIONS(678),
  },
  [218] = {
    [anon_sym_RBRACE] = ACTIONS(688),
    [anon_sym_do] = ACTIONS(688),
    [sym_variable_identifier] = ACTIONS(690),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(690),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [sym__integer_literal] = ACTIONS(688),
    [sym__octal_literal] = ACTIONS(688),
    [sym__hexidecimal_literal] = ACTIONS(688),
  },
  [219] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [sym_class] = STATE(306),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [anon_sym_EQ_GT] = ACTIONS(692),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(696),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(312),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_general_declarations_repeat1] = STATE(313),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(698),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
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
  [224] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(314),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_general_declarations_repeat1] = STATE(315),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
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
  [225] = {
    [sym__layout_semicolon] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_variable_identifier] = ACTIONS(546),
    [sym_comment] = ACTIONS(52),
  },
  [227] = {
    [sym_general_declarations] = STATE(317),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [anon_sym_where] = ACTIONS(710),
    [sym_variable_identifier] = ACTIONS(712),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [anon_sym_where] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [anon_sym_where] = ACTIONS(714),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [231] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(718),
    [sym_comment] = ACTIONS(52),
  },
  [232] = {
    [sym_general_declarations] = STATE(319),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [233] = {
    [anon_sym_where] = ACTIONS(720),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_COMMA] = ACTIONS(724),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [sym__symbol] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(726),
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [236] = {
    [sym__layout_semicolon] = ACTIONS(730),
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_COMMA] = ACTIONS(732),
    [sym_comment] = ACTIONS(52),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_COMMA] = ACTIONS(736),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [sym__layout_semicolon] = ACTIONS(738),
    [anon_sym_SEMI] = ACTIONS(740),
    [anon_sym_COMMA] = ACTIONS(740),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym__op] = STATE(322),
    [sym_variable_symbol] = STATE(56),
    [sym_constructor_symbol] = STATE(56),
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
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
  [240] = {
    [sym__layout_semicolon] = ACTIONS(742),
    [anon_sym_SEMI] = ACTIONS(744),
    [anon_sym_COMMA] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_EQ] = ACTIONS(710),
    [anon_sym_deriving] = ACTIONS(710),
    [sym_variable_identifier] = ACTIONS(712),
    [sym_constructor_identifier] = ACTIONS(712),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_EQ] = ACTIONS(468),
    [anon_sym_deriving] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [sym_constructors] = STATE(323),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(324),
    [sym__layout_semicolon] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [sym_deriving] = STATE(324),
    [sym__layout_semicolon] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(750),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(750),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [sym__identifier] = STATE(325),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(752),
    [anon_sym_SEMI] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [sym_field] = STATE(327),
    [sym_variable_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(52),
  },
  [249] = {
    [sym__identifier] = STATE(328),
    [sym_variable_identifier] = ACTIONS(758),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_module_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [sym__layout_semicolon] = ACTIONS(760),
    [anon_sym_SEMI] = ACTIONS(762),
    [anon_sym_PIPE] = ACTIONS(762),
    [anon_sym_deriving] = ACTIONS(762),
    [anon_sym_BANG] = ACTIONS(762),
    [sym_variable_identifier] = ACTIONS(764),
    [sym_constructor_identifier] = ACTIONS(764),
    [sym_module_identifier] = ACTIONS(764),
    [sym_comment] = ACTIONS(52),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_PIPE] = ACTIONS(768),
    [anon_sym_deriving] = ACTIONS(768),
    [sym_comment] = ACTIONS(52),
  },
  [253] = {
    [sym_strict] = STATE(329),
    [sym__identifier] = STATE(329),
    [sym__layout_semicolon] = ACTIONS(766),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_PIPE] = ACTIONS(768),
    [anon_sym_deriving] = ACTIONS(768),
    [anon_sym_BANG] = ACTIONS(536),
    [sym_variable_identifier] = ACTIONS(538),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_module_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(52),
  },
  [254] = {
    [sym_constructor] = STATE(330),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(770),
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_PIPE] = ACTIONS(774),
    [anon_sym_deriving] = ACTIONS(772),
    [sym_comment] = ACTIONS(52),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(710),
    [anon_sym_EQ] = ACTIONS(710),
    [sym_variable_identifier] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [257] = {
    [sym_new_constructor] = STATE(332),
    [sym_constructor_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(52),
  },
  [258] = {
    [sym__identifier] = STATE(333),
    [sym_fields] = STATE(333),
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_variable_identifier] = ACTIONS(194),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [259] = {
    [sym_deriving] = STATE(334),
    [sym__layout_semicolon] = ACTIONS(776),
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [260] = {
    [aux_sym_type_class_repeat1] = STATE(279),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_DASH_GT] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(780),
    [sym_comment] = ACTIONS(52),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(782),
    [anon_sym_SEMI] = ACTIONS(784),
    [sym_comment] = ACTIONS(52),
  },
  [262] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(786),
  },
  [263] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(788),
  },
  [264] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(790),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(790),
  },
  [265] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(792),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(794),
  },
  [266] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(796),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(796),
  },
  [267] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(792),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(798),
  },
  [268] = {
    [anon_sym_SEMI] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(800),
    [anon_sym_RBRACE] = ACTIONS(800),
    [anon_sym_LPAREN] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_EQ] = ACTIONS(800),
    [anon_sym_AT] = ACTIONS(800),
    [anon_sym_BQUOTE] = ACTIONS(800),
    [anon_sym_DASH] = ACTIONS(800),
    [anon_sym__] = ACTIONS(800),
    [anon_sym_COLON] = ACTIONS(800),
    [anon_sym_PIPE] = ACTIONS(800),
    [anon_sym_BANG] = ACTIONS(800),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(800),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(800),
    [sym__ascii_large] = ACTIONS(800),
    [anon_sym_POUND] = ACTIONS(800),
    [anon_sym_DOLLAR] = ACTIONS(800),
    [anon_sym_PERCENT] = ACTIONS(800),
    [anon_sym_AMP] = ACTIONS(800),
    [anon_sym_1] = ACTIONS(800),
    [anon_sym_PLUS] = ACTIONS(800),
    [anon_sym_DOT] = ACTIONS(800),
    [anon_sym_SLASH] = ACTIONS(800),
    [anon_sym_LT] = ACTIONS(800),
    [anon_sym_GT] = ACTIONS(800),
    [anon_sym_QMARK] = ACTIONS(800),
    [anon_sym_CARET] = ACTIONS(800),
    [anon_sym_TILDE] = ACTIONS(800),
    [anon_sym_BSLASH] = ACTIONS(800),
    [anon_sym_LBRACK] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [sym__space] = ACTIONS(800),
    [sym__newline] = ACTIONS(800),
    [sym__tab] = ACTIONS(800),
    [sym__vertical_tab] = ACTIONS(800),
  },
  [269] = {
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_LBRACE] = ACTIONS(802),
    [anon_sym_RBRACE] = ACTIONS(802),
    [anon_sym_LPAREN] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [anon_sym_EQ] = ACTIONS(802),
    [anon_sym_AT] = ACTIONS(802),
    [anon_sym_BQUOTE] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(802),
    [anon_sym__] = ACTIONS(802),
    [anon_sym_COLON] = ACTIONS(802),
    [anon_sym_PIPE] = ACTIONS(802),
    [anon_sym_BANG] = ACTIONS(802),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(802),
    [anon_sym_DQUOTE] = ACTIONS(802),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(802),
    [sym__ascii_large] = ACTIONS(802),
    [anon_sym_POUND] = ACTIONS(802),
    [anon_sym_DOLLAR] = ACTIONS(802),
    [anon_sym_PERCENT] = ACTIONS(802),
    [anon_sym_AMP] = ACTIONS(802),
    [anon_sym_1] = ACTIONS(802),
    [anon_sym_PLUS] = ACTIONS(802),
    [anon_sym_DOT] = ACTIONS(802),
    [anon_sym_SLASH] = ACTIONS(802),
    [anon_sym_LT] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(802),
    [anon_sym_QMARK] = ACTIONS(802),
    [anon_sym_CARET] = ACTIONS(802),
    [anon_sym_TILDE] = ACTIONS(802),
    [anon_sym_BSLASH] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(802),
    [sym__space] = ACTIONS(802),
    [sym__newline] = ACTIONS(802),
    [sym__tab] = ACTIONS(802),
    [sym__vertical_tab] = ACTIONS(802),
  },
  [270] = {
    [anon_sym_SEMI] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_RBRACE] = ACTIONS(804),
    [anon_sym_LPAREN] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [anon_sym_EQ] = ACTIONS(804),
    [anon_sym_AT] = ACTIONS(804),
    [anon_sym_BQUOTE] = ACTIONS(804),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym__] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(804),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_BANG] = ACTIONS(804),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(804),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(804),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(804),
    [sym__ascii_large] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [anon_sym_PERCENT] = ACTIONS(804),
    [anon_sym_AMP] = ACTIONS(804),
    [anon_sym_1] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_DOT] = ACTIONS(804),
    [anon_sym_SLASH] = ACTIONS(804),
    [anon_sym_LT] = ACTIONS(804),
    [anon_sym_GT] = ACTIONS(804),
    [anon_sym_QMARK] = ACTIONS(804),
    [anon_sym_CARET] = ACTIONS(804),
    [anon_sym_TILDE] = ACTIONS(804),
    [anon_sym_BSLASH] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_RBRACK] = ACTIONS(804),
    [sym__space] = ACTIONS(804),
    [sym__newline] = ACTIONS(804),
    [sym__tab] = ACTIONS(804),
    [sym__vertical_tab] = ACTIONS(804),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(804),
  },
  [271] = {
    [anon_sym_SEMI] = ACTIONS(806),
    [anon_sym_LBRACE] = ACTIONS(806),
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(806),
    [anon_sym_RPAREN] = ACTIONS(806),
    [anon_sym_EQ] = ACTIONS(806),
    [anon_sym_AT] = ACTIONS(806),
    [anon_sym_BQUOTE] = ACTIONS(806),
    [anon_sym_DASH] = ACTIONS(806),
    [anon_sym__] = ACTIONS(806),
    [anon_sym_COLON] = ACTIONS(806),
    [anon_sym_PIPE] = ACTIONS(806),
    [anon_sym_BANG] = ACTIONS(806),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(806),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(806),
    [sym__ascii_large] = ACTIONS(806),
    [anon_sym_POUND] = ACTIONS(806),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_PERCENT] = ACTIONS(806),
    [anon_sym_AMP] = ACTIONS(806),
    [anon_sym_1] = ACTIONS(806),
    [anon_sym_PLUS] = ACTIONS(806),
    [anon_sym_DOT] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(806),
    [anon_sym_GT] = ACTIONS(806),
    [anon_sym_QMARK] = ACTIONS(806),
    [anon_sym_CARET] = ACTIONS(806),
    [anon_sym_TILDE] = ACTIONS(806),
    [anon_sym_BSLASH] = ACTIONS(806),
    [anon_sym_LBRACK] = ACTIONS(806),
    [anon_sym_RBRACK] = ACTIONS(806),
    [sym__space] = ACTIONS(806),
    [sym__newline] = ACTIONS(806),
    [sym__tab] = ACTIONS(806),
    [sym__vertical_tab] = ACTIONS(806),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(808),
  },
  [272] = {
    [anon_sym_SEMI] = ACTIONS(810),
    [anon_sym_LBRACE] = ACTIONS(810),
    [anon_sym_RBRACE] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(810),
    [anon_sym_EQ] = ACTIONS(810),
    [anon_sym_AT] = ACTIONS(810),
    [anon_sym_BQUOTE] = ACTIONS(810),
    [anon_sym_DASH] = ACTIONS(810),
    [anon_sym__] = ACTIONS(810),
    [anon_sym_COLON] = ACTIONS(810),
    [anon_sym_PIPE] = ACTIONS(810),
    [anon_sym_BANG] = ACTIONS(810),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(810),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(810),
    [sym__ascii_large] = ACTIONS(810),
    [anon_sym_POUND] = ACTIONS(810),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [anon_sym_PERCENT] = ACTIONS(810),
    [anon_sym_AMP] = ACTIONS(810),
    [anon_sym_1] = ACTIONS(810),
    [anon_sym_PLUS] = ACTIONS(810),
    [anon_sym_DOT] = ACTIONS(810),
    [anon_sym_SLASH] = ACTIONS(810),
    [anon_sym_LT] = ACTIONS(810),
    [anon_sym_GT] = ACTIONS(810),
    [anon_sym_QMARK] = ACTIONS(810),
    [anon_sym_CARET] = ACTIONS(810),
    [anon_sym_TILDE] = ACTIONS(810),
    [anon_sym_BSLASH] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(810),
    [sym__space] = ACTIONS(810),
    [sym__newline] = ACTIONS(810),
    [sym__tab] = ACTIONS(810),
    [sym__vertical_tab] = ACTIONS(810),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(810),
  },
  [273] = {
    [anon_sym_SEMI] = ACTIONS(806),
    [anon_sym_LBRACE] = ACTIONS(806),
    [anon_sym_RBRACE] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(806),
    [anon_sym_RPAREN] = ACTIONS(806),
    [anon_sym_EQ] = ACTIONS(806),
    [anon_sym_AT] = ACTIONS(806),
    [anon_sym_BQUOTE] = ACTIONS(806),
    [anon_sym_DASH] = ACTIONS(806),
    [anon_sym__] = ACTIONS(806),
    [anon_sym_COLON] = ACTIONS(806),
    [anon_sym_PIPE] = ACTIONS(806),
    [anon_sym_BANG] = ACTIONS(806),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(806),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(806),
    [sym__ascii_large] = ACTIONS(806),
    [anon_sym_POUND] = ACTIONS(806),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_PERCENT] = ACTIONS(806),
    [anon_sym_AMP] = ACTIONS(806),
    [anon_sym_1] = ACTIONS(806),
    [anon_sym_PLUS] = ACTIONS(806),
    [anon_sym_DOT] = ACTIONS(806),
    [anon_sym_SLASH] = ACTIONS(806),
    [anon_sym_LT] = ACTIONS(806),
    [anon_sym_GT] = ACTIONS(806),
    [anon_sym_QMARK] = ACTIONS(806),
    [anon_sym_CARET] = ACTIONS(806),
    [anon_sym_TILDE] = ACTIONS(806),
    [anon_sym_BSLASH] = ACTIONS(806),
    [anon_sym_LBRACK] = ACTIONS(806),
    [anon_sym_RBRACK] = ACTIONS(806),
    [sym__space] = ACTIONS(806),
    [sym__newline] = ACTIONS(806),
    [sym__tab] = ACTIONS(806),
    [sym__vertical_tab] = ACTIONS(806),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(812),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [sym_variable_identifier] = ACTIONS(816),
    [sym_constructor_identifier] = ACTIONS(818),
    [sym_module_identifier] = ACTIONS(818),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(818),
    [anon_sym_SQUOTE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [sym__integer_literal] = ACTIONS(816),
    [sym__octal_literal] = ACTIONS(816),
    [sym__hexidecimal_literal] = ACTIONS(816),
  },
  [275] = {
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [anon_sym_COLON] = ACTIONS(558),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_BANG] = ACTIONS(558),
    [sym_variable_identifier] = ACTIONS(558),
    [sym_constructor_identifier] = ACTIONS(558),
    [sym_module_identifier] = ACTIONS(558),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(558),
    [anon_sym_SQUOTE] = ACTIONS(558),
    [anon_sym_DQUOTE] = ACTIONS(558),
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
    [sym__integer_literal] = ACTIONS(558),
    [sym__octal_literal] = ACTIONS(558),
    [sym__hexidecimal_literal] = ACTIONS(558),
  },
  [276] = {
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym_AT] = ACTIONS(590),
    [anon_sym_DASH] = ACTIONS(590),
    [anon_sym__] = ACTIONS(590),
    [anon_sym_COLON] = ACTIONS(590),
    [anon_sym_PIPE] = ACTIONS(590),
    [anon_sym_BANG] = ACTIONS(590),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_constructor_identifier] = ACTIONS(590),
    [sym_module_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_POUND] = ACTIONS(590),
    [anon_sym_DOLLAR] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(590),
    [anon_sym_AMP] = ACTIONS(590),
    [anon_sym_1] = ACTIONS(590),
    [anon_sym_PLUS] = ACTIONS(590),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_SLASH] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [anon_sym_QMARK] = ACTIONS(590),
    [anon_sym_CARET] = ACTIONS(590),
    [anon_sym_TILDE] = ACTIONS(590),
    [anon_sym_BSLASH] = ACTIONS(590),
    [sym__integer_literal] = ACTIONS(590),
    [sym__octal_literal] = ACTIONS(590),
    [sym__hexidecimal_literal] = ACTIONS(590),
  },
  [277] = {
    [anon_sym_LPAREN] = ACTIONS(820),
    [anon_sym_EQ] = ACTIONS(820),
    [anon_sym_AT] = ACTIONS(820),
    [anon_sym_DASH] = ACTIONS(820),
    [anon_sym__] = ACTIONS(820),
    [anon_sym_COLON] = ACTIONS(820),
    [anon_sym_PIPE] = ACTIONS(820),
    [anon_sym_BANG] = ACTIONS(820),
    [sym_variable_identifier] = ACTIONS(820),
    [sym_constructor_identifier] = ACTIONS(820),
    [sym_module_identifier] = ACTIONS(820),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(820),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [anon_sym_DQUOTE] = ACTIONS(820),
    [anon_sym_POUND] = ACTIONS(820),
    [anon_sym_DOLLAR] = ACTIONS(820),
    [anon_sym_PERCENT] = ACTIONS(820),
    [anon_sym_AMP] = ACTIONS(820),
    [anon_sym_1] = ACTIONS(820),
    [anon_sym_PLUS] = ACTIONS(820),
    [anon_sym_DOT] = ACTIONS(820),
    [anon_sym_SLASH] = ACTIONS(820),
    [anon_sym_LT] = ACTIONS(820),
    [anon_sym_GT] = ACTIONS(820),
    [anon_sym_QMARK] = ACTIONS(820),
    [anon_sym_CARET] = ACTIONS(820),
    [anon_sym_TILDE] = ACTIONS(820),
    [anon_sym_BSLASH] = ACTIONS(820),
    [sym__integer_literal] = ACTIONS(820),
    [sym__octal_literal] = ACTIONS(820),
    [sym__hexidecimal_literal] = ACTIONS(820),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_DASH_GT] = ACTIONS(468),
    [anon_sym_EQ_GT] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [sym__layout_semicolon] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(514),
    [anon_sym_DASH_GT] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(822),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(826),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [sym__type] = STATE(342),
    [sym_function_type] = STATE(188),
    [sym_simple_type] = STATE(190),
    [aux_sym_function_type_repeat1] = STATE(343),
    [sym_variable_identifier] = ACTIONS(828),
    [sym_constructor_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [anon_sym_DASH_GT] = ACTIONS(830),
    [sym_variable_identifier] = ACTIONS(830),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(832),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(834),
    [anon_sym_SEMI] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(346),
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
  [286] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(101),
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(27),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(27),
    [sym__identifier] = STATE(29),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
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
    [sym_export] = STATE(347),
    [sym__identifier] = STATE(198),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [288] = {
    [anon_sym_where] = ACTIONS(842),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(846),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [sym__identifier] = STATE(351),
    [anon_sym_DOT_DOT] = ACTIONS(848),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(850),
    [sym_comment] = ACTIONS(52),
  },
  [292] = {
    [sym_import_specification] = STATE(352),
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_hiding] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym__identifier] = STATE(354),
    [anon_sym_DOT_DOT] = ACTIONS(856),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [sym__identifier] = STATE(355),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(860),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(864),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [aux_sym_import_specification_repeat1] = STATE(359),
    [anon_sym_LPAREN] = ACTIONS(866),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(864),
    [sym_comment] = ACTIONS(52),
  },
  [299] = {
    [sym_variable_identifier] = ACTIONS(336),
    [sym_constructor_identifier] = ACTIONS(338),
    [sym_module_identifier] = ACTIONS(338),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [sym__gap] = STATE(174),
    [sym__graphic] = STATE(174),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(174),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
    [sym__vertical_tab] = ACTIONS(138),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(870),
    [anon_sym_SEMI] = ACTIONS(872),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
    [sym_type_signature] = STATE(361),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_RPAREN] = ACTIONS(874),
    [sym_comment] = ACTIONS(52),
  },
  [304] = {
    [sym__identifier] = STATE(362),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(876),
    [anon_sym_SEMI] = ACTIONS(878),
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [anon_sym_COMMA] = ACTIONS(880),
    [anon_sym_RPAREN] = ACTIONS(880),
    [sym_comment] = ACTIONS(52),
  },
  [307] = {
    [sym_variable_identifier] = ACTIONS(882),
    [sym_constructor_identifier] = ACTIONS(884),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [sym_class] = STATE(363),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [anon_sym_EQ_GT] = ACTIONS(886),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(888),
    [anon_sym_SEMI] = ACTIONS(890),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
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
  [312] = {
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [sym_comment] = ACTIONS(52),
  },
  [313] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(367),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
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
  [314] = {
    [sym__layout_semicolon] = ACTIONS(898),
    [anon_sym_SEMI] = ACTIONS(900),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(369),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(28),
    [anon_sym_infixr] = ACTIONS(28),
    [anon_sym_infix] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(700),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
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
  [316] = {
    [anon_sym_COMMA] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_EQ_GT] = ACTIONS(904),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(908),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
    [sym_general_declarations] = STATE(370),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(912),
    [sym_comment] = ACTIONS(52),
  },
  [320] = {
    [sym_general_declarations] = STATE(371),
    [sym__layout_open_brace] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [321] = {
    [sym__layout_semicolon] = ACTIONS(914),
    [anon_sym_SEMI] = ACTIONS(916),
    [anon_sym_COMMA] = ACTIONS(916),
    [sym_comment] = ACTIONS(52),
  },
  [322] = {
    [sym__layout_semicolon] = ACTIONS(918),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(920),
    [sym_comment] = ACTIONS(52),
  },
  [323] = {
    [sym_deriving] = STATE(372),
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [324] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [sym_comment] = ACTIONS(52),
  },
  [325] = {
    [aux_sym_export_repeat1] = STATE(374),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym_comment] = ACTIONS(52),
  },
  [326] = {
    [aux_sym_field_repeat1] = STATE(377),
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_COLON_COLON] = ACTIONS(930),
    [sym_comment] = ACTIONS(52),
  },
  [327] = {
    [aux_sym_fields_repeat1] = STATE(380),
    [anon_sym_RBRACE] = ACTIONS(932),
    [anon_sym_COMMA] = ACTIONS(934),
    [sym_comment] = ACTIONS(52),
  },
  [328] = {
    [sym__layout_semicolon] = ACTIONS(936),
    [anon_sym_SEMI] = ACTIONS(938),
    [anon_sym_PIPE] = ACTIONS(938),
    [anon_sym_deriving] = ACTIONS(938),
    [anon_sym_BANG] = ACTIONS(938),
    [sym_variable_identifier] = ACTIONS(940),
    [sym_constructor_identifier] = ACTIONS(940),
    [sym_module_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(52),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(942),
    [anon_sym_SEMI] = ACTIONS(944),
    [anon_sym_PIPE] = ACTIONS(944),
    [anon_sym_deriving] = ACTIONS(944),
    [anon_sym_BANG] = ACTIONS(944),
    [sym_variable_identifier] = ACTIONS(946),
    [sym_constructor_identifier] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(52),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(948),
    [anon_sym_SEMI] = ACTIONS(950),
    [anon_sym_PIPE] = ACTIONS(950),
    [anon_sym_deriving] = ACTIONS(950),
    [sym_comment] = ACTIONS(52),
  },
  [331] = {
    [sym_constructor] = STATE(381),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [sym_deriving] = STATE(382),
    [sym__layout_semicolon] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(954),
    [anon_sym_deriving] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [sym__layout_semicolon] = ACTIONS(956),
    [anon_sym_SEMI] = ACTIONS(958),
    [anon_sym_deriving] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(952),
    [anon_sym_SEMI] = ACTIONS(954),
    [sym_comment] = ACTIONS(52),
  },
  [335] = {
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_DASH_GT] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(468),
    [sym_comment] = ACTIONS(52),
  },
  [336] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(960),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(960),
  },
  [337] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(962),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(962),
  },
  [338] = {
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_LBRACE] = ACTIONS(964),
    [anon_sym_RBRACE] = ACTIONS(964),
    [anon_sym_LPAREN] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(964),
    [anon_sym_EQ] = ACTIONS(964),
    [anon_sym_AT] = ACTIONS(964),
    [anon_sym_BQUOTE] = ACTIONS(964),
    [anon_sym_DASH] = ACTIONS(964),
    [anon_sym__] = ACTIONS(964),
    [anon_sym_COLON] = ACTIONS(964),
    [anon_sym_PIPE] = ACTIONS(964),
    [anon_sym_BANG] = ACTIONS(964),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(964),
    [anon_sym_DQUOTE] = ACTIONS(964),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(964),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(964),
    [sym__ascii_large] = ACTIONS(964),
    [anon_sym_POUND] = ACTIONS(964),
    [anon_sym_DOLLAR] = ACTIONS(964),
    [anon_sym_PERCENT] = ACTIONS(964),
    [anon_sym_AMP] = ACTIONS(964),
    [anon_sym_1] = ACTIONS(964),
    [anon_sym_PLUS] = ACTIONS(964),
    [anon_sym_DOT] = ACTIONS(964),
    [anon_sym_SLASH] = ACTIONS(964),
    [anon_sym_LT] = ACTIONS(964),
    [anon_sym_GT] = ACTIONS(964),
    [anon_sym_QMARK] = ACTIONS(964),
    [anon_sym_CARET] = ACTIONS(964),
    [anon_sym_TILDE] = ACTIONS(964),
    [anon_sym_BSLASH] = ACTIONS(964),
    [anon_sym_LBRACK] = ACTIONS(964),
    [anon_sym_RBRACK] = ACTIONS(964),
    [sym__space] = ACTIONS(964),
    [sym__newline] = ACTIONS(964),
    [sym__tab] = ACTIONS(964),
    [sym__vertical_tab] = ACTIONS(964),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(964),
  },
  [339] = {
    [anon_sym_SEMI] = ACTIONS(966),
    [anon_sym_LBRACE] = ACTIONS(966),
    [anon_sym_RBRACE] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_RPAREN] = ACTIONS(966),
    [anon_sym_EQ] = ACTIONS(966),
    [anon_sym_AT] = ACTIONS(966),
    [anon_sym_BQUOTE] = ACTIONS(966),
    [anon_sym_DASH] = ACTIONS(966),
    [anon_sym__] = ACTIONS(966),
    [anon_sym_COLON] = ACTIONS(966),
    [anon_sym_PIPE] = ACTIONS(966),
    [anon_sym_BANG] = ACTIONS(966),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(966),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(966),
    [sym__ascii_large] = ACTIONS(966),
    [anon_sym_POUND] = ACTIONS(966),
    [anon_sym_DOLLAR] = ACTIONS(966),
    [anon_sym_PERCENT] = ACTIONS(966),
    [anon_sym_AMP] = ACTIONS(966),
    [anon_sym_1] = ACTIONS(966),
    [anon_sym_PLUS] = ACTIONS(966),
    [anon_sym_DOT] = ACTIONS(966),
    [anon_sym_SLASH] = ACTIONS(966),
    [anon_sym_LT] = ACTIONS(966),
    [anon_sym_GT] = ACTIONS(966),
    [anon_sym_QMARK] = ACTIONS(966),
    [anon_sym_CARET] = ACTIONS(966),
    [anon_sym_TILDE] = ACTIONS(966),
    [anon_sym_BSLASH] = ACTIONS(966),
    [anon_sym_LBRACK] = ACTIONS(966),
    [anon_sym_RBRACK] = ACTIONS(966),
    [sym__space] = ACTIONS(966),
    [sym__newline] = ACTIONS(966),
    [sym__tab] = ACTIONS(966),
    [sym__vertical_tab] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(966),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_DASH_GT] = ACTIONS(710),
    [sym_variable_identifier] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [sym__layout_semicolon] = ACTIONS(968),
    [anon_sym_SEMI] = ACTIONS(610),
    [anon_sym_DASH_GT] = ACTIONS(610),
    [sym_variable_identifier] = ACTIONS(610),
    [sym_comment] = ACTIONS(52),
  },
  [342] = {
    [sym__layout_semicolon] = ACTIONS(970),
    [anon_sym_SEMI] = ACTIONS(972),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [sym__layout_semicolon] = ACTIONS(970),
    [anon_sym_SEMI] = ACTIONS(972),
    [anon_sym_DASH_GT] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(974),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [sym__layout_close_brace] = ACTIONS(976),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_foreign] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_instance] = ACTIONS(362),
    [anon_sym_infixl] = ACTIONS(362),
    [anon_sym_infixr] = ACTIONS(362),
    [anon_sym_infix] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_data] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_newtype] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_type] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(362),
    [sym_module_identifier] = ACTIONS(362),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_AMP] = ACTIONS(362),
    [anon_sym_1] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(362),
    [sym__integer_literal] = ACTIONS(362),
    [sym__octal_literal] = ACTIONS(362),
    [sym__hexidecimal_literal] = ACTIONS(362),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(978),
    [sym_comment] = ACTIONS(52),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(980),
    [anon_sym_SEMI] = ACTIONS(982),
    [sym_comment] = ACTIONS(52),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [sym_export] = STATE(385),
    [sym__identifier] = STATE(198),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [349] = {
    [anon_sym_where] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [350] = {
    [anon_sym_RPAREN] = ACTIONS(988),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [aux_sym_export_repeat1] = STATE(387),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(988),
    [sym_comment] = ACTIONS(52),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(992),
    [sym_comment] = ACTIONS(52),
  },
  [353] = {
    [anon_sym_RPAREN] = ACTIONS(994),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [aux_sym_export_repeat1] = STATE(389),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(994),
    [sym_comment] = ACTIONS(52),
  },
  [355] = {
    [anon_sym_LPAREN] = ACTIONS(996),
    [anon_sym_COMMA] = ACTIONS(998),
    [anon_sym_RPAREN] = ACTIONS(998),
    [sym_comment] = ACTIONS(52),
  },
  [356] = {
    [sym__identifier] = STATE(391),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [357] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1002),
    [sym_comment] = ACTIONS(52),
  },
  [358] = {
    [sym__identifier] = STATE(393),
    [anon_sym_DOT_DOT] = ACTIONS(1004),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(1006),
    [sym_comment] = ACTIONS(52),
  },
  [360] = {
    [sym_variable_identifier] = ACTIONS(588),
    [sym_constructor_identifier] = ACTIONS(590),
    [sym_module_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [anon_sym_COMMA] = ACTIONS(1012),
    [anon_sym_RPAREN] = ACTIONS(1012),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [sym_variable_identifier] = ACTIONS(1016),
    [sym_constructor_identifier] = ACTIONS(1018),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [sym__layout_close_brace] = ACTIONS(1020),
    [anon_sym_LPAREN] = ACTIONS(1022),
    [anon_sym_EQ] = ACTIONS(1022),
    [anon_sym_AT] = ACTIONS(1022),
    [anon_sym_DASH] = ACTIONS(1022),
    [anon_sym_infixl] = ACTIONS(1022),
    [anon_sym_infixr] = ACTIONS(1022),
    [anon_sym_infix] = ACTIONS(1022),
    [anon_sym_COLON] = ACTIONS(1022),
    [anon_sym_PIPE] = ACTIONS(1022),
    [anon_sym_BANG] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(1022),
    [sym_constructor_identifier] = ACTIONS(1022),
    [sym_module_identifier] = ACTIONS(1022),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1022),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [anon_sym_PERCENT] = ACTIONS(1022),
    [anon_sym_AMP] = ACTIONS(1022),
    [anon_sym_1] = ACTIONS(1022),
    [anon_sym_PLUS] = ACTIONS(1022),
    [anon_sym_DOT] = ACTIONS(1022),
    [anon_sym_SLASH] = ACTIONS(1022),
    [anon_sym_LT] = ACTIONS(1022),
    [anon_sym_GT] = ACTIONS(1022),
    [anon_sym_QMARK] = ACTIONS(1022),
    [anon_sym_CARET] = ACTIONS(1022),
    [anon_sym_TILDE] = ACTIONS(1022),
    [anon_sym_BSLASH] = ACTIONS(1022),
  },
  [366] = {
    [sym__layout_semicolon] = ACTIONS(1024),
    [anon_sym_SEMI] = ACTIONS(1026),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1028),
    [anon_sym_SEMI] = ACTIONS(1030),
    [sym_comment] = ACTIONS(52),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(1022),
    [anon_sym_LPAREN] = ACTIONS(1022),
    [anon_sym_EQ] = ACTIONS(1022),
    [anon_sym_AT] = ACTIONS(1022),
    [anon_sym_DASH] = ACTIONS(1022),
    [anon_sym_infixl] = ACTIONS(1022),
    [anon_sym_infixr] = ACTIONS(1022),
    [anon_sym_infix] = ACTIONS(1022),
    [anon_sym_COLON] = ACTIONS(1022),
    [anon_sym_PIPE] = ACTIONS(1022),
    [anon_sym_BANG] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(1022),
    [sym_constructor_identifier] = ACTIONS(1022),
    [sym_module_identifier] = ACTIONS(1022),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1022),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [anon_sym_PERCENT] = ACTIONS(1022),
    [anon_sym_AMP] = ACTIONS(1022),
    [anon_sym_1] = ACTIONS(1022),
    [anon_sym_PLUS] = ACTIONS(1022),
    [anon_sym_DOT] = ACTIONS(1022),
    [anon_sym_SLASH] = ACTIONS(1022),
    [anon_sym_LT] = ACTIONS(1022),
    [anon_sym_GT] = ACTIONS(1022),
    [anon_sym_QMARK] = ACTIONS(1022),
    [anon_sym_CARET] = ACTIONS(1022),
    [anon_sym_TILDE] = ACTIONS(1022),
    [anon_sym_BSLASH] = ACTIONS(1022),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(1032),
    [anon_sym_SEMI] = ACTIONS(1034),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1036),
    [anon_sym_SEMI] = ACTIONS(1038),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1046),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1048),
    [anon_sym_SEMI] = ACTIONS(1050),
    [sym_comment] = ACTIONS(52),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1052),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [sym_variable_identifier] = ACTIONS(1054),
    [sym_comment] = ACTIONS(52),
  },
  [376] = {
    [sym_strict] = STATE(400),
    [sym__identifier] = STATE(400),
    [anon_sym_BANG] = ACTIONS(1056),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_COLON_COLON] = ACTIONS(1060),
    [sym_comment] = ACTIONS(52),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1062),
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1064),
    [anon_sym_deriving] = ACTIONS(1064),
    [sym_comment] = ACTIONS(52),
  },
  [379] = {
    [sym_field] = STATE(403),
    [sym_variable_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(52),
  },
  [380] = {
    [anon_sym_RBRACE] = ACTIONS(1066),
    [anon_sym_COMMA] = ACTIONS(1068),
    [sym_comment] = ACTIONS(52),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(1070),
    [anon_sym_SEMI] = ACTIONS(1072),
    [anon_sym_PIPE] = ACTIONS(1072),
    [anon_sym_deriving] = ACTIONS(1072),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1076),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1078),
    [anon_sym_SEMI] = ACTIONS(830),
    [anon_sym_DASH_GT] = ACTIONS(830),
    [sym_variable_identifier] = ACTIONS(830),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [sym__layout_close_brace] = ACTIONS(1080),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_import] = ACTIONS(626),
    [anon_sym_EQ] = ACTIONS(626),
    [anon_sym_AT] = ACTIONS(626),
    [anon_sym_DASH] = ACTIONS(626),
    [anon_sym_foreign] = ACTIONS(626),
    [anon_sym_default] = ACTIONS(626),
    [anon_sym_do] = ACTIONS(626),
    [anon_sym_class] = ACTIONS(626),
    [anon_sym_instance] = ACTIONS(626),
    [anon_sym_infixl] = ACTIONS(626),
    [anon_sym_infixr] = ACTIONS(626),
    [anon_sym_infix] = ACTIONS(626),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_data] = ACTIONS(626),
    [anon_sym_PIPE] = ACTIONS(626),
    [anon_sym_newtype] = ACTIONS(626),
    [anon_sym_BANG] = ACTIONS(626),
    [anon_sym_type] = ACTIONS(626),
    [sym_variable_identifier] = ACTIONS(626),
    [sym_constructor_identifier] = ACTIONS(626),
    [sym_module_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(626),
    [anon_sym_DOLLAR] = ACTIONS(626),
    [anon_sym_PERCENT] = ACTIONS(626),
    [anon_sym_AMP] = ACTIONS(626),
    [anon_sym_1] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(626),
    [anon_sym_DOT] = ACTIONS(626),
    [anon_sym_SLASH] = ACTIONS(626),
    [anon_sym_LT] = ACTIONS(626),
    [anon_sym_GT] = ACTIONS(626),
    [anon_sym_QMARK] = ACTIONS(626),
    [anon_sym_CARET] = ACTIONS(626),
    [anon_sym_TILDE] = ACTIONS(626),
    [anon_sym_BSLASH] = ACTIONS(626),
    [sym__integer_literal] = ACTIONS(626),
    [sym__octal_literal] = ACTIONS(626),
    [sym__hexidecimal_literal] = ACTIONS(626),
  },
  [385] = {
    [anon_sym_COMMA] = ACTIONS(1082),
    [anon_sym_RPAREN] = ACTIONS(1082),
    [sym_comment] = ACTIONS(52),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(1084),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [sym_comment] = ACTIONS(52),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1086),
    [sym_comment] = ACTIONS(52),
  },
  [388] = {
    [aux_sym_import_specification_repeat1] = STATE(408),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(1088),
    [sym_comment] = ACTIONS(52),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [sym__identifier] = STATE(411),
    [anon_sym_DOT_DOT] = ACTIONS(1092),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [391] = {
    [anon_sym_LPAREN] = ACTIONS(1094),
    [anon_sym_COMMA] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [aux_sym_export_repeat1] = STATE(413),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(1090),
    [sym_comment] = ACTIONS(52),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1098),
    [anon_sym_SEMI] = ACTIONS(1100),
    [sym_comment] = ACTIONS(52),
  },
  [395] = {
    [sym__layout_close_brace] = ACTIONS(1102),
    [anon_sym_LPAREN] = ACTIONS(1104),
    [anon_sym_EQ] = ACTIONS(1104),
    [anon_sym_AT] = ACTIONS(1104),
    [anon_sym_DASH] = ACTIONS(1104),
    [anon_sym_infixl] = ACTIONS(1104),
    [anon_sym_infixr] = ACTIONS(1104),
    [anon_sym_infix] = ACTIONS(1104),
    [anon_sym_COLON] = ACTIONS(1104),
    [anon_sym_PIPE] = ACTIONS(1104),
    [anon_sym_BANG] = ACTIONS(1104),
    [sym_variable_identifier] = ACTIONS(1104),
    [sym_constructor_identifier] = ACTIONS(1104),
    [sym_module_identifier] = ACTIONS(1104),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1104),
    [anon_sym_DOLLAR] = ACTIONS(1104),
    [anon_sym_PERCENT] = ACTIONS(1104),
    [anon_sym_AMP] = ACTIONS(1104),
    [anon_sym_1] = ACTIONS(1104),
    [anon_sym_PLUS] = ACTIONS(1104),
    [anon_sym_DOT] = ACTIONS(1104),
    [anon_sym_SLASH] = ACTIONS(1104),
    [anon_sym_LT] = ACTIONS(1104),
    [anon_sym_GT] = ACTIONS(1104),
    [anon_sym_QMARK] = ACTIONS(1104),
    [anon_sym_CARET] = ACTIONS(1104),
    [anon_sym_TILDE] = ACTIONS(1104),
    [anon_sym_BSLASH] = ACTIONS(1104),
  },
  [396] = {
    [anon_sym_RBRACE] = ACTIONS(1104),
    [anon_sym_LPAREN] = ACTIONS(1104),
    [anon_sym_EQ] = ACTIONS(1104),
    [anon_sym_AT] = ACTIONS(1104),
    [anon_sym_DASH] = ACTIONS(1104),
    [anon_sym_infixl] = ACTIONS(1104),
    [anon_sym_infixr] = ACTIONS(1104),
    [anon_sym_infix] = ACTIONS(1104),
    [anon_sym_COLON] = ACTIONS(1104),
    [anon_sym_PIPE] = ACTIONS(1104),
    [anon_sym_BANG] = ACTIONS(1104),
    [sym_variable_identifier] = ACTIONS(1104),
    [sym_constructor_identifier] = ACTIONS(1104),
    [sym_module_identifier] = ACTIONS(1104),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1104),
    [anon_sym_DOLLAR] = ACTIONS(1104),
    [anon_sym_PERCENT] = ACTIONS(1104),
    [anon_sym_AMP] = ACTIONS(1104),
    [anon_sym_1] = ACTIONS(1104),
    [anon_sym_PLUS] = ACTIONS(1104),
    [anon_sym_DOT] = ACTIONS(1104),
    [anon_sym_SLASH] = ACTIONS(1104),
    [anon_sym_LT] = ACTIONS(1104),
    [anon_sym_GT] = ACTIONS(1104),
    [anon_sym_QMARK] = ACTIONS(1104),
    [anon_sym_CARET] = ACTIONS(1104),
    [anon_sym_TILDE] = ACTIONS(1104),
    [anon_sym_BSLASH] = ACTIONS(1104),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(1106),
    [anon_sym_SEMI] = ACTIONS(1108),
    [sym_comment] = ACTIONS(52),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(1110),
    [anon_sym_COLON_COLON] = ACTIONS(1110),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [sym__identifier] = STATE(414),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(1112),
    [anon_sym_COMMA] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [401] = {
    [sym_variable_identifier] = ACTIONS(1114),
    [sym_comment] = ACTIONS(52),
  },
  [402] = {
    [sym_strict] = STATE(416),
    [sym__identifier] = STATE(416),
    [anon_sym_BANG] = ACTIONS(1056),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [403] = {
    [anon_sym_RBRACE] = ACTIONS(1116),
    [anon_sym_COMMA] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(1118),
    [anon_sym_SEMI] = ACTIONS(1120),
    [anon_sym_PIPE] = ACTIONS(1120),
    [anon_sym_deriving] = ACTIONS(1120),
    [sym_comment] = ACTIONS(52),
  },
  [405] = {
    [sym_field] = STATE(417),
    [sym_variable_identifier] = ACTIONS(756),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(1122),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [aux_sym_import_specification_repeat1] = STATE(419),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [anon_sym_RPAREN] = ACTIONS(1130),
    [sym_comment] = ACTIONS(52),
  },
  [411] = {
    [aux_sym_export_repeat1] = STATE(421),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [sym__identifier] = STATE(423),
    [anon_sym_DOT_DOT] = ACTIONS(1132),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [sym_comment] = ACTIONS(52),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(938),
    [anon_sym_COMMA] = ACTIONS(938),
    [sym_comment] = ACTIONS(52),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(1136),
    [anon_sym_COLON_COLON] = ACTIONS(1136),
    [sym_comment] = ACTIONS(52),
  },
  [416] = {
    [anon_sym_RBRACE] = ACTIONS(1138),
    [anon_sym_COMMA] = ACTIONS(1138),
    [sym_comment] = ACTIONS(52),
  },
  [417] = {
    [anon_sym_RBRACE] = ACTIONS(1140),
    [anon_sym_COMMA] = ACTIONS(1140),
    [sym_comment] = ACTIONS(52),
  },
  [418] = {
    [sym__layout_semicolon] = ACTIONS(1142),
    [anon_sym_SEMI] = ACTIONS(1144),
    [sym_comment] = ACTIONS(52),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [sym_comment] = ACTIONS(52),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1148),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [sym_comment] = ACTIONS(52),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(52),
  },
  [422] = {
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(52),
  },
  [423] = {
    [aux_sym_export_repeat1] = STATE(427),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(1150),
    [sym_comment] = ACTIONS(52),
  },
  [424] = {
    [aux_sym_import_specification_repeat1] = STATE(428),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [sym_comment] = ACTIONS(52),
  },
  [425] = {
    [sym__layout_semicolon] = ACTIONS(1152),
    [anon_sym_SEMI] = ACTIONS(1154),
    [sym_comment] = ACTIONS(52),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(1156),
    [anon_sym_RPAREN] = ACTIONS(1156),
    [sym_comment] = ACTIONS(52),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RPAREN] = ACTIONS(1158),
    [sym_comment] = ACTIONS(52),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(52),
  },
  [429] = {
    [anon_sym_COMMA] = ACTIONS(1162),
    [anon_sym_RPAREN] = ACTIONS(1162),
    [sym_comment] = ACTIONS(52),
  },
  [430] = {
    [sym__layout_semicolon] = ACTIONS(1164),
    [anon_sym_SEMI] = ACTIONS(1166),
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
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__var, 1, .fragile = true),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
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
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 1),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 1),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 2),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 1),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 1),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__abstract_pattern_repeat1, 1),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_lhs, 2),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(262),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 2),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 2),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [606] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 2),
  [608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__abstract_pattern_repeat1, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [662] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [680] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [690] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [712] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [774] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [800] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [802] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [804] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [806] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [810] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [812] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(339),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [820] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [840] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [868] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(360),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [902] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [964] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [966] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1018] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1022] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
