#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 420
#define SYMBOL_COUNT 208
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
  sym__var = 139,
  sym__expression = 140,
  sym_foreign = 141,
  sym_foreign_import = 142,
  sym_calling_convention = 143,
  sym_safety = 144,
  sym_default = 145,
  sym_do_expression = 146,
  sym_statement_list = 147,
  sym__statement = 148,
  sym_type_class = 149,
  sym_general_declarations = 150,
  sym_type_class_instance = 151,
  sym__general_declaration = 152,
  sym_fixity = 153,
  sym__op = 154,
  sym_variable_symbol = 155,
  sym_constructor_symbol = 156,
  sym_type_signature = 157,
  sym__type = 158,
  sym_function_type = 159,
  sym_algebraic_datatype = 160,
  sym_context = 161,
  sym_class = 162,
  sym_constructors = 163,
  sym_constructor = 164,
  sym_deriving = 165,
  sym_newtype = 166,
  sym_new_constructor = 167,
  sym_field = 168,
  sym_strict = 169,
  sym_type_synonym = 170,
  sym__literal = 171,
  sym__identifier = 172,
  sym_simple_type = 173,
  sym_integer = 174,
  sym_char = 175,
  sym_string = 176,
  sym__gap = 177,
  sym__graphic = 178,
  sym__small = 179,
  sym__large = 180,
  sym__symbol = 181,
  sym__special = 182,
  sym__escape = 183,
  sym__char_escape = 184,
  sym__ascii = 185,
  sym__cntrl = 186,
  sym_fields = 187,
  aux_sym_module_repeat1 = 188,
  aux_sym_module_exports_repeat1 = 189,
  aux_sym_export_repeat1 = 190,
  aux_sym_import_specification_repeat1 = 191,
  aux_sym_function_lhs_repeat1 = 192,
  aux_sym_function_rhs_repeat1 = 193,
  aux_sym_statement_list_repeat1 = 194,
  aux_sym_type_class_repeat1 = 195,
  aux_sym_general_declarations_repeat1 = 196,
  aux_sym_fixity_repeat1 = 197,
  aux_sym_variable_symbol_repeat1 = 198,
  aux_sym_function_type_repeat1 = 199,
  aux_sym_context_repeat1 = 200,
  aux_sym_constructors_repeat1 = 201,
  aux_sym_constructor_repeat1 = 202,
  aux_sym_field_repeat1 = 203,
  aux_sym_string_repeat1 = 204,
  aux_sym__escape_repeat1 = 205,
  aux_sym__escape_repeat2 = 206,
  aux_sym_fields_repeat1 = 207,
  alias_sym_type_constructor = 208,
  alias_sym_type_variable = 209,
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
        ADVANCE(367);
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
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '\r')
        ADVANCE(367);
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
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(418);
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
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(420);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(421);
      if (lookahead == 'd')
        ADVANCE(434);
      if (lookahead == 'e')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(446);
      if (lookahead == 'j')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'w')
        ADVANCE(462);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(368);
      END_STATE();
    case 369:
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(369);
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
        ADVANCE(370);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(372);
      if (lookahead == 'd')
        ADVANCE(385);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(397);
      if (lookahead == 'j')
        ADVANCE(403);
      if (lookahead == 's')
        ADVANCE(406);
      if (lookahead == 'w')
        ADVANCE(413);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(373);
      if (lookahead == 'p')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'u')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(381);
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
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 413:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(414);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(418);
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
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(420);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(421);
      if (lookahead == 'd')
        ADVANCE(434);
      if (lookahead == 'e')
        ADVANCE(440);
      if (lookahead == 'i')
        ADVANCE(446);
      if (lookahead == 'j')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'w')
        ADVANCE(462);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(368);
      END_STATE();
    case 419:
      if (lookahead == '>')
        ADVANCE(114);
      END_STATE();
    case 420:
      if (lookahead == 'n')
        SKIP(368);
      END_STATE();
    case 421:
      if (lookahead == 'c')
        ADVANCE(422);
      if (lookahead == 'p')
        ADVANCE(426);
      END_STATE();
    case 422:
      if (lookahead == 'a')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'l')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'l')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 426:
      if (lookahead == 'l')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'u')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 's')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'p')
        ADVANCE(430);
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
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 434:
      if (lookahead == 'o')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 't')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'n')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'e')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 't')
        ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 440:
      if (lookahead == 'x')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'p')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'o')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'r')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 't')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 446:
      if (lookahead == 'm')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'p')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'o')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 'r')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 't')
        ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 452:
      if (lookahead == 'v')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'm')
        ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 455:
      if (lookahead == 't')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'd')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'c')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'a')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'l')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'l')
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 462:
      if (lookahead == 'h')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'e')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'r')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'e')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 467:
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(471);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(467);
      END_STATE();
    case 468:
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(468);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(469);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
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
      if (lookahead == '\n')
        ADVANCE(468);
      if (lookahead == '\r')
        ADVANCE(470);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(471);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(467);
      END_STATE();
    case 471:
      if (lookahead == 'n')
        SKIP(467);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(477);
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
        SKIP(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(473);
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
        ADVANCE(474);
      if (lookahead == 'd')
        ADVANCE(475);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(473);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
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
    case 476:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(477);
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
        SKIP(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 478:
      if (lookahead == 'n')
        SKIP(472);
      END_STATE();
    case 479:
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
        ADVANCE(491);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
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
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
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
        ADVANCE(512);
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
        ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(510);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(515);
      if (lookahead == '\r')
        ADVANCE(517);
      if (lookahead == '-')
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '.')
        ADVANCE(544);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(545);
      if (lookahead == '{')
        ADVANCE(156);
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
        ADVANCE(341);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '.')
        ADVANCE(541);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == '{')
        ADVANCE(77);
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
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '.')
        ADVANCE(544);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(545);
      if (lookahead == '{')
        ADVANCE(156);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(336);
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
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(576);
      if (lookahead == 'd')
        ADVANCE(479);
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
        ADVANCE(475);
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
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(576);
      if (lookahead == 'd')
        ADVANCE(479);
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
        ADVANCE(585);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(586);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(577);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(578);
      if (lookahead == '\r')
        ADVANCE(578);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        ADVANCE(579);
      if (lookahead == 'w')
        ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(578);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(578);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
    case 585:
      if (lookahead == '\n')
        ADVANCE(578);
      if (lookahead == '\r')
        ADVANCE(585);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(586);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(577);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 586:
      if (lookahead == 'n')
        SKIP(577);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'h')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(595);
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
        SKIP(592);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(593);
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
        ADVANCE(594);
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
        ADVANCE(593);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(593);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(593);
      if (lookahead == '\r')
        ADVANCE(595);
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
        SKIP(592);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(597);
      if (lookahead == '\r')
        ADVANCE(599);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(600);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(596);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(597);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 598:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(597);
      if (lookahead == '\r')
        ADVANCE(599);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(600);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(596);
      END_STATE();
    case 600:
      if (lookahead == 'n')
        SKIP(596);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == '\r')
        ADVANCE(612);
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
        SKIP(613);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(601);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 602:
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == '\r')
        ADVANCE(602);
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
        ADVANCE(603);
      if (lookahead == 'd')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(602);
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
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
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
    case 612:
      if (lookahead == '\n')
        ADVANCE(602);
      if (lookahead == '\r')
        ADVANCE(612);
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
        SKIP(613);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(601);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 613:
      if (lookahead == 'n')
        SKIP(601);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 622:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(676);
      if (lookahead == 'B')
        ADVANCE(679);
      if (lookahead == 'C')
        ADVANCE(683);
      if (lookahead == 'D')
        ADVANCE(687);
      if (lookahead == 'E')
        ADVANCE(697);
      if (lookahead == 'F')
        ADVANCE(708);
      if (lookahead == 'G')
        ADVANCE(711);
      if (lookahead == 'H')
        ADVANCE(712);
      if (lookahead == 'L')
        ADVANCE(713);
      if (lookahead == 'N')
        ADVANCE(714);
      if (lookahead == 'O')
        ADVANCE(715);
      if (lookahead == 'R')
        ADVANCE(716);
      if (lookahead == 'S')
        ADVANCE(717);
      if (lookahead == 'U')
        ADVANCE(718);
      if (lookahead == 'V')
        ADVANCE(719);
      if (lookahead == 'X')
        ADVANCE(720);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(721);
      if (lookahead == 'b')
        ADVANCE(722);
      if (lookahead == 'f')
        ADVANCE(723);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(724);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(526);
      END_STATE();
    case 623:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == 'A')
        ADVANCE(624);
      if (lookahead == 'B')
        ADVANCE(627);
      if (lookahead == 'C')
        ADVANCE(631);
      if (lookahead == 'D')
        ADVANCE(635);
      if (lookahead == 'E')
        ADVANCE(645);
      if (lookahead == 'F')
        ADVANCE(656);
      if (lookahead == 'G')
        ADVANCE(659);
      if (lookahead == 'H')
        ADVANCE(660);
      if (lookahead == 'L')
        ADVANCE(661);
      if (lookahead == 'N')
        ADVANCE(662);
      if (lookahead == 'O')
        ADVANCE(663);
      if (lookahead == 'R')
        ADVANCE(664);
      if (lookahead == 'S')
        ADVANCE(665);
      if (lookahead == 'U')
        ADVANCE(666);
      if (lookahead == 'V')
        ADVANCE(667);
      if (lookahead == 'X')
        ADVANCE(668);
      if (lookahead == '\\')
        ADVANCE(669);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(670);
      if (lookahead == 'b')
        ADVANCE(671);
      if (lookahead == 'f')
        ADVANCE(672);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(523);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(626);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(628);
      if (lookahead == 'S')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(632);
      if (lookahead == 'R')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(633);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(636);
      if (lookahead == 'E')
        ADVANCE(641);
      if (lookahead == 'L')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(637);
      if (lookahead == '2')
        ADVANCE(638);
      if (lookahead == '3')
        ADVANCE(639);
      if (lookahead == '4')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(642);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(646);
      if (lookahead == 'N')
        ADVANCE(647);
      if (lookahead == 'O')
        ADVANCE(649);
      if (lookahead == 'S')
        ADVANCE(651);
      if (lookahead == 'T')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
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
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(654);
      if (lookahead == 'X')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(657);
      if (lookahead == 'S')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
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
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '\n')
        ADVANCE(623);
      if (lookahead == '\r')
        ADVANCE(675);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(676);
      if (lookahead == 'B')
        ADVANCE(679);
      if (lookahead == 'C')
        ADVANCE(683);
      if (lookahead == 'D')
        ADVANCE(687);
      if (lookahead == 'E')
        ADVANCE(697);
      if (lookahead == 'F')
        ADVANCE(708);
      if (lookahead == 'G')
        ADVANCE(711);
      if (lookahead == 'H')
        ADVANCE(712);
      if (lookahead == 'L')
        ADVANCE(713);
      if (lookahead == 'N')
        ADVANCE(714);
      if (lookahead == 'O')
        ADVANCE(715);
      if (lookahead == 'R')
        ADVANCE(716);
      if (lookahead == 'S')
        ADVANCE(717);
      if (lookahead == 'U')
        ADVANCE(718);
      if (lookahead == 'V')
        ADVANCE(719);
      if (lookahead == 'X')
        ADVANCE(720);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(721);
      if (lookahead == 'b')
        ADVANCE(722);
      if (lookahead == 'f')
        ADVANCE(723);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(724);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(622);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(526);
      END_STATE();
    case 676:
      if (lookahead == 'C')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'K')
        ADVANCE(678);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 679:
      if (lookahead == 'E')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(682);
      END_STATE();
    case 680:
      if (lookahead == 'L')
        ADVANCE(681);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 683:
      if (lookahead == 'A')
        ADVANCE(684);
      if (lookahead == 'R')
        ADVANCE(686);
      END_STATE();
    case 684:
      if (lookahead == 'N')
        ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 687:
      if (lookahead == 'C')
        ADVANCE(688);
      if (lookahead == 'E')
        ADVANCE(693);
      if (lookahead == 'L')
        ADVANCE(695);
      END_STATE();
    case 688:
      if (lookahead == '1')
        ADVANCE(689);
      if (lookahead == '2')
        ADVANCE(690);
      if (lookahead == '3')
        ADVANCE(691);
      if (lookahead == '4')
        ADVANCE(692);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 693:
      if (lookahead == 'L')
        ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 695:
      if (lookahead == 'E')
        ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 697:
      if (lookahead == 'M')
        ADVANCE(698);
      if (lookahead == 'N')
        ADVANCE(699);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'S')
        ADVANCE(703);
      if (lookahead == 'T')
        ADVANCE(705);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 699:
      if (lookahead == 'Q')
        ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 701:
      if (lookahead == 'T')
        ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 703:
      if (lookahead == 'C')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 705:
      if (lookahead == 'B')
        ADVANCE(706);
      if (lookahead == 'X')
        ADVANCE(707);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 708:
      if (lookahead == 'F')
        ADVANCE(709);
      if (lookahead == 'S')
        ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 711:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 712:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 713:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 714:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 716:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 717:
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
    case 718:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 719:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 726:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(738);
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
        ADVANCE(739);
      if (lookahead == 'B')
        ADVANCE(740);
      if (lookahead == 'C')
        ADVANCE(741);
      if (lookahead == 'D')
        ADVANCE(742);
      if (lookahead == 'E')
        ADVANCE(743);
      if (lookahead == 'F')
        ADVANCE(744);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(715);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(720);
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
        ADVANCE(721);
      if (lookahead == 'b')
        ADVANCE(722);
      if (lookahead == 'f')
        ADVANCE(723);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(724);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(725);
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
    case 727:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(728);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(729);
      if (lookahead == ' ')
        ADVANCE(730);
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
        ADVANCE(731);
      if (lookahead == 'B')
        ADVANCE(732);
      if (lookahead == 'C')
        ADVANCE(733);
      if (lookahead == 'D')
        ADVANCE(734);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(663);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(668);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(737);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(670);
      if (lookahead == 'b')
        ADVANCE(671);
      if (lookahead == 'f')
        ADVANCE(672);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(674);
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
    case 728:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(728);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(729);
      if (lookahead == ' ')
        ADVANCE(730);
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
        ADVANCE(731);
      if (lookahead == 'B')
        ADVANCE(732);
      if (lookahead == 'C')
        ADVANCE(733);
      if (lookahead == 'D')
        ADVANCE(734);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(663);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(668);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(737);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(670);
      if (lookahead == 'b')
        ADVANCE(671);
      if (lookahead == 'f')
        ADVANCE(672);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(674);
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
    case 729:
      if (lookahead == '\t')
        ADVANCE(728);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(729);
      if (lookahead == ' ')
        ADVANCE(730);
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
        ADVANCE(731);
      if (lookahead == 'B')
        ADVANCE(732);
      if (lookahead == 'C')
        ADVANCE(733);
      if (lookahead == 'D')
        ADVANCE(734);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(663);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(668);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(737);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(670);
      if (lookahead == 'b')
        ADVANCE(671);
      if (lookahead == 'f')
        ADVANCE(672);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(674);
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
    case 730:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(728);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(729);
      if (lookahead == ' ')
        ADVANCE(730);
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
        ADVANCE(731);
      if (lookahead == 'B')
        ADVANCE(732);
      if (lookahead == 'C')
        ADVANCE(733);
      if (lookahead == 'D')
        ADVANCE(734);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(736);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(663);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(668);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(737);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(670);
      if (lookahead == 'b')
        ADVANCE(671);
      if (lookahead == 'f')
        ADVANCE(672);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(673);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(674);
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
    case 731:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(628);
      if (lookahead == 'S')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(632);
      if (lookahead == 'R')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(636);
      if (lookahead == 'E')
        ADVANCE(641);
      if (lookahead == 'L')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(646);
      if (lookahead == 'N')
        ADVANCE(647);
      if (lookahead == 'O')
        ADVANCE(649);
      if (lookahead == 'S')
        ADVANCE(651);
      if (lookahead == 'T')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(657);
      if (lookahead == 'S')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(729);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 738:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(727);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(738);
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
        ADVANCE(739);
      if (lookahead == 'B')
        ADVANCE(740);
      if (lookahead == 'C')
        ADVANCE(741);
      if (lookahead == 'D')
        ADVANCE(742);
      if (lookahead == 'E')
        ADVANCE(743);
      if (lookahead == 'F')
        ADVANCE(744);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(715);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(720);
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
        ADVANCE(721);
      if (lookahead == 'b')
        ADVANCE(722);
      if (lookahead == 'f')
        ADVANCE(723);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(724);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(725);
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
    case 739:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(677);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(682);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(684);
      if (lookahead == 'R')
        ADVANCE(686);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(688);
      if (lookahead == 'E')
        ADVANCE(693);
      if (lookahead == 'L')
        ADVANCE(695);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(698);
      if (lookahead == 'N')
        ADVANCE(699);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'S')
        ADVANCE(703);
      if (lookahead == 'T')
        ADVANCE(705);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(709);
      if (lookahead == 'S')
        ADVANCE(710);
      END_STATE();
    case 745:
      if (lookahead == '\n')
        ADVANCE(746);
      if (lookahead == '\r')
        ADVANCE(748);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(749);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(745);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 746:
      if (lookahead == '\n')
        ADVANCE(746);
      if (lookahead == '\r')
        ADVANCE(746);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 747:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(746);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 748:
      if (lookahead == '\n')
        ADVANCE(746);
      if (lookahead == '\r')
        ADVANCE(748);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(749);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(745);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 749:
      if (lookahead == 'n')
        SKIP(745);
      END_STATE();
    case 750:
      if (lookahead == '\n')
        ADVANCE(751);
      if (lookahead == '\r')
        ADVANCE(753);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(754);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(750);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 751:
      if (lookahead == '\n')
        ADVANCE(751);
      if (lookahead == '\r')
        ADVANCE(751);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(751);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 752:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(751);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      if (lookahead == '\n')
        ADVANCE(751);
      if (lookahead == '\r')
        ADVANCE(753);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(754);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(750);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 754:
      if (lookahead == 'n')
        SKIP(750);
      END_STATE();
    case 755:
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == '\r')
        ADVANCE(768);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(769);
      if (lookahead == 's')
        ADVANCE(770);
      if (lookahead == 'u')
        ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(755);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 756:
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == '\r')
        ADVANCE(756);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(757);
      if (lookahead == 's')
        ADVANCE(758);
      if (lookahead == 'u')
        ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(756);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(756);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
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
    case 762:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
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
      if (lookahead == 's')
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
      if (lookahead == 'a')
        ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      if (lookahead == 'e')
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
    case 768:
      if (lookahead == '\n')
        ADVANCE(756);
      if (lookahead == '\r')
        ADVANCE(768);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(769);
      if (lookahead == 's')
        ADVANCE(770);
      if (lookahead == 'u')
        ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(755);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 769:
      if (lookahead == 'n')
        SKIP(755);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'a')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(270);
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
      if (lookahead == 'n')
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
      if (lookahead == 's')
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
      if (lookahead == 'a')
        ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(781);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 782:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(781);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(783);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(784);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 784:
      if (lookahead == 'n')
        SKIP(780);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(788);
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
        SKIP(789);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(786);
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
        ADVANCE(787);
      if (lookahead == 'd')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 787:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(786);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(786);
      if (lookahead == '\r')
        ADVANCE(788);
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
        SKIP(789);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(785);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 789:
      if (lookahead == 'n')
        SKIP(785);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(793);
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
        SKIP(794);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(791);
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
        ADVANCE(792);
      if (lookahead == 'd')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(791);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(793);
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
        SKIP(794);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 794:
      if (lookahead == 'n')
        SKIP(790);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 796:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(797);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(796);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(798);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(799);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        SKIP(795);
      END_STATE();
    case 800:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(803);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(801);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      if (lookahead == '\n')
        ADVANCE(801);
      if (lookahead == '\r')
        ADVANCE(803);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(804);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(800);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 804:
      if (lookahead == 'n')
        SKIP(800);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(808);
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
        SKIP(809);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 806:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(806);
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
        ADVANCE(807);
      if (lookahead == 'd')
        ADVANCE(604);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(806);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(808);
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
        SKIP(809);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(805);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(811);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(812);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(811);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 812:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(811);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      END_STATE();
    case 814:
      if (lookahead == 'n')
        SKIP(810);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(816);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(817);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(816);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 817:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(816);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      END_STATE();
    case 819:
      if (lookahead == 'n')
        SKIP(815);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
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
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(822);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(821);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
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
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(830);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(825);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(826);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(827);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(825);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(825);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(830);
      END_STATE();
    case 829:
      if (lookahead == 'n')
        SKIP(824);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(837);
      END_STATE();
    case 832:
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(832);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(833);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(834);
      if (lookahead != 0)
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(832);
      if (lookahead == '\r')
        ADVANCE(835);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(836);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(831);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(837);
      END_STATE();
    case 836:
      if (lookahead == 'n')
        SKIP(831);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(842);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(838);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 839:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(840);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(841);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(839);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 840:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 841:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(839);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(842);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(838);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 843:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 844:
      if (lookahead == 'n')
        SKIP(838);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '-')
        ADVANCE(840);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 847:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(846);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      END_STATE();
    case 849:
      if (lookahead == 'n')
        SKIP(845);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(853);
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
        SKIP(850);
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
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
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
        ADVANCE(852);
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
        ADVANCE(851);
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
    case 852:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(851);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(853);
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
        SKIP(850);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 854:
      if (lookahead == '\n')
        ADVANCE(855);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(854);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(855);
      if (lookahead == '\r')
        ADVANCE(855);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(856);
      if (lookahead == 'h')
        ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(855);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 856:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(855);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(855);
      if (lookahead == '\r')
        ADVANCE(857);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(858);
      if (lookahead == 'h')
        ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(854);
      END_STATE();
    case 858:
      if (lookahead == 'n')
        SKIP(854);
      END_STATE();
    case 859:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(864);
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
        ADVANCE(865);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(859);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(860);
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
        ADVANCE(861);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(862);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(860);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 863:
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
    case 864:
      if (lookahead == '\n')
        ADVANCE(860);
      if (lookahead == '\r')
        ADVANCE(864);
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
        ADVANCE(865);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(859);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 866:
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
    case 867:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(870);
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
        ADVANCE(865);
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
        SKIP(867);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(868);
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
        ADVANCE(869);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(862);
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
        ADVANCE(868);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(868);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(868);
      if (lookahead == '\r')
        ADVANCE(870);
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
        ADVANCE(865);
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
        SKIP(867);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(874);
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
        SKIP(875);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(872);
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
        ADVANCE(873);
      if (lookahead == 'd')
        ADVANCE(604);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(872);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 874:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(874);
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
        SKIP(875);
      if (lookahead == 'd')
        ADVANCE(614);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 875:
      if (lookahead == 'n')
        SKIP(871);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(879);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(880);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(877);
      if (lookahead == '-')
        ADVANCE(840);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(878);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(877);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 878:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(877);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(877);
      if (lookahead == '\r')
        ADVANCE(879);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(880);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(876);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 880:
      if (lookahead == 'n')
        SKIP(876);
      END_STATE();
    case 881:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(887);
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
    case 882:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(883);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == ' ')
        ADVANCE(885);
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
        ADVANCE(886);
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
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(883);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == ' ')
        ADVANCE(885);
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
        ADVANCE(886);
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
      if (lookahead == '\t')
        ADVANCE(883);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == ' ')
        ADVANCE(885);
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
        ADVANCE(886);
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
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(883);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == ' ')
        ADVANCE(885);
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
        ADVANCE(886);
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
    case 886:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(884);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 887:
      if (lookahead == '\t')
        ADVANCE(528);
      if (lookahead == '\n')
        ADVANCE(882);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(887);
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
    case 888:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '-')
        ADVANCE(840);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(889);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(889);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(843);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 892:
      if (lookahead == 'n')
        SKIP(888);
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
  [6] = {.lex_state = 368},
  [7] = {.lex_state = 330},
  [8] = {.lex_state = 467, .external_lex_state = 2},
  [9] = {.lex_state = 472},
  [10] = {.lex_state = 472},
  [11] = {.lex_state = 481},
  [12] = {.lex_state = 472},
  [13] = {.lex_state = 472},
  [14] = {.lex_state = 489},
  [15] = {.lex_state = 510, .external_lex_state = 3},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 514, .external_lex_state = 3},
  [18] = {.lex_state = 519},
  [19] = {.lex_state = 527},
  [20] = {.lex_state = 514, .external_lex_state = 3},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 514, .external_lex_state = 3},
  [23] = {.lex_state = 514, .external_lex_state = 3},
  [24] = {.lex_state = 514, .external_lex_state = 3},
  [25] = {.lex_state = 330},
  [26] = {.lex_state = 364},
  [27] = {.lex_state = 514, .external_lex_state = 3},
  [28] = {.lex_state = 364},
  [29] = {.lex_state = 330},
  [30] = {.lex_state = 364},
  [31] = {.lex_state = 535},
  [32] = {.lex_state = 364},
  [33] = {.lex_state = 368},
  [34] = {.lex_state = 364},
  [35] = {.lex_state = 539},
  [36] = {.lex_state = 546, .external_lex_state = 3},
  [37] = {.lex_state = 567, .external_lex_state = 3},
  [38] = {.lex_state = 368},
  [39] = {.lex_state = 368},
  [40] = {.lex_state = 539},
  [41] = {.lex_state = 572, .external_lex_state = 4},
  [42] = {.lex_state = 472},
  [43] = {.lex_state = 514, .external_lex_state = 3},
  [44] = {.lex_state = 489},
  [45] = {.lex_state = 577},
  [46] = {.lex_state = 489},
  [47] = {.lex_state = 368},
  [48] = {.lex_state = 577},
  [49] = {.lex_state = 489},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 592, .external_lex_state = 3},
  [52] = {.lex_state = 539},
  [53] = {.lex_state = 592, .external_lex_state = 3},
  [54] = {.lex_state = 481},
  [55] = {.lex_state = 596, .external_lex_state = 3},
  [56] = {.lex_state = 596, .external_lex_state = 3},
  [57] = {.lex_state = 481},
  [58] = {.lex_state = 592, .external_lex_state = 3},
  [59] = {.lex_state = 592, .external_lex_state = 3},
  [60] = {.lex_state = 601, .external_lex_state = 3},
  [61] = {.lex_state = 489},
  [62] = {.lex_state = 489, .external_lex_state = 3},
  [63] = {.lex_state = 330},
  [64] = {.lex_state = 489},
  [65] = {.lex_state = 330},
  [66] = {.lex_state = 330},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 330},
  [70] = {.lex_state = 330},
  [71] = {.lex_state = 330},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 330},
  [74] = {.lex_state = 622},
  [75] = {.lex_state = 527},
  [76] = {.lex_state = 527},
  [77] = {.lex_state = 527},
  [78] = {.lex_state = 527},
  [79] = {.lex_state = 514, .external_lex_state = 3},
  [80] = {.lex_state = 527},
  [81] = {.lex_state = 527},
  [82] = {.lex_state = 726},
  [83] = {.lex_state = 527},
  [84] = {.lex_state = 527},
  [85] = {.lex_state = 535},
  [86] = {.lex_state = 745, .external_lex_state = 3},
  [87] = {.lex_state = 514, .external_lex_state = 3},
  [88] = {.lex_state = 364},
  [89] = {.lex_state = 364},
  [90] = {.lex_state = 364},
  [91] = {.lex_state = 364},
  [92] = {.lex_state = 364},
  [93] = {.lex_state = 364},
  [94] = {.lex_state = 750},
  [95] = {.lex_state = 514, .external_lex_state = 3},
  [96] = {.lex_state = 364},
  [97] = {.lex_state = 364},
  [98] = {.lex_state = 467, .external_lex_state = 2},
  [99] = {.lex_state = 539},
  [100] = {.lex_state = 368},
  [101] = {.lex_state = 364},
  [102] = {.lex_state = 567, .external_lex_state = 3},
  [103] = {.lex_state = 539},
  [104] = {.lex_state = 539},
  [105] = {.lex_state = 330},
  [106] = {.lex_state = 514, .external_lex_state = 3},
  [107] = {.lex_state = 755},
  [108] = {.lex_state = 755},
  [109] = {.lex_state = 514, .external_lex_state = 3},
  [110] = {.lex_state = 368},
  [111] = {.lex_state = 514, .external_lex_state = 3},
  [112] = {.lex_state = 514, .external_lex_state = 3},
  [113] = {.lex_state = 572, .external_lex_state = 4},
  [114] = {.lex_state = 572, .external_lex_state = 4},
  [115] = {.lex_state = 514, .external_lex_state = 3},
  [116] = {.lex_state = 472},
  [117] = {.lex_state = 472},
  [118] = {.lex_state = 330},
  [119] = {.lex_state = 368},
  [120] = {.lex_state = 467, .external_lex_state = 2},
  [121] = {.lex_state = 330},
  [122] = {.lex_state = 577},
  [123] = {.lex_state = 577},
  [124] = {.lex_state = 577},
  [125] = {.lex_state = 780},
  [126] = {.lex_state = 467, .external_lex_state = 2},
  [127] = {.lex_state = 577},
  [128] = {.lex_state = 577},
  [129] = {.lex_state = 592, .external_lex_state = 3},
  [130] = {.lex_state = 592, .external_lex_state = 3},
  [131] = {.lex_state = 368},
  [132] = {.lex_state = 596, .external_lex_state = 3},
  [133] = {.lex_state = 592, .external_lex_state = 3},
  [134] = {.lex_state = 481},
  [135] = {.lex_state = 596, .external_lex_state = 3},
  [136] = {.lex_state = 596, .external_lex_state = 3},
  [137] = {.lex_state = 596, .external_lex_state = 3},
  [138] = {.lex_state = 592, .external_lex_state = 3},
  [139] = {.lex_state = 785, .external_lex_state = 3},
  [140] = {.lex_state = 790, .external_lex_state = 3},
  [141] = {.lex_state = 790, .external_lex_state = 3},
  [142] = {.lex_state = 489, .external_lex_state = 3},
  [143] = {.lex_state = 795, .external_lex_state = 3},
  [144] = {.lex_state = 800},
  [145] = {.lex_state = 805, .external_lex_state = 3},
  [146] = {.lex_state = 810, .external_lex_state = 3},
  [147] = {.lex_state = 815, .external_lex_state = 3},
  [148] = {.lex_state = 514, .external_lex_state = 3},
  [149] = {.lex_state = 750},
  [150] = {.lex_state = 330},
  [151] = {.lex_state = 330},
  [152] = {.lex_state = 489},
  [153] = {.lex_state = 330},
  [154] = {.lex_state = 780},
  [155] = {.lex_state = 514, .external_lex_state = 3},
  [156] = {.lex_state = 330},
  [157] = {.lex_state = 330},
  [158] = {.lex_state = 820},
  [159] = {.lex_state = 824},
  [160] = {.lex_state = 831},
  [161] = {.lex_state = 330},
  [162] = {.lex_state = 527},
  [163] = {.lex_state = 527},
  [164] = {.lex_state = 820},
  [165] = {.lex_state = 824},
  [166] = {.lex_state = 831},
  [167] = {.lex_state = 527},
  [168] = {.lex_state = 527},
  [169] = {.lex_state = 514, .external_lex_state = 3},
  [170] = {.lex_state = 745, .external_lex_state = 3},
  [171] = {.lex_state = 745, .external_lex_state = 3},
  [172] = {.lex_state = 745, .external_lex_state = 3},
  [173] = {.lex_state = 364},
  [174] = {.lex_state = 364},
  [175] = {.lex_state = 364},
  [176] = {.lex_state = 838},
  [177] = {.lex_state = 838, .external_lex_state = 3},
  [178] = {.lex_state = 514, .external_lex_state = 3},
  [179] = {.lex_state = 514, .external_lex_state = 3},
  [180] = {.lex_state = 780},
  [181] = {.lex_state = 845, .external_lex_state = 3},
  [182] = {.lex_state = 838},
  [183] = {.lex_state = 535},
  [184] = {.lex_state = 850, .external_lex_state = 4},
  [185] = {.lex_state = 535},
  [186] = {.lex_state = 330},
  [187] = {.lex_state = 368},
  [188] = {.lex_state = 368},
  [189] = {.lex_state = 368},
  [190] = {.lex_state = 467, .external_lex_state = 2},
  [191] = {.lex_state = 539},
  [192] = {.lex_state = 514, .external_lex_state = 3},
  [193] = {.lex_state = 514, .external_lex_state = 3},
  [194] = {.lex_state = 368},
  [195] = {.lex_state = 854, .external_lex_state = 3},
  [196] = {.lex_state = 539},
  [197] = {.lex_state = 539},
  [198] = {.lex_state = 527},
  [199] = {.lex_state = 539},
  [200] = {.lex_state = 514, .external_lex_state = 3},
  [201] = {.lex_state = 539},
  [202] = {.lex_state = 539},
  [203] = {.lex_state = 514, .external_lex_state = 3},
  [204] = {.lex_state = 368},
  [205] = {.lex_state = 572, .external_lex_state = 4},
  [206] = {.lex_state = 514, .external_lex_state = 3},
  [207] = {.lex_state = 572, .external_lex_state = 4},
  [208] = {.lex_state = 472},
  [209] = {.lex_state = 472},
  [210] = {.lex_state = 368},
  [211] = {.lex_state = 489},
  [212] = {.lex_state = 368},
  [213] = {.lex_state = 368},
  [214] = {.lex_state = 859, .external_lex_state = 4},
  [215] = {.lex_state = 867},
  [216] = {.lex_state = 514, .external_lex_state = 3},
  [217] = {.lex_state = 330},
  [218] = {.lex_state = 467, .external_lex_state = 2},
  [219] = {.lex_state = 577},
  [220] = {.lex_state = 577},
  [221] = {.lex_state = 577},
  [222] = {.lex_state = 514, .external_lex_state = 3},
  [223] = {.lex_state = 467, .external_lex_state = 2},
  [224] = {.lex_state = 577},
  [225] = {.lex_state = 596, .external_lex_state = 3},
  [226] = {.lex_state = 592, .external_lex_state = 3},
  [227] = {.lex_state = 596, .external_lex_state = 3},
  [228] = {.lex_state = 596, .external_lex_state = 3},
  [229] = {.lex_state = 596, .external_lex_state = 3},
  [230] = {.lex_state = 481},
  [231] = {.lex_state = 596, .external_lex_state = 3},
  [232] = {.lex_state = 790, .external_lex_state = 3},
  [233] = {.lex_state = 790, .external_lex_state = 3},
  [234] = {.lex_state = 795, .external_lex_state = 3},
  [235] = {.lex_state = 810, .external_lex_state = 3},
  [236] = {.lex_state = 514, .external_lex_state = 3},
  [237] = {.lex_state = 539},
  [238] = {.lex_state = 514, .external_lex_state = 3},
  [239] = {.lex_state = 330},
  [240] = {.lex_state = 539},
  [241] = {.lex_state = 871, .external_lex_state = 3},
  [242] = {.lex_state = 871, .external_lex_state = 3},
  [243] = {.lex_state = 815, .external_lex_state = 3},
  [244] = {.lex_state = 871, .external_lex_state = 3},
  [245] = {.lex_state = 489},
  [246] = {.lex_state = 815, .external_lex_state = 3},
  [247] = {.lex_state = 330},
  [248] = {.lex_state = 489},
  [249] = {.lex_state = 539},
  [250] = {.lex_state = 810, .external_lex_state = 3},
  [251] = {.lex_state = 876, .external_lex_state = 3},
  [252] = {.lex_state = 514, .external_lex_state = 3},
  [253] = {.lex_state = 330},
  [254] = {.lex_state = 330},
  [255] = {.lex_state = 824},
  [256] = {.lex_state = 824},
  [257] = {.lex_state = 831},
  [258] = {.lex_state = 831},
  [259] = {.lex_state = 527},
  [260] = {.lex_state = 527},
  [261] = {.lex_state = 527},
  [262] = {.lex_state = 527},
  [263] = {.lex_state = 881},
  [264] = {.lex_state = 881},
  [265] = {.lex_state = 745, .external_lex_state = 3},
  [266] = {.lex_state = 364},
  [267] = {.lex_state = 888, .external_lex_state = 3},
  [268] = {.lex_state = 876, .external_lex_state = 3},
  [269] = {.lex_state = 514, .external_lex_state = 3},
  [270] = {.lex_state = 780},
  [271] = {.lex_state = 838},
  [272] = {.lex_state = 330},
  [273] = {.lex_state = 514, .external_lex_state = 3},
  [274] = {.lex_state = 850, .external_lex_state = 4},
  [275] = {.lex_state = 535},
  [276] = {.lex_state = 539},
  [277] = {.lex_state = 368},
  [278] = {.lex_state = 368},
  [279] = {.lex_state = 539},
  [280] = {.lex_state = 330},
  [281] = {.lex_state = 854, .external_lex_state = 3},
  [282] = {.lex_state = 539},
  [283] = {.lex_state = 539},
  [284] = {.lex_state = 514, .external_lex_state = 3},
  [285] = {.lex_state = 368},
  [286] = {.lex_state = 514, .external_lex_state = 3},
  [287] = {.lex_state = 368},
  [288] = {.lex_state = 539},
  [289] = {.lex_state = 527},
  [290] = {.lex_state = 514, .external_lex_state = 3},
  [291] = {.lex_state = 539},
  [292] = {.lex_state = 368},
  [293] = {.lex_state = 539},
  [294] = {.lex_state = 514, .external_lex_state = 3},
  [295] = {.lex_state = 368},
  [296] = {.lex_state = 780},
  [297] = {.lex_state = 489},
  [298] = {.lex_state = 368},
  [299] = {.lex_state = 514, .external_lex_state = 3},
  [300] = {.lex_state = 510},
  [301] = {.lex_state = 514, .external_lex_state = 3},
  [302] = {.lex_state = 859, .external_lex_state = 4},
  [303] = {.lex_state = 514, .external_lex_state = 3},
  [304] = {.lex_state = 867},
  [305] = {.lex_state = 368},
  [306] = {.lex_state = 514, .external_lex_state = 3},
  [307] = {.lex_state = 467, .external_lex_state = 2},
  [308] = {.lex_state = 514, .external_lex_state = 3},
  [309] = {.lex_state = 467, .external_lex_state = 2},
  [310] = {.lex_state = 596, .external_lex_state = 3},
  [311] = {.lex_state = 596, .external_lex_state = 3},
  [312] = {.lex_state = 810, .external_lex_state = 3},
  [313] = {.lex_state = 514, .external_lex_state = 3},
  [314] = {.lex_state = 368},
  [315] = {.lex_state = 368},
  [316] = {.lex_state = 368},
  [317] = {.lex_state = 871, .external_lex_state = 3},
  [318] = {.lex_state = 871, .external_lex_state = 3},
  [319] = {.lex_state = 815, .external_lex_state = 3},
  [320] = {.lex_state = 489},
  [321] = {.lex_state = 810, .external_lex_state = 3},
  [322] = {.lex_state = 810, .external_lex_state = 3},
  [323] = {.lex_state = 514, .external_lex_state = 3},
  [324] = {.lex_state = 876, .external_lex_state = 3},
  [325] = {.lex_state = 824},
  [326] = {.lex_state = 831},
  [327] = {.lex_state = 527},
  [328] = {.lex_state = 881},
  [329] = {.lex_state = 876, .external_lex_state = 3},
  [330] = {.lex_state = 876, .external_lex_state = 3},
  [331] = {.lex_state = 514, .external_lex_state = 3},
  [332] = {.lex_state = 876, .external_lex_state = 3},
  [333] = {.lex_state = 850, .external_lex_state = 4},
  [334] = {.lex_state = 330},
  [335] = {.lex_state = 514, .external_lex_state = 3},
  [336] = {.lex_state = 368},
  [337] = {.lex_state = 539},
  [338] = {.lex_state = 368},
  [339] = {.lex_state = 330},
  [340] = {.lex_state = 368},
  [341] = {.lex_state = 514, .external_lex_state = 3},
  [342] = {.lex_state = 330},
  [343] = {.lex_state = 368},
  [344] = {.lex_state = 368},
  [345] = {.lex_state = 539},
  [346] = {.lex_state = 514, .external_lex_state = 3},
  [347] = {.lex_state = 539},
  [348] = {.lex_state = 368},
  [349] = {.lex_state = 539},
  [350] = {.lex_state = 514, .external_lex_state = 3},
  [351] = {.lex_state = 368},
  [352] = {.lex_state = 368},
  [353] = {.lex_state = 780},
  [354] = {.lex_state = 859, .external_lex_state = 4},
  [355] = {.lex_state = 514, .external_lex_state = 3},
  [356] = {.lex_state = 514, .external_lex_state = 3},
  [357] = {.lex_state = 867},
  [358] = {.lex_state = 514, .external_lex_state = 3},
  [359] = {.lex_state = 514, .external_lex_state = 3},
  [360] = {.lex_state = 514, .external_lex_state = 3},
  [361] = {.lex_state = 514, .external_lex_state = 3},
  [362] = {.lex_state = 514, .external_lex_state = 3},
  [363] = {.lex_state = 368},
  [364] = {.lex_state = 330},
  [365] = {.lex_state = 539},
  [366] = {.lex_state = 368},
  [367] = {.lex_state = 815, .external_lex_state = 3},
  [368] = {.lex_state = 330},
  [369] = {.lex_state = 368},
  [370] = {.lex_state = 815, .external_lex_state = 3},
  [371] = {.lex_state = 514, .external_lex_state = 3},
  [372] = {.lex_state = 876, .external_lex_state = 3},
  [373] = {.lex_state = 850, .external_lex_state = 4},
  [374] = {.lex_state = 368},
  [375] = {.lex_state = 368},
  [376] = {.lex_state = 368},
  [377] = {.lex_state = 368},
  [378] = {.lex_state = 368},
  [379] = {.lex_state = 539},
  [380] = {.lex_state = 368},
  [381] = {.lex_state = 330},
  [382] = {.lex_state = 368},
  [383] = {.lex_state = 514, .external_lex_state = 3},
  [384] = {.lex_state = 859, .external_lex_state = 4},
  [385] = {.lex_state = 867},
  [386] = {.lex_state = 514, .external_lex_state = 3},
  [387] = {.lex_state = 368},
  [388] = {.lex_state = 539},
  [389] = {.lex_state = 368},
  [390] = {.lex_state = 330},
  [391] = {.lex_state = 539},
  [392] = {.lex_state = 368},
  [393] = {.lex_state = 815, .external_lex_state = 3},
  [394] = {.lex_state = 330},
  [395] = {.lex_state = 368},
  [396] = {.lex_state = 514, .external_lex_state = 3},
  [397] = {.lex_state = 368},
  [398] = {.lex_state = 368},
  [399] = {.lex_state = 330},
  [400] = {.lex_state = 368},
  [401] = {.lex_state = 539},
  [402] = {.lex_state = 368},
  [403] = {.lex_state = 368},
  [404] = {.lex_state = 368},
  [405] = {.lex_state = 368},
  [406] = {.lex_state = 368},
  [407] = {.lex_state = 514, .external_lex_state = 3},
  [408] = {.lex_state = 368},
  [409] = {.lex_state = 368},
  [410] = {.lex_state = 368},
  [411] = {.lex_state = 330},
  [412] = {.lex_state = 368},
  [413] = {.lex_state = 368},
  [414] = {.lex_state = 514, .external_lex_state = 3},
  [415] = {.lex_state = 368},
  [416] = {.lex_state = 368},
  [417] = {.lex_state = 368},
  [418] = {.lex_state = 368},
  [419] = {.lex_state = 514, .external_lex_state = 3},
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
    [sym__abstract_pattern] = STATE(89),
    [sym__var] = STATE(90),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(91),
    [sym__symbol] = STATE(30),
    [aux_sym_function_lhs_repeat1] = STATE(92),
    [aux_sym_function_rhs_repeat1] = STATE(93),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
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
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(52),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
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
    [anon_sym_COLON_COLON] = ACTIONS(162),
    [sym_comment] = ACTIONS(52),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_1] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(164),
  },
  [31] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(95),
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
    [ts_builtin_sym_end] = ACTIONS(166),
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
    [sym__symbol] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(168),
    [sym_constructor_identifier] = ACTIONS(168),
    [sym_module_identifier] = ACTIONS(168),
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
    [sym_module_exports] = STATE(100),
    [anon_sym_where] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [34] = {
    [sym__symbol] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(176),
    [sym_module_identifier] = ACTIONS(176),
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
    [sym__identifier] = STATE(102),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_hiding] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [sym_import_specification] = STATE(106),
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_as] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [anon_sym_ccall] = ACTIONS(194),
    [anon_sym_stdcall] = ACTIONS(194),
    [anon_sym_cplusplus] = ACTIONS(194),
    [anon_sym_jvm] = ACTIONS(194),
    [anon_sym_dotnet] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [sym_calling_convention] = STATE(108),
    [anon_sym_ccall] = ACTIONS(196),
    [anon_sym_stdcall] = ACTIONS(196),
    [anon_sym_cplusplus] = ACTIONS(196),
    [anon_sym_jvm] = ACTIONS(196),
    [anon_sym_dotnet] = ACTIONS(196),
    [sym_comment] = ACTIONS(52),
  },
  [40] = {
    [sym__identifier] = STATE(110),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [41] = {
    [sym__expression] = STATE(112),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(113),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(114),
    [sym__layout_close_brace] = ACTIONS(202),
    [anon_sym_do] = ACTIONS(204),
    [sym_variable_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [42] = {
    [sym__expression] = STATE(115),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(116),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_do] = ACTIONS(204),
    [sym_variable_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [43] = {
    [sym__layout_semicolon] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [sym_class] = STATE(119),
    [sym_constructor_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [aux_sym_type_class_repeat1] = STATE(123),
    [anon_sym_where] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [sym_constructor_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [anon_sym_EQ_GT] = ACTIONS(230),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [aux_sym_type_class_repeat1] = STATE(127),
    [anon_sym_where] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_comment] = ACTIONS(52),
  },
  [50] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(130),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(236),
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
    [sym__layout_semicolon] = ACTIONS(238),
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
    [sym__identifier] = STATE(131),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [53] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(133),
    [sym__layout_semicolon] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(244),
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
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_AT] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_BANG] = ACTIONS(246),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(246),
    [anon_sym_AMP] = ACTIONS(246),
    [anon_sym_1] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_CARET] = ACTIONS(246),
    [anon_sym_TILDE] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(246),
  },
  [55] = {
    [aux_sym_fixity_repeat1] = STATE(135),
    [sym__layout_semicolon] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [sym__layout_semicolon] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [sym_comment] = ACTIONS(52),
  },
  [57] = {
    [sym__op] = STATE(136),
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
    [sym__layout_semicolon] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_1] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(164),
  },
  [59] = {
    [sym__symbol] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(262),
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
    [aux_sym_type_class_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [sym_simple_type] = STATE(142),
    [sym_constructor_identifier] = ACTIONS(272),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [sym_constructors] = STATE(146),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(148),
    [sym__layout_semicolon] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [aux_sym_type_class_repeat1] = STATE(150),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [sym_simple_type] = STATE(151),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [anon_sym_EQ] = ACTIONS(286),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [aux_sym_type_class_repeat1] = STATE(150),
    [anon_sym_EQ] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(290),
    [sym_comment] = ACTIONS(52),
  },
  [68] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(292),
  },
  [69] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [70] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(296),
  },
  [71] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(298),
  },
  [72] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(300),
  },
  [73] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(302),
  },
  [74] = {
    [sym__char_escape] = STATE(157),
    [sym__ascii] = STATE(157),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(304),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(304),
    [anon_sym_x] = ACTIONS(310),
    [anon_sym_X] = ACTIONS(310),
    [anon_sym_o] = ACTIONS(312),
    [anon_sym_O] = ACTIONS(312),
    [anon_sym_a] = ACTIONS(304),
    [anon_sym_b] = ACTIONS(304),
    [anon_sym_f] = ACTIONS(304),
    [anon_sym_n] = ACTIONS(304),
    [anon_sym_r] = ACTIONS(304),
    [anon_sym_t] = ACTIONS(304),
    [anon_sym_v] = ACTIONS(304),
    [anon_sym_NUL] = ACTIONS(314),
    [anon_sym_SOH] = ACTIONS(314),
    [anon_sym_STX] = ACTIONS(314),
    [anon_sym_ETX] = ACTIONS(314),
    [anon_sym_EOT] = ACTIONS(314),
    [anon_sym_ENQ] = ACTIONS(314),
    [anon_sym_ACK] = ACTIONS(314),
    [anon_sym_BEL] = ACTIONS(314),
    [anon_sym_BS] = ACTIONS(314),
    [anon_sym_HT] = ACTIONS(314),
    [anon_sym_LF] = ACTIONS(314),
    [anon_sym_VT] = ACTIONS(314),
    [anon_sym_FF] = ACTIONS(314),
    [anon_sym_CR] = ACTIONS(314),
    [anon_sym_SO] = ACTIONS(314),
    [anon_sym_SI] = ACTIONS(314),
    [anon_sym_DLE] = ACTIONS(314),
    [anon_sym_DC1] = ACTIONS(314),
    [anon_sym_DC2] = ACTIONS(314),
    [anon_sym_DC3] = ACTIONS(314),
    [anon_sym_DC4] = ACTIONS(314),
    [anon_sym_NAK] = ACTIONS(314),
    [anon_sym_SYN] = ACTIONS(314),
    [anon_sym_ETB] = ACTIONS(314),
    [anon_sym_CAN] = ACTIONS(314),
    [anon_sym_EM] = ACTIONS(314),
    [anon_sym_SUB] = ACTIONS(314),
    [anon_sym_ESC] = ACTIONS(314),
    [anon_sym_FS] = ACTIONS(314),
    [anon_sym_GS] = ACTIONS(314),
    [anon_sym_RS] = ACTIONS(314),
    [anon_sym_US] = ACTIONS(314),
    [anon_sym_SP] = ACTIONS(314),
    [anon_sym_DEL] = ACTIONS(314),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym__] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(316),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(316),
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
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym__space] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
    [sym__tab] = ACTIONS(316),
    [sym__vertical_tab] = ACTIONS(316),
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
  [78] = {
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
  [79] = {
    [sym__layout_semicolon] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(324),
    [sym_comment] = ACTIONS(52),
  },
  [80] = {
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
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
  [81] = {
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
  [82] = {
    [sym__char_escape] = STATE(163),
    [sym__ascii] = STATE(163),
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
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(336),
    [anon_sym_X] = ACTIONS(336),
    [anon_sym_o] = ACTIONS(338),
    [anon_sym_O] = ACTIONS(338),
    [anon_sym_a] = ACTIONS(330),
    [anon_sym_b] = ACTIONS(330),
    [anon_sym_f] = ACTIONS(330),
    [anon_sym_n] = ACTIONS(330),
    [anon_sym_r] = ACTIONS(330),
    [anon_sym_t] = ACTIONS(330),
    [anon_sym_v] = ACTIONS(330),
    [anon_sym_NUL] = ACTIONS(340),
    [anon_sym_SOH] = ACTIONS(340),
    [anon_sym_STX] = ACTIONS(340),
    [anon_sym_ETX] = ACTIONS(340),
    [anon_sym_EOT] = ACTIONS(340),
    [anon_sym_ENQ] = ACTIONS(340),
    [anon_sym_ACK] = ACTIONS(340),
    [anon_sym_BEL] = ACTIONS(340),
    [anon_sym_BS] = ACTIONS(340),
    [anon_sym_HT] = ACTIONS(340),
    [anon_sym_LF] = ACTIONS(340),
    [anon_sym_VT] = ACTIONS(340),
    [anon_sym_FF] = ACTIONS(340),
    [anon_sym_CR] = ACTIONS(340),
    [anon_sym_SO] = ACTIONS(340),
    [anon_sym_SI] = ACTIONS(340),
    [anon_sym_DLE] = ACTIONS(340),
    [anon_sym_DC1] = ACTIONS(340),
    [anon_sym_DC2] = ACTIONS(340),
    [anon_sym_DC3] = ACTIONS(340),
    [anon_sym_DC4] = ACTIONS(340),
    [anon_sym_NAK] = ACTIONS(340),
    [anon_sym_SYN] = ACTIONS(340),
    [anon_sym_ETB] = ACTIONS(340),
    [anon_sym_CAN] = ACTIONS(340),
    [anon_sym_EM] = ACTIONS(340),
    [anon_sym_SUB] = ACTIONS(340),
    [anon_sym_ESC] = ACTIONS(340),
    [anon_sym_FS] = ACTIONS(340),
    [anon_sym_GS] = ACTIONS(340),
    [anon_sym_RS] = ACTIONS(340),
    [anon_sym_US] = ACTIONS(340),
    [anon_sym_SP] = ACTIONS(340),
    [anon_sym_DEL] = ACTIONS(340),
  },
  [83] = {
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
  [84] = {
    [sym__gap] = STATE(168),
    [sym__graphic] = STATE(168),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(168),
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
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(346),
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
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_AT] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(348),
    [sym_constructor_identifier] = ACTIONS(348),
    [sym_module_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_AMP] = ACTIONS(348),
    [anon_sym_1] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(348),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [86] = {
    [sym__identifier] = STATE(171),
    [aux_sym_function_rhs_repeat1] = STATE(172),
    [sym__layout_semicolon] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(352),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_constructor_identifier] = ACTIONS(356),
    [sym_module_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [sym__layout_semicolon] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(360),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
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
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(362),
    [sym_module_identifier] = ACTIONS(362),
    [sym_comment] = ACTIONS(40),
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
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
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
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(366),
    [anon_sym_AT] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
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
  [92] = {
    [sym__abstract_pattern] = STATE(174),
    [sym__var] = STATE(90),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(91),
    [sym__symbol] = STATE(30),
    [aux_sym_function_rhs_repeat1] = STATE(93),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
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
  [93] = {
    [sym__identifier] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
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
  [94] = {
    [sym__type] = STATE(178),
    [sym_function_type] = STATE(179),
    [sym_context] = STATE(180),
    [sym_class] = STATE(47),
    [sym_simple_type] = STATE(181),
    [aux_sym_function_type_repeat1] = STATE(182),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(52),
  },
  [95] = {
    [sym__layout_semicolon] = ACTIONS(374),
    [anon_sym_SEMI] = ACTIONS(376),
    [sym_comment] = ACTIONS(52),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_BANG] = ACTIONS(176),
    [sym_variable_identifier] = ACTIONS(176),
    [sym_constructor_identifier] = ACTIONS(176),
    [sym_module_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(176),
    [anon_sym_1] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(176),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_BANG] = ACTIONS(378),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(378),
    [anon_sym_AMP] = ACTIONS(378),
    [anon_sym_1] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(378),
    [anon_sym_CARET] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_BSLASH] = ACTIONS(378),
  },
  [98] = {
    [sym_declarations] = STATE(186),
    [sym__layout_open_brace] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [99] = {
    [sym_export] = STATE(188),
    [sym__identifier] = STATE(189),
    [anon_sym_RPAREN] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [100] = {
    [anon_sym_where] = ACTIONS(386),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(388),
    [sym_variable_identifier] = ACTIONS(388),
    [sym_constructor_identifier] = ACTIONS(388),
    [sym_module_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_1] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_LT] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_QMARK] = ACTIONS(388),
    [anon_sym_CARET] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_BSLASH] = ACTIONS(388),
  },
  [102] = {
    [sym_import_specification] = STATE(192),
    [sym__layout_semicolon] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_as] = ACTIONS(394),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [103] = {
    [sym__identifier] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [104] = {
    [sym__identifier] = STATE(195),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(52),
  },
  [106] = {
    [sym__layout_semicolon] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
    [anon_sym_unsafe] = ACTIONS(400),
    [anon_sym_safe] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_constructor_identifier] = ACTIONS(402),
    [sym_module_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(400),
  },
  [108] = {
    [sym_safety] = STATE(199),
    [sym_type_signature] = STATE(200),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(201),
    [anon_sym_unsafe] = ACTIONS(404),
    [anon_sym_safe] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(406),
  },
  [109] = {
    [sym__layout_semicolon] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_comment] = ACTIONS(52),
  },
  [110] = {
    [aux_sym_export_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(52),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [112] = {
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [sym__layout_close_brace] = ACTIONS(424),
    [anon_sym_do] = ACTIONS(426),
    [sym_variable_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [sym__integer_literal] = ACTIONS(426),
    [sym__octal_literal] = ACTIONS(426),
    [sym__hexidecimal_literal] = ACTIONS(426),
  },
  [114] = {
    [sym__expression] = STATE(112),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(207),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_close_brace] = ACTIONS(430),
    [anon_sym_do] = ACTIONS(204),
    [sym_variable_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_do] = ACTIONS(426),
    [sym_variable_identifier] = ACTIONS(428),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [sym__integer_literal] = ACTIONS(426),
    [sym__octal_literal] = ACTIONS(426),
    [sym__hexidecimal_literal] = ACTIONS(426),
  },
  [117] = {
    [sym__expression] = STATE(115),
    [sym_do_expression] = STATE(27),
    [sym__statement] = STATE(209),
    [sym__literal] = STATE(27),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_do] = ACTIONS(204),
    [sym_variable_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [119] = {
    [aux_sym_context_repeat1] = STATE(213),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [120] = {
    [sym_general_declarations] = STATE(216),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [121] = {
    [aux_sym_type_class_repeat1] = STATE(217),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [anon_sym_where] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [anon_sym_where] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [124] = {
    [aux_sym_type_class_repeat1] = STATE(221),
    [anon_sym_where] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [125] = {
    [sym_variable_identifier] = ACTIONS(460),
    [sym_constructor_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [sym_general_declarations] = STATE(222),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [anon_sym_where] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [128] = {
    [aux_sym_type_class_repeat1] = STATE(224),
    [anon_sym_where] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [129] = {
    [sym__symbol] = STATE(58),
    [aux_sym_variable_symbol_repeat1] = STATE(226),
    [sym__layout_semicolon] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
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
  [130] = {
    [sym__symbol] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(176),
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
  [131] = {
    [anon_sym_BQUOTE] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [sym__layout_semicolon] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(478),
    [anon_sym_COMMA] = ACTIONS(478),
    [sym_comment] = ACTIONS(52),
  },
  [133] = {
    [sym__symbol] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(470),
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
  [134] = {
    [sym__op] = STATE(229),
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
  [135] = {
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [136] = {
    [aux_sym_fixity_repeat1] = STATE(231),
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(52),
  },
  [137] = {
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_EQ] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_DASH] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_BANG] = ACTIONS(378),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(378),
    [anon_sym_AMP] = ACTIONS(378),
    [anon_sym_1] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_SLASH] = ACTIONS(378),
    [anon_sym_LT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_QMARK] = ACTIONS(378),
    [anon_sym_CARET] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_BSLASH] = ACTIONS(378),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(494),
    [anon_sym_EQ] = ACTIONS(494),
    [anon_sym_deriving] = ACTIONS(494),
    [sym_variable_identifier] = ACTIONS(496),
    [sym_constructor_identifier] = ACTIONS(498),
    [sym_comment] = ACTIONS(52),
  },
  [141] = {
    [aux_sym_type_class_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(500),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [sym_constructors] = STATE(235),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(236),
    [sym__layout_semicolon] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_EQ] = ACTIONS(506),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [143] = {
    [sym_constructors] = STATE(235),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(236),
    [sym__layout_semicolon] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [sym__identifier] = STATE(238),
    [anon_sym_LPAREN] = ACTIONS(508),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [sym_strict] = STATE(242),
    [sym__identifier] = STATE(242),
    [sym_fields] = STATE(243),
    [aux_sym_constructor_repeat1] = STATE(244),
    [sym__layout_semicolon] = ACTIONS(510),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_LBRACE] = ACTIONS(514),
    [anon_sym_PIPE] = ACTIONS(512),
    [anon_sym_deriving] = ACTIONS(512),
    [anon_sym_BANG] = ACTIONS(516),
    [sym_variable_identifier] = ACTIONS(518),
    [sym_constructor_identifier] = ACTIONS(518),
    [sym_module_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym_deriving] = STATE(236),
    [sym__layout_semicolon] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [aux_sym_constructors_repeat1] = STATE(246),
    [sym__layout_semicolon] = ACTIONS(520),
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_deriving] = ACTIONS(522),
    [sym_comment] = ACTIONS(52),
  },
  [148] = {
    [sym__layout_semicolon] = ACTIONS(502),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [anon_sym_EQ] = ACTIONS(494),
    [sym_variable_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(528),
    [sym_comment] = ACTIONS(52),
  },
  [152] = {
    [sym_new_constructor] = STATE(250),
    [sym_constructor_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [154] = {
    [sym__type] = STATE(252),
    [sym_function_type] = STATE(179),
    [sym_simple_type] = STATE(181),
    [aux_sym_function_type_repeat1] = STATE(182),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(52),
  },
  [155] = {
    [sym__layout_semicolon] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(536),
    [sym_comment] = ACTIONS(52),
  },
  [156] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(538),
  },
  [157] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(540),
  },
  [158] = {
    [sym__cntrl] = STATE(254),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym__] = ACTIONS(542),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(542),
    [anon_sym_BSLASH] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(542),
  },
  [159] = {
    [aux_sym__escape_repeat1] = STATE(256),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(544),
  },
  [160] = {
    [aux_sym__escape_repeat2] = STATE(258),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(546),
  },
  [161] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(548),
  },
  [162] = {
    [anon_sym_SEMI] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_LPAREN] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_EQ] = ACTIONS(550),
    [anon_sym_AT] = ACTIONS(550),
    [anon_sym_BQUOTE] = ACTIONS(550),
    [anon_sym_DASH] = ACTIONS(550),
    [anon_sym__] = ACTIONS(550),
    [anon_sym_COLON] = ACTIONS(550),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_BANG] = ACTIONS(550),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(550),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(550),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(550),
    [sym__ascii_large] = ACTIONS(550),
    [anon_sym_POUND] = ACTIONS(550),
    [anon_sym_DOLLAR] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_AMP] = ACTIONS(550),
    [anon_sym_1] = ACTIONS(550),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_SLASH] = ACTIONS(550),
    [anon_sym_LT] = ACTIONS(550),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_QMARK] = ACTIONS(550),
    [anon_sym_CARET] = ACTIONS(550),
    [anon_sym_TILDE] = ACTIONS(550),
    [anon_sym_BSLASH] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(550),
    [anon_sym_RBRACK] = ACTIONS(550),
    [sym__space] = ACTIONS(550),
    [sym__newline] = ACTIONS(550),
    [sym__tab] = ACTIONS(550),
    [sym__vertical_tab] = ACTIONS(550),
  },
  [163] = {
    [anon_sym_SEMI] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_RBRACE] = ACTIONS(552),
    [anon_sym_LPAREN] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_EQ] = ACTIONS(552),
    [anon_sym_AT] = ACTIONS(552),
    [anon_sym_BQUOTE] = ACTIONS(552),
    [anon_sym_DASH] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [anon_sym_PIPE] = ACTIONS(552),
    [anon_sym_BANG] = ACTIONS(552),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(552),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(552),
    [sym__ascii_large] = ACTIONS(552),
    [anon_sym_POUND] = ACTIONS(552),
    [anon_sym_DOLLAR] = ACTIONS(552),
    [anon_sym_PERCENT] = ACTIONS(552),
    [anon_sym_AMP] = ACTIONS(552),
    [anon_sym_1] = ACTIONS(552),
    [anon_sym_PLUS] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_SLASH] = ACTIONS(552),
    [anon_sym_LT] = ACTIONS(552),
    [anon_sym_GT] = ACTIONS(552),
    [anon_sym_QMARK] = ACTIONS(552),
    [anon_sym_CARET] = ACTIONS(552),
    [anon_sym_TILDE] = ACTIONS(552),
    [anon_sym_BSLASH] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym__space] = ACTIONS(552),
    [sym__newline] = ACTIONS(552),
    [sym__tab] = ACTIONS(552),
    [sym__vertical_tab] = ACTIONS(552),
  },
  [164] = {
    [sym__cntrl] = STATE(260),
    [anon_sym_AT] = ACTIONS(554),
    [anon_sym__] = ACTIONS(554),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(554),
    [anon_sym_CARET] = ACTIONS(554),
    [anon_sym_BSLASH] = ACTIONS(554),
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
  },
  [165] = {
    [aux_sym__escape_repeat1] = STATE(262),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(556),
  },
  [166] = {
    [aux_sym__escape_repeat2] = STATE(264),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(558),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(560),
    [anon_sym_LBRACE] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [anon_sym_LPAREN] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(560),
    [anon_sym_EQ] = ACTIONS(560),
    [anon_sym_AT] = ACTIONS(560),
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
    [anon_sym_SEMI] = ACTIONS(562),
    [anon_sym_LBRACE] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(562),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_AT] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym__] = ACTIONS(562),
    [anon_sym_COLON] = ACTIONS(562),
    [anon_sym_PIPE] = ACTIONS(562),
    [anon_sym_BANG] = ACTIONS(562),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(562),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(562),
    [sym__ascii_large] = ACTIONS(562),
    [anon_sym_POUND] = ACTIONS(562),
    [anon_sym_DOLLAR] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(562),
    [anon_sym_AMP] = ACTIONS(562),
    [anon_sym_1] = ACTIONS(562),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_LT] = ACTIONS(562),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_CARET] = ACTIONS(562),
    [anon_sym_TILDE] = ACTIONS(562),
    [anon_sym_BSLASH] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(562),
    [sym__space] = ACTIONS(562),
    [sym__newline] = ACTIONS(562),
    [sym__tab] = ACTIONS(562),
    [sym__vertical_tab] = ACTIONS(562),
  },
  [169] = {
    [sym__layout_semicolon] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(566),
    [sym_comment] = ACTIONS(52),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(570),
    [sym_constructor_identifier] = ACTIONS(366),
    [sym_module_identifier] = ACTIONS(366),
    [sym_comment] = ACTIONS(52),
  },
  [172] = {
    [sym__identifier] = STATE(265),
    [sym__layout_semicolon] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_constructor_identifier] = ACTIONS(356),
    [sym_module_identifier] = ACTIONS(356),
    [sym_comment] = ACTIONS(52),
  },
  [173] = {
    [sym__abstract_pattern] = STATE(266),
    [sym__var] = STATE(90),
    [sym_variable_symbol] = STATE(28),
    [sym__identifier] = STATE(91),
    [sym__symbol] = STATE(30),
    [aux_sym_function_rhs_repeat1] = STATE(93),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(12),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(16),
    [anon_sym_PIPE] = ACTIONS(16),
    [anon_sym_BANG] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(158),
    [sym_constructor_identifier] = ACTIONS(158),
    [sym_module_identifier] = ACTIONS(158),
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
  [174] = {
    [anon_sym_LPAREN] = ACTIONS(576),
    [anon_sym_EQ] = ACTIONS(576),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_BANG] = ACTIONS(576),
    [sym_variable_identifier] = ACTIONS(576),
    [sym_constructor_identifier] = ACTIONS(576),
    [sym_module_identifier] = ACTIONS(576),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(576),
    [anon_sym_DOLLAR] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(576),
    [anon_sym_AMP] = ACTIONS(576),
    [anon_sym_1] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DOT] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(576),
    [anon_sym_GT] = ACTIONS(576),
    [anon_sym_QMARK] = ACTIONS(576),
    [anon_sym_CARET] = ACTIONS(576),
    [anon_sym_TILDE] = ACTIONS(576),
    [anon_sym_BSLASH] = ACTIONS(576),
  },
  [175] = {
    [anon_sym_LPAREN] = ACTIONS(578),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(578),
    [anon_sym_DASH] = ACTIONS(578),
    [anon_sym_COLON] = ACTIONS(578),
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_BANG] = ACTIONS(578),
    [sym_variable_identifier] = ACTIONS(578),
    [sym_constructor_identifier] = ACTIONS(578),
    [sym_module_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(578),
    [anon_sym_DOLLAR] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(578),
    [anon_sym_1] = ACTIONS(578),
    [anon_sym_PLUS] = ACTIONS(578),
    [anon_sym_DOT] = ACTIONS(578),
    [anon_sym_SLASH] = ACTIONS(578),
    [anon_sym_LT] = ACTIONS(578),
    [anon_sym_GT] = ACTIONS(578),
    [anon_sym_QMARK] = ACTIONS(578),
    [anon_sym_CARET] = ACTIONS(578),
    [anon_sym_TILDE] = ACTIONS(578),
    [anon_sym_BSLASH] = ACTIONS(578),
  },
  [176] = {
    [anon_sym_DASH_GT] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_comment] = ACTIONS(52),
  },
  [177] = {
    [aux_sym_type_class_repeat1] = STATE(268),
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_DASH_GT] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(582),
    [sym_comment] = ACTIONS(52),
  },
  [178] = {
    [sym__layout_semicolon] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [179] = {
    [sym__layout_semicolon] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
  },
  [180] = {
    [sym__type] = STATE(269),
    [sym_function_type] = STATE(179),
    [sym_simple_type] = STATE(181),
    [aux_sym_function_type_repeat1] = STATE(182),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(590),
    [anon_sym_DASH_GT] = ACTIONS(592),
    [sym_comment] = ACTIONS(52),
  },
  [182] = {
    [anon_sym_DASH_GT] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(596),
    [anon_sym_import] = ACTIONS(596),
    [anon_sym_EQ] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_foreign] = ACTIONS(596),
    [anon_sym_default] = ACTIONS(596),
    [anon_sym_do] = ACTIONS(596),
    [anon_sym_class] = ACTIONS(596),
    [anon_sym_instance] = ACTIONS(596),
    [anon_sym_infixl] = ACTIONS(596),
    [anon_sym_infixr] = ACTIONS(596),
    [anon_sym_infix] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(596),
    [anon_sym_data] = ACTIONS(596),
    [anon_sym_PIPE] = ACTIONS(596),
    [anon_sym_newtype] = ACTIONS(596),
    [anon_sym_BANG] = ACTIONS(596),
    [anon_sym_type] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(596),
    [sym_constructor_identifier] = ACTIONS(596),
    [sym_module_identifier] = ACTIONS(596),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_POUND] = ACTIONS(596),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(596),
    [anon_sym_1] = ACTIONS(596),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_LT] = ACTIONS(596),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(596),
    [anon_sym_CARET] = ACTIONS(596),
    [anon_sym_TILDE] = ACTIONS(596),
    [anon_sym_BSLASH] = ACTIONS(596),
    [sym__integer_literal] = ACTIONS(596),
    [sym__octal_literal] = ACTIONS(596),
    [sym__hexidecimal_literal] = ACTIONS(596),
  },
  [184] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(273),
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
    [aux_sym_module_repeat1] = STATE(274),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(598),
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
  [185] = {
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
    [aux_sym_module_repeat1] = STATE(275),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [anon_sym_RBRACE] = ACTIONS(600),
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
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(602),
    [sym_comment] = ACTIONS(52),
  },
  [187] = {
    [anon_sym_where] = ACTIONS(604),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [aux_sym_module_exports_repeat1] = STATE(278),
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [anon_sym_LPAREN] = ACTIONS(610),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [sym_declarations] = STATE(280),
    [sym__layout_open_brace] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [sym__identifier] = STATE(281),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [192] = {
    [sym__layout_semicolon] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(616),
    [sym_comment] = ACTIONS(52),
  },
  [193] = {
    [sym__layout_semicolon] = ACTIONS(618),
    [anon_sym_SEMI] = ACTIONS(620),
    [sym_comment] = ACTIONS(52),
  },
  [194] = {
    [aux_sym_import_specification_repeat1] = STATE(285),
    [anon_sym_LPAREN] = ACTIONS(622),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [sym_import_specification] = STATE(286),
    [sym__layout_semicolon] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [sym__identifier] = STATE(287),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [sym_variable_identifier] = ACTIONS(628),
    [sym_constructor_identifier] = ACTIONS(630),
    [sym_module_identifier] = ACTIONS(630),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(628),
  },
  [198] = {
    [sym__gap] = STATE(78),
    [sym__graphic] = STATE(78),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(78),
    [aux_sym_string_repeat1] = STATE(289),
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
    [anon_sym_DQUOTE] = ACTIONS(632),
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
  [199] = {
    [sym_type_signature] = STATE(290),
    [sym__identifier] = STATE(29),
    [sym_string] = STATE(291),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(406),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [sym_type_signature] = STATE(290),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [202] = {
    [sym__identifier] = STATE(292),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [203] = {
    [sym__layout_semicolon] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [sym__layout_close_brace] = ACTIONS(646),
    [anon_sym_do] = ACTIONS(648),
    [sym_variable_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym__integer_literal] = ACTIONS(648),
    [sym__octal_literal] = ACTIONS(648),
    [sym__hexidecimal_literal] = ACTIONS(648),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(654),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
    [sym__layout_close_brace] = ACTIONS(656),
    [anon_sym_do] = ACTIONS(658),
    [sym_variable_identifier] = ACTIONS(660),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(660),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [sym__integer_literal] = ACTIONS(658),
    [sym__octal_literal] = ACTIONS(658),
    [sym__hexidecimal_literal] = ACTIONS(658),
  },
  [208] = {
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_do] = ACTIONS(648),
    [sym_variable_identifier] = ACTIONS(650),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym__integer_literal] = ACTIONS(648),
    [sym__octal_literal] = ACTIONS(648),
    [sym__hexidecimal_literal] = ACTIONS(648),
  },
  [209] = {
    [anon_sym_RBRACE] = ACTIONS(658),
    [anon_sym_do] = ACTIONS(658),
    [sym_variable_identifier] = ACTIONS(660),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(660),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [sym__integer_literal] = ACTIONS(658),
    [sym__octal_literal] = ACTIONS(658),
    [sym__hexidecimal_literal] = ACTIONS(658),
  },
  [210] = {
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [211] = {
    [sym_class] = STATE(295),
    [sym_constructor_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
  },
  [212] = {
    [anon_sym_EQ_GT] = ACTIONS(662),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(666),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(301),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_general_declarations_repeat1] = STATE(302),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(668),
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
    [sym_variable_identifier] = ACTIONS(670),
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
  [215] = {
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
    [anon_sym_RBRACE] = ACTIONS(672),
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
    [sym_variable_identifier] = ACTIONS(670),
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
  [216] = {
    [sym__layout_semicolon] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(676),
    [sym_comment] = ACTIONS(52),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(678),
    [sym_variable_identifier] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [218] = {
    [sym_general_declarations] = STATE(306),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [219] = {
    [anon_sym_where] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(682),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [anon_sym_where] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [221] = {
    [anon_sym_where] = ACTIONS(684),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(686),
    [anon_sym_SEMI] = ACTIONS(688),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym_general_declarations] = STATE(308),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [224] = {
    [anon_sym_where] = ACTIONS(690),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [225] = {
    [sym__layout_semicolon] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(694),
    [anon_sym_COMMA] = ACTIONS(694),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [sym__symbol] = STATE(138),
    [sym__layout_semicolon] = ACTIONS(692),
    [anon_sym_SEMI] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(696),
    [anon_sym_RPAREN] = ACTIONS(698),
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
  [227] = {
    [sym__layout_semicolon] = ACTIONS(700),
    [anon_sym_SEMI] = ACTIONS(702),
    [anon_sym_COMMA] = ACTIONS(702),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [sym__layout_semicolon] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(706),
    [anon_sym_COMMA] = ACTIONS(706),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [sym__op] = STATE(311),
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
  [231] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [232] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_deriving] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(682),
    [sym_constructor_identifier] = ACTIONS(682),
    [sym_comment] = ACTIONS(52),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym_constructors] = STATE(312),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(313),
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [sym_deriving] = STATE(313),
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(718),
    [anon_sym_SEMI] = ACTIONS(720),
    [sym_comment] = ACTIONS(52),
  },
  [237] = {
    [sym__identifier] = STATE(314),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [sym__layout_semicolon] = ACTIONS(722),
    [anon_sym_SEMI] = ACTIONS(724),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym_field] = STATE(316),
    [sym_variable_identifier] = ACTIONS(726),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [sym__identifier] = STATE(317),
    [sym_variable_identifier] = ACTIONS(728),
    [sym_constructor_identifier] = ACTIONS(518),
    [sym_module_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(98),
    [sym_module_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [sym__layout_semicolon] = ACTIONS(730),
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_PIPE] = ACTIONS(732),
    [anon_sym_deriving] = ACTIONS(732),
    [anon_sym_BANG] = ACTIONS(732),
    [sym_variable_identifier] = ACTIONS(734),
    [sym_constructor_identifier] = ACTIONS(734),
    [sym_module_identifier] = ACTIONS(734),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(738),
    [anon_sym_PIPE] = ACTIONS(738),
    [anon_sym_deriving] = ACTIONS(738),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [sym_strict] = STATE(318),
    [sym__identifier] = STATE(318),
    [sym__layout_semicolon] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(738),
    [anon_sym_PIPE] = ACTIONS(738),
    [anon_sym_deriving] = ACTIONS(738),
    [anon_sym_BANG] = ACTIONS(516),
    [sym_variable_identifier] = ACTIONS(518),
    [sym_constructor_identifier] = ACTIONS(518),
    [sym_module_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [sym_constructor] = STATE(319),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_PIPE] = ACTIONS(744),
    [anon_sym_deriving] = ACTIONS(742),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
  },
  [248] = {
    [sym_new_constructor] = STATE(321),
    [sym_constructor_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [249] = {
    [sym__identifier] = STATE(322),
    [sym_fields] = STATE(322),
    [anon_sym_LBRACE] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [250] = {
    [sym_deriving] = STATE(323),
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(748),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [251] = {
    [aux_sym_type_class_repeat1] = STATE(268),
    [sym__layout_semicolon] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_DASH_GT] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(750),
    [sym_comment] = ACTIONS(52),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(752),
    [anon_sym_SEMI] = ACTIONS(754),
    [sym_comment] = ACTIONS(52),
  },
  [253] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(756),
  },
  [254] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(758),
  },
  [255] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(760),
  },
  [256] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(764),
  },
  [257] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(766),
  },
  [258] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(768),
  },
  [259] = {
    [anon_sym_SEMI] = ACTIONS(770),
    [anon_sym_LBRACE] = ACTIONS(770),
    [anon_sym_RBRACE] = ACTIONS(770),
    [anon_sym_LPAREN] = ACTIONS(770),
    [anon_sym_RPAREN] = ACTIONS(770),
    [anon_sym_EQ] = ACTIONS(770),
    [anon_sym_AT] = ACTIONS(770),
    [anon_sym_BQUOTE] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(770),
    [anon_sym__] = ACTIONS(770),
    [anon_sym_COLON] = ACTIONS(770),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_BANG] = ACTIONS(770),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(770),
    [anon_sym_DQUOTE] = ACTIONS(770),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(770),
    [sym__ascii_large] = ACTIONS(770),
    [anon_sym_POUND] = ACTIONS(770),
    [anon_sym_DOLLAR] = ACTIONS(770),
    [anon_sym_PERCENT] = ACTIONS(770),
    [anon_sym_AMP] = ACTIONS(770),
    [anon_sym_1] = ACTIONS(770),
    [anon_sym_PLUS] = ACTIONS(770),
    [anon_sym_DOT] = ACTIONS(770),
    [anon_sym_SLASH] = ACTIONS(770),
    [anon_sym_LT] = ACTIONS(770),
    [anon_sym_GT] = ACTIONS(770),
    [anon_sym_QMARK] = ACTIONS(770),
    [anon_sym_CARET] = ACTIONS(770),
    [anon_sym_TILDE] = ACTIONS(770),
    [anon_sym_BSLASH] = ACTIONS(770),
    [anon_sym_LBRACK] = ACTIONS(770),
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym__space] = ACTIONS(770),
    [sym__newline] = ACTIONS(770),
    [sym__tab] = ACTIONS(770),
    [sym__vertical_tab] = ACTIONS(770),
  },
  [260] = {
    [anon_sym_SEMI] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_LPAREN] = ACTIONS(772),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_EQ] = ACTIONS(772),
    [anon_sym_AT] = ACTIONS(772),
    [anon_sym_BQUOTE] = ACTIONS(772),
    [anon_sym_DASH] = ACTIONS(772),
    [anon_sym__] = ACTIONS(772),
    [anon_sym_COLON] = ACTIONS(772),
    [anon_sym_PIPE] = ACTIONS(772),
    [anon_sym_BANG] = ACTIONS(772),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(772),
    [anon_sym_DQUOTE] = ACTIONS(772),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(772),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(772),
    [sym__ascii_large] = ACTIONS(772),
    [anon_sym_POUND] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(772),
    [anon_sym_PERCENT] = ACTIONS(772),
    [anon_sym_AMP] = ACTIONS(772),
    [anon_sym_1] = ACTIONS(772),
    [anon_sym_PLUS] = ACTIONS(772),
    [anon_sym_DOT] = ACTIONS(772),
    [anon_sym_SLASH] = ACTIONS(772),
    [anon_sym_LT] = ACTIONS(772),
    [anon_sym_GT] = ACTIONS(772),
    [anon_sym_QMARK] = ACTIONS(772),
    [anon_sym_CARET] = ACTIONS(772),
    [anon_sym_TILDE] = ACTIONS(772),
    [anon_sym_BSLASH] = ACTIONS(772),
    [anon_sym_LBRACK] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(772),
    [sym__space] = ACTIONS(772),
    [sym__newline] = ACTIONS(772),
    [sym__tab] = ACTIONS(772),
    [sym__vertical_tab] = ACTIONS(772),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(774),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(778),
  },
  [263] = {
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(780),
  },
  [264] = {
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(782),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(784),
    [anon_sym_SEMI] = ACTIONS(786),
    [sym_variable_identifier] = ACTIONS(786),
    [sym_constructor_identifier] = ACTIONS(578),
    [sym_module_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(52),
  },
  [266] = {
    [anon_sym_LPAREN] = ACTIONS(788),
    [anon_sym_EQ] = ACTIONS(788),
    [anon_sym_AT] = ACTIONS(788),
    [anon_sym_DASH] = ACTIONS(788),
    [anon_sym_COLON] = ACTIONS(788),
    [anon_sym_PIPE] = ACTIONS(788),
    [anon_sym_BANG] = ACTIONS(788),
    [sym_variable_identifier] = ACTIONS(788),
    [sym_constructor_identifier] = ACTIONS(788),
    [sym_module_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(40),
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
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(494),
    [anon_sym_DASH_GT] = ACTIONS(494),
    [sym_variable_identifier] = ACTIONS(790),
    [sym_comment] = ACTIONS(52),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(792),
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(52),
  },
  [270] = {
    [sym__type] = STATE(331),
    [sym_function_type] = STATE(179),
    [sym_simple_type] = STATE(181),
    [aux_sym_function_type_repeat1] = STATE(332),
    [sym_variable_identifier] = ACTIONS(796),
    [sym_constructor_identifier] = ACTIONS(532),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [anon_sym_DASH_GT] = ACTIONS(798),
    [sym_variable_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [ts_builtin_sym_end] = ACTIONS(800),
    [sym_comment] = ACTIONS(52),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(802),
    [anon_sym_SEMI] = ACTIONS(804),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(335),
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
    [sym__layout_close_brace] = ACTIONS(806),
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
  [275] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(95),
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
    [anon_sym_RBRACE] = ACTIONS(808),
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
  [276] = {
    [sym_export] = STATE(336),
    [sym__identifier] = STATE(189),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [277] = {
    [anon_sym_where] = ACTIONS(810),
    [sym_comment] = ACTIONS(52),
  },
  [278] = {
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(814),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [sym__identifier] = STATE(340),
    [anon_sym_DOT_DOT] = ACTIONS(816),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [ts_builtin_sym_end] = ACTIONS(818),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [sym_import_specification] = STATE(341),
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [sym__identifier] = STATE(343),
    [anon_sym_DOT_DOT] = ACTIONS(824),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [sym__identifier] = STATE(344),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(826),
    [anon_sym_SEMI] = ACTIONS(828),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(832),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [sym_comment] = ACTIONS(52),
  },
  [287] = {
    [aux_sym_import_specification_repeat1] = STATE(348),
    [anon_sym_LPAREN] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(832),
    [sym_comment] = ACTIONS(52),
  },
  [288] = {
    [sym_variable_identifier] = ACTIONS(324),
    [sym_constructor_identifier] = ACTIONS(836),
    [sym_module_identifier] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [sym__gap] = STATE(168),
    [sym__graphic] = STATE(168),
    [sym__small] = STATE(80),
    [sym__large] = STATE(80),
    [sym__symbol] = STATE(80),
    [sym__special] = STATE(80),
    [sym__escape] = STATE(168),
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
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(838),
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
  [290] = {
    [sym__layout_semicolon] = ACTIONS(840),
    [anon_sym_SEMI] = ACTIONS(842),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [sym_type_signature] = STATE(350),
    [sym__identifier] = STATE(29),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym__identifier] = STATE(351),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [sym__layout_semicolon] = ACTIONS(846),
    [anon_sym_SEMI] = ACTIONS(848),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [sym_variable_identifier] = ACTIONS(852),
    [sym_constructor_identifier] = ACTIONS(854),
    [sym_comment] = ACTIONS(52),
  },
  [297] = {
    [sym_class] = STATE(352),
    [sym_constructor_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [anon_sym_EQ_GT] = ACTIONS(856),
    [sym_comment] = ACTIONS(52),
  },
  [299] = {
    [sym__layout_semicolon] = ACTIONS(858),
    [anon_sym_SEMI] = ACTIONS(860),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
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
  [301] = {
    [sym__layout_semicolon] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(864),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
    [sym_function_binding] = STATE(24),
    [sym_function_lhs] = STATE(25),
    [sym__var] = STATE(26),
    [sym__general_declaration] = STATE(356),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(28),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(29),
    [sym__symbol] = STATE(30),
    [aux_sym_variable_symbol_repeat1] = STATE(32),
    [sym__layout_close_brace] = ACTIONS(866),
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
    [sym_variable_identifier] = ACTIONS(670),
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
  [303] = {
    [sym__layout_semicolon] = ACTIONS(868),
    [anon_sym_SEMI] = ACTIONS(870),
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
    [anon_sym_RBRACE] = ACTIONS(872),
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
    [sym_variable_identifier] = ACTIONS(670),
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
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_EQ_GT] = ACTIONS(874),
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [sym__layout_semicolon] = ACTIONS(876),
    [anon_sym_SEMI] = ACTIONS(878),
    [sym_comment] = ACTIONS(52),
  },
  [307] = {
    [sym_general_declarations] = STATE(359),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(880),
    [anon_sym_SEMI] = ACTIONS(882),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [sym_general_declarations] = STATE(360),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(886),
    [anon_sym_COMMA] = ACTIONS(886),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(888),
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(890),
    [sym_comment] = ACTIONS(52),
  },
  [312] = {
    [sym_deriving] = STATE(361),
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [313] = {
    [sym__layout_semicolon] = ACTIONS(892),
    [anon_sym_SEMI] = ACTIONS(894),
    [sym_comment] = ACTIONS(52),
  },
  [314] = {
    [aux_sym_export_repeat1] = STATE(363),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(896),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [aux_sym_field_repeat1] = STATE(366),
    [anon_sym_COMMA] = ACTIONS(898),
    [anon_sym_COLON_COLON] = ACTIONS(900),
    [sym_comment] = ACTIONS(52),
  },
  [316] = {
    [aux_sym_fields_repeat1] = STATE(369),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(904),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(908),
    [anon_sym_PIPE] = ACTIONS(908),
    [anon_sym_deriving] = ACTIONS(908),
    [anon_sym_BANG] = ACTIONS(908),
    [sym_variable_identifier] = ACTIONS(910),
    [sym_constructor_identifier] = ACTIONS(910),
    [sym_module_identifier] = ACTIONS(910),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
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
  [319] = {
    [sym__layout_semicolon] = ACTIONS(918),
    [anon_sym_SEMI] = ACTIONS(920),
    [anon_sym_PIPE] = ACTIONS(920),
    [anon_sym_deriving] = ACTIONS(920),
    [sym_comment] = ACTIONS(52),
  },
  [320] = {
    [sym_constructor] = STATE(370),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [321] = {
    [sym_deriving] = STATE(371),
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [anon_sym_deriving] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [322] = {
    [sym__layout_semicolon] = ACTIONS(926),
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_deriving] = ACTIONS(928),
    [sym_comment] = ACTIONS(52),
  },
  [323] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(924),
    [sym_comment] = ACTIONS(52),
  },
  [324] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [325] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(930),
  },
  [326] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(932),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(932),
  },
  [327] = {
    [anon_sym_SEMI] = ACTIONS(934),
    [anon_sym_LBRACE] = ACTIONS(934),
    [anon_sym_RBRACE] = ACTIONS(934),
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(934),
    [anon_sym_EQ] = ACTIONS(934),
    [anon_sym_AT] = ACTIONS(934),
    [anon_sym_BQUOTE] = ACTIONS(934),
    [anon_sym_DASH] = ACTIONS(934),
    [anon_sym__] = ACTIONS(934),
    [anon_sym_COLON] = ACTIONS(934),
    [anon_sym_PIPE] = ACTIONS(934),
    [anon_sym_BANG] = ACTIONS(934),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(934),
    [anon_sym_DQUOTE] = ACTIONS(934),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(934),
    [sym__ascii_large] = ACTIONS(934),
    [anon_sym_POUND] = ACTIONS(934),
    [anon_sym_DOLLAR] = ACTIONS(934),
    [anon_sym_PERCENT] = ACTIONS(934),
    [anon_sym_AMP] = ACTIONS(934),
    [anon_sym_1] = ACTIONS(934),
    [anon_sym_PLUS] = ACTIONS(934),
    [anon_sym_DOT] = ACTIONS(934),
    [anon_sym_SLASH] = ACTIONS(934),
    [anon_sym_LT] = ACTIONS(934),
    [anon_sym_GT] = ACTIONS(934),
    [anon_sym_QMARK] = ACTIONS(934),
    [anon_sym_CARET] = ACTIONS(934),
    [anon_sym_TILDE] = ACTIONS(934),
    [anon_sym_BSLASH] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_RBRACK] = ACTIONS(934),
    [sym__space] = ACTIONS(934),
    [sym__newline] = ACTIONS(934),
    [sym__tab] = ACTIONS(934),
    [sym__vertical_tab] = ACTIONS(934),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(934),
  },
  [328] = {
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_RBRACE] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(936),
    [anon_sym_RPAREN] = ACTIONS(936),
    [anon_sym_EQ] = ACTIONS(936),
    [anon_sym_AT] = ACTIONS(936),
    [anon_sym_BQUOTE] = ACTIONS(936),
    [anon_sym_DASH] = ACTIONS(936),
    [anon_sym__] = ACTIONS(936),
    [anon_sym_COLON] = ACTIONS(936),
    [anon_sym_PIPE] = ACTIONS(936),
    [anon_sym_BANG] = ACTIONS(936),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [anon_sym_DQUOTE] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(936),
    [sym__ascii_large] = ACTIONS(936),
    [anon_sym_POUND] = ACTIONS(936),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [anon_sym_PERCENT] = ACTIONS(936),
    [anon_sym_AMP] = ACTIONS(936),
    [anon_sym_1] = ACTIONS(936),
    [anon_sym_PLUS] = ACTIONS(936),
    [anon_sym_DOT] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(936),
    [anon_sym_LT] = ACTIONS(936),
    [anon_sym_GT] = ACTIONS(936),
    [anon_sym_QMARK] = ACTIONS(936),
    [anon_sym_CARET] = ACTIONS(936),
    [anon_sym_TILDE] = ACTIONS(936),
    [anon_sym_BSLASH] = ACTIONS(936),
    [anon_sym_LBRACK] = ACTIONS(936),
    [anon_sym_RBRACK] = ACTIONS(936),
    [sym__space] = ACTIONS(936),
    [sym__newline] = ACTIONS(936),
    [sym__tab] = ACTIONS(936),
    [sym__vertical_tab] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(936),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(680),
    [anon_sym_DASH_GT] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(680),
    [sym_comment] = ACTIONS(52),
  },
  [330] = {
    [sym__layout_semicolon] = ACTIONS(938),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_DASH_GT] = ACTIONS(580),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_comment] = ACTIONS(52),
  },
  [331] = {
    [sym__layout_semicolon] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(942),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [sym__layout_semicolon] = ACTIONS(940),
    [anon_sym_SEMI] = ACTIONS(942),
    [anon_sym_DASH_GT] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(944),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [sym__layout_close_brace] = ACTIONS(946),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_AT] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(348),
    [sym_constructor_identifier] = ACTIONS(348),
    [sym_module_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_AMP] = ACTIONS(348),
    [anon_sym_1] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(348),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(948),
    [sym_comment] = ACTIONS(52),
  },
  [335] = {
    [sym__layout_semicolon] = ACTIONS(950),
    [anon_sym_SEMI] = ACTIONS(952),
    [sym_comment] = ACTIONS(52),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(954),
    [anon_sym_RPAREN] = ACTIONS(954),
    [sym_comment] = ACTIONS(52),
  },
  [337] = {
    [sym_export] = STATE(374),
    [sym__identifier] = STATE(189),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [338] = {
    [anon_sym_where] = ACTIONS(956),
    [sym_comment] = ACTIONS(52),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [340] = {
    [aux_sym_export_repeat1] = STATE(376),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(962),
    [sym_comment] = ACTIONS(52),
  },
  [342] = {
    [anon_sym_RPAREN] = ACTIONS(964),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [aux_sym_export_repeat1] = STATE(378),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(964),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [anon_sym_LPAREN] = ACTIONS(966),
    [anon_sym_COMMA] = ACTIONS(968),
    [anon_sym_RPAREN] = ACTIONS(968),
    [sym_comment] = ACTIONS(52),
  },
  [345] = {
    [sym__identifier] = STATE(380),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(970),
    [anon_sym_SEMI] = ACTIONS(972),
    [sym_comment] = ACTIONS(52),
  },
  [347] = {
    [sym__identifier] = STATE(382),
    [anon_sym_DOT_DOT] = ACTIONS(974),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(976),
    [sym_comment] = ACTIONS(52),
  },
  [349] = {
    [sym_variable_identifier] = ACTIONS(566),
    [sym_constructor_identifier] = ACTIONS(978),
    [sym_module_identifier] = ACTIONS(978),
    [sym_comment] = ACTIONS(52),
  },
  [350] = {
    [sym__layout_semicolon] = ACTIONS(980),
    [anon_sym_SEMI] = ACTIONS(982),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(52),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(986),
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(52),
  },
  [353] = {
    [sym_variable_identifier] = ACTIONS(988),
    [sym_constructor_identifier] = ACTIONS(990),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [sym__layout_close_brace] = ACTIONS(992),
    [anon_sym_LPAREN] = ACTIONS(994),
    [anon_sym_EQ] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(994),
    [anon_sym_DASH] = ACTIONS(994),
    [anon_sym_infixl] = ACTIONS(994),
    [anon_sym_infixr] = ACTIONS(994),
    [anon_sym_infix] = ACTIONS(994),
    [anon_sym_COLON] = ACTIONS(994),
    [anon_sym_PIPE] = ACTIONS(994),
    [anon_sym_BANG] = ACTIONS(994),
    [sym_variable_identifier] = ACTIONS(994),
    [sym_constructor_identifier] = ACTIONS(994),
    [sym_module_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(994),
    [anon_sym_DOLLAR] = ACTIONS(994),
    [anon_sym_PERCENT] = ACTIONS(994),
    [anon_sym_AMP] = ACTIONS(994),
    [anon_sym_1] = ACTIONS(994),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_DOT] = ACTIONS(994),
    [anon_sym_SLASH] = ACTIONS(994),
    [anon_sym_LT] = ACTIONS(994),
    [anon_sym_GT] = ACTIONS(994),
    [anon_sym_QMARK] = ACTIONS(994),
    [anon_sym_CARET] = ACTIONS(994),
    [anon_sym_TILDE] = ACTIONS(994),
    [anon_sym_BSLASH] = ACTIONS(994),
  },
  [355] = {
    [sym__layout_semicolon] = ACTIONS(996),
    [anon_sym_SEMI] = ACTIONS(998),
    [sym_comment] = ACTIONS(52),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(1002),
    [sym_comment] = ACTIONS(52),
  },
  [357] = {
    [anon_sym_RBRACE] = ACTIONS(994),
    [anon_sym_LPAREN] = ACTIONS(994),
    [anon_sym_EQ] = ACTIONS(994),
    [anon_sym_AT] = ACTIONS(994),
    [anon_sym_DASH] = ACTIONS(994),
    [anon_sym_infixl] = ACTIONS(994),
    [anon_sym_infixr] = ACTIONS(994),
    [anon_sym_infix] = ACTIONS(994),
    [anon_sym_COLON] = ACTIONS(994),
    [anon_sym_PIPE] = ACTIONS(994),
    [anon_sym_BANG] = ACTIONS(994),
    [sym_variable_identifier] = ACTIONS(994),
    [sym_constructor_identifier] = ACTIONS(994),
    [sym_module_identifier] = ACTIONS(994),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(994),
    [anon_sym_DOLLAR] = ACTIONS(994),
    [anon_sym_PERCENT] = ACTIONS(994),
    [anon_sym_AMP] = ACTIONS(994),
    [anon_sym_1] = ACTIONS(994),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_DOT] = ACTIONS(994),
    [anon_sym_SLASH] = ACTIONS(994),
    [anon_sym_LT] = ACTIONS(994),
    [anon_sym_GT] = ACTIONS(994),
    [anon_sym_QMARK] = ACTIONS(994),
    [anon_sym_CARET] = ACTIONS(994),
    [anon_sym_TILDE] = ACTIONS(994),
    [anon_sym_BSLASH] = ACTIONS(994),
  },
  [358] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [sym__layout_semicolon] = ACTIONS(1008),
    [anon_sym_SEMI] = ACTIONS(1010),
    [sym_comment] = ACTIONS(52),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1014),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1016),
    [anon_sym_SEMI] = ACTIONS(1018),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [sym__layout_semicolon] = ACTIONS(1020),
    [anon_sym_SEMI] = ACTIONS(1022),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [sym_variable_identifier] = ACTIONS(1026),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [sym_strict] = STATE(389),
    [sym__identifier] = STATE(389),
    [anon_sym_BANG] = ACTIONS(1028),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [366] = {
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_COLON_COLON] = ACTIONS(1032),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1034),
    [anon_sym_SEMI] = ACTIONS(1036),
    [anon_sym_PIPE] = ACTIONS(1036),
    [anon_sym_deriving] = ACTIONS(1036),
    [sym_comment] = ACTIONS(52),
  },
  [368] = {
    [sym_field] = STATE(392),
    [sym_variable_identifier] = ACTIONS(726),
    [sym_comment] = ACTIONS(52),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(1038),
    [anon_sym_COMMA] = ACTIONS(1040),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1042),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_PIPE] = ACTIONS(1044),
    [anon_sym_deriving] = ACTIONS(1044),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [sym__layout_semicolon] = ACTIONS(1046),
    [anon_sym_SEMI] = ACTIONS(1048),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(1050),
    [anon_sym_SEMI] = ACTIONS(798),
    [anon_sym_DASH_GT] = ACTIONS(798),
    [sym_variable_identifier] = ACTIONS(798),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [sym__layout_close_brace] = ACTIONS(1052),
    [anon_sym_LPAREN] = ACTIONS(596),
    [anon_sym_import] = ACTIONS(596),
    [anon_sym_EQ] = ACTIONS(596),
    [anon_sym_AT] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_foreign] = ACTIONS(596),
    [anon_sym_default] = ACTIONS(596),
    [anon_sym_do] = ACTIONS(596),
    [anon_sym_class] = ACTIONS(596),
    [anon_sym_instance] = ACTIONS(596),
    [anon_sym_infixl] = ACTIONS(596),
    [anon_sym_infixr] = ACTIONS(596),
    [anon_sym_infix] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(596),
    [anon_sym_data] = ACTIONS(596),
    [anon_sym_PIPE] = ACTIONS(596),
    [anon_sym_newtype] = ACTIONS(596),
    [anon_sym_BANG] = ACTIONS(596),
    [anon_sym_type] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(596),
    [sym_constructor_identifier] = ACTIONS(596),
    [sym_module_identifier] = ACTIONS(596),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_POUND] = ACTIONS(596),
    [anon_sym_DOLLAR] = ACTIONS(596),
    [anon_sym_PERCENT] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(596),
    [anon_sym_1] = ACTIONS(596),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_LT] = ACTIONS(596),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_QMARK] = ACTIONS(596),
    [anon_sym_CARET] = ACTIONS(596),
    [anon_sym_TILDE] = ACTIONS(596),
    [anon_sym_BSLASH] = ACTIONS(596),
    [sym__integer_literal] = ACTIONS(596),
    [sym__octal_literal] = ACTIONS(596),
    [sym__hexidecimal_literal] = ACTIONS(596),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(1054),
    [anon_sym_RPAREN] = ACTIONS(1054),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(1056),
    [anon_sym_RPAREN] = ACTIONS(1056),
    [sym_comment] = ACTIONS(52),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1058),
    [sym_comment] = ACTIONS(52),
  },
  [377] = {
    [aux_sym_import_specification_repeat1] = STATE(397),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(52),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [379] = {
    [sym__identifier] = STATE(400),
    [anon_sym_DOT_DOT] = ACTIONS(1064),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [380] = {
    [anon_sym_LPAREN] = ACTIONS(1066),
    [anon_sym_COMMA] = ACTIONS(1068),
    [anon_sym_RPAREN] = ACTIONS(1068),
    [sym_comment] = ACTIONS(52),
  },
  [381] = {
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [aux_sym_export_repeat1] = STATE(402),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1070),
    [anon_sym_SEMI] = ACTIONS(1072),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [sym__layout_close_brace] = ACTIONS(1074),
    [anon_sym_LPAREN] = ACTIONS(1076),
    [anon_sym_EQ] = ACTIONS(1076),
    [anon_sym_AT] = ACTIONS(1076),
    [anon_sym_DASH] = ACTIONS(1076),
    [anon_sym_infixl] = ACTIONS(1076),
    [anon_sym_infixr] = ACTIONS(1076),
    [anon_sym_infix] = ACTIONS(1076),
    [anon_sym_COLON] = ACTIONS(1076),
    [anon_sym_PIPE] = ACTIONS(1076),
    [anon_sym_BANG] = ACTIONS(1076),
    [sym_variable_identifier] = ACTIONS(1076),
    [sym_constructor_identifier] = ACTIONS(1076),
    [sym_module_identifier] = ACTIONS(1076),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1076),
    [anon_sym_DOLLAR] = ACTIONS(1076),
    [anon_sym_PERCENT] = ACTIONS(1076),
    [anon_sym_AMP] = ACTIONS(1076),
    [anon_sym_1] = ACTIONS(1076),
    [anon_sym_PLUS] = ACTIONS(1076),
    [anon_sym_DOT] = ACTIONS(1076),
    [anon_sym_SLASH] = ACTIONS(1076),
    [anon_sym_LT] = ACTIONS(1076),
    [anon_sym_GT] = ACTIONS(1076),
    [anon_sym_QMARK] = ACTIONS(1076),
    [anon_sym_CARET] = ACTIONS(1076),
    [anon_sym_TILDE] = ACTIONS(1076),
    [anon_sym_BSLASH] = ACTIONS(1076),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_LPAREN] = ACTIONS(1076),
    [anon_sym_EQ] = ACTIONS(1076),
    [anon_sym_AT] = ACTIONS(1076),
    [anon_sym_DASH] = ACTIONS(1076),
    [anon_sym_infixl] = ACTIONS(1076),
    [anon_sym_infixr] = ACTIONS(1076),
    [anon_sym_infix] = ACTIONS(1076),
    [anon_sym_COLON] = ACTIONS(1076),
    [anon_sym_PIPE] = ACTIONS(1076),
    [anon_sym_BANG] = ACTIONS(1076),
    [sym_variable_identifier] = ACTIONS(1076),
    [sym_constructor_identifier] = ACTIONS(1076),
    [sym_module_identifier] = ACTIONS(1076),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1076),
    [anon_sym_DOLLAR] = ACTIONS(1076),
    [anon_sym_PERCENT] = ACTIONS(1076),
    [anon_sym_AMP] = ACTIONS(1076),
    [anon_sym_1] = ACTIONS(1076),
    [anon_sym_PLUS] = ACTIONS(1076),
    [anon_sym_DOT] = ACTIONS(1076),
    [anon_sym_SLASH] = ACTIONS(1076),
    [anon_sym_LT] = ACTIONS(1076),
    [anon_sym_GT] = ACTIONS(1076),
    [anon_sym_QMARK] = ACTIONS(1076),
    [anon_sym_CARET] = ACTIONS(1076),
    [anon_sym_TILDE] = ACTIONS(1076),
    [anon_sym_BSLASH] = ACTIONS(1076),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1078),
    [anon_sym_SEMI] = ACTIONS(1080),
    [sym_comment] = ACTIONS(52),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(1082),
    [anon_sym_COLON_COLON] = ACTIONS(1082),
    [sym_comment] = ACTIONS(52),
  },
  [388] = {
    [sym__identifier] = STATE(403),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [389] = {
    [anon_sym_RBRACE] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1084),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [sym_variable_identifier] = ACTIONS(1086),
    [sym_comment] = ACTIONS(52),
  },
  [391] = {
    [sym_strict] = STATE(405),
    [sym__identifier] = STATE(405),
    [anon_sym_BANG] = ACTIONS(1028),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [anon_sym_RBRACE] = ACTIONS(1088),
    [anon_sym_COMMA] = ACTIONS(1088),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [sym__layout_semicolon] = ACTIONS(1090),
    [anon_sym_SEMI] = ACTIONS(1092),
    [anon_sym_PIPE] = ACTIONS(1092),
    [anon_sym_deriving] = ACTIONS(1092),
    [sym_comment] = ACTIONS(52),
  },
  [394] = {
    [sym_field] = STATE(406),
    [sym_variable_identifier] = ACTIONS(726),
    [sym_comment] = ACTIONS(52),
  },
  [395] = {
    [anon_sym_COMMA] = ACTIONS(1094),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [sym_comment] = ACTIONS(52),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1096),
    [anon_sym_SEMI] = ACTIONS(1098),
    [sym_comment] = ACTIONS(52),
  },
  [397] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [sym_comment] = ACTIONS(52),
  },
  [398] = {
    [aux_sym_import_specification_repeat1] = STATE(408),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [anon_sym_RPAREN] = ACTIONS(1102),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [aux_sym_export_repeat1] = STATE(410),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1102),
    [sym_comment] = ACTIONS(52),
  },
  [401] = {
    [sym__identifier] = STATE(412),
    [anon_sym_DOT_DOT] = ACTIONS(1104),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [402] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1106),
    [sym_comment] = ACTIONS(52),
  },
  [403] = {
    [anon_sym_RBRACE] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(908),
    [sym_comment] = ACTIONS(52),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(1108),
    [anon_sym_COLON_COLON] = ACTIONS(1108),
    [sym_comment] = ACTIONS(52),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(1110),
    [anon_sym_COMMA] = ACTIONS(1110),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [anon_sym_RBRACE] = ACTIONS(1112),
    [anon_sym_COMMA] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [sym__layout_semicolon] = ACTIONS(1114),
    [anon_sym_SEMI] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [anon_sym_COMMA] = ACTIONS(1120),
    [anon_sym_RPAREN] = ACTIONS(1120),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [411] = {
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [aux_sym_export_repeat1] = STATE(416),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [aux_sym_import_specification_repeat1] = STATE(417),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [sym_comment] = ACTIONS(52),
  },
  [414] = {
    [sym__layout_semicolon] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [sym_comment] = ACTIONS(52),
  },
  [416] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [sym_comment] = ACTIONS(52),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(1132),
    [sym_comment] = ACTIONS(52),
  },
  [418] = {
    [anon_sym_COMMA] = ACTIONS(1134),
    [anon_sym_RPAREN] = ACTIONS(1134),
    [sym_comment] = ACTIONS(52),
  },
  [419] = {
    [sym__layout_semicolon] = ACTIONS(1136),
    [anon_sym_SEMI] = ACTIONS(1138),
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
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 1),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 1),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 2),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 1),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 1),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_lhs, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [498] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(233),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
  [532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [554] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(259),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 1),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_rhs, 2),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_rhs, 2),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_lhs_repeat1, 2),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(282),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [630] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(300),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [698] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [772] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [778] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [782] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_rhs_repeat1, 2),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__abstract_pattern, 3),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [830] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [832] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [836] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [838] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [854] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [872] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [910] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [936] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [978] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [990] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [994] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(394),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(396),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1076] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
