#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 422
#define SYMBOL_COUNT 209
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
  aux_sym_statement_list_repeat1 = 195,
  aux_sym_type_class_repeat1 = 196,
  aux_sym_general_declarations_repeat1 = 197,
  aux_sym_fixity_repeat1 = 198,
  aux_sym_variable_symbol_repeat1 = 199,
  aux_sym_function_type_repeat1 = 200,
  aux_sym_context_repeat1 = 201,
  aux_sym_constructors_repeat1 = 202,
  aux_sym_constructor_repeat1 = 203,
  aux_sym_field_repeat1 = 204,
  aux_sym_string_repeat1 = 205,
  aux_sym__escape_repeat1 = 206,
  aux_sym__escape_repeat2 = 207,
  aux_sym_fields_repeat1 = 208,
  alias_sym_type_constructor = 209,
  alias_sym_type_variable = 210,
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
        ADVANCE(335);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
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
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(331);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(331);
      if (lookahead == '\r')
        ADVANCE(335);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(330);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(329);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 337:
      if (lookahead == ':')
        ADVANCE(110);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        SKIP(330);
      END_STATE();
    case 339:
      if (lookahead == '\n')
        ADVANCE(340);
      if (lookahead == '\r')
        ADVANCE(352);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(354);
      if (lookahead == 'q')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(339);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        ADVANCE(340);
      if (lookahead == '\r')
        ADVANCE(340);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == 'q')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 341:
      if (lookahead == ')')
        ADVANCE(172);
      if (lookahead == ',')
        ADVANCE(173);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 342:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
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
    case 352:
      if (lookahead == '\n')
        ADVANCE(340);
      if (lookahead == '\r')
        ADVANCE(352);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(354);
      if (lookahead == 'q')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(339);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 353:
      if (lookahead == ')')
        ADVANCE(256);
      if (lookahead == ',')
        ADVANCE(257);
      if (lookahead == '-')
        ADVANCE(258);
      END_STATE();
    case 354:
      if (lookahead == 'n')
        SKIP(339);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
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
      if (lookahead == 'd')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '\r')
        ADVANCE(368);
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
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 365:
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '\r')
        ADVANCE(365);
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
        ADVANCE(366);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(367);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
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
    case 368:
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '\r')
        ADVANCE(368);
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
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 370:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(421);
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
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(370);
      END_STATE();
    case 371:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(371);
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
        ADVANCE(372);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'd')
        ADVANCE(387);
      if (lookahead == 'e')
        ADVANCE(393);
      if (lookahead == 'i')
        ADVANCE(399);
      if (lookahead == 'j')
        ADVANCE(405);
      if (lookahead == 's')
        ADVANCE(408);
      if (lookahead == 'w')
        ADVANCE(415);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'p')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 417:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(421);
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
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(370);
      END_STATE();
    case 421:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 422:
      if (lookahead == 'n')
        SKIP(370);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(476);
      if (lookahead == 'd')
        ADVANCE(477);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
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
    case 478:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(478);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(478);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(474);
      END_STATE();
    case 481:
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
    case 482:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(482);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(488);
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
        ADVANCE(489);
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
        SKIP(483);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(490);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(484);
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
        ADVANCE(485);
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
        ADVANCE(487);
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
        ADVANCE(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
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
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(488);
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
        ADVANCE(489);
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
        SKIP(483);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(490);
      END_STATE();
    case 489:
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
        ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(490);
      END_STATE();
    case 491:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(503);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      if (lookahead == 'v')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(500);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(503);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      END_STATE();
    case 503:
      if (lookahead == 'n')
        SKIP(491);
      END_STATE();
    case 504:
      if (lookahead == 'e')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'r')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'i')
        ADVANCE(507);
      END_STATE();
    case 507:
      if (lookahead == 'v')
        ADVANCE(508);
      END_STATE();
    case 508:
      if (lookahead == 'i')
        ADVANCE(509);
      END_STATE();
    case 509:
      if (lookahead == 'n')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'g')
        ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 512:
      if (lookahead == '\n')
        ADVANCE(513);
      if (lookahead == '\r')
        ADVANCE(515);
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
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(512);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(513);
      if (lookahead == '\r')
        ADVANCE(513);
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
        ADVANCE(514);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(367);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(513);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(513);
      if (lookahead == '\r')
        ADVANCE(515);
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
        ADVANCE(369);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(512);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(517);
      if (lookahead == '\r')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(516);
      END_STATE();
    case 517:
      if (lookahead == '\n')
        ADVANCE(517);
      if (lookahead == '\r')
        ADVANCE(517);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(517);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(517);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      if (lookahead == '\n')
        ADVANCE(517);
      if (lookahead == '\r')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(516);
      END_STATE();
    case 520:
      if (lookahead == 'n')
        SKIP(516);
      END_STATE();
    case 521:
      if (lookahead == '\t')
        SKIP(521);
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 522:
      if (lookahead == '\t')
        ADVANCE(522);
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(522);
      if (lookahead == ' ')
        ADVANCE(523);
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
        ADVANCE(524);
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
        ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(522);
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(522);
      if (lookahead == ' ')
        ADVANCE(523);
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
        ADVANCE(524);
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
        ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(522);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      if (lookahead == '\t')
        SKIP(521);
      if (lookahead == '\n')
        ADVANCE(522);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 529:
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(532);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == ' ')
        ADVANCE(534);
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
        ADVANCE(535);
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
        ADVANCE(525);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(532);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == ' ')
        ADVANCE(534);
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
        ADVANCE(535);
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
        ADVANCE(525);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 533:
      if (lookahead == '\t')
        ADVANCE(532);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == ' ')
        ADVANCE(534);
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
        ADVANCE(535);
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
        ADVANCE(525);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(532);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == ' ')
        ADVANCE(534);
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
        ADVANCE(535);
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
        ADVANCE(525);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 537:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(540);
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
        SKIP(537);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 538:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(538);
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
        ADVANCE(539);
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
        ADVANCE(538);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(540);
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
        SKIP(537);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '.')
        ADVANCE(546);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 542:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(542);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(543);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(544);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(545);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '.')
        ADVANCE(546);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(541);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 546:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 547:
      if (lookahead == 'n')
        SKIP(541);
      END_STATE();
    case 548:
      if (lookahead == '\n')
        ADVANCE(549);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(560);
      if (lookahead == 'a')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'h')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(548);
      END_STATE();
    case 549:
      if (lookahead == '\n')
        ADVANCE(549);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(550);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'd')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(556);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(557);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 557:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(558);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '\n')
        ADVANCE(549);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(560);
      if (lookahead == 'a')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == 'h')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(548);
      END_STATE();
    case 560:
      if (lookahead == 'n')
        SKIP(548);
      END_STATE();
    case 561:
      if (lookahead == 's')
        ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 563:
      if (lookahead == 'i')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'd')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == 'i')
        ADVANCE(566);
      END_STATE();
    case 566:
      if (lookahead == 'n')
        ADVANCE(567);
      END_STATE();
    case 567:
      if (lookahead == 'g')
        ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(561);
      if (lookahead == 'h')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(569);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(571);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(561);
      if (lookahead == 'h')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(569);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        SKIP(569);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(575);
      if (lookahead == '\r')
        ADVANCE(577);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(578);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(574);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 575:
      if (lookahead == '\n')
        ADVANCE(575);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == '\\')
        ADVANCE(576);
      if (lookahead == 'd')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(575);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(575);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      if (lookahead == '\n')
        ADVANCE(575);
      if (lookahead == '\r')
        ADVANCE(577);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(578);
      if (lookahead == 'd')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(574);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 578:
      if (lookahead == 'n')
        SKIP(574);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(580);
      if (lookahead == '\r')
        ADVANCE(587);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(421);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == 'w')
        ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(579);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(580);
      if (lookahead == '\r')
        ADVANCE(580);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(372);
      if (lookahead == '\\')
        ADVANCE(581);
      if (lookahead == 'w')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(580);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(580);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
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
    case 587:
      if (lookahead == '\n')
        ADVANCE(580);
      if (lookahead == '\r')
        ADVANCE(587);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(421);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == 'w')
        ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(579);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 588:
      if (lookahead == 'n')
        SKIP(579);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(482);
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
        ADVANCE(478);
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
        ADVANCE(336);
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
        ADVANCE(482);
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
        ADVANCE(677);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(678);
      if (lookahead == 'B')
        ADVANCE(681);
      if (lookahead == 'C')
        ADVANCE(685);
      if (lookahead == 'D')
        ADVANCE(689);
      if (lookahead == 'E')
        ADVANCE(699);
      if (lookahead == 'F')
        ADVANCE(710);
      if (lookahead == 'G')
        ADVANCE(713);
      if (lookahead == 'H')
        ADVANCE(714);
      if (lookahead == 'L')
        ADVANCE(715);
      if (lookahead == 'N')
        ADVANCE(716);
      if (lookahead == 'O')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(719);
      if (lookahead == 'U')
        ADVANCE(720);
      if (lookahead == 'V')
        ADVANCE(721);
      if (lookahead == 'X')
        ADVANCE(722);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(723);
      if (lookahead == 'b')
        ADVANCE(724);
      if (lookahead == 'f')
        ADVANCE(725);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(726);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(528);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == 'A')
        ADVANCE(626);
      if (lookahead == 'B')
        ADVANCE(629);
      if (lookahead == 'C')
        ADVANCE(633);
      if (lookahead == 'D')
        ADVANCE(637);
      if (lookahead == 'E')
        ADVANCE(647);
      if (lookahead == 'F')
        ADVANCE(658);
      if (lookahead == 'G')
        ADVANCE(661);
      if (lookahead == 'H')
        ADVANCE(662);
      if (lookahead == 'L')
        ADVANCE(663);
      if (lookahead == 'N')
        ADVANCE(664);
      if (lookahead == 'O')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(667);
      if (lookahead == 'U')
        ADVANCE(668);
      if (lookahead == 'V')
        ADVANCE(669);
      if (lookahead == 'X')
        ADVANCE(670);
      if (lookahead == '\\')
        ADVANCE(671);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(672);
      if (lookahead == 'b')
        ADVANCE(673);
      if (lookahead == 'f')
        ADVANCE(674);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(675);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(525);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(630);
      if (lookahead == 'S')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(636);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(638);
      if (lookahead == 'E')
        ADVANCE(643);
      if (lookahead == 'L')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(639);
      if (lookahead == '2')
        ADVANCE(640);
      if (lookahead == '3')
        ADVANCE(641);
      if (lookahead == '4')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(648);
      if (lookahead == 'N')
        ADVANCE(649);
      if (lookahead == 'O')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead == 'T')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(656);
      if (lookahead == 'X')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(659);
      if (lookahead == 'S')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
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
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(677);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(678);
      if (lookahead == 'B')
        ADVANCE(681);
      if (lookahead == 'C')
        ADVANCE(685);
      if (lookahead == 'D')
        ADVANCE(689);
      if (lookahead == 'E')
        ADVANCE(699);
      if (lookahead == 'F')
        ADVANCE(710);
      if (lookahead == 'G')
        ADVANCE(713);
      if (lookahead == 'H')
        ADVANCE(714);
      if (lookahead == 'L')
        ADVANCE(715);
      if (lookahead == 'N')
        ADVANCE(716);
      if (lookahead == 'O')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(719);
      if (lookahead == 'U')
        ADVANCE(720);
      if (lookahead == 'V')
        ADVANCE(721);
      if (lookahead == 'X')
        ADVANCE(722);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(723);
      if (lookahead == 'b')
        ADVANCE(724);
      if (lookahead == 'f')
        ADVANCE(725);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(726);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(528);
      END_STATE();
    case 678:
      if (lookahead == 'C')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'K')
        ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 681:
      if (lookahead == 'E')
        ADVANCE(682);
      if (lookahead == 'S')
        ADVANCE(684);
      END_STATE();
    case 682:
      if (lookahead == 'L')
        ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 685:
      if (lookahead == 'A')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(688);
      END_STATE();
    case 686:
      if (lookahead == 'N')
        ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 689:
      if (lookahead == 'C')
        ADVANCE(690);
      if (lookahead == 'E')
        ADVANCE(695);
      if (lookahead == 'L')
        ADVANCE(697);
      END_STATE();
    case 690:
      if (lookahead == '1')
        ADVANCE(691);
      if (lookahead == '2')
        ADVANCE(692);
      if (lookahead == '3')
        ADVANCE(693);
      if (lookahead == '4')
        ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 695:
      if (lookahead == 'L')
        ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 697:
      if (lookahead == 'E')
        ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 699:
      if (lookahead == 'M')
        ADVANCE(700);
      if (lookahead == 'N')
        ADVANCE(701);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      if (lookahead == 'T')
        ADVANCE(707);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 701:
      if (lookahead == 'Q')
        ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 703:
      if (lookahead == 'T')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 705:
      if (lookahead == 'C')
        ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 707:
      if (lookahead == 'B')
        ADVANCE(708);
      if (lookahead == 'X')
        ADVANCE(709);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 710:
      if (lookahead == 'F')
        ADVANCE(711);
      if (lookahead == 'S')
        ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 713:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 714:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 715:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 716:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 718:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 719:
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
    case 720:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 721:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 728:
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(740);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(741);
      if (lookahead == 'B')
        ADVANCE(742);
      if (lookahead == 'C')
        ADVANCE(743);
      if (lookahead == 'D')
        ADVANCE(744);
      if (lookahead == 'E')
        ADVANCE(745);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(722);
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
        ADVANCE(723);
      if (lookahead == 'b')
        ADVANCE(724);
      if (lookahead == 'f')
        ADVANCE(725);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(726);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(727);
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
        ADVANCE(528);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(730);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == ' ')
        ADVANCE(732);
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
        ADVANCE(733);
      if (lookahead == 'B')
        ADVANCE(734);
      if (lookahead == 'C')
        ADVANCE(735);
      if (lookahead == 'D')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(670);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(739);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(672);
      if (lookahead == 'b')
        ADVANCE(673);
      if (lookahead == 'f')
        ADVANCE(674);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(675);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(676);
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
        ADVANCE(525);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(730);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == ' ')
        ADVANCE(732);
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
        ADVANCE(733);
      if (lookahead == 'B')
        ADVANCE(734);
      if (lookahead == 'C')
        ADVANCE(735);
      if (lookahead == 'D')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(670);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(739);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(672);
      if (lookahead == 'b')
        ADVANCE(673);
      if (lookahead == 'f')
        ADVANCE(674);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(675);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(676);
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
        ADVANCE(525);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 731:
      if (lookahead == '\t')
        ADVANCE(730);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == ' ')
        ADVANCE(732);
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
        ADVANCE(733);
      if (lookahead == 'B')
        ADVANCE(734);
      if (lookahead == 'C')
        ADVANCE(735);
      if (lookahead == 'D')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(670);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(739);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(672);
      if (lookahead == 'b')
        ADVANCE(673);
      if (lookahead == 'f')
        ADVANCE(674);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(675);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(676);
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
        ADVANCE(525);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(730);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(731);
      if (lookahead == ' ')
        ADVANCE(732);
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
        ADVANCE(733);
      if (lookahead == 'B')
        ADVANCE(734);
      if (lookahead == 'C')
        ADVANCE(735);
      if (lookahead == 'D')
        ADVANCE(736);
      if (lookahead == 'E')
        ADVANCE(737);
      if (lookahead == 'F')
        ADVANCE(738);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(670);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(739);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(672);
      if (lookahead == 'b')
        ADVANCE(673);
      if (lookahead == 'f')
        ADVANCE(674);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(675);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(676);
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
        ADVANCE(525);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(630);
      if (lookahead == 'S')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(634);
      if (lookahead == 'R')
        ADVANCE(636);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(638);
      if (lookahead == 'E')
        ADVANCE(643);
      if (lookahead == 'L')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(648);
      if (lookahead == 'N')
        ADVANCE(649);
      if (lookahead == 'O')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead == 'T')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(659);
      if (lookahead == 'S')
        ADVANCE(660);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(731);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 740:
      if (lookahead == '\t')
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(729);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(740);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(741);
      if (lookahead == 'B')
        ADVANCE(742);
      if (lookahead == 'C')
        ADVANCE(743);
      if (lookahead == 'D')
        ADVANCE(744);
      if (lookahead == 'E')
        ADVANCE(745);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(722);
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
        ADVANCE(723);
      if (lookahead == 'b')
        ADVANCE(724);
      if (lookahead == 'f')
        ADVANCE(725);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(726);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(727);
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
        ADVANCE(528);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(679);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(682);
      if (lookahead == 'S')
        ADVANCE(684);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(688);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(690);
      if (lookahead == 'E')
        ADVANCE(695);
      if (lookahead == 'L')
        ADVANCE(697);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(700);
      if (lookahead == 'N')
        ADVANCE(701);
      if (lookahead == 'O')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      if (lookahead == 'T')
        ADVANCE(707);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(711);
      if (lookahead == 'S')
        ADVANCE(712);
      END_STATE();
    case 747:
      if (lookahead == '\n')
        ADVANCE(748);
      if (lookahead == '\r')
        ADVANCE(750);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(751);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(747);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 748:
      if (lookahead == '\n')
        ADVANCE(748);
      if (lookahead == '\r')
        ADVANCE(748);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 749:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(748);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 750:
      if (lookahead == '\n')
        ADVANCE(748);
      if (lookahead == '\r')
        ADVANCE(750);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(751);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(747);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 751:
      if (lookahead == 'n')
        SKIP(747);
      END_STATE();
    case 752:
      if (lookahead == '\n')
        ADVANCE(753);
      if (lookahead == '\r')
        ADVANCE(755);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(756);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(752);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 753:
      if (lookahead == '\n')
        ADVANCE(753);
      if (lookahead == '\r')
        ADVANCE(753);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(753);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      if (lookahead == '\n')
        ADVANCE(753);
      if (lookahead == '\r')
        ADVANCE(755);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(756);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(752);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 756:
      if (lookahead == 'n')
        SKIP(752);
      END_STATE();
    case 757:
      if (lookahead == '\n')
        ADVANCE(758);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(771);
      if (lookahead == 's')
        ADVANCE(772);
      if (lookahead == 'u')
        ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(757);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 758:
      if (lookahead == '\n')
        ADVANCE(758);
      if (lookahead == '\r')
        ADVANCE(758);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(759);
      if (lookahead == 's')
        ADVANCE(760);
      if (lookahead == 'u')
        ADVANCE(764);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(758);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(758);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      if (lookahead == 'e')
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
    case 764:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
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
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
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
    case 770:
      if (lookahead == '\n')
        ADVANCE(758);
      if (lookahead == '\r')
        ADVANCE(770);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(771);
      if (lookahead == 's')
        ADVANCE(772);
      if (lookahead == 'u')
        ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(757);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 771:
      if (lookahead == 'n')
        SKIP(757);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(270);
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
      if (lookahead == 'n')
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
      if (lookahead == 's')
        ADVANCE(778);
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
      if (lookahead == 'a')
        ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '\n')
        ADVANCE(783);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 786:
      if (lookahead == 'n')
        SKIP(782);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(791);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(788);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(789);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(788);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(788);
      if (lookahead == '\r')
        ADVANCE(790);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(791);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 791:
      if (lookahead == 'n')
        SKIP(787);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(793);
      if (lookahead == '\r')
        ADVANCE(795);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(796);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(792);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(793);
      if (lookahead == '\r')
        ADVANCE(793);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(794);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(793);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(793);
      if (lookahead == '\r')
        ADVANCE(795);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(796);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(792);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 796:
      if (lookahead == 'n')
        SKIP(792);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(800);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(801);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      END_STATE();
    case 798:
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(799);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(478);
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
      if (lookahead == '\n')
        ADVANCE(798);
      if (lookahead == '\r')
        ADVANCE(800);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(801);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(797);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(482);
      END_STATE();
    case 801:
      if (lookahead == 'n')
        SKIP(797);
      END_STATE();
    case 802:
      if (lookahead == '\n')
        ADVANCE(803);
      if (lookahead == '\r')
        ADVANCE(805);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(802);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 803:
      if (lookahead == '\n')
        ADVANCE(803);
      if (lookahead == '\r')
        ADVANCE(803);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(803);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(803);
      if (lookahead == '\r')
        ADVANCE(805);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(806);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(802);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 806:
      if (lookahead == 'n')
        SKIP(802);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(810);
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(808);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(809);
      if (lookahead == 'd')
        ADVANCE(606);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '!')
        ADVANCE(93);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(811);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 811:
      if (lookahead == 'n')
        SKIP(807);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(814);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(813);
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
      if (lookahead == '\n')
        ADVANCE(813);
      if (lookahead == '\r')
        ADVANCE(815);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(816);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(812);
      END_STATE();
    case 816:
      if (lookahead == 'n')
        SKIP(812);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(818);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(817);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(818);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(819);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(818);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 819:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(818);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(818);
      if (lookahead == '\r')
        ADVANCE(820);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(821);
      if (lookahead == 'd')
        ADVANCE(504);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(817);
      END_STATE();
    case 821:
      if (lookahead == 'n')
        SKIP(817);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == '-')
        ADVANCE(336);
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
        SKIP(822);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(824);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(823);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(823);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == '-')
        ADVANCE(336);
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
        SKIP(822);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(832);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(828);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(829);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(827);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(830);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(831);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(832);
      END_STATE();
    case 831:
      if (lookahead == 'n')
        SKIP(826);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(838);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(833);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(839);
      END_STATE();
    case 834:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(835);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(836);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(834);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(837);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(838);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(833);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(839);
      END_STATE();
    case 838:
      if (lookahead == 'n')
        SKIP(833);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(845);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(842);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(841);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(845);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(846);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 845:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 846:
      if (lookahead == 'n')
        SKIP(840);
      END_STATE();
    case 847:
      if (lookahead == '\n')
        ADVANCE(848);
      if (lookahead == '\r')
        ADVANCE(850);
      if (lookahead == '-')
        ADVANCE(845);
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
        ADVANCE(842);
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
        ADVANCE(845);
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
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'h')
        ADVANCE(563);
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
        ADVANCE(553);
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
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(860);
      if (lookahead == 'h')
        ADVANCE(563);
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
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(616);
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
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(875);
      if (lookahead == 'd')
        ADVANCE(606);
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
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(616);
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
        ADVANCE(845);
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
        ADVANCE(842);
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
        ADVANCE(845);
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
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(528);
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
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(525);
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
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(525);
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
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(525);
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
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(525);
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
        ADVANCE(530);
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(528);
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
        ADVANCE(845);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(421);
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
        ADVANCE(842);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(372);
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
        ADVANCE(845);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(421);
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
  [4] = {.lex_state = 339},
  [5] = {.lex_state = 364},
  [6] = {.lex_state = 370},
  [7] = {.lex_state = 330},
  [8] = {.lex_state = 469, .external_lex_state = 2},
  [9] = {.lex_state = 474},
  [10] = {.lex_state = 474},
  [11] = {.lex_state = 483},
  [12] = {.lex_state = 474},
  [13] = {.lex_state = 474},
  [14] = {.lex_state = 491},
  [15] = {.lex_state = 512, .external_lex_state = 3},
  [16] = {.lex_state = 370},
  [17] = {.lex_state = 516, .external_lex_state = 3},
  [18] = {.lex_state = 521},
  [19] = {.lex_state = 529},
  [20] = {.lex_state = 516, .external_lex_state = 3},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 516, .external_lex_state = 3},
  [23] = {.lex_state = 516, .external_lex_state = 3},
  [24] = {.lex_state = 516, .external_lex_state = 3},
  [25] = {.lex_state = 330},
  [26] = {.lex_state = 364},
  [27] = {.lex_state = 516, .external_lex_state = 3},
  [28] = {.lex_state = 364},
  [29] = {.lex_state = 330},
  [30] = {.lex_state = 364},
  [31] = {.lex_state = 537},
  [32] = {.lex_state = 364},
  [33] = {.lex_state = 370},
  [34] = {.lex_state = 364},
  [35] = {.lex_state = 541},
  [36] = {.lex_state = 548, .external_lex_state = 3},
  [37] = {.lex_state = 569, .external_lex_state = 3},
  [38] = {.lex_state = 370},
  [39] = {.lex_state = 370},
  [40] = {.lex_state = 541},
  [41] = {.lex_state = 574, .external_lex_state = 4},
  [42] = {.lex_state = 474},
  [43] = {.lex_state = 516, .external_lex_state = 3},
  [44] = {.lex_state = 491},
  [45] = {.lex_state = 579},
  [46] = {.lex_state = 491},
  [47] = {.lex_state = 370},
  [48] = {.lex_state = 579},
  [49] = {.lex_state = 491},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 594, .external_lex_state = 3},
  [52] = {.lex_state = 541},
  [53] = {.lex_state = 594, .external_lex_state = 3},
  [54] = {.lex_state = 483},
  [55] = {.lex_state = 598, .external_lex_state = 3},
  [56] = {.lex_state = 598, .external_lex_state = 3},
  [57] = {.lex_state = 483},
  [58] = {.lex_state = 594, .external_lex_state = 3},
  [59] = {.lex_state = 594, .external_lex_state = 3},
  [60] = {.lex_state = 603, .external_lex_state = 3},
  [61] = {.lex_state = 491},
  [62] = {.lex_state = 491, .external_lex_state = 3},
  [63] = {.lex_state = 330},
  [64] = {.lex_state = 491},
  [65] = {.lex_state = 330},
  [66] = {.lex_state = 330},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 330},
  [70] = {.lex_state = 330},
  [71] = {.lex_state = 330},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 330},
  [74] = {.lex_state = 624},
  [75] = {.lex_state = 529},
  [76] = {.lex_state = 529},
  [77] = {.lex_state = 529},
  [78] = {.lex_state = 529},
  [79] = {.lex_state = 516, .external_lex_state = 3},
  [80] = {.lex_state = 529},
  [81] = {.lex_state = 529},
  [82] = {.lex_state = 728},
  [83] = {.lex_state = 529},
  [84] = {.lex_state = 529},
  [85] = {.lex_state = 537},
  [86] = {.lex_state = 747, .external_lex_state = 3},
  [87] = {.lex_state = 516, .external_lex_state = 3},
  [88] = {.lex_state = 364},
  [89] = {.lex_state = 364},
  [90] = {.lex_state = 364},
  [91] = {.lex_state = 364},
  [92] = {.lex_state = 364},
  [93] = {.lex_state = 364},
  [94] = {.lex_state = 364},
  [95] = {.lex_state = 364},
  [96] = {.lex_state = 752},
  [97] = {.lex_state = 516, .external_lex_state = 3},
  [98] = {.lex_state = 364},
  [99] = {.lex_state = 364},
  [100] = {.lex_state = 469, .external_lex_state = 2},
  [101] = {.lex_state = 541},
  [102] = {.lex_state = 370},
  [103] = {.lex_state = 364},
  [104] = {.lex_state = 569, .external_lex_state = 3},
  [105] = {.lex_state = 541},
  [106] = {.lex_state = 541},
  [107] = {.lex_state = 330},
  [108] = {.lex_state = 516, .external_lex_state = 3},
  [109] = {.lex_state = 757},
  [110] = {.lex_state = 757},
  [111] = {.lex_state = 516, .external_lex_state = 3},
  [112] = {.lex_state = 370},
  [113] = {.lex_state = 516, .external_lex_state = 3},
  [114] = {.lex_state = 516, .external_lex_state = 3},
  [115] = {.lex_state = 574, .external_lex_state = 4},
  [116] = {.lex_state = 574, .external_lex_state = 4},
  [117] = {.lex_state = 516, .external_lex_state = 3},
  [118] = {.lex_state = 474},
  [119] = {.lex_state = 474},
  [120] = {.lex_state = 330},
  [121] = {.lex_state = 370},
  [122] = {.lex_state = 469, .external_lex_state = 2},
  [123] = {.lex_state = 330},
  [124] = {.lex_state = 579},
  [125] = {.lex_state = 579},
  [126] = {.lex_state = 579},
  [127] = {.lex_state = 782},
  [128] = {.lex_state = 469, .external_lex_state = 2},
  [129] = {.lex_state = 579},
  [130] = {.lex_state = 579},
  [131] = {.lex_state = 594, .external_lex_state = 3},
  [132] = {.lex_state = 594, .external_lex_state = 3},
  [133] = {.lex_state = 370},
  [134] = {.lex_state = 598, .external_lex_state = 3},
  [135] = {.lex_state = 594, .external_lex_state = 3},
  [136] = {.lex_state = 483},
  [137] = {.lex_state = 598, .external_lex_state = 3},
  [138] = {.lex_state = 598, .external_lex_state = 3},
  [139] = {.lex_state = 598, .external_lex_state = 3},
  [140] = {.lex_state = 594, .external_lex_state = 3},
  [141] = {.lex_state = 787, .external_lex_state = 3},
  [142] = {.lex_state = 792, .external_lex_state = 3},
  [143] = {.lex_state = 792, .external_lex_state = 3},
  [144] = {.lex_state = 491, .external_lex_state = 3},
  [145] = {.lex_state = 797, .external_lex_state = 3},
  [146] = {.lex_state = 802},
  [147] = {.lex_state = 807, .external_lex_state = 3},
  [148] = {.lex_state = 812, .external_lex_state = 3},
  [149] = {.lex_state = 817, .external_lex_state = 3},
  [150] = {.lex_state = 516, .external_lex_state = 3},
  [151] = {.lex_state = 752},
  [152] = {.lex_state = 330},
  [153] = {.lex_state = 330},
  [154] = {.lex_state = 491},
  [155] = {.lex_state = 330},
  [156] = {.lex_state = 782},
  [157] = {.lex_state = 516, .external_lex_state = 3},
  [158] = {.lex_state = 330},
  [159] = {.lex_state = 330},
  [160] = {.lex_state = 822},
  [161] = {.lex_state = 826},
  [162] = {.lex_state = 833},
  [163] = {.lex_state = 330},
  [164] = {.lex_state = 529},
  [165] = {.lex_state = 529},
  [166] = {.lex_state = 822},
  [167] = {.lex_state = 826},
  [168] = {.lex_state = 833},
  [169] = {.lex_state = 529},
  [170] = {.lex_state = 529},
  [171] = {.lex_state = 516, .external_lex_state = 3},
  [172] = {.lex_state = 747, .external_lex_state = 3},
  [173] = {.lex_state = 747, .external_lex_state = 3},
  [174] = {.lex_state = 747, .external_lex_state = 3},
  [175] = {.lex_state = 364},
  [176] = {.lex_state = 364},
  [177] = {.lex_state = 364},
  [178] = {.lex_state = 840},
  [179] = {.lex_state = 840, .external_lex_state = 3},
  [180] = {.lex_state = 516, .external_lex_state = 3},
  [181] = {.lex_state = 516, .external_lex_state = 3},
  [182] = {.lex_state = 782},
  [183] = {.lex_state = 847, .external_lex_state = 3},
  [184] = {.lex_state = 840},
  [185] = {.lex_state = 537},
  [186] = {.lex_state = 852, .external_lex_state = 4},
  [187] = {.lex_state = 537},
  [188] = {.lex_state = 330},
  [189] = {.lex_state = 370},
  [190] = {.lex_state = 370},
  [191] = {.lex_state = 370},
  [192] = {.lex_state = 469, .external_lex_state = 2},
  [193] = {.lex_state = 541},
  [194] = {.lex_state = 516, .external_lex_state = 3},
  [195] = {.lex_state = 516, .external_lex_state = 3},
  [196] = {.lex_state = 370},
  [197] = {.lex_state = 856, .external_lex_state = 3},
  [198] = {.lex_state = 541},
  [199] = {.lex_state = 541},
  [200] = {.lex_state = 529},
  [201] = {.lex_state = 541},
  [202] = {.lex_state = 516, .external_lex_state = 3},
  [203] = {.lex_state = 541},
  [204] = {.lex_state = 541},
  [205] = {.lex_state = 516, .external_lex_state = 3},
  [206] = {.lex_state = 370},
  [207] = {.lex_state = 574, .external_lex_state = 4},
  [208] = {.lex_state = 516, .external_lex_state = 3},
  [209] = {.lex_state = 574, .external_lex_state = 4},
  [210] = {.lex_state = 474},
  [211] = {.lex_state = 474},
  [212] = {.lex_state = 370},
  [213] = {.lex_state = 491},
  [214] = {.lex_state = 370},
  [215] = {.lex_state = 370},
  [216] = {.lex_state = 861, .external_lex_state = 4},
  [217] = {.lex_state = 869},
  [218] = {.lex_state = 516, .external_lex_state = 3},
  [219] = {.lex_state = 330},
  [220] = {.lex_state = 469, .external_lex_state = 2},
  [221] = {.lex_state = 579},
  [222] = {.lex_state = 579},
  [223] = {.lex_state = 579},
  [224] = {.lex_state = 516, .external_lex_state = 3},
  [225] = {.lex_state = 469, .external_lex_state = 2},
  [226] = {.lex_state = 579},
  [227] = {.lex_state = 598, .external_lex_state = 3},
  [228] = {.lex_state = 594, .external_lex_state = 3},
  [229] = {.lex_state = 598, .external_lex_state = 3},
  [230] = {.lex_state = 598, .external_lex_state = 3},
  [231] = {.lex_state = 598, .external_lex_state = 3},
  [232] = {.lex_state = 483},
  [233] = {.lex_state = 598, .external_lex_state = 3},
  [234] = {.lex_state = 792, .external_lex_state = 3},
  [235] = {.lex_state = 792, .external_lex_state = 3},
  [236] = {.lex_state = 797, .external_lex_state = 3},
  [237] = {.lex_state = 812, .external_lex_state = 3},
  [238] = {.lex_state = 516, .external_lex_state = 3},
  [239] = {.lex_state = 541},
  [240] = {.lex_state = 516, .external_lex_state = 3},
  [241] = {.lex_state = 330},
  [242] = {.lex_state = 541},
  [243] = {.lex_state = 873, .external_lex_state = 3},
  [244] = {.lex_state = 873, .external_lex_state = 3},
  [245] = {.lex_state = 817, .external_lex_state = 3},
  [246] = {.lex_state = 873, .external_lex_state = 3},
  [247] = {.lex_state = 491},
  [248] = {.lex_state = 817, .external_lex_state = 3},
  [249] = {.lex_state = 330},
  [250] = {.lex_state = 491},
  [251] = {.lex_state = 541},
  [252] = {.lex_state = 812, .external_lex_state = 3},
  [253] = {.lex_state = 878, .external_lex_state = 3},
  [254] = {.lex_state = 516, .external_lex_state = 3},
  [255] = {.lex_state = 330},
  [256] = {.lex_state = 330},
  [257] = {.lex_state = 826},
  [258] = {.lex_state = 826},
  [259] = {.lex_state = 833},
  [260] = {.lex_state = 833},
  [261] = {.lex_state = 529},
  [262] = {.lex_state = 529},
  [263] = {.lex_state = 529},
  [264] = {.lex_state = 529},
  [265] = {.lex_state = 883},
  [266] = {.lex_state = 883},
  [267] = {.lex_state = 747, .external_lex_state = 3},
  [268] = {.lex_state = 364},
  [269] = {.lex_state = 890, .external_lex_state = 3},
  [270] = {.lex_state = 878, .external_lex_state = 3},
  [271] = {.lex_state = 516, .external_lex_state = 3},
  [272] = {.lex_state = 782},
  [273] = {.lex_state = 840},
  [274] = {.lex_state = 330},
  [275] = {.lex_state = 516, .external_lex_state = 3},
  [276] = {.lex_state = 852, .external_lex_state = 4},
  [277] = {.lex_state = 537},
  [278] = {.lex_state = 541},
  [279] = {.lex_state = 370},
  [280] = {.lex_state = 370},
  [281] = {.lex_state = 541},
  [282] = {.lex_state = 330},
  [283] = {.lex_state = 856, .external_lex_state = 3},
  [284] = {.lex_state = 541},
  [285] = {.lex_state = 541},
  [286] = {.lex_state = 516, .external_lex_state = 3},
  [287] = {.lex_state = 370},
  [288] = {.lex_state = 516, .external_lex_state = 3},
  [289] = {.lex_state = 370},
  [290] = {.lex_state = 541},
  [291] = {.lex_state = 529},
  [292] = {.lex_state = 516, .external_lex_state = 3},
  [293] = {.lex_state = 541},
  [294] = {.lex_state = 370},
  [295] = {.lex_state = 541},
  [296] = {.lex_state = 516, .external_lex_state = 3},
  [297] = {.lex_state = 370},
  [298] = {.lex_state = 782},
  [299] = {.lex_state = 491},
  [300] = {.lex_state = 370},
  [301] = {.lex_state = 516, .external_lex_state = 3},
  [302] = {.lex_state = 512},
  [303] = {.lex_state = 516, .external_lex_state = 3},
  [304] = {.lex_state = 861, .external_lex_state = 4},
  [305] = {.lex_state = 516, .external_lex_state = 3},
  [306] = {.lex_state = 869},
  [307] = {.lex_state = 370},
  [308] = {.lex_state = 516, .external_lex_state = 3},
  [309] = {.lex_state = 469, .external_lex_state = 2},
  [310] = {.lex_state = 516, .external_lex_state = 3},
  [311] = {.lex_state = 469, .external_lex_state = 2},
  [312] = {.lex_state = 598, .external_lex_state = 3},
  [313] = {.lex_state = 598, .external_lex_state = 3},
  [314] = {.lex_state = 812, .external_lex_state = 3},
  [315] = {.lex_state = 516, .external_lex_state = 3},
  [316] = {.lex_state = 370},
  [317] = {.lex_state = 370},
  [318] = {.lex_state = 370},
  [319] = {.lex_state = 873, .external_lex_state = 3},
  [320] = {.lex_state = 873, .external_lex_state = 3},
  [321] = {.lex_state = 817, .external_lex_state = 3},
  [322] = {.lex_state = 491},
  [323] = {.lex_state = 812, .external_lex_state = 3},
  [324] = {.lex_state = 812, .external_lex_state = 3},
  [325] = {.lex_state = 516, .external_lex_state = 3},
  [326] = {.lex_state = 878, .external_lex_state = 3},
  [327] = {.lex_state = 826},
  [328] = {.lex_state = 833},
  [329] = {.lex_state = 529},
  [330] = {.lex_state = 883},
  [331] = {.lex_state = 878, .external_lex_state = 3},
  [332] = {.lex_state = 878, .external_lex_state = 3},
  [333] = {.lex_state = 516, .external_lex_state = 3},
  [334] = {.lex_state = 878, .external_lex_state = 3},
  [335] = {.lex_state = 852, .external_lex_state = 4},
  [336] = {.lex_state = 330},
  [337] = {.lex_state = 516, .external_lex_state = 3},
  [338] = {.lex_state = 370},
  [339] = {.lex_state = 541},
  [340] = {.lex_state = 370},
  [341] = {.lex_state = 330},
  [342] = {.lex_state = 370},
  [343] = {.lex_state = 516, .external_lex_state = 3},
  [344] = {.lex_state = 330},
  [345] = {.lex_state = 370},
  [346] = {.lex_state = 370},
  [347] = {.lex_state = 541},
  [348] = {.lex_state = 516, .external_lex_state = 3},
  [349] = {.lex_state = 541},
  [350] = {.lex_state = 370},
  [351] = {.lex_state = 541},
  [352] = {.lex_state = 516, .external_lex_state = 3},
  [353] = {.lex_state = 370},
  [354] = {.lex_state = 370},
  [355] = {.lex_state = 782},
  [356] = {.lex_state = 861, .external_lex_state = 4},
  [357] = {.lex_state = 516, .external_lex_state = 3},
  [358] = {.lex_state = 516, .external_lex_state = 3},
  [359] = {.lex_state = 869},
  [360] = {.lex_state = 516, .external_lex_state = 3},
  [361] = {.lex_state = 516, .external_lex_state = 3},
  [362] = {.lex_state = 516, .external_lex_state = 3},
  [363] = {.lex_state = 516, .external_lex_state = 3},
  [364] = {.lex_state = 516, .external_lex_state = 3},
  [365] = {.lex_state = 370},
  [366] = {.lex_state = 330},
  [367] = {.lex_state = 541},
  [368] = {.lex_state = 370},
  [369] = {.lex_state = 817, .external_lex_state = 3},
  [370] = {.lex_state = 330},
  [371] = {.lex_state = 370},
  [372] = {.lex_state = 817, .external_lex_state = 3},
  [373] = {.lex_state = 516, .external_lex_state = 3},
  [374] = {.lex_state = 878, .external_lex_state = 3},
  [375] = {.lex_state = 852, .external_lex_state = 4},
  [376] = {.lex_state = 370},
  [377] = {.lex_state = 370},
  [378] = {.lex_state = 370},
  [379] = {.lex_state = 370},
  [380] = {.lex_state = 370},
  [381] = {.lex_state = 541},
  [382] = {.lex_state = 370},
  [383] = {.lex_state = 330},
  [384] = {.lex_state = 370},
  [385] = {.lex_state = 516, .external_lex_state = 3},
  [386] = {.lex_state = 861, .external_lex_state = 4},
  [387] = {.lex_state = 869},
  [388] = {.lex_state = 516, .external_lex_state = 3},
  [389] = {.lex_state = 370},
  [390] = {.lex_state = 541},
  [391] = {.lex_state = 370},
  [392] = {.lex_state = 330},
  [393] = {.lex_state = 541},
  [394] = {.lex_state = 370},
  [395] = {.lex_state = 817, .external_lex_state = 3},
  [396] = {.lex_state = 330},
  [397] = {.lex_state = 370},
  [398] = {.lex_state = 516, .external_lex_state = 3},
  [399] = {.lex_state = 370},
  [400] = {.lex_state = 370},
  [401] = {.lex_state = 330},
  [402] = {.lex_state = 370},
  [403] = {.lex_state = 541},
  [404] = {.lex_state = 370},
  [405] = {.lex_state = 370},
  [406] = {.lex_state = 370},
  [407] = {.lex_state = 370},
  [408] = {.lex_state = 370},
  [409] = {.lex_state = 516, .external_lex_state = 3},
  [410] = {.lex_state = 370},
  [411] = {.lex_state = 370},
  [412] = {.lex_state = 370},
  [413] = {.lex_state = 330},
  [414] = {.lex_state = 370},
  [415] = {.lex_state = 370},
  [416] = {.lex_state = 516, .external_lex_state = 3},
  [417] = {.lex_state = 370},
  [418] = {.lex_state = 370},
  [419] = {.lex_state = 370},
  [420] = {.lex_state = 370},
  [421] = {.lex_state = 516, .external_lex_state = 3},
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
    [sym_comment] = ACTIONS(52),
  },
  [18] = {
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
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
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
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
    [sym__layout_semicolon] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [sym_comment] = ACTIONS(52),
  },
  [25] = {
    [sym_function_rhs] = STATE(87),
    [anon_sym_EQ] = ACTIONS(156),
    [sym_comment] = ACTIONS(52),
  },
  [26] = {
    [sym__abstract_pattern] = STATE(90),
    [sym_wildcard] = STATE(91),
    [sym__var] = STATE(92),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(93),
    [sym__symbol] = STATE(30),
    [aux_sym_function_lhs_repeat1] = STATE(94),
    [aux_sym_function_rhs_repeat1] = STATE(95),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
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
  [27] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(162),
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
  },
  [29] = {
    [anon_sym_COLON_COLON] = ACTIONS(164),
    [sym_comment] = ACTIONS(52),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(166),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(166),
    [sym_module_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_DOLLAR] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_1] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
  },
  [31] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(97),
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
    [ts_builtin_sym_end] = ACTIONS(168),
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
    [sym__symbol] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(170),
    [sym_constructor_identifier] = ACTIONS(170),
    [sym_module_identifier] = ACTIONS(170),
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
  [33] = {
    [sym_module_exports] = STATE(102),
    [anon_sym_where] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(52),
  },
  [34] = {
    [sym__symbol] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
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
  [35] = {
    [sym__identifier] = STATE(104),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_hiding] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [sym_import_specification] = STATE(108),
    [sym__layout_semicolon] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_as] = ACTIONS(192),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [anon_sym_ccall] = ACTIONS(196),
    [anon_sym_stdcall] = ACTIONS(196),
    [anon_sym_cplusplus] = ACTIONS(196),
    [anon_sym_jvm] = ACTIONS(196),
    [anon_sym_dotnet] = ACTIONS(196),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [sym_calling_convention] = STATE(110),
    [anon_sym_ccall] = ACTIONS(198),
    [anon_sym_stdcall] = ACTIONS(198),
    [anon_sym_cplusplus] = ACTIONS(198),
    [anon_sym_jvm] = ACTIONS(198),
    [anon_sym_dotnet] = ACTIONS(198),
    [sym_comment] = ACTIONS(52),
  },
  [40] = {
    [sym__identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [41] = {
    [sym__expression] = STATE(114),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(115),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(116),
    [sym__layout_close_brace] = ACTIONS(204),
    [anon_sym_do] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(214),
    [sym__octal_literal] = ACTIONS(214),
    [sym__hexidecimal_literal] = ACTIONS(214),
  },
  [42] = {
    [sym__expression] = STATE(117),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(118),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(119),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_do] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(214),
    [sym__octal_literal] = ACTIONS(214),
    [sym__hexidecimal_literal] = ACTIONS(214),
  },
  [43] = {
    [sym__layout_semicolon] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [sym_class] = STATE(121),
    [sym_constructor_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [aux_sym_type_class_repeat1] = STATE(125),
    [anon_sym_where] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(226),
    [sym_variable_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [sym_constructor_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [anon_sym_EQ_GT] = ACTIONS(232),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [aux_sym_type_class_repeat1] = STATE(129),
    [anon_sym_where] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(226),
    [sym_variable_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [sym_constructor_identifier] = ACTIONS(236),
    [sym_comment] = ACTIONS(52),
  },
  [50] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(132),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(238),
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
    [sym__layout_semicolon] = ACTIONS(240),
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
    [sym__identifier] = STATE(133),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [53] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(135),
    [sym__layout_semicolon] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(246),
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
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_BANG] = ACTIONS(248),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_DOLLAR] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_BSLASH] = ACTIONS(248),
  },
  [55] = {
    [aux_sym_fixity_repeat1] = STATE(137),
    [sym__layout_semicolon] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [sym__layout_semicolon] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [sym_comment] = ACTIONS(52),
  },
  [57] = {
    [sym__op] = STATE(138),
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
    [sym__layout_semicolon] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(166),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_DOLLAR] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_1] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
  },
  [59] = {
    [sym__symbol] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(264),
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
    [aux_sym_type_class_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(270),
    [sym_constructor_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [sym_simple_type] = STATE(144),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [sym_constructors] = STATE(148),
    [sym_constructor] = STATE(149),
    [sym_deriving] = STATE(150),
    [sym__layout_semicolon] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [aux_sym_type_class_repeat1] = STATE(152),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [sym_simple_type] = STATE(153),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [aux_sym_type_class_repeat1] = STATE(152),
    [anon_sym_EQ] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(292),
    [sym_comment] = ACTIONS(52),
  },
  [68] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [69] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(296),
  },
  [70] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(298),
  },
  [71] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(300),
  },
  [72] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(302),
  },
  [73] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(304),
  },
  [74] = {
    [sym__char_escape] = STATE(159),
    [sym__ascii] = STATE(159),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_x] = ACTIONS(312),
    [anon_sym_X] = ACTIONS(312),
    [anon_sym_o] = ACTIONS(314),
    [anon_sym_O] = ACTIONS(314),
    [anon_sym_a] = ACTIONS(306),
    [anon_sym_b] = ACTIONS(306),
    [anon_sym_f] = ACTIONS(306),
    [anon_sym_n] = ACTIONS(306),
    [anon_sym_r] = ACTIONS(306),
    [anon_sym_t] = ACTIONS(306),
    [anon_sym_v] = ACTIONS(306),
    [anon_sym_NUL] = ACTIONS(316),
    [anon_sym_SOH] = ACTIONS(316),
    [anon_sym_STX] = ACTIONS(316),
    [anon_sym_ETX] = ACTIONS(316),
    [anon_sym_EOT] = ACTIONS(316),
    [anon_sym_ENQ] = ACTIONS(316),
    [anon_sym_ACK] = ACTIONS(316),
    [anon_sym_BEL] = ACTIONS(316),
    [anon_sym_BS] = ACTIONS(316),
    [anon_sym_HT] = ACTIONS(316),
    [anon_sym_LF] = ACTIONS(316),
    [anon_sym_VT] = ACTIONS(316),
    [anon_sym_FF] = ACTIONS(316),
    [anon_sym_CR] = ACTIONS(316),
    [anon_sym_SO] = ACTIONS(316),
    [anon_sym_SI] = ACTIONS(316),
    [anon_sym_DLE] = ACTIONS(316),
    [anon_sym_DC1] = ACTIONS(316),
    [anon_sym_DC2] = ACTIONS(316),
    [anon_sym_DC3] = ACTIONS(316),
    [anon_sym_DC4] = ACTIONS(316),
    [anon_sym_NAK] = ACTIONS(316),
    [anon_sym_SYN] = ACTIONS(316),
    [anon_sym_ETB] = ACTIONS(316),
    [anon_sym_CAN] = ACTIONS(316),
    [anon_sym_EM] = ACTIONS(316),
    [anon_sym_SUB] = ACTIONS(316),
    [anon_sym_ESC] = ACTIONS(316),
    [anon_sym_FS] = ACTIONS(316),
    [anon_sym_GS] = ACTIONS(316),
    [anon_sym_RS] = ACTIONS(316),
    [anon_sym_US] = ACTIONS(316),
    [anon_sym_SP] = ACTIONS(316),
    [anon_sym_DEL] = ACTIONS(316),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_BQUOTE] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym__] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(318),
    [sym__ascii_large] = ACTIONS(318),
    [anon_sym_POUND] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_1] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_QMARK] = ACTIONS(318),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym__space] = ACTIONS(318),
    [sym__newline] = ACTIONS(318),
    [sym__tab] = ACTIONS(318),
    [sym__vertical_tab] = ACTIONS(318),
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
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(320),
    [anon_sym_BQUOTE] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym__] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(320),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(320),
    [sym__ascii_large] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(320),
    [anon_sym_AMP] = ACTIONS(320),
    [anon_sym_1] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(320),
    [anon_sym_GT] = ACTIONS(320),
    [anon_sym_QMARK] = ACTIONS(320),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym__space] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
    [sym__tab] = ACTIONS(320),
    [sym__vertical_tab] = ACTIONS(320),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_BQUOTE] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(322),
    [sym__ascii_large] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_1] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_QMARK] = ACTIONS(322),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym__space] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
    [sym__tab] = ACTIONS(322),
    [sym__vertical_tab] = ACTIONS(322),
  },
  [79] = {
    [sym__layout_semicolon] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(326),
    [sym_comment] = ACTIONS(52),
  },
  [80] = {
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
  [81] = {
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
  [82] = {
    [sym__char_escape] = STATE(165),
    [sym__ascii] = STATE(165),
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
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(338),
    [anon_sym_X] = ACTIONS(338),
    [anon_sym_o] = ACTIONS(340),
    [anon_sym_O] = ACTIONS(340),
    [anon_sym_a] = ACTIONS(332),
    [anon_sym_b] = ACTIONS(332),
    [anon_sym_f] = ACTIONS(332),
    [anon_sym_n] = ACTIONS(332),
    [anon_sym_r] = ACTIONS(332),
    [anon_sym_t] = ACTIONS(332),
    [anon_sym_v] = ACTIONS(332),
    [anon_sym_NUL] = ACTIONS(342),
    [anon_sym_SOH] = ACTIONS(342),
    [anon_sym_STX] = ACTIONS(342),
    [anon_sym_ETX] = ACTIONS(342),
    [anon_sym_EOT] = ACTIONS(342),
    [anon_sym_ENQ] = ACTIONS(342),
    [anon_sym_ACK] = ACTIONS(342),
    [anon_sym_BEL] = ACTIONS(342),
    [anon_sym_BS] = ACTIONS(342),
    [anon_sym_HT] = ACTIONS(342),
    [anon_sym_LF] = ACTIONS(342),
    [anon_sym_VT] = ACTIONS(342),
    [anon_sym_FF] = ACTIONS(342),
    [anon_sym_CR] = ACTIONS(342),
    [anon_sym_SO] = ACTIONS(342),
    [anon_sym_SI] = ACTIONS(342),
    [anon_sym_DLE] = ACTIONS(342),
    [anon_sym_DC1] = ACTIONS(342),
    [anon_sym_DC2] = ACTIONS(342),
    [anon_sym_DC3] = ACTIONS(342),
    [anon_sym_DC4] = ACTIONS(342),
    [anon_sym_NAK] = ACTIONS(342),
    [anon_sym_SYN] = ACTIONS(342),
    [anon_sym_ETB] = ACTIONS(342),
    [anon_sym_CAN] = ACTIONS(342),
    [anon_sym_EM] = ACTIONS(342),
    [anon_sym_SUB] = ACTIONS(342),
    [anon_sym_ESC] = ACTIONS(342),
    [anon_sym_FS] = ACTIONS(342),
    [anon_sym_GS] = ACTIONS(342),
    [anon_sym_RS] = ACTIONS(342),
    [anon_sym_US] = ACTIONS(342),
    [anon_sym_SP] = ACTIONS(342),
    [anon_sym_DEL] = ACTIONS(342),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_BQUOTE] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym__] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(344),
    [anon_sym_PIPE] = ACTIONS(344),
    [anon_sym_BANG] = ACTIONS(344),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(344),
    [sym__ascii_large] = ACTIONS(344),
    [anon_sym_POUND] = ACTIONS(344),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_AMP] = ACTIONS(344),
    [anon_sym_1] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(344),
    [anon_sym_QMARK] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym__space] = ACTIONS(344),
    [sym__newline] = ACTIONS(344),
    [sym__tab] = ACTIONS(344),
    [sym__vertical_tab] = ACTIONS(344),
  },
  [84] = {
    [sym__gap] = STATE(170),
    [sym__graphic] = STATE(170),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(170),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(348),
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
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_import] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_foreign] = ACTIONS(350),
    [anon_sym_default] = ACTIONS(350),
    [anon_sym_do] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_instance] = ACTIONS(350),
    [anon_sym_infixl] = ACTIONS(350),
    [anon_sym_infixr] = ACTIONS(350),
    [anon_sym_infix] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_data] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_newtype] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(350),
    [sym_module_identifier] = ACTIONS(350),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_1] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [sym__integer_literal] = ACTIONS(350),
    [sym__octal_literal] = ACTIONS(350),
    [sym__hexidecimal_literal] = ACTIONS(350),
  },
  [86] = {
    [sym__identifier] = STATE(173),
    [aux_sym_function_rhs_repeat1] = STATE(174),
    [sym__layout_semicolon] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(354),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(360),
    [anon_sym_SEMI] = ACTIONS(362),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [anon_sym__] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_BANG] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(364),
    [sym_constructor_identifier] = ACTIONS(364),
    [sym_module_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(364),
    [anon_sym_DOLLAR] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(364),
    [anon_sym_AMP] = ACTIONS(364),
    [anon_sym_1] = ACTIONS(364),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_SLASH] = ACTIONS(364),
    [anon_sym_LT] = ACTIONS(364),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_CARET] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_BSLASH] = ACTIONS(364),
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
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(366),
    [anon_sym_AT] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [anon_sym__] = ACTIONS(366),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_PIPE] = ACTIONS(366),
    [anon_sym_BANG] = ACTIONS(366),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(366),
    [sym_module_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(366),
    [anon_sym_DOLLAR] = ACTIONS(366),
    [anon_sym_PERCENT] = ACTIONS(366),
    [anon_sym_AMP] = ACTIONS(366),
    [anon_sym_1] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(366),
    [anon_sym_SLASH] = ACTIONS(366),
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_QMARK] = ACTIONS(366),
    [anon_sym_CARET] = ACTIONS(366),
    [anon_sym_TILDE] = ACTIONS(366),
    [anon_sym_BSLASH] = ACTIONS(366),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(368),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_1] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(368),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(368),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_1] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(368),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(370),
    [sym_module_identifier] = ACTIONS(370),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_1] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(370),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_BSLASH] = ACTIONS(370),
  },
  [94] = {
    [sym__abstract_pattern] = STATE(176),
    [sym_wildcard] = STATE(91),
    [sym__var] = STATE(92),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(93),
    [sym__symbol] = STATE(30),
    [aux_sym_function_rhs_repeat1] = STATE(95),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
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
  [95] = {
    [sym__identifier] = STATE(177),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(368),
    [anon_sym_BANG] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(368),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
    [anon_sym_AMP] = ACTIONS(368),
    [anon_sym_1] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_CARET] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(368),
  },
  [96] = {
    [sym__type] = STATE(180),
    [sym_function_type] = STATE(181),
    [sym_context] = STATE(182),
    [sym_class] = STATE(47),
    [sym_simple_type] = STATE(183),
    [aux_sym_function_type_repeat1] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(374),
    [sym_constructor_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(52),
  },
  [97] = {
    [sym__layout_semicolon] = ACTIONS(378),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_comment] = ACTIONS(52),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(178),
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
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
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
  },
  [100] = {
    [sym_declarations] = STATE(188),
    [sym__layout_open_brace] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [sym_export] = STATE(190),
    [sym__identifier] = STATE(191),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [102] = {
    [anon_sym_where] = ACTIONS(390),
    [sym_comment] = ACTIONS(52),
  },
  [103] = {
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym__] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_BANG] = ACTIONS(392),
    [sym_variable_identifier] = ACTIONS(392),
    [sym_constructor_identifier] = ACTIONS(392),
    [sym_module_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_1] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_SLASH] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [anon_sym_QMARK] = ACTIONS(392),
    [anon_sym_CARET] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_BSLASH] = ACTIONS(392),
  },
  [104] = {
    [sym_import_specification] = STATE(194),
    [sym__layout_semicolon] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_as] = ACTIONS(398),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [sym__identifier] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [106] = {
    [sym__identifier] = STATE(197),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(52),
  },
  [108] = {
    [sym__layout_semicolon] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(396),
    [sym_comment] = ACTIONS(52),
  },
  [109] = {
    [anon_sym_unsafe] = ACTIONS(404),
    [anon_sym_safe] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(406),
    [sym_constructor_identifier] = ACTIONS(406),
    [sym_module_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(404),
  },
  [110] = {
    [sym_safety] = STATE(201),
    [sym_type_signature] = STATE(202),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(203),
    [anon_sym_unsafe] = ACTIONS(408),
    [anon_sym_safe] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(410),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(412),
    [anon_sym_SEMI] = ACTIONS(414),
    [sym_comment] = ACTIONS(52),
  },
  [112] = {
    [aux_sym_export_repeat1] = STATE(206),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
  },
  [114] = {
    [sym__layout_semicolon] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(426),
    [sym_comment] = ACTIONS(52),
  },
  [115] = {
    [sym__layout_close_brace] = ACTIONS(428),
    [anon_sym_do] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [sym__integer_literal] = ACTIONS(430),
    [sym__octal_literal] = ACTIONS(430),
    [sym__hexidecimal_literal] = ACTIONS(430),
  },
  [116] = {
    [sym__expression] = STATE(114),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(209),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_close_brace] = ACTIONS(434),
    [anon_sym_do] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(214),
    [sym__octal_literal] = ACTIONS(214),
    [sym__hexidecimal_literal] = ACTIONS(214),
  },
  [117] = {
    [sym__layout_semicolon] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [118] = {
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_do] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [sym__integer_literal] = ACTIONS(430),
    [sym__octal_literal] = ACTIONS(430),
    [sym__hexidecimal_literal] = ACTIONS(430),
  },
  [119] = {
    [sym__expression] = STATE(117),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(211),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_do] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(208),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym__integer_literal] = ACTIONS(214),
    [sym__octal_literal] = ACTIONS(214),
    [sym__hexidecimal_literal] = ACTIONS(214),
  },
  [120] = {
    [anon_sym_LPAREN] = ACTIONS(226),
    [sym_variable_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [121] = {
    [aux_sym_context_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [sym_general_declarations] = STATE(218),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [aux_sym_type_class_repeat1] = STATE(219),
    [sym_variable_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [124] = {
    [anon_sym_where] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [anon_sym_where] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [aux_sym_type_class_repeat1] = STATE(223),
    [anon_sym_where] = ACTIONS(458),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [sym_variable_identifier] = ACTIONS(464),
    [sym_constructor_identifier] = ACTIONS(466),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [sym_general_declarations] = STATE(224),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [anon_sym_where] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [aux_sym_type_class_repeat1] = STATE(226),
    [anon_sym_where] = ACTIONS(468),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(228),
    [sym__layout_semicolon] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(474),
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
  [132] = {
    [sym__symbol] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(478),
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
  [133] = {
    [anon_sym_BQUOTE] = ACTIONS(480),
    [sym_comment] = ACTIONS(52),
  },
  [134] = {
    [sym__layout_semicolon] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(482),
    [sym_comment] = ACTIONS(52),
  },
  [135] = {
    [sym__symbol] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(470),
    [anon_sym_SEMI] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(474),
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
    [sym__op] = STATE(231),
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
  [137] = {
    [sym__layout_semicolon] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(488),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [aux_sym_fixity_repeat1] = STATE(233),
    [sym__layout_semicolon] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(52),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(490),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(382),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_BANG] = ACTIONS(382),
    [sym_comment] = ACTIONS(40),
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
  },
  [141] = {
    [sym__layout_semicolon] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_deriving] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_constructor_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_EQ] = ACTIONS(498),
    [anon_sym_deriving] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(500),
    [sym_constructor_identifier] = ACTIONS(502),
    [sym_comment] = ACTIONS(52),
  },
  [143] = {
    [aux_sym_type_class_repeat1] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_deriving] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(504),
    [sym_constructor_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [sym_constructors] = STATE(237),
    [sym_constructor] = STATE(149),
    [sym_deriving] = STATE(238),
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_EQ] = ACTIONS(510),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [sym_constructors] = STATE(237),
    [sym_constructor] = STATE(149),
    [sym_deriving] = STATE(238),
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym__identifier] = STATE(240),
    [anon_sym_LPAREN] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [sym_strict] = STATE(244),
    [sym__identifier] = STATE(244),
    [sym_fields] = STATE(245),
    [aux_sym_constructor_repeat1] = STATE(246),
    [sym__layout_semicolon] = ACTIONS(514),
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_deriving] = ACTIONS(516),
    [anon_sym_BANG] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_constructor_identifier] = ACTIONS(522),
    [sym_module_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(52),
  },
  [148] = {
    [sym_deriving] = STATE(238),
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [aux_sym_constructors_repeat1] = STATE(248),
    [sym__layout_semicolon] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(528),
    [anon_sym_deriving] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [sym__layout_semicolon] = ACTIONS(506),
    [anon_sym_SEMI] = ACTIONS(508),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [anon_sym_EQ] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [anon_sym_EQ] = ACTIONS(532),
    [sym_comment] = ACTIONS(52),
  },
  [154] = {
    [sym_new_constructor] = STATE(252),
    [sym_constructor_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [sym__type] = STATE(254),
    [sym_function_type] = STATE(181),
    [sym_simple_type] = STATE(183),
    [aux_sym_function_type_repeat1] = STATE(184),
    [sym_variable_identifier] = ACTIONS(374),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_comment] = ACTIONS(52),
  },
  [157] = {
    [sym__layout_semicolon] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(540),
    [sym_comment] = ACTIONS(52),
  },
  [158] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(542),
  },
  [159] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(544),
  },
  [160] = {
    [sym__cntrl] = STATE(256),
    [anon_sym_AT] = ACTIONS(546),
    [anon_sym__] = ACTIONS(546),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(546),
    [anon_sym_BSLASH] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_RBRACK] = ACTIONS(546),
  },
  [161] = {
    [aux_sym__escape_repeat1] = STATE(258),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(548),
  },
  [162] = {
    [aux_sym__escape_repeat2] = STATE(260),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(550),
  },
  [163] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(552),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(554),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_RBRACE] = ACTIONS(554),
    [anon_sym_LPAREN] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_EQ] = ACTIONS(554),
    [anon_sym_AT] = ACTIONS(554),
    [anon_sym_BQUOTE] = ACTIONS(554),
    [anon_sym_DASH] = ACTIONS(554),
    [anon_sym__] = ACTIONS(554),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_PIPE] = ACTIONS(554),
    [anon_sym_BANG] = ACTIONS(554),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(554),
    [sym__ascii_large] = ACTIONS(554),
    [anon_sym_POUND] = ACTIONS(554),
    [anon_sym_DOLLAR] = ACTIONS(554),
    [anon_sym_PERCENT] = ACTIONS(554),
    [anon_sym_AMP] = ACTIONS(554),
    [anon_sym_1] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(554),
    [anon_sym_SLASH] = ACTIONS(554),
    [anon_sym_LT] = ACTIONS(554),
    [anon_sym_GT] = ACTIONS(554),
    [anon_sym_QMARK] = ACTIONS(554),
    [anon_sym_CARET] = ACTIONS(554),
    [anon_sym_TILDE] = ACTIONS(554),
    [anon_sym_BSLASH] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym__space] = ACTIONS(554),
    [sym__newline] = ACTIONS(554),
    [sym__tab] = ACTIONS(554),
    [sym__vertical_tab] = ACTIONS(554),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_LBRACE] = ACTIONS(556),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_LPAREN] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_EQ] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [anon_sym__] = ACTIONS(556),
    [anon_sym_COLON] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(556),
    [anon_sym_BANG] = ACTIONS(556),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(556),
    [anon_sym_DQUOTE] = ACTIONS(556),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(556),
    [sym__ascii_large] = ACTIONS(556),
    [anon_sym_POUND] = ACTIONS(556),
    [anon_sym_DOLLAR] = ACTIONS(556),
    [anon_sym_PERCENT] = ACTIONS(556),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_1] = ACTIONS(556),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(556),
    [anon_sym_SLASH] = ACTIONS(556),
    [anon_sym_LT] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(556),
    [anon_sym_QMARK] = ACTIONS(556),
    [anon_sym_CARET] = ACTIONS(556),
    [anon_sym_TILDE] = ACTIONS(556),
    [anon_sym_BSLASH] = ACTIONS(556),
    [anon_sym_LBRACK] = ACTIONS(556),
    [anon_sym_RBRACK] = ACTIONS(556),
    [sym__space] = ACTIONS(556),
    [sym__newline] = ACTIONS(556),
    [sym__tab] = ACTIONS(556),
    [sym__vertical_tab] = ACTIONS(556),
  },
  [166] = {
    [sym__cntrl] = STATE(262),
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym__] = ACTIONS(558),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(558),
    [anon_sym_CARET] = ACTIONS(558),
    [anon_sym_BSLASH] = ACTIONS(558),
    [anon_sym_LBRACK] = ACTIONS(558),
    [anon_sym_RBRACK] = ACTIONS(558),
  },
  [167] = {
    [aux_sym__escape_repeat1] = STATE(264),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(560),
  },
  [168] = {
    [aux_sym__escape_repeat2] = STATE(266),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(562),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_RBRACE] = ACTIONS(564),
    [anon_sym_LPAREN] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [anon_sym_EQ] = ACTIONS(564),
    [anon_sym_AT] = ACTIONS(564),
    [anon_sym_BQUOTE] = ACTIONS(564),
    [anon_sym_DASH] = ACTIONS(564),
    [anon_sym__] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_BANG] = ACTIONS(564),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(564),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(564),
    [sym__ascii_large] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_DOLLAR] = ACTIONS(564),
    [anon_sym_PERCENT] = ACTIONS(564),
    [anon_sym_AMP] = ACTIONS(564),
    [anon_sym_1] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_SLASH] = ACTIONS(564),
    [anon_sym_LT] = ACTIONS(564),
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_QMARK] = ACTIONS(564),
    [anon_sym_CARET] = ACTIONS(564),
    [anon_sym_TILDE] = ACTIONS(564),
    [anon_sym_BSLASH] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym__space] = ACTIONS(564),
    [sym__newline] = ACTIONS(564),
    [sym__tab] = ACTIONS(564),
    [sym__vertical_tab] = ACTIONS(564),
  },
  [170] = {
    [anon_sym_SEMI] = ACTIONS(566),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(566),
    [anon_sym_LPAREN] = ACTIONS(566),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_EQ] = ACTIONS(566),
    [anon_sym_AT] = ACTIONS(566),
    [anon_sym_BQUOTE] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym__] = ACTIONS(566),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_PIPE] = ACTIONS(566),
    [anon_sym_BANG] = ACTIONS(566),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(566),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(566),
    [sym__ascii_large] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(566),
    [anon_sym_DOLLAR] = ACTIONS(566),
    [anon_sym_PERCENT] = ACTIONS(566),
    [anon_sym_AMP] = ACTIONS(566),
    [anon_sym_1] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_LT] = ACTIONS(566),
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_QMARK] = ACTIONS(566),
    [anon_sym_CARET] = ACTIONS(566),
    [anon_sym_TILDE] = ACTIONS(566),
    [anon_sym_BSLASH] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(566),
    [anon_sym_RBRACK] = ACTIONS(566),
    [sym__space] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
    [sym__tab] = ACTIONS(566),
    [sym__vertical_tab] = ACTIONS(566),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_comment] = ACTIONS(52),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_variable_identifier] = ACTIONS(574),
    [sym_constructor_identifier] = ACTIONS(370),
    [sym_module_identifier] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [174] = {
    [sym__identifier] = STATE(267),
    [sym__layout_semicolon] = ACTIONS(576),
    [anon_sym_SEMI] = ACTIONS(578),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(52),
  },
  [175] = {
    [sym__abstract_pattern] = STATE(268),
    [sym_wildcard] = STATE(91),
    [sym__var] = STATE(92),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(93),
    [sym__symbol] = STATE(30),
    [aux_sym_function_rhs_repeat1] = STATE(95),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym__] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(160),
    [sym_module_identifier] = ACTIONS(160),
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
  [176] = {
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_EQ] = ACTIONS(580),
    [anon_sym_AT] = ACTIONS(580),
    [anon_sym_DASH] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(580),
    [anon_sym_BANG] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_constructor_identifier] = ACTIONS(580),
    [sym_module_identifier] = ACTIONS(580),
    [sym_comment] = ACTIONS(40),
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
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_EQ] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(582),
    [anon_sym_DASH] = ACTIONS(582),
    [anon_sym__] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(582),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_BANG] = ACTIONS(582),
    [sym_variable_identifier] = ACTIONS(582),
    [sym_constructor_identifier] = ACTIONS(582),
    [sym_module_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(40),
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
  },
  [178] = {
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(584),
    [sym_comment] = ACTIONS(52),
  },
  [179] = {
    [aux_sym_type_class_repeat1] = STATE(270),
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_DASH_GT] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(594),
    [sym_comment] = ACTIONS(52),
  },
  [182] = {
    [sym__type] = STATE(271),
    [sym_function_type] = STATE(181),
    [sym_simple_type] = STATE(183),
    [aux_sym_function_type_repeat1] = STATE(184),
    [sym_variable_identifier] = ACTIONS(374),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [sym__layout_semicolon] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(594),
    [anon_sym_DASH_GT] = ACTIONS(596),
    [sym_comment] = ACTIONS(52),
  },
  [184] = {
    [anon_sym_DASH_GT] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(598),
    [sym_comment] = ACTIONS(52),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(600),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_import] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_AT] = ACTIONS(600),
    [anon_sym_DASH] = ACTIONS(600),
    [anon_sym_foreign] = ACTIONS(600),
    [anon_sym_default] = ACTIONS(600),
    [anon_sym_do] = ACTIONS(600),
    [anon_sym_class] = ACTIONS(600),
    [anon_sym_instance] = ACTIONS(600),
    [anon_sym_infixl] = ACTIONS(600),
    [anon_sym_infixr] = ACTIONS(600),
    [anon_sym_infix] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(600),
    [anon_sym_data] = ACTIONS(600),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_newtype] = ACTIONS(600),
    [anon_sym_BANG] = ACTIONS(600),
    [anon_sym_type] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_constructor_identifier] = ACTIONS(600),
    [sym_module_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(600),
    [anon_sym_DOLLAR] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(600),
    [anon_sym_1] = ACTIONS(600),
    [anon_sym_PLUS] = ACTIONS(600),
    [anon_sym_DOT] = ACTIONS(600),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_QMARK] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_BSLASH] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [186] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(275),
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
    [aux_sym_module_repeat1] = STATE(276),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(602),
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
  [187] = {
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
    [aux_sym_module_repeat1] = STATE(277),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(604),
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
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [anon_sym_where] = ACTIONS(608),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [aux_sym_module_exports_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(52),
  },
  [192] = {
    [sym_declarations] = STATE(282),
    [sym__layout_open_brace] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(386),
    [sym_comment] = ACTIONS(52),
  },
  [193] = {
    [sym__identifier] = STATE(283),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [194] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(622),
    [anon_sym_SEMI] = ACTIONS(624),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [aux_sym_import_specification_repeat1] = STATE(287),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [sym_import_specification] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [198] = {
    [sym__identifier] = STATE(289),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [sym_variable_identifier] = ACTIONS(632),
    [sym_constructor_identifier] = ACTIONS(634),
    [sym_module_identifier] = ACTIONS(634),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(632),
  },
  [200] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(291),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(636),
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
  [201] = {
    [sym_type_signature] = STATE(292),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(293),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(410),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [sym_type_signature] = STATE(292),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [204] = {
    [sym__identifier] = STATE(294),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(642),
    [anon_sym_SEMI] = ACTIONS(644),
    [sym_comment] = ACTIONS(52),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
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
  [208] = {
    [sym__layout_semicolon] = ACTIONS(656),
    [anon_sym_SEMI] = ACTIONS(658),
    [sym_comment] = ACTIONS(52),
  },
  [209] = {
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
  [210] = {
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
  [211] = {
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
  [212] = {
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [sym_class] = STATE(297),
    [sym_constructor_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [anon_sym_EQ_GT] = ACTIONS(666),
    [sym_comment] = ACTIONS(52),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(670),
    [sym_comment] = ACTIONS(52),
  },
  [216] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(303),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_general_declarations_repeat1] = STATE(304),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(672),
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
    [sym_variable_identifier] = ACTIONS(674),
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
  [217] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(305),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_general_declarations_repeat1] = STATE(306),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(676),
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
    [sym_variable_identifier] = ACTIONS(674),
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
  [218] = {
    [sym__layout_semicolon] = ACTIONS(678),
    [anon_sym_SEMI] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_variable_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [sym_general_declarations] = STATE(308),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [anon_sym_where] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [anon_sym_where] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [anon_sym_where] = ACTIONS(688),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [224] = {
    [sym__layout_semicolon] = ACTIONS(690),
    [anon_sym_SEMI] = ACTIONS(692),
    [sym_comment] = ACTIONS(52),
  },
  [225] = {
    [sym_general_declarations] = STATE(310),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [anon_sym_where] = ACTIONS(694),
    [sym_variable_identifier] = ACTIONS(460),
    [sym_comment] = ACTIONS(52),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(698),
    [anon_sym_COMMA] = ACTIONS(698),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [sym__symbol] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(702),
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
  [229] = {
    [sym__layout_semicolon] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_COMMA] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [231] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_COMMA] = ACTIONS(714),
    [sym_comment] = ACTIONS(52),
  },
  [232] = {
    [sym__op] = STATE(313),
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
  [233] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(718),
    [anon_sym_COMMA] = ACTIONS(488),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_deriving] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(686),
    [sym_constructor_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_deriving] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_constructor_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [236] = {
    [sym_constructors] = STATE(314),
    [sym_constructor] = STATE(149),
    [sym_deriving] = STATE(315),
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [237] = {
    [sym_deriving] = STATE(315),
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym__identifier] = STATE(316),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(728),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym_field] = STATE(318),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = ACTIONS(732),
    [sym_constructor_identifier] = ACTIONS(522),
    [sym_module_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
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
  [245] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(742),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [sym_strict] = STATE(320),
    [sym__identifier] = STATE(320),
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(742),
    [anon_sym_BANG] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_constructor_identifier] = ACTIONS(522),
    [sym_module_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym_constructor] = STATE(321),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(744),
    [anon_sym_SEMI] = ACTIONS(746),
    [anon_sym_PIPE] = ACTIONS(748),
    [anon_sym_deriving] = ACTIONS(746),
    [sym_comment] = ACTIONS(52),
  },
  [249] = {
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_EQ] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [sym_new_constructor] = STATE(323),
    [sym_constructor_identifier] = ACTIONS(534),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [sym__identifier] = STATE(324),
    [sym_fields] = STATE(324),
    [anon_sym_LBRACE] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(182),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [252] = {
    [sym_deriving] = STATE(325),
    [sym__layout_semicolon] = ACTIONS(750),
    [anon_sym_SEMI] = ACTIONS(752),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [253] = {
    [aux_sym_type_class_repeat1] = STATE(270),
    [sym__layout_semicolon] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_DASH_GT] = ACTIONS(268),
    [sym_variable_identifier] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(756),
    [anon_sym_SEMI] = ACTIONS(758),
    [sym_comment] = ACTIONS(52),
  },
  [255] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(760),
  },
  [256] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(762),
  },
  [257] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(764),
  },
  [258] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(768),
  },
  [259] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(770),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(770),
  },
  [260] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(772),
  },
  [261] = {
    [anon_sym_SEMI] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_EQ] = ACTIONS(774),
    [anon_sym_AT] = ACTIONS(774),
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
  [262] = {
    [anon_sym_SEMI] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(776),
    [anon_sym_LPAREN] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_EQ] = ACTIONS(776),
    [anon_sym_AT] = ACTIONS(776),
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
  [263] = {
    [anon_sym_SEMI] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_LPAREN] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(778),
    [anon_sym_EQ] = ACTIONS(778),
    [anon_sym_AT] = ACTIONS(778),
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
  [264] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
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
  [265] = {
    [anon_sym_SEMI] = ACTIONS(784),
    [anon_sym_LBRACE] = ACTIONS(784),
    [anon_sym_RBRACE] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(784),
    [anon_sym_RPAREN] = ACTIONS(784),
    [anon_sym_EQ] = ACTIONS(784),
    [anon_sym_AT] = ACTIONS(784),
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
  [266] = {
    [anon_sym_SEMI] = ACTIONS(780),
    [anon_sym_LBRACE] = ACTIONS(780),
    [anon_sym_RBRACE] = ACTIONS(780),
    [anon_sym_LPAREN] = ACTIONS(780),
    [anon_sym_RPAREN] = ACTIONS(780),
    [anon_sym_EQ] = ACTIONS(780),
    [anon_sym_AT] = ACTIONS(780),
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
  [267] = {
    [sym__layout_semicolon] = ACTIONS(788),
    [anon_sym_SEMI] = ACTIONS(790),
    [sym_variable_identifier] = ACTIONS(790),
    [sym_constructor_identifier] = ACTIONS(582),
    [sym_module_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(52),
  },
  [268] = {
    [anon_sym_LPAREN] = ACTIONS(792),
    [anon_sym_EQ] = ACTIONS(792),
    [anon_sym_AT] = ACTIONS(792),
    [anon_sym_DASH] = ACTIONS(792),
    [anon_sym__] = ACTIONS(792),
    [anon_sym_COLON] = ACTIONS(792),
    [anon_sym_PIPE] = ACTIONS(792),
    [anon_sym_BANG] = ACTIONS(792),
    [sym_variable_identifier] = ACTIONS(792),
    [sym_constructor_identifier] = ACTIONS(792),
    [sym_module_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(792),
    [anon_sym_DOLLAR] = ACTIONS(792),
    [anon_sym_PERCENT] = ACTIONS(792),
    [anon_sym_AMP] = ACTIONS(792),
    [anon_sym_1] = ACTIONS(792),
    [anon_sym_PLUS] = ACTIONS(792),
    [anon_sym_DOT] = ACTIONS(792),
    [anon_sym_SLASH] = ACTIONS(792),
    [anon_sym_LT] = ACTIONS(792),
    [anon_sym_GT] = ACTIONS(792),
    [anon_sym_QMARK] = ACTIONS(792),
    [anon_sym_CARET] = ACTIONS(792),
    [anon_sym_TILDE] = ACTIONS(792),
    [anon_sym_BSLASH] = ACTIONS(792),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DASH_GT] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [270] = {
    [sym__layout_semicolon] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(498),
    [anon_sym_DASH_GT] = ACTIONS(498),
    [sym_variable_identifier] = ACTIONS(794),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(796),
    [anon_sym_SEMI] = ACTIONS(798),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [sym__type] = STATE(333),
    [sym_function_type] = STATE(181),
    [sym_simple_type] = STATE(183),
    [aux_sym_function_type_repeat1] = STATE(334),
    [sym_variable_identifier] = ACTIONS(800),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_comment] = ACTIONS(52),
  },
  [273] = {
    [anon_sym_DASH_GT] = ACTIONS(802),
    [sym_variable_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [sym_comment] = ACTIONS(52),
  },
  [275] = {
    [sym__layout_semicolon] = ACTIONS(806),
    [anon_sym_SEMI] = ACTIONS(808),
    [sym_comment] = ACTIONS(52),
  },
  [276] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(337),
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
    [sym__layout_close_brace] = ACTIONS(810),
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
  [277] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(97),
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
    [anon_sym_RBRACE] = ACTIONS(812),
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
  [278] = {
    [sym_export] = STATE(338),
    [sym__identifier] = STATE(191),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [anon_sym_where] = ACTIONS(814),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [sym__identifier] = STATE(342),
    [anon_sym_DOT_DOT] = ACTIONS(820),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(822),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [sym_import_specification] = STATE(343),
    [sym__layout_semicolon] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(826),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [sym__identifier] = STATE(345),
    [anon_sym_DOT_DOT] = ACTIONS(828),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [sym__identifier] = STATE(346),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [sym__layout_semicolon] = ACTIONS(830),
    [anon_sym_SEMI] = ACTIONS(832),
    [sym_comment] = ACTIONS(52),
  },
  [287] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(824),
    [anon_sym_SEMI] = ACTIONS(826),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [aux_sym_import_specification_repeat1] = STATE(350),
    [anon_sym_LPAREN] = ACTIONS(838),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [sym_variable_identifier] = ACTIONS(326),
    [sym_constructor_identifier] = ACTIONS(840),
    [sym_module_identifier] = ACTIONS(840),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [sym__gap] = STATE(170),
    [sym__graphic] = STATE(170),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(170),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(842),
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
  [292] = {
    [sym__layout_semicolon] = ACTIONS(844),
    [anon_sym_SEMI] = ACTIONS(846),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym_type_signature] = STATE(352),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [sym__identifier] = STATE(353),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(850),
    [anon_sym_SEMI] = ACTIONS(852),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [anon_sym_COMMA] = ACTIONS(854),
    [anon_sym_RPAREN] = ACTIONS(854),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [sym_variable_identifier] = ACTIONS(856),
    [sym_constructor_identifier] = ACTIONS(858),
    [sym_comment] = ACTIONS(52),
  },
  [299] = {
    [sym_class] = STATE(354),
    [sym_constructor_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [anon_sym_EQ_GT] = ACTIONS(860),
    [sym_comment] = ACTIONS(52),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(864),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
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
  },
  [303] = {
    [sym__layout_semicolon] = ACTIONS(866),
    [anon_sym_SEMI] = ACTIONS(868),
    [sym_comment] = ACTIONS(52),
  },
  [304] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(358),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(870),
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
    [sym_variable_identifier] = ACTIONS(674),
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
  [305] = {
    [sym__layout_semicolon] = ACTIONS(872),
    [anon_sym_SEMI] = ACTIONS(874),
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(360),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(876),
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
    [sym_variable_identifier] = ACTIONS(674),
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
  [307] = {
    [anon_sym_COMMA] = ACTIONS(878),
    [anon_sym_RPAREN] = ACTIONS(878),
    [anon_sym_EQ_GT] = ACTIONS(878),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(880),
    [anon_sym_SEMI] = ACTIONS(882),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [sym_general_declarations] = STATE(361),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(886),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [sym_general_declarations] = STATE(362),
    [sym__layout_open_brace] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [312] = {
    [sym__layout_semicolon] = ACTIONS(888),
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(890),
    [sym_comment] = ACTIONS(52),
  },
  [313] = {
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(894),
    [sym_comment] = ACTIONS(52),
  },
  [314] = {
    [sym_deriving] = STATE(363),
    [sym__layout_semicolon] = ACTIONS(896),
    [anon_sym_SEMI] = ACTIONS(898),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [sym__layout_semicolon] = ACTIONS(896),
    [anon_sym_SEMI] = ACTIONS(898),
    [sym_comment] = ACTIONS(52),
  },
  [316] = {
    [aux_sym_export_repeat1] = STATE(365),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(900),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [aux_sym_field_repeat1] = STATE(368),
    [anon_sym_COMMA] = ACTIONS(902),
    [anon_sym_COLON_COLON] = ACTIONS(904),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
    [aux_sym_fields_repeat1] = STATE(371),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_COMMA] = ACTIONS(908),
    [sym_comment] = ACTIONS(52),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(912),
    [anon_sym_PIPE] = ACTIONS(912),
    [anon_sym_deriving] = ACTIONS(912),
    [anon_sym_BANG] = ACTIONS(912),
    [sym_variable_identifier] = ACTIONS(914),
    [sym_constructor_identifier] = ACTIONS(914),
    [sym_module_identifier] = ACTIONS(914),
    [sym_comment] = ACTIONS(52),
  },
  [320] = {
    [sym__layout_semicolon] = ACTIONS(916),
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_PIPE] = ACTIONS(918),
    [anon_sym_deriving] = ACTIONS(918),
    [anon_sym_BANG] = ACTIONS(918),
    [sym_variable_identifier] = ACTIONS(920),
    [sym_constructor_identifier] = ACTIONS(920),
    [sym_module_identifier] = ACTIONS(920),
    [sym_comment] = ACTIONS(52),
  },
  [321] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_PIPE] = ACTIONS(924),
    [anon_sym_deriving] = ACTIONS(924),
    [sym_comment] = ACTIONS(52),
  },
  [322] = {
    [sym_constructor] = STATE(372),
    [sym_constructor_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [323] = {
    [sym_deriving] = STATE(373),
    [sym__layout_semicolon] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_deriving] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [324] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(932),
    [anon_sym_deriving] = ACTIONS(932),
    [sym_comment] = ACTIONS(52),
  },
  [325] = {
    [sym__layout_semicolon] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(928),
    [sym_comment] = ACTIONS(52),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_DASH_GT] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [327] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(934),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(934),
  },
  [328] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(936),
  },
  [329] = {
    [anon_sym_SEMI] = ACTIONS(938),
    [anon_sym_LBRACE] = ACTIONS(938),
    [anon_sym_RBRACE] = ACTIONS(938),
    [anon_sym_LPAREN] = ACTIONS(938),
    [anon_sym_RPAREN] = ACTIONS(938),
    [anon_sym_EQ] = ACTIONS(938),
    [anon_sym_AT] = ACTIONS(938),
    [anon_sym_BQUOTE] = ACTIONS(938),
    [anon_sym_DASH] = ACTIONS(938),
    [anon_sym__] = ACTIONS(938),
    [anon_sym_COLON] = ACTIONS(938),
    [anon_sym_PIPE] = ACTIONS(938),
    [anon_sym_BANG] = ACTIONS(938),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(938),
    [anon_sym_DQUOTE] = ACTIONS(938),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(938),
    [sym__ascii_large] = ACTIONS(938),
    [anon_sym_POUND] = ACTIONS(938),
    [anon_sym_DOLLAR] = ACTIONS(938),
    [anon_sym_PERCENT] = ACTIONS(938),
    [anon_sym_AMP] = ACTIONS(938),
    [anon_sym_1] = ACTIONS(938),
    [anon_sym_PLUS] = ACTIONS(938),
    [anon_sym_DOT] = ACTIONS(938),
    [anon_sym_SLASH] = ACTIONS(938),
    [anon_sym_LT] = ACTIONS(938),
    [anon_sym_GT] = ACTIONS(938),
    [anon_sym_QMARK] = ACTIONS(938),
    [anon_sym_CARET] = ACTIONS(938),
    [anon_sym_TILDE] = ACTIONS(938),
    [anon_sym_BSLASH] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(938),
    [anon_sym_RBRACK] = ACTIONS(938),
    [sym__space] = ACTIONS(938),
    [sym__newline] = ACTIONS(938),
    [sym__tab] = ACTIONS(938),
    [sym__vertical_tab] = ACTIONS(938),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(938),
  },
  [330] = {
    [anon_sym_SEMI] = ACTIONS(940),
    [anon_sym_LBRACE] = ACTIONS(940),
    [anon_sym_RBRACE] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(940),
    [anon_sym_RPAREN] = ACTIONS(940),
    [anon_sym_EQ] = ACTIONS(940),
    [anon_sym_AT] = ACTIONS(940),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(940),
  },
  [331] = {
    [sym__layout_semicolon] = ACTIONS(720),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_DASH_GT] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [sym__layout_semicolon] = ACTIONS(942),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_DASH_GT] = ACTIONS(584),
    [sym_variable_identifier] = ACTIONS(584),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [sym__layout_semicolon] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(946),
    [sym_comment] = ACTIONS(52),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(946),
    [anon_sym_DASH_GT] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(948),
    [sym_comment] = ACTIONS(52),
  },
  [335] = {
    [sym__layout_close_brace] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_import] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_foreign] = ACTIONS(350),
    [anon_sym_default] = ACTIONS(350),
    [anon_sym_do] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_instance] = ACTIONS(350),
    [anon_sym_infixl] = ACTIONS(350),
    [anon_sym_infixr] = ACTIONS(350),
    [anon_sym_infix] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_data] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_newtype] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(350),
    [sym_module_identifier] = ACTIONS(350),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_1] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [sym__integer_literal] = ACTIONS(350),
    [sym__octal_literal] = ACTIONS(350),
    [sym__hexidecimal_literal] = ACTIONS(350),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(952),
    [sym_comment] = ACTIONS(52),
  },
  [337] = {
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [sym_comment] = ACTIONS(52),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(958),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [339] = {
    [sym_export] = STATE(376),
    [sym__identifier] = STATE(191),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [340] = {
    [anon_sym_where] = ACTIONS(960),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(52),
  },
  [342] = {
    [aux_sym_export_repeat1] = STATE(378),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [sym__layout_semicolon] = ACTIONS(964),
    [anon_sym_SEMI] = ACTIONS(966),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [anon_sym_RPAREN] = ACTIONS(968),
    [sym_comment] = ACTIONS(52),
  },
  [345] = {
    [aux_sym_export_repeat1] = STATE(380),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(968),
    [sym_comment] = ACTIONS(52),
  },
  [346] = {
    [anon_sym_LPAREN] = ACTIONS(970),
    [anon_sym_COMMA] = ACTIONS(972),
    [anon_sym_RPAREN] = ACTIONS(972),
    [sym_comment] = ACTIONS(52),
  },
  [347] = {
    [sym__identifier] = STATE(382),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [sym__layout_semicolon] = ACTIONS(974),
    [anon_sym_SEMI] = ACTIONS(976),
    [sym_comment] = ACTIONS(52),
  },
  [349] = {
    [sym__identifier] = STATE(384),
    [anon_sym_DOT_DOT] = ACTIONS(978),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [350] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [sym_variable_identifier] = ACTIONS(570),
    [sym_constructor_identifier] = ACTIONS(982),
    [sym_module_identifier] = ACTIONS(982),
    [sym_comment] = ACTIONS(52),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [353] = {
    [anon_sym_COMMA] = ACTIONS(988),
    [anon_sym_RPAREN] = ACTIONS(988),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [anon_sym_COMMA] = ACTIONS(990),
    [anon_sym_RPAREN] = ACTIONS(990),
    [sym_comment] = ACTIONS(52),
  },
  [355] = {
    [sym_variable_identifier] = ACTIONS(992),
    [sym_constructor_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(52),
  },
  [356] = {
    [sym__layout_close_brace] = ACTIONS(996),
    [anon_sym_LPAREN] = ACTIONS(998),
    [anon_sym_EQ] = ACTIONS(998),
    [anon_sym_AT] = ACTIONS(998),
    [anon_sym_DASH] = ACTIONS(998),
    [anon_sym_infixl] = ACTIONS(998),
    [anon_sym_infixr] = ACTIONS(998),
    [anon_sym_infix] = ACTIONS(998),
    [anon_sym_COLON] = ACTIONS(998),
    [anon_sym_PIPE] = ACTIONS(998),
    [anon_sym_BANG] = ACTIONS(998),
    [sym_variable_identifier] = ACTIONS(998),
    [sym_constructor_identifier] = ACTIONS(998),
    [sym_module_identifier] = ACTIONS(998),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(998),
    [anon_sym_DOLLAR] = ACTIONS(998),
    [anon_sym_PERCENT] = ACTIONS(998),
    [anon_sym_AMP] = ACTIONS(998),
    [anon_sym_1] = ACTIONS(998),
    [anon_sym_PLUS] = ACTIONS(998),
    [anon_sym_DOT] = ACTIONS(998),
    [anon_sym_SLASH] = ACTIONS(998),
    [anon_sym_LT] = ACTIONS(998),
    [anon_sym_GT] = ACTIONS(998),
    [anon_sym_QMARK] = ACTIONS(998),
    [anon_sym_CARET] = ACTIONS(998),
    [anon_sym_TILDE] = ACTIONS(998),
    [anon_sym_BSLASH] = ACTIONS(998),
  },
  [357] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1002),
    [sym_comment] = ACTIONS(52),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(998),
    [anon_sym_LPAREN] = ACTIONS(998),
    [anon_sym_EQ] = ACTIONS(998),
    [anon_sym_AT] = ACTIONS(998),
    [anon_sym_DASH] = ACTIONS(998),
    [anon_sym_infixl] = ACTIONS(998),
    [anon_sym_infixr] = ACTIONS(998),
    [anon_sym_infix] = ACTIONS(998),
    [anon_sym_COLON] = ACTIONS(998),
    [anon_sym_PIPE] = ACTIONS(998),
    [anon_sym_BANG] = ACTIONS(998),
    [sym_variable_identifier] = ACTIONS(998),
    [sym_constructor_identifier] = ACTIONS(998),
    [sym_module_identifier] = ACTIONS(998),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(998),
    [anon_sym_DOLLAR] = ACTIONS(998),
    [anon_sym_PERCENT] = ACTIONS(998),
    [anon_sym_AMP] = ACTIONS(998),
    [anon_sym_1] = ACTIONS(998),
    [anon_sym_PLUS] = ACTIONS(998),
    [anon_sym_DOT] = ACTIONS(998),
    [anon_sym_SLASH] = ACTIONS(998),
    [anon_sym_LT] = ACTIONS(998),
    [anon_sym_GT] = ACTIONS(998),
    [anon_sym_QMARK] = ACTIONS(998),
    [anon_sym_CARET] = ACTIONS(998),
    [anon_sym_TILDE] = ACTIONS(998),
    [anon_sym_BSLASH] = ACTIONS(998),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1014),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [sym__layout_semicolon] = ACTIONS(1016),
    [anon_sym_SEMI] = ACTIONS(1018),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [sym__layout_semicolon] = ACTIONS(1020),
    [anon_sym_SEMI] = ACTIONS(1022),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(1024),
    [anon_sym_SEMI] = ACTIONS(1026),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1028),
    [sym_comment] = ACTIONS(52),
  },
  [366] = {
    [sym_variable_identifier] = ACTIONS(1030),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [sym_strict] = STATE(391),
    [sym__identifier] = STATE(391),
    [anon_sym_BANG] = ACTIONS(1032),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(1034),
    [anon_sym_COLON_COLON] = ACTIONS(1036),
    [sym_comment] = ACTIONS(52),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(1038),
    [anon_sym_SEMI] = ACTIONS(1040),
    [anon_sym_PIPE] = ACTIONS(1040),
    [anon_sym_deriving] = ACTIONS(1040),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [sym_field] = STATE(394),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(1042),
    [anon_sym_COMMA] = ACTIONS(1044),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(1046),
    [anon_sym_SEMI] = ACTIONS(1048),
    [anon_sym_PIPE] = ACTIONS(1048),
    [anon_sym_deriving] = ACTIONS(1048),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1050),
    [anon_sym_SEMI] = ACTIONS(1052),
    [sym_comment] = ACTIONS(52),
  },
  [374] = {
    [sym__layout_semicolon] = ACTIONS(1054),
    [anon_sym_SEMI] = ACTIONS(802),
    [anon_sym_DASH_GT] = ACTIONS(802),
    [sym_variable_identifier] = ACTIONS(802),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [sym__layout_close_brace] = ACTIONS(1056),
    [anon_sym_LPAREN] = ACTIONS(600),
    [anon_sym_import] = ACTIONS(600),
    [anon_sym_EQ] = ACTIONS(600),
    [anon_sym_AT] = ACTIONS(600),
    [anon_sym_DASH] = ACTIONS(600),
    [anon_sym_foreign] = ACTIONS(600),
    [anon_sym_default] = ACTIONS(600),
    [anon_sym_do] = ACTIONS(600),
    [anon_sym_class] = ACTIONS(600),
    [anon_sym_instance] = ACTIONS(600),
    [anon_sym_infixl] = ACTIONS(600),
    [anon_sym_infixr] = ACTIONS(600),
    [anon_sym_infix] = ACTIONS(600),
    [anon_sym_COLON] = ACTIONS(600),
    [anon_sym_data] = ACTIONS(600),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_newtype] = ACTIONS(600),
    [anon_sym_BANG] = ACTIONS(600),
    [anon_sym_type] = ACTIONS(600),
    [sym_variable_identifier] = ACTIONS(600),
    [sym_constructor_identifier] = ACTIONS(600),
    [sym_module_identifier] = ACTIONS(600),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_POUND] = ACTIONS(600),
    [anon_sym_DOLLAR] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(600),
    [anon_sym_AMP] = ACTIONS(600),
    [anon_sym_1] = ACTIONS(600),
    [anon_sym_PLUS] = ACTIONS(600),
    [anon_sym_DOT] = ACTIONS(600),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_QMARK] = ACTIONS(600),
    [anon_sym_CARET] = ACTIONS(600),
    [anon_sym_TILDE] = ACTIONS(600),
    [anon_sym_BSLASH] = ACTIONS(600),
    [sym__integer_literal] = ACTIONS(600),
    [sym__octal_literal] = ACTIONS(600),
    [sym__hexidecimal_literal] = ACTIONS(600),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_RPAREN] = ACTIONS(1058),
    [sym_comment] = ACTIONS(52),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(1060),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(52),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [379] = {
    [aux_sym_import_specification_repeat1] = STATE(399),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(1064),
    [sym_comment] = ACTIONS(52),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_comment] = ACTIONS(52),
  },
  [381] = {
    [sym__identifier] = STATE(402),
    [anon_sym_DOT_DOT] = ACTIONS(1068),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [anon_sym_LPAREN] = ACTIONS(1070),
    [anon_sym_COMMA] = ACTIONS(1072),
    [anon_sym_RPAREN] = ACTIONS(1072),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [aux_sym_export_repeat1] = STATE(404),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [sym_comment] = ACTIONS(52),
  },
  [385] = {
    [sym__layout_semicolon] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1076),
    [sym_comment] = ACTIONS(52),
  },
  [386] = {
    [sym__layout_close_brace] = ACTIONS(1078),
    [anon_sym_LPAREN] = ACTIONS(1080),
    [anon_sym_EQ] = ACTIONS(1080),
    [anon_sym_AT] = ACTIONS(1080),
    [anon_sym_DASH] = ACTIONS(1080),
    [anon_sym_infixl] = ACTIONS(1080),
    [anon_sym_infixr] = ACTIONS(1080),
    [anon_sym_infix] = ACTIONS(1080),
    [anon_sym_COLON] = ACTIONS(1080),
    [anon_sym_PIPE] = ACTIONS(1080),
    [anon_sym_BANG] = ACTIONS(1080),
    [sym_variable_identifier] = ACTIONS(1080),
    [sym_constructor_identifier] = ACTIONS(1080),
    [sym_module_identifier] = ACTIONS(1080),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1080),
    [anon_sym_DOLLAR] = ACTIONS(1080),
    [anon_sym_PERCENT] = ACTIONS(1080),
    [anon_sym_AMP] = ACTIONS(1080),
    [anon_sym_1] = ACTIONS(1080),
    [anon_sym_PLUS] = ACTIONS(1080),
    [anon_sym_DOT] = ACTIONS(1080),
    [anon_sym_SLASH] = ACTIONS(1080),
    [anon_sym_LT] = ACTIONS(1080),
    [anon_sym_GT] = ACTIONS(1080),
    [anon_sym_QMARK] = ACTIONS(1080),
    [anon_sym_CARET] = ACTIONS(1080),
    [anon_sym_TILDE] = ACTIONS(1080),
    [anon_sym_BSLASH] = ACTIONS(1080),
  },
  [387] = {
    [anon_sym_RBRACE] = ACTIONS(1080),
    [anon_sym_LPAREN] = ACTIONS(1080),
    [anon_sym_EQ] = ACTIONS(1080),
    [anon_sym_AT] = ACTIONS(1080),
    [anon_sym_DASH] = ACTIONS(1080),
    [anon_sym_infixl] = ACTIONS(1080),
    [anon_sym_infixr] = ACTIONS(1080),
    [anon_sym_infix] = ACTIONS(1080),
    [anon_sym_COLON] = ACTIONS(1080),
    [anon_sym_PIPE] = ACTIONS(1080),
    [anon_sym_BANG] = ACTIONS(1080),
    [sym_variable_identifier] = ACTIONS(1080),
    [sym_constructor_identifier] = ACTIONS(1080),
    [sym_module_identifier] = ACTIONS(1080),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1080),
    [anon_sym_DOLLAR] = ACTIONS(1080),
    [anon_sym_PERCENT] = ACTIONS(1080),
    [anon_sym_AMP] = ACTIONS(1080),
    [anon_sym_1] = ACTIONS(1080),
    [anon_sym_PLUS] = ACTIONS(1080),
    [anon_sym_DOT] = ACTIONS(1080),
    [anon_sym_SLASH] = ACTIONS(1080),
    [anon_sym_LT] = ACTIONS(1080),
    [anon_sym_GT] = ACTIONS(1080),
    [anon_sym_QMARK] = ACTIONS(1080),
    [anon_sym_CARET] = ACTIONS(1080),
    [anon_sym_TILDE] = ACTIONS(1080),
    [anon_sym_BSLASH] = ACTIONS(1080),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [sym_comment] = ACTIONS(52),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(1086),
    [anon_sym_COLON_COLON] = ACTIONS(1086),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [sym__identifier] = STATE(405),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [391] = {
    [anon_sym_RBRACE] = ACTIONS(1088),
    [anon_sym_COMMA] = ACTIONS(1088),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [sym_variable_identifier] = ACTIONS(1090),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [sym_strict] = STATE(407),
    [sym__identifier] = STATE(407),
    [anon_sym_BANG] = ACTIONS(1032),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [394] = {
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_COMMA] = ACTIONS(1092),
    [sym_comment] = ACTIONS(52),
  },
  [395] = {
    [sym__layout_semicolon] = ACTIONS(1094),
    [anon_sym_SEMI] = ACTIONS(1096),
    [anon_sym_PIPE] = ACTIONS(1096),
    [anon_sym_deriving] = ACTIONS(1096),
    [sym_comment] = ACTIONS(52),
  },
  [396] = {
    [sym_field] = STATE(408),
    [sym_variable_identifier] = ACTIONS(730),
    [sym_comment] = ACTIONS(52),
  },
  [397] = {
    [anon_sym_COMMA] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [sym_comment] = ACTIONS(52),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1100),
    [anon_sym_SEMI] = ACTIONS(1102),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [aux_sym_import_specification_repeat1] = STATE(410),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(1104),
    [sym_comment] = ACTIONS(52),
  },
  [401] = {
    [anon_sym_RPAREN] = ACTIONS(1106),
    [sym_comment] = ACTIONS(52),
  },
  [402] = {
    [aux_sym_export_repeat1] = STATE(412),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(1106),
    [sym_comment] = ACTIONS(52),
  },
  [403] = {
    [sym__identifier] = STATE(414),
    [anon_sym_DOT_DOT] = ACTIONS(1108),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1110),
    [sym_comment] = ACTIONS(52),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(912),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [anon_sym_COMMA] = ACTIONS(1112),
    [anon_sym_COLON_COLON] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(1114),
    [anon_sym_COMMA] = ACTIONS(1114),
    [sym_comment] = ACTIONS(52),
  },
  [408] = {
    [anon_sym_RBRACE] = ACTIONS(1116),
    [anon_sym_COMMA] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [sym__layout_semicolon] = ACTIONS(1118),
    [anon_sym_SEMI] = ACTIONS(1120),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(1124),
    [anon_sym_RPAREN] = ACTIONS(1124),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [anon_sym_RPAREN] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [414] = {
    [aux_sym_export_repeat1] = STATE(418),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [415] = {
    [aux_sym_import_specification_repeat1] = STATE(419),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [416] = {
    [sym__layout_semicolon] = ACTIONS(1128),
    [anon_sym_SEMI] = ACTIONS(1130),
    [sym_comment] = ACTIONS(52),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1132),
    [sym_comment] = ACTIONS(52),
  },
  [418] = {
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [sym_comment] = ACTIONS(52),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(1136),
    [sym_comment] = ACTIONS(52),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [sym_comment] = ACTIONS(52),
  },
  [421] = {
    [sym__layout_semicolon] = ACTIONS(1140),
    [anon_sym_SEMI] = ACTIONS(1142),
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
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 1),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 1),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 2),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 1),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 1),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_lhs, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(222),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(235),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(243),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(255),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [556] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(261),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 2),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 2),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 2),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(302),
  [676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(301),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [686] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [702] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
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
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [778] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [784] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [786] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(330),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [792] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 3),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [812] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(336),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [840] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [842] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(351),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [858] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [876] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [914] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [920] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [938] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [982] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [994] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [998] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
