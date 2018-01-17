#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 414
#define SYMBOL_COUNT 204
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
  sym__var = 136,
  sym__expression = 137,
  sym_foreign = 138,
  sym_foreign_import = 139,
  sym_calling_convention = 140,
  sym_safety = 141,
  sym_default = 142,
  sym_do_expression = 143,
  sym_statement_list = 144,
  sym__statement = 145,
  sym_type_class = 146,
  sym_general_declarations = 147,
  sym_type_class_instance = 148,
  sym__general_declaration = 149,
  sym_fixity = 150,
  sym__op = 151,
  sym_variable_symbol = 152,
  sym_constructor_symbol = 153,
  sym_type_signature = 154,
  sym__type = 155,
  sym_function_type = 156,
  sym_algebraic_datatype = 157,
  sym_context = 158,
  sym_class = 159,
  sym_constructors = 160,
  sym_constructor = 161,
  sym_deriving = 162,
  sym_newtype = 163,
  sym_new_constructor = 164,
  sym_field = 165,
  sym_strict = 166,
  sym_type_synonym = 167,
  sym__literal = 168,
  sym__identifier = 169,
  sym_simple_type = 170,
  sym_integer = 171,
  sym_char = 172,
  sym_string = 173,
  sym__gap = 174,
  sym__graphic = 175,
  sym__small = 176,
  sym__large = 177,
  sym__symbol = 178,
  sym__special = 179,
  sym__escape = 180,
  sym__char_escape = 181,
  sym__ascii = 182,
  sym__cntrl = 183,
  sym_fields = 184,
  aux_sym_module_repeat1 = 185,
  aux_sym_module_exports_repeat1 = 186,
  aux_sym_export_repeat1 = 187,
  aux_sym_import_specification_repeat1 = 188,
  aux_sym_function_binding_repeat1 = 189,
  aux_sym_statement_list_repeat1 = 190,
  aux_sym_type_class_repeat1 = 191,
  aux_sym_general_declarations_repeat1 = 192,
  aux_sym_fixity_repeat1 = 193,
  aux_sym_variable_symbol_repeat1 = 194,
  aux_sym_function_type_repeat1 = 195,
  aux_sym_context_repeat1 = 196,
  aux_sym_constructors_repeat1 = 197,
  aux_sym_constructor_repeat1 = 198,
  aux_sym_field_repeat1 = 199,
  aux_sym_string_repeat1 = 200,
  aux_sym__escape_repeat1 = 201,
  aux_sym__escape_repeat2 = 202,
  aux_sym_fields_repeat1 = 203,
  alias_sym_type_constructor = 204,
  alias_sym_type_variable = 205,
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
  [aux_sym_function_binding_repeat1] = "function_binding_repeat1",
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
  [aux_sym_function_binding_repeat1] = {
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
        ADVANCE(353);
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
        ADVANCE(341);
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
        ADVANCE(353);
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
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(514);
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
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(184);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(512);
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
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(514);
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
      if (lookahead == 'n')
        SKIP(510);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '(')
        ADVANCE(341);
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
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(101);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ':')
        ADVANCE(337);
      if (lookahead == '=')
        ADVANCE(268);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 519:
      if (lookahead == 'n')
        SKIP(515);
      END_STATE();
    case 520:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 522:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(521);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 523:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(523);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      END_STATE();
    case 524:
      if (lookahead == 'n')
        SKIP(520);
      END_STATE();
    case 525:
      if (lookahead == '\t')
        SKIP(525);
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(530);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 526:
      if (lookahead == '\t')
        ADVANCE(526);
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
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
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(526);
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == ' ')
        ADVANCE(527);
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
        ADVANCE(528);
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
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(526);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      if (lookahead == '\t')
        SKIP(525);
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(530);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 533:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(540);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(536);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(537);
      if (lookahead == ' ')
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
        ADVANCE(539);
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
        ADVANCE(529);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(536);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(537);
      if (lookahead == ' ')
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
        ADVANCE(539);
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
        ADVANCE(529);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 537:
      if (lookahead == '\t')
        ADVANCE(536);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(537);
      if (lookahead == ' ')
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
        ADVANCE(539);
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
        ADVANCE(529);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(536);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(537);
      if (lookahead == ' ')
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
        ADVANCE(539);
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
        ADVANCE(529);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(535);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(540);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 541:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(544);
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
        SKIP(541);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 542:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(542);
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
        ADVANCE(543);
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
        ADVANCE(542);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(542);
      if (lookahead == '\r')
        ADVANCE(544);
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
        SKIP(541);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 545:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 546:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(547);
      if (lookahead == 'a')
        ADVANCE(548);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(551);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(553);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 557:
      if (lookahead == 'n')
        SKIP(545);
      END_STATE();
    case 558:
      if (lookahead == 's')
        ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 560:
      if (lookahead == 'i')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == 'd')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 'i')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'n')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'g')
        ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(569);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(570);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(567);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(568);
      if (lookahead == 'a')
        ADVANCE(548);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(569);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(570);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      END_STATE();
    case 570:
      if (lookahead == 'n')
        SKIP(566);
      END_STATE();
    case 571:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(575);
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
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(571);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(572);
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
        ADVANCE(573);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '\n')
        ADVANCE(572);
      if (lookahead == '\r')
        ADVANCE(575);
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
        ADVANCE(576);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(571);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 576:
      if (lookahead == '.')
        ADVANCE(107);
      END_STATE();
    case 577:
      if (lookahead == 'n')
        SKIP(571);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(579);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '0')
        ADVANCE(178);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == 'd')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(579);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(579);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '0')
        ADVANCE(262);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        SKIP(578);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'w')
        ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
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
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        ADVANCE(585);
      if (lookahead == 'w')
        ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
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
    case 591:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(591);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == 'w')
        ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 592:
      if (lookahead == 'n')
        SKIP(583);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'h')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'r')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
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
        SKIP(598);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
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
        ADVANCE(600);
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
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        SKIP(598);
      END_STATE();
    case 602:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(605);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(603);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      if (lookahead == '\n')
        ADVANCE(603);
      if (lookahead == '\r')
        ADVANCE(605);
      if (lookahead == ',')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(602);
      END_STATE();
    case 606:
      if (lookahead == 'n')
        SKIP(602);
      END_STATE();
    case 607:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(618);
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
        SKIP(619);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(607);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(608);
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
        ADVANCE(609);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(608);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
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
    case 618:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(618);
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
        SKIP(619);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(607);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 619:
      if (lookahead == 'n')
        SKIP(607);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
        ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'v')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'g')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 628:
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == '\r')
        ADVANCE(681);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(682);
      if (lookahead == 'B')
        ADVANCE(685);
      if (lookahead == 'C')
        ADVANCE(689);
      if (lookahead == 'D')
        ADVANCE(693);
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'F')
        ADVANCE(714);
      if (lookahead == 'G')
        ADVANCE(717);
      if (lookahead == 'H')
        ADVANCE(718);
      if (lookahead == 'L')
        ADVANCE(719);
      if (lookahead == 'N')
        ADVANCE(720);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'R')
        ADVANCE(722);
      if (lookahead == 'S')
        ADVANCE(723);
      if (lookahead == 'U')
        ADVANCE(724);
      if (lookahead == 'V')
        ADVANCE(725);
      if (lookahead == 'X')
        ADVANCE(726);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(727);
      if (lookahead == 'b')
        ADVANCE(728);
      if (lookahead == 'f')
        ADVANCE(729);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(730);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(628);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(532);
      END_STATE();
    case 629:
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == '\r')
        ADVANCE(629);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == 'A')
        ADVANCE(630);
      if (lookahead == 'B')
        ADVANCE(633);
      if (lookahead == 'C')
        ADVANCE(637);
      if (lookahead == 'D')
        ADVANCE(641);
      if (lookahead == 'E')
        ADVANCE(651);
      if (lookahead == 'F')
        ADVANCE(662);
      if (lookahead == 'G')
        ADVANCE(665);
      if (lookahead == 'H')
        ADVANCE(666);
      if (lookahead == 'L')
        ADVANCE(667);
      if (lookahead == 'N')
        ADVANCE(668);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'R')
        ADVANCE(670);
      if (lookahead == 'S')
        ADVANCE(671);
      if (lookahead == 'U')
        ADVANCE(672);
      if (lookahead == 'V')
        ADVANCE(673);
      if (lookahead == 'X')
        ADVANCE(674);
      if (lookahead == '\\')
        ADVANCE(675);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(676);
      if (lookahead == 'b')
        ADVANCE(677);
      if (lookahead == 'f')
        ADVANCE(678);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(679);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(529);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(634);
      if (lookahead == 'S')
        ADVANCE(636);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(638);
      if (lookahead == 'R')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(642);
      if (lookahead == 'E')
        ADVANCE(647);
      if (lookahead == 'L')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(643);
      if (lookahead == '2')
        ADVANCE(644);
      if (lookahead == '3')
        ADVANCE(645);
      if (lookahead == '4')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(650);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(652);
      if (lookahead == 'N')
        ADVANCE(653);
      if (lookahead == 'O')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead == 'T')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(654);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(660);
      if (lookahead == 'X')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(663);
      if (lookahead == 'S')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(46);
      if (lookahead == 'U')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
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
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '\n')
        ADVANCE(629);
      if (lookahead == '\r')
        ADVANCE(681);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '&')
        ADVANCE(98);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == 'A')
        ADVANCE(682);
      if (lookahead == 'B')
        ADVANCE(685);
      if (lookahead == 'C')
        ADVANCE(689);
      if (lookahead == 'D')
        ADVANCE(693);
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'F')
        ADVANCE(714);
      if (lookahead == 'G')
        ADVANCE(717);
      if (lookahead == 'H')
        ADVANCE(718);
      if (lookahead == 'L')
        ADVANCE(719);
      if (lookahead == 'N')
        ADVANCE(720);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'R')
        ADVANCE(722);
      if (lookahead == 'S')
        ADVANCE(723);
      if (lookahead == 'U')
        ADVANCE(724);
      if (lookahead == 'V')
        ADVANCE(725);
      if (lookahead == 'X')
        ADVANCE(726);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == '^')
        ADVANCE(149);
      if (lookahead == 'a')
        ADVANCE(727);
      if (lookahead == 'b')
        ADVANCE(728);
      if (lookahead == 'f')
        ADVANCE(729);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(730);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(628);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(532);
      END_STATE();
    case 682:
      if (lookahead == 'C')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'K')
        ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 685:
      if (lookahead == 'E')
        ADVANCE(686);
      if (lookahead == 'S')
        ADVANCE(688);
      END_STATE();
    case 686:
      if (lookahead == 'L')
        ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 689:
      if (lookahead == 'A')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(692);
      END_STATE();
    case 690:
      if (lookahead == 'N')
        ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 693:
      if (lookahead == 'C')
        ADVANCE(694);
      if (lookahead == 'E')
        ADVANCE(699);
      if (lookahead == 'L')
        ADVANCE(701);
      END_STATE();
    case 694:
      if (lookahead == '1')
        ADVANCE(695);
      if (lookahead == '2')
        ADVANCE(696);
      if (lookahead == '3')
        ADVANCE(697);
      if (lookahead == '4')
        ADVANCE(698);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 699:
      if (lookahead == 'L')
        ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 701:
      if (lookahead == 'E')
        ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 703:
      if (lookahead == 'M')
        ADVANCE(704);
      if (lookahead == 'N')
        ADVANCE(705);
      if (lookahead == 'O')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      if (lookahead == 'T')
        ADVANCE(711);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 705:
      if (lookahead == 'Q')
        ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 707:
      if (lookahead == 'T')
        ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 709:
      if (lookahead == 'C')
        ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 711:
      if (lookahead == 'B')
        ADVANCE(712);
      if (lookahead == 'X')
        ADVANCE(713);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 714:
      if (lookahead == 'F')
        ADVANCE(715);
      if (lookahead == 'S')
        ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 717:
      if (lookahead == 'S')
        ADVANCE(119);
      END_STATE();
    case 718:
      if (lookahead == 'T')
        ADVANCE(121);
      END_STATE();
    case 719:
      if (lookahead == 'F')
        ADVANCE(123);
      END_STATE();
    case 720:
      if (lookahead == 'A')
        ADVANCE(125);
      if (lookahead == 'U')
        ADVANCE(127);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 722:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 723:
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
    case 724:
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 725:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 732:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
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
        ADVANCE(745);
      if (lookahead == 'B')
        ADVANCE(746);
      if (lookahead == 'C')
        ADVANCE(747);
      if (lookahead == 'D')
        ADVANCE(748);
      if (lookahead == 'E')
        ADVANCE(749);
      if (lookahead == 'F')
        ADVANCE(750);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(726);
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
        ADVANCE(727);
      if (lookahead == 'b')
        ADVANCE(728);
      if (lookahead == 'f')
        ADVANCE(729);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(730);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(731);
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
        ADVANCE(532);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(734);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(735);
      if (lookahead == ' ')
        ADVANCE(736);
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
        ADVANCE(737);
      if (lookahead == 'B')
        ADVANCE(738);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(740);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(674);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(743);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(676);
      if (lookahead == 'b')
        ADVANCE(677);
      if (lookahead == 'f')
        ADVANCE(678);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(679);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(680);
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
        ADVANCE(529);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(734);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(735);
      if (lookahead == ' ')
        ADVANCE(736);
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
        ADVANCE(737);
      if (lookahead == 'B')
        ADVANCE(738);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(740);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(674);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(743);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(676);
      if (lookahead == 'b')
        ADVANCE(677);
      if (lookahead == 'f')
        ADVANCE(678);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(679);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(680);
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
        ADVANCE(529);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 735:
      if (lookahead == '\t')
        ADVANCE(734);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(735);
      if (lookahead == ' ')
        ADVANCE(736);
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
        ADVANCE(737);
      if (lookahead == 'B')
        ADVANCE(738);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(740);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(674);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(743);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(676);
      if (lookahead == 'b')
        ADVANCE(677);
      if (lookahead == 'f')
        ADVANCE(678);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(679);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(680);
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
        ADVANCE(529);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(734);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(735);
      if (lookahead == ' ')
        ADVANCE(736);
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
        ADVANCE(737);
      if (lookahead == 'B')
        ADVANCE(738);
      if (lookahead == 'C')
        ADVANCE(739);
      if (lookahead == 'D')
        ADVANCE(740);
      if (lookahead == 'E')
        ADVANCE(741);
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'G')
        ADVANCE(39);
      if (lookahead == 'H')
        ADVANCE(41);
      if (lookahead == 'L')
        ADVANCE(43);
      if (lookahead == 'N')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(669);
      if (lookahead == 'R')
        ADVANCE(50);
      if (lookahead == 'S')
        ADVANCE(52);
      if (lookahead == 'U')
        ADVANCE(63);
      if (lookahead == 'V')
        ADVANCE(65);
      if (lookahead == 'X')
        ADVANCE(674);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(743);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '`')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(676);
      if (lookahead == 'b')
        ADVANCE(677);
      if (lookahead == 'f')
        ADVANCE(678);
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(679);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == 'v')
        ADVANCE(76);
      if (lookahead == 'x')
        ADVANCE(680);
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
        ADVANCE(529);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(634);
      if (lookahead == 'S')
        ADVANCE(636);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(638);
      if (lookahead == 'R')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(642);
      if (lookahead == 'E')
        ADVANCE(647);
      if (lookahead == 'L')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(652);
      if (lookahead == 'N')
        ADVANCE(653);
      if (lookahead == 'O')
        ADVANCE(655);
      if (lookahead == 'S')
        ADVANCE(657);
      if (lookahead == 'T')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(663);
      if (lookahead == 'S')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(735);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 744:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(733);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(744);
      if (lookahead == ' ')
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
        ADVANCE(745);
      if (lookahead == 'B')
        ADVANCE(746);
      if (lookahead == 'C')
        ADVANCE(747);
      if (lookahead == 'D')
        ADVANCE(748);
      if (lookahead == 'E')
        ADVANCE(749);
      if (lookahead == 'F')
        ADVANCE(750);
      if (lookahead == 'G')
        ADVANCE(118);
      if (lookahead == 'H')
        ADVANCE(120);
      if (lookahead == 'L')
        ADVANCE(122);
      if (lookahead == 'N')
        ADVANCE(124);
      if (lookahead == 'O')
        ADVANCE(721);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(131);
      if (lookahead == 'U')
        ADVANCE(142);
      if (lookahead == 'V')
        ADVANCE(144);
      if (lookahead == 'X')
        ADVANCE(726);
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
        ADVANCE(727);
      if (lookahead == 'b')
        ADVANCE(728);
      if (lookahead == 'f')
        ADVANCE(729);
      if (lookahead == 'n')
        ADVANCE(152);
      if (lookahead == 'o')
        ADVANCE(730);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(154);
      if (lookahead == 'v')
        ADVANCE(155);
      if (lookahead == 'x')
        ADVANCE(731);
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
        ADVANCE(532);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(683);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(686);
      if (lookahead == 'S')
        ADVANCE(688);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(690);
      if (lookahead == 'R')
        ADVANCE(692);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(694);
      if (lookahead == 'E')
        ADVANCE(699);
      if (lookahead == 'L')
        ADVANCE(701);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(704);
      if (lookahead == 'N')
        ADVANCE(705);
      if (lookahead == 'O')
        ADVANCE(707);
      if (lookahead == 'S')
        ADVANCE(709);
      if (lookahead == 'T')
        ADVANCE(711);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(715);
      if (lookahead == 'S')
        ADVANCE(716);
      END_STATE();
    case 751:
      if (lookahead == '\n')
        ADVANCE(752);
      if (lookahead == '\r')
        ADVANCE(754);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(755);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(751);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 752:
      if (lookahead == '\n')
        ADVANCE(752);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(752);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      if (lookahead == '\n')
        ADVANCE(752);
      if (lookahead == '\r')
        ADVANCE(754);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(755);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(751);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 755:
      if (lookahead == 'n')
        SKIP(751);
      END_STATE();
    case 756:
      if (lookahead == '\n')
        ADVANCE(757);
      if (lookahead == '\r')
        ADVANCE(759);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(760);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(756);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 757:
      if (lookahead == '\n')
        ADVANCE(757);
      if (lookahead == '\r')
        ADVANCE(757);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(757);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      if (lookahead == '\n')
        ADVANCE(757);
      if (lookahead == '\r')
        ADVANCE(759);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '=')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(760);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(756);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 760:
      if (lookahead == 'n')
        SKIP(756);
      END_STATE();
    case 761:
      if (lookahead == '\n')
        ADVANCE(762);
      if (lookahead == '\r')
        ADVANCE(774);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(775);
      if (lookahead == 's')
        ADVANCE(776);
      if (lookahead == 'u')
        ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(761);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 762:
      if (lookahead == '\n')
        ADVANCE(762);
      if (lookahead == '\r')
        ADVANCE(762);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(763);
      if (lookahead == 's')
        ADVANCE(764);
      if (lookahead == 'u')
        ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(762);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 763:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(762);
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
    case 768:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
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
      if (lookahead == 'a')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
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
    case 774:
      if (lookahead == '\n')
        ADVANCE(762);
      if (lookahead == '\r')
        ADVANCE(774);
      if (lookahead == '\"')
        ADVANCE(94);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(775);
      if (lookahead == 's')
        ADVANCE(776);
      if (lookahead == 'u')
        ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(761);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 775:
      if (lookahead == 'n')
        SKIP(761);
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
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(270);
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
      if (lookahead == 'n')
        ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 's')
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
      if (lookahead == 'a')
        ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'f')
        ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(790);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(788);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(787);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(787);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(790);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(786);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 790:
      if (lookahead == 'n')
        SKIP(786);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(794);
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
        SKIP(795);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(791);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(792);
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
        ADVANCE(793);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 793:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(792);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(792);
      if (lookahead == '\r')
        ADVANCE(794);
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
        SKIP(795);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(791);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 795:
      if (lookahead == 'n')
        SKIP(791);
      END_STATE();
    case 796:
      if (lookahead == '\n')
        ADVANCE(797);
      if (lookahead == '\r')
        ADVANCE(799);
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
        SKIP(800);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(796);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 797:
      if (lookahead == '\n')
        ADVANCE(797);
      if (lookahead == '\r')
        ADVANCE(797);
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
        ADVANCE(798);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(797);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      if (lookahead == '\n')
        ADVANCE(797);
      if (lookahead == '\r')
        ADVANCE(799);
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
        SKIP(800);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(796);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 800:
      if (lookahead == 'n')
        SKIP(796);
      END_STATE();
    case 801:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(801);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 802:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(802);
      if (lookahead == '(')
        ADVANCE(341);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(803);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(802);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      if (lookahead == '\n')
        ADVANCE(802);
      if (lookahead == '\r')
        ADVANCE(804);
      if (lookahead == '(')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(805);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(801);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(480);
      END_STATE();
    case 805:
      if (lookahead == 'n')
        SKIP(801);
      END_STATE();
    case 806:
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(806);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 807:
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(807);
      if (lookahead == '(')
        ADVANCE(171);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '[')
        ADVANCE(185);
      if (lookahead == '\\')
        ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(807);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 809:
      if (lookahead == '\n')
        ADVANCE(807);
      if (lookahead == '\r')
        ADVANCE(809);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '[')
        ADVANCE(191);
      if (lookahead == '\\')
        SKIP(810);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(806);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 810:
      if (lookahead == 'n')
        SKIP(806);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(814);
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
        SKIP(815);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 812:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(812);
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
        ADVANCE(813);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 813:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(812);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 814:
      if (lookahead == '\n')
        ADVANCE(812);
      if (lookahead == '\r')
        ADVANCE(814);
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
        SKIP(815);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(811);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 815:
      if (lookahead == 'n')
        SKIP(811);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(819);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(820);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      END_STATE();
    case 817:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(817);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(818);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(817);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 818:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(817);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(817);
      if (lookahead == '\r')
        ADVANCE(819);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(820);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(816);
      END_STATE();
    case 820:
      if (lookahead == 'n')
        SKIP(816);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(822);
      if (lookahead == '\r')
        ADVANCE(824);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(825);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(821);
      END_STATE();
    case 822:
      if (lookahead == '\n')
        ADVANCE(822);
      if (lookahead == '\r')
        ADVANCE(822);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(823);
      if (lookahead == 'd')
        ADVANCE(492);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(822);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 823:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(822);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(822);
      if (lookahead == '\r')
        ADVANCE(824);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(825);
      if (lookahead == 'd')
        ADVANCE(502);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(821);
      END_STATE();
    case 825:
      if (lookahead == 'n')
        SKIP(821);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(829);
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
        SKIP(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 827:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(827);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '@')
        ADVANCE(38);
      if (lookahead == '[')
        ADVANCE(67);
      if (lookahead == '\\')
        ADVANCE(828);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(827);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 829:
      if (lookahead == '\n')
        ADVANCE(827);
      if (lookahead == '\r')
        ADVANCE(829);
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
        SKIP(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
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
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(835);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(836);
      END_STATE();
    case 835:
      if (lookahead == 'n')
        SKIP(830);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 837:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(842);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(843);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == '\\')
        ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(840);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(838);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '\'')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == '\\')
        SKIP(842);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(837);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(843);
      END_STATE();
    case 842:
      if (lookahead == 'n')
        SKIP(837);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(850);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(844);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(845);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(846);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(845);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 846:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 847:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(845);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(845);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(850);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(844);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 849:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(105);
      END_STATE();
    case 850:
      if (lookahead == 'n')
        SKIP(844);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(855);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(851);
      END_STATE();
    case 852:
      if (lookahead == '\n')
        ADVANCE(852);
      if (lookahead == '\r')
        ADVANCE(852);
      if (lookahead == '-')
        ADVANCE(846);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(853);
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
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(855);
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
        ADVANCE(859);
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
        SKIP(856);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 857:
      if (lookahead == '\n')
        ADVANCE(857);
      if (lookahead == '\r')
        ADVANCE(857);
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
        ADVANCE(858);
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
        ADVANCE(857);
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
    case 858:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        SKIP(856);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(332);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
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
      if (lookahead == '(')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(336);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      END_STATE();
    case 864:
      if (lookahead == 'n')
        SKIP(860);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(866);
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
        ADVANCE(871);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
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
        ADVANCE(867);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(868);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(80);
      if (lookahead == 8902)
        ADVANCE(81);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(866);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(194);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 869:
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
    case 870:
      if (lookahead == '\n')
        ADVANCE(866);
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
        ADVANCE(871);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '~')
        ADVANCE(159);
      if (lookahead == 8902)
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == 'n')
        ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 872:
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
    case 873:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(876);
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
        ADVANCE(871);
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
        ADVANCE(875);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(868);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
        ADVANCE(871);
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
        SKIP(873);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 877:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(880);
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
        SKIP(881);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(877);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(878);
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
        ADVANCE(879);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(878);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 879:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(878);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(878);
      if (lookahead == '\r')
        ADVANCE(880);
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
        SKIP(881);
      if (lookahead == 'd')
        ADVANCE(620);
      if (lookahead == '|')
        ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(877);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(328);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 881:
      if (lookahead == 'n')
        SKIP(877);
      END_STATE();
    case 882:
      if (lookahead == '\n')
        ADVANCE(883);
      if (lookahead == '\r')
        ADVANCE(885);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(886);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(882);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(883);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '-')
        ADVANCE(846);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(883);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 884:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(883);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(883);
      if (lookahead == '\r')
        ADVANCE(885);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '\\')
        SKIP(886);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(882);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 886:
      if (lookahead == 'n')
        SKIP(882);
      END_STATE();
    case 887:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(889);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == ' ')
        ADVANCE(891);
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
        ADVANCE(892);
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
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(889);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == ' ')
        ADVANCE(891);
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
        ADVANCE(892);
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
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '\t')
        ADVANCE(889);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == ' ')
        ADVANCE(891);
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
        ADVANCE(892);
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
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(889);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == ' ')
        ADVANCE(891);
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
        ADVANCE(892);
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
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(90);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(890);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 893:
      if (lookahead == '\t')
        ADVANCE(534);
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == 11)
        ADVANCE(91);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == ' ')
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
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(897);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(898);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(894);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == '-')
        ADVANCE(846);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(370);
      if (lookahead == '\\')
        ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(895);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 896:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(895);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 897:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(897);
      if (lookahead == '-')
        ADVANCE(849);
      if (lookahead == ';')
        ADVANCE(111);
      if (lookahead == '=')
        ADVANCE(419);
      if (lookahead == '\\')
        SKIP(898);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(894);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(270);
      END_STATE();
    case 898:
      if (lookahead == 'n')
        SKIP(894);
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
  [16] = {.lex_state = 515},
  [17] = {.lex_state = 520, .external_lex_state = 3},
  [18] = {.lex_state = 525},
  [19] = {.lex_state = 533},
  [20] = {.lex_state = 520, .external_lex_state = 3},
  [21] = {.lex_state = 330},
  [22] = {.lex_state = 520, .external_lex_state = 3},
  [23] = {.lex_state = 520, .external_lex_state = 3},
  [24] = {.lex_state = 520, .external_lex_state = 3},
  [25] = {.lex_state = 510},
  [26] = {.lex_state = 520, .external_lex_state = 3},
  [27] = {.lex_state = 510},
  [28] = {.lex_state = 330},
  [29] = {.lex_state = 364},
  [30] = {.lex_state = 541},
  [31] = {.lex_state = 364},
  [32] = {.lex_state = 368},
  [33] = {.lex_state = 364},
  [34] = {.lex_state = 510},
  [35] = {.lex_state = 545, .external_lex_state = 3},
  [36] = {.lex_state = 566, .external_lex_state = 3},
  [37] = {.lex_state = 368},
  [38] = {.lex_state = 368},
  [39] = {.lex_state = 571},
  [40] = {.lex_state = 578, .external_lex_state = 4},
  [41] = {.lex_state = 472},
  [42] = {.lex_state = 520, .external_lex_state = 3},
  [43] = {.lex_state = 489},
  [44] = {.lex_state = 583},
  [45] = {.lex_state = 489},
  [46] = {.lex_state = 368},
  [47] = {.lex_state = 583},
  [48] = {.lex_state = 489},
  [49] = {.lex_state = 169},
  [50] = {.lex_state = 598, .external_lex_state = 3},
  [51] = {.lex_state = 510},
  [52] = {.lex_state = 598, .external_lex_state = 3},
  [53] = {.lex_state = 481},
  [54] = {.lex_state = 602, .external_lex_state = 3},
  [55] = {.lex_state = 602, .external_lex_state = 3},
  [56] = {.lex_state = 481},
  [57] = {.lex_state = 598, .external_lex_state = 3},
  [58] = {.lex_state = 598, .external_lex_state = 3},
  [59] = {.lex_state = 607, .external_lex_state = 3},
  [60] = {.lex_state = 489},
  [61] = {.lex_state = 489, .external_lex_state = 3},
  [62] = {.lex_state = 330},
  [63] = {.lex_state = 489},
  [64] = {.lex_state = 330},
  [65] = {.lex_state = 330},
  [66] = {.lex_state = 330},
  [67] = {.lex_state = 330},
  [68] = {.lex_state = 330},
  [69] = {.lex_state = 330},
  [70] = {.lex_state = 330},
  [71] = {.lex_state = 330},
  [72] = {.lex_state = 330},
  [73] = {.lex_state = 628},
  [74] = {.lex_state = 533},
  [75] = {.lex_state = 533},
  [76] = {.lex_state = 533},
  [77] = {.lex_state = 533},
  [78] = {.lex_state = 520, .external_lex_state = 3},
  [79] = {.lex_state = 533},
  [80] = {.lex_state = 533},
  [81] = {.lex_state = 732},
  [82] = {.lex_state = 533},
  [83] = {.lex_state = 533},
  [84] = {.lex_state = 541},
  [85] = {.lex_state = 751, .external_lex_state = 3},
  [86] = {.lex_state = 510},
  [87] = {.lex_state = 510},
  [88] = {.lex_state = 756},
  [89] = {.lex_state = 520, .external_lex_state = 3},
  [90] = {.lex_state = 510},
  [91] = {.lex_state = 364},
  [92] = {.lex_state = 467, .external_lex_state = 2},
  [93] = {.lex_state = 571},
  [94] = {.lex_state = 368},
  [95] = {.lex_state = 510},
  [96] = {.lex_state = 566, .external_lex_state = 3},
  [97] = {.lex_state = 571},
  [98] = {.lex_state = 510},
  [99] = {.lex_state = 330},
  [100] = {.lex_state = 520, .external_lex_state = 3},
  [101] = {.lex_state = 761},
  [102] = {.lex_state = 761},
  [103] = {.lex_state = 520, .external_lex_state = 3},
  [104] = {.lex_state = 368},
  [105] = {.lex_state = 520, .external_lex_state = 3},
  [106] = {.lex_state = 520, .external_lex_state = 3},
  [107] = {.lex_state = 578, .external_lex_state = 4},
  [108] = {.lex_state = 578, .external_lex_state = 4},
  [109] = {.lex_state = 520, .external_lex_state = 3},
  [110] = {.lex_state = 472},
  [111] = {.lex_state = 472},
  [112] = {.lex_state = 330},
  [113] = {.lex_state = 368},
  [114] = {.lex_state = 467, .external_lex_state = 2},
  [115] = {.lex_state = 330},
  [116] = {.lex_state = 583},
  [117] = {.lex_state = 583},
  [118] = {.lex_state = 583},
  [119] = {.lex_state = 786},
  [120] = {.lex_state = 467, .external_lex_state = 2},
  [121] = {.lex_state = 583},
  [122] = {.lex_state = 583},
  [123] = {.lex_state = 598, .external_lex_state = 3},
  [124] = {.lex_state = 598, .external_lex_state = 3},
  [125] = {.lex_state = 368},
  [126] = {.lex_state = 602, .external_lex_state = 3},
  [127] = {.lex_state = 598, .external_lex_state = 3},
  [128] = {.lex_state = 481},
  [129] = {.lex_state = 602, .external_lex_state = 3},
  [130] = {.lex_state = 602, .external_lex_state = 3},
  [131] = {.lex_state = 602, .external_lex_state = 3},
  [132] = {.lex_state = 598, .external_lex_state = 3},
  [133] = {.lex_state = 791, .external_lex_state = 3},
  [134] = {.lex_state = 796, .external_lex_state = 3},
  [135] = {.lex_state = 796, .external_lex_state = 3},
  [136] = {.lex_state = 489, .external_lex_state = 3},
  [137] = {.lex_state = 801, .external_lex_state = 3},
  [138] = {.lex_state = 806},
  [139] = {.lex_state = 811, .external_lex_state = 3},
  [140] = {.lex_state = 816, .external_lex_state = 3},
  [141] = {.lex_state = 821, .external_lex_state = 3},
  [142] = {.lex_state = 520, .external_lex_state = 3},
  [143] = {.lex_state = 756},
  [144] = {.lex_state = 330},
  [145] = {.lex_state = 330},
  [146] = {.lex_state = 489},
  [147] = {.lex_state = 330},
  [148] = {.lex_state = 786},
  [149] = {.lex_state = 520, .external_lex_state = 3},
  [150] = {.lex_state = 330},
  [151] = {.lex_state = 330},
  [152] = {.lex_state = 826},
  [153] = {.lex_state = 830},
  [154] = {.lex_state = 837},
  [155] = {.lex_state = 330},
  [156] = {.lex_state = 533},
  [157] = {.lex_state = 533},
  [158] = {.lex_state = 826},
  [159] = {.lex_state = 830},
  [160] = {.lex_state = 837},
  [161] = {.lex_state = 533},
  [162] = {.lex_state = 533},
  [163] = {.lex_state = 520, .external_lex_state = 3},
  [164] = {.lex_state = 751, .external_lex_state = 3},
  [165] = {.lex_state = 751, .external_lex_state = 3},
  [166] = {.lex_state = 751, .external_lex_state = 3},
  [167] = {.lex_state = 751, .external_lex_state = 3},
  [168] = {.lex_state = 510},
  [169] = {.lex_state = 844},
  [170] = {.lex_state = 844, .external_lex_state = 3},
  [171] = {.lex_state = 520, .external_lex_state = 3},
  [172] = {.lex_state = 520, .external_lex_state = 3},
  [173] = {.lex_state = 786},
  [174] = {.lex_state = 851, .external_lex_state = 3},
  [175] = {.lex_state = 844},
  [176] = {.lex_state = 541},
  [177] = {.lex_state = 856, .external_lex_state = 4},
  [178] = {.lex_state = 541},
  [179] = {.lex_state = 330},
  [180] = {.lex_state = 368},
  [181] = {.lex_state = 368},
  [182] = {.lex_state = 368},
  [183] = {.lex_state = 368},
  [184] = {.lex_state = 467, .external_lex_state = 2},
  [185] = {.lex_state = 510},
  [186] = {.lex_state = 520, .external_lex_state = 3},
  [187] = {.lex_state = 520, .external_lex_state = 3},
  [188] = {.lex_state = 368},
  [189] = {.lex_state = 860, .external_lex_state = 3},
  [190] = {.lex_state = 571},
  [191] = {.lex_state = 571},
  [192] = {.lex_state = 533},
  [193] = {.lex_state = 571},
  [194] = {.lex_state = 520, .external_lex_state = 3},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 510},
  [197] = {.lex_state = 520, .external_lex_state = 3},
  [198] = {.lex_state = 368},
  [199] = {.lex_state = 578, .external_lex_state = 4},
  [200] = {.lex_state = 520, .external_lex_state = 3},
  [201] = {.lex_state = 578, .external_lex_state = 4},
  [202] = {.lex_state = 472},
  [203] = {.lex_state = 472},
  [204] = {.lex_state = 368},
  [205] = {.lex_state = 489},
  [206] = {.lex_state = 368},
  [207] = {.lex_state = 368},
  [208] = {.lex_state = 865, .external_lex_state = 4},
  [209] = {.lex_state = 873},
  [210] = {.lex_state = 520, .external_lex_state = 3},
  [211] = {.lex_state = 330},
  [212] = {.lex_state = 467, .external_lex_state = 2},
  [213] = {.lex_state = 583},
  [214] = {.lex_state = 583},
  [215] = {.lex_state = 583},
  [216] = {.lex_state = 520, .external_lex_state = 3},
  [217] = {.lex_state = 467, .external_lex_state = 2},
  [218] = {.lex_state = 583},
  [219] = {.lex_state = 602, .external_lex_state = 3},
  [220] = {.lex_state = 598, .external_lex_state = 3},
  [221] = {.lex_state = 602, .external_lex_state = 3},
  [222] = {.lex_state = 602, .external_lex_state = 3},
  [223] = {.lex_state = 602, .external_lex_state = 3},
  [224] = {.lex_state = 481},
  [225] = {.lex_state = 602, .external_lex_state = 3},
  [226] = {.lex_state = 796, .external_lex_state = 3},
  [227] = {.lex_state = 796, .external_lex_state = 3},
  [228] = {.lex_state = 801, .external_lex_state = 3},
  [229] = {.lex_state = 816, .external_lex_state = 3},
  [230] = {.lex_state = 520, .external_lex_state = 3},
  [231] = {.lex_state = 510},
  [232] = {.lex_state = 520, .external_lex_state = 3},
  [233] = {.lex_state = 330},
  [234] = {.lex_state = 510},
  [235] = {.lex_state = 877, .external_lex_state = 3},
  [236] = {.lex_state = 877, .external_lex_state = 3},
  [237] = {.lex_state = 821, .external_lex_state = 3},
  [238] = {.lex_state = 877, .external_lex_state = 3},
  [239] = {.lex_state = 489},
  [240] = {.lex_state = 821, .external_lex_state = 3},
  [241] = {.lex_state = 330},
  [242] = {.lex_state = 489},
  [243] = {.lex_state = 571},
  [244] = {.lex_state = 816, .external_lex_state = 3},
  [245] = {.lex_state = 882, .external_lex_state = 3},
  [246] = {.lex_state = 520, .external_lex_state = 3},
  [247] = {.lex_state = 330},
  [248] = {.lex_state = 330},
  [249] = {.lex_state = 830},
  [250] = {.lex_state = 830},
  [251] = {.lex_state = 837},
  [252] = {.lex_state = 837},
  [253] = {.lex_state = 533},
  [254] = {.lex_state = 533},
  [255] = {.lex_state = 533},
  [256] = {.lex_state = 533},
  [257] = {.lex_state = 887},
  [258] = {.lex_state = 887},
  [259] = {.lex_state = 751, .external_lex_state = 3},
  [260] = {.lex_state = 751, .external_lex_state = 3},
  [261] = {.lex_state = 894, .external_lex_state = 3},
  [262] = {.lex_state = 882, .external_lex_state = 3},
  [263] = {.lex_state = 520, .external_lex_state = 3},
  [264] = {.lex_state = 786},
  [265] = {.lex_state = 844},
  [266] = {.lex_state = 330},
  [267] = {.lex_state = 520, .external_lex_state = 3},
  [268] = {.lex_state = 856, .external_lex_state = 4},
  [269] = {.lex_state = 541},
  [270] = {.lex_state = 510},
  [271] = {.lex_state = 368},
  [272] = {.lex_state = 368},
  [273] = {.lex_state = 571},
  [274] = {.lex_state = 330},
  [275] = {.lex_state = 860, .external_lex_state = 3},
  [276] = {.lex_state = 571},
  [277] = {.lex_state = 510},
  [278] = {.lex_state = 520, .external_lex_state = 3},
  [279] = {.lex_state = 368},
  [280] = {.lex_state = 520, .external_lex_state = 3},
  [281] = {.lex_state = 368},
  [282] = {.lex_state = 510},
  [283] = {.lex_state = 533},
  [284] = {.lex_state = 520, .external_lex_state = 3},
  [285] = {.lex_state = 510},
  [286] = {.lex_state = 368},
  [287] = {.lex_state = 510},
  [288] = {.lex_state = 520, .external_lex_state = 3},
  [289] = {.lex_state = 368},
  [290] = {.lex_state = 786},
  [291] = {.lex_state = 489},
  [292] = {.lex_state = 368},
  [293] = {.lex_state = 520, .external_lex_state = 3},
  [294] = {.lex_state = 510},
  [295] = {.lex_state = 520, .external_lex_state = 3},
  [296] = {.lex_state = 865, .external_lex_state = 4},
  [297] = {.lex_state = 520, .external_lex_state = 3},
  [298] = {.lex_state = 873},
  [299] = {.lex_state = 368},
  [300] = {.lex_state = 520, .external_lex_state = 3},
  [301] = {.lex_state = 467, .external_lex_state = 2},
  [302] = {.lex_state = 520, .external_lex_state = 3},
  [303] = {.lex_state = 467, .external_lex_state = 2},
  [304] = {.lex_state = 602, .external_lex_state = 3},
  [305] = {.lex_state = 602, .external_lex_state = 3},
  [306] = {.lex_state = 816, .external_lex_state = 3},
  [307] = {.lex_state = 520, .external_lex_state = 3},
  [308] = {.lex_state = 368},
  [309] = {.lex_state = 368},
  [310] = {.lex_state = 368},
  [311] = {.lex_state = 877, .external_lex_state = 3},
  [312] = {.lex_state = 877, .external_lex_state = 3},
  [313] = {.lex_state = 821, .external_lex_state = 3},
  [314] = {.lex_state = 489},
  [315] = {.lex_state = 816, .external_lex_state = 3},
  [316] = {.lex_state = 816, .external_lex_state = 3},
  [317] = {.lex_state = 520, .external_lex_state = 3},
  [318] = {.lex_state = 882, .external_lex_state = 3},
  [319] = {.lex_state = 830},
  [320] = {.lex_state = 837},
  [321] = {.lex_state = 533},
  [322] = {.lex_state = 887},
  [323] = {.lex_state = 882, .external_lex_state = 3},
  [324] = {.lex_state = 882, .external_lex_state = 3},
  [325] = {.lex_state = 520, .external_lex_state = 3},
  [326] = {.lex_state = 882, .external_lex_state = 3},
  [327] = {.lex_state = 856, .external_lex_state = 4},
  [328] = {.lex_state = 330},
  [329] = {.lex_state = 520, .external_lex_state = 3},
  [330] = {.lex_state = 368},
  [331] = {.lex_state = 510},
  [332] = {.lex_state = 368},
  [333] = {.lex_state = 330},
  [334] = {.lex_state = 368},
  [335] = {.lex_state = 520, .external_lex_state = 3},
  [336] = {.lex_state = 330},
  [337] = {.lex_state = 368},
  [338] = {.lex_state = 368},
  [339] = {.lex_state = 510},
  [340] = {.lex_state = 520, .external_lex_state = 3},
  [341] = {.lex_state = 571},
  [342] = {.lex_state = 368},
  [343] = {.lex_state = 510},
  [344] = {.lex_state = 520, .external_lex_state = 3},
  [345] = {.lex_state = 368},
  [346] = {.lex_state = 368},
  [347] = {.lex_state = 786},
  [348] = {.lex_state = 865, .external_lex_state = 4},
  [349] = {.lex_state = 520, .external_lex_state = 3},
  [350] = {.lex_state = 520, .external_lex_state = 3},
  [351] = {.lex_state = 873},
  [352] = {.lex_state = 520, .external_lex_state = 3},
  [353] = {.lex_state = 520, .external_lex_state = 3},
  [354] = {.lex_state = 520, .external_lex_state = 3},
  [355] = {.lex_state = 520, .external_lex_state = 3},
  [356] = {.lex_state = 520, .external_lex_state = 3},
  [357] = {.lex_state = 368},
  [358] = {.lex_state = 330},
  [359] = {.lex_state = 571},
  [360] = {.lex_state = 368},
  [361] = {.lex_state = 821, .external_lex_state = 3},
  [362] = {.lex_state = 330},
  [363] = {.lex_state = 368},
  [364] = {.lex_state = 821, .external_lex_state = 3},
  [365] = {.lex_state = 520, .external_lex_state = 3},
  [366] = {.lex_state = 882, .external_lex_state = 3},
  [367] = {.lex_state = 856, .external_lex_state = 4},
  [368] = {.lex_state = 368},
  [369] = {.lex_state = 368},
  [370] = {.lex_state = 368},
  [371] = {.lex_state = 368},
  [372] = {.lex_state = 368},
  [373] = {.lex_state = 571},
  [374] = {.lex_state = 368},
  [375] = {.lex_state = 330},
  [376] = {.lex_state = 368},
  [377] = {.lex_state = 520, .external_lex_state = 3},
  [378] = {.lex_state = 865, .external_lex_state = 4},
  [379] = {.lex_state = 873},
  [380] = {.lex_state = 520, .external_lex_state = 3},
  [381] = {.lex_state = 368},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 368},
  [384] = {.lex_state = 330},
  [385] = {.lex_state = 571},
  [386] = {.lex_state = 368},
  [387] = {.lex_state = 821, .external_lex_state = 3},
  [388] = {.lex_state = 330},
  [389] = {.lex_state = 368},
  [390] = {.lex_state = 520, .external_lex_state = 3},
  [391] = {.lex_state = 368},
  [392] = {.lex_state = 368},
  [393] = {.lex_state = 330},
  [394] = {.lex_state = 368},
  [395] = {.lex_state = 571},
  [396] = {.lex_state = 368},
  [397] = {.lex_state = 368},
  [398] = {.lex_state = 368},
  [399] = {.lex_state = 368},
  [400] = {.lex_state = 368},
  [401] = {.lex_state = 520, .external_lex_state = 3},
  [402] = {.lex_state = 368},
  [403] = {.lex_state = 368},
  [404] = {.lex_state = 368},
  [405] = {.lex_state = 330},
  [406] = {.lex_state = 368},
  [407] = {.lex_state = 368},
  [408] = {.lex_state = 520, .external_lex_state = 3},
  [409] = {.lex_state = 368},
  [410] = {.lex_state = 368},
  [411] = {.lex_state = 368},
  [412] = {.lex_state = 368},
  [413] = {.lex_state = 520, .external_lex_state = 3},
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
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
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
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(33),
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
    [sym__identifier] = STATE(36),
    [anon_sym_qualified] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [5] = {
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
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COLON_COLON] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(100),
    [sym_module_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [16] = {
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(98),
    [anon_sym_COLON_COLON] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(52),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(106),
    [sym_comment] = ACTIONS(52),
  },
  [18] = {
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(71),
    [sym__large] = STATE(71),
    [sym__symbol] = STATE(71),
    [sym__special] = STATE(71),
    [sym__escape] = STATE(70),
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
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(83),
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
    [sym_comment] = ACTIONS(52),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(52),
  },
  [22] = {
    [sym__layout_semicolon] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(52),
  },
  [23] = {
    [sym__layout_semicolon] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_comment] = ACTIONS(52),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_comment] = ACTIONS(52),
  },
  [25] = {
    [sym__identifier] = STATE(86),
    [aux_sym_function_binding_repeat1] = STATE(87),
    [anon_sym_EQ] = ACTIONS(158),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_comment] = ACTIONS(52),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(96),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(100),
    [sym_module_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [28] = {
    [anon_sym_COLON_COLON] = ACTIONS(162),
    [sym_comment] = ACTIONS(52),
  },
  [29] = {
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
  [30] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(89),
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
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
  [31] = {
    [sym__symbol] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
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
  [32] = {
    [sym_module_exports] = STATE(94),
    [anon_sym_where] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [sym_comment] = ACTIONS(52),
  },
  [33] = {
    [sym__symbol] = STATE(91),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(16),
    [anon_sym_AT] = ACTIONS(16),
    [anon_sym_DASH] = ACTIONS(16),
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
  [34] = {
    [sym__identifier] = STATE(96),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [35] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_as] = ACTIONS(98),
    [anon_sym_hiding] = ACTIONS(98),
    [anon_sym_deriving] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [36] = {
    [sym_import_specification] = STATE(100),
    [sym__layout_semicolon] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_as] = ACTIONS(190),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [37] = {
    [anon_sym_ccall] = ACTIONS(194),
    [anon_sym_stdcall] = ACTIONS(194),
    [anon_sym_cplusplus] = ACTIONS(194),
    [anon_sym_jvm] = ACTIONS(194),
    [anon_sym_dotnet] = ACTIONS(194),
    [sym_comment] = ACTIONS(52),
  },
  [38] = {
    [sym_calling_convention] = STATE(102),
    [anon_sym_ccall] = ACTIONS(196),
    [anon_sym_stdcall] = ACTIONS(196),
    [anon_sym_cplusplus] = ACTIONS(196),
    [anon_sym_jvm] = ACTIONS(196),
    [anon_sym_dotnet] = ACTIONS(196),
    [sym_comment] = ACTIONS(52),
  },
  [39] = {
    [sym__identifier] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [40] = {
    [sym__expression] = STATE(106),
    [sym_do_expression] = STATE(26),
    [sym__statement] = STATE(107),
    [sym__literal] = STATE(26),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(108),
    [sym__layout_close_brace] = ACTIONS(200),
    [anon_sym_do] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [41] = {
    [sym__expression] = STATE(109),
    [sym_do_expression] = STATE(26),
    [sym__statement] = STATE(110),
    [sym__literal] = STATE(26),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [aux_sym_statement_list_repeat1] = STATE(111),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_do] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [42] = {
    [sym__layout_semicolon] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(216),
    [sym_comment] = ACTIONS(52),
  },
  [43] = {
    [sym_class] = STATE(113),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
  },
  [44] = {
    [aux_sym_type_class_repeat1] = STATE(117),
    [anon_sym_where] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(52),
  },
  [45] = {
    [sym_constructor_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(52),
  },
  [46] = {
    [anon_sym_EQ_GT] = ACTIONS(228),
    [sym_comment] = ACTIONS(52),
  },
  [47] = {
    [aux_sym_type_class_repeat1] = STATE(121),
    [anon_sym_where] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(52),
  },
  [48] = {
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_comment] = ACTIONS(52),
  },
  [49] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(124),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(234),
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
    [sym__layout_semicolon] = ACTIONS(236),
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
  [51] = {
    [sym__identifier] = STATE(125),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [52] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(127),
    [sym__layout_semicolon] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(242),
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
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_BQUOTE] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(244),
    [sym_comment] = ACTIONS(40),
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
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(244),
  },
  [54] = {
    [aux_sym_fixity_repeat1] = STATE(129),
    [sym__layout_semicolon] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [sym_comment] = ACTIONS(52),
  },
  [55] = {
    [sym__layout_semicolon] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(52),
  },
  [56] = {
    [sym__op] = STATE(130),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
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
  [57] = {
    [sym__layout_semicolon] = ACTIONS(256),
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
  [58] = {
    [sym__symbol] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(260),
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
  [59] = {
    [aux_sym_type_class_repeat1] = STATE(134),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_deriving] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(266),
    [sym_constructor_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(52),
  },
  [60] = {
    [sym_simple_type] = STATE(136),
    [sym_constructor_identifier] = ACTIONS(270),
    [sym_comment] = ACTIONS(52),
  },
  [61] = {
    [sym_constructors] = STATE(140),
    [sym_constructor] = STATE(141),
    [sym_deriving] = STATE(142),
    [sym__layout_semicolon] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [62] = {
    [aux_sym_type_class_repeat1] = STATE(144),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(52),
  },
  [63] = {
    [sym_simple_type] = STATE(145),
    [sym_constructor_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(52),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(284),
    [sym_comment] = ACTIONS(52),
  },
  [65] = {
    [aux_sym_type_class_repeat1] = STATE(144),
    [anon_sym_EQ] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(52),
  },
  [66] = {
    [anon_sym_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(52),
  },
  [67] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(290),
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
    [sym__char_escape] = STATE(151),
    [sym__ascii] = STATE(151),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(304),
    [anon_sym_AMP] = ACTIONS(302),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(302),
    [anon_sym_x] = ACTIONS(308),
    [anon_sym_X] = ACTIONS(308),
    [anon_sym_o] = ACTIONS(310),
    [anon_sym_O] = ACTIONS(310),
    [anon_sym_a] = ACTIONS(302),
    [anon_sym_b] = ACTIONS(302),
    [anon_sym_f] = ACTIONS(302),
    [anon_sym_n] = ACTIONS(302),
    [anon_sym_r] = ACTIONS(302),
    [anon_sym_t] = ACTIONS(302),
    [anon_sym_v] = ACTIONS(302),
    [anon_sym_NUL] = ACTIONS(312),
    [anon_sym_SOH] = ACTIONS(312),
    [anon_sym_STX] = ACTIONS(312),
    [anon_sym_ETX] = ACTIONS(312),
    [anon_sym_EOT] = ACTIONS(312),
    [anon_sym_ENQ] = ACTIONS(312),
    [anon_sym_ACK] = ACTIONS(312),
    [anon_sym_BEL] = ACTIONS(312),
    [anon_sym_BS] = ACTIONS(312),
    [anon_sym_HT] = ACTIONS(312),
    [anon_sym_LF] = ACTIONS(312),
    [anon_sym_VT] = ACTIONS(312),
    [anon_sym_FF] = ACTIONS(312),
    [anon_sym_CR] = ACTIONS(312),
    [anon_sym_SO] = ACTIONS(312),
    [anon_sym_SI] = ACTIONS(312),
    [anon_sym_DLE] = ACTIONS(312),
    [anon_sym_DC1] = ACTIONS(312),
    [anon_sym_DC2] = ACTIONS(312),
    [anon_sym_DC3] = ACTIONS(312),
    [anon_sym_DC4] = ACTIONS(312),
    [anon_sym_NAK] = ACTIONS(312),
    [anon_sym_SYN] = ACTIONS(312),
    [anon_sym_ETB] = ACTIONS(312),
    [anon_sym_CAN] = ACTIONS(312),
    [anon_sym_EM] = ACTIONS(312),
    [anon_sym_SUB] = ACTIONS(312),
    [anon_sym_ESC] = ACTIONS(312),
    [anon_sym_FS] = ACTIONS(312),
    [anon_sym_GS] = ACTIONS(312),
    [anon_sym_RS] = ACTIONS(312),
    [anon_sym_US] = ACTIONS(312),
    [anon_sym_SP] = ACTIONS(312),
    [anon_sym_DEL] = ACTIONS(312),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(314),
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_BQUOTE] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym__] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(314),
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
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_BSLASH] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
    [sym__space] = ACTIONS(314),
    [sym__newline] = ACTIONS(314),
    [sym__tab] = ACTIONS(314),
    [sym__vertical_tab] = ACTIONS(314),
  },
  [75] = {
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
  [76] = {
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
    [sym__layout_semicolon] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(322),
    [sym_comment] = ACTIONS(52),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(324),
    [anon_sym_BQUOTE] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_BANG] = ACTIONS(324),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(324),
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
    [anon_sym_CARET] = ACTIONS(324),
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
    [sym__char_escape] = STATE(157),
    [sym__ascii] = STATE(157),
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
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(58),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
    [sym__vertical_tab] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(334),
    [anon_sym_X] = ACTIONS(334),
    [anon_sym_o] = ACTIONS(336),
    [anon_sym_O] = ACTIONS(336),
    [anon_sym_a] = ACTIONS(328),
    [anon_sym_b] = ACTIONS(328),
    [anon_sym_f] = ACTIONS(328),
    [anon_sym_n] = ACTIONS(328),
    [anon_sym_r] = ACTIONS(328),
    [anon_sym_t] = ACTIONS(328),
    [anon_sym_v] = ACTIONS(328),
    [anon_sym_NUL] = ACTIONS(338),
    [anon_sym_SOH] = ACTIONS(338),
    [anon_sym_STX] = ACTIONS(338),
    [anon_sym_ETX] = ACTIONS(338),
    [anon_sym_EOT] = ACTIONS(338),
    [anon_sym_ENQ] = ACTIONS(338),
    [anon_sym_ACK] = ACTIONS(338),
    [anon_sym_BEL] = ACTIONS(338),
    [anon_sym_BS] = ACTIONS(338),
    [anon_sym_HT] = ACTIONS(338),
    [anon_sym_LF] = ACTIONS(338),
    [anon_sym_VT] = ACTIONS(338),
    [anon_sym_FF] = ACTIONS(338),
    [anon_sym_CR] = ACTIONS(338),
    [anon_sym_SO] = ACTIONS(338),
    [anon_sym_SI] = ACTIONS(338),
    [anon_sym_DLE] = ACTIONS(338),
    [anon_sym_DC1] = ACTIONS(338),
    [anon_sym_DC2] = ACTIONS(338),
    [anon_sym_DC3] = ACTIONS(338),
    [anon_sym_DC4] = ACTIONS(338),
    [anon_sym_NAK] = ACTIONS(338),
    [anon_sym_SYN] = ACTIONS(338),
    [anon_sym_ETB] = ACTIONS(338),
    [anon_sym_CAN] = ACTIONS(338),
    [anon_sym_EM] = ACTIONS(338),
    [anon_sym_SUB] = ACTIONS(338),
    [anon_sym_ESC] = ACTIONS(338),
    [anon_sym_FS] = ACTIONS(338),
    [anon_sym_GS] = ACTIONS(338),
    [anon_sym_RS] = ACTIONS(338),
    [anon_sym_US] = ACTIONS(338),
    [anon_sym_SP] = ACTIONS(338),
    [anon_sym_DEL] = ACTIONS(338),
  },
  [82] = {
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
  [83] = {
    [sym__gap] = STATE(162),
    [sym__graphic] = STATE(162),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(162),
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
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(344),
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
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_import] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_foreign] = ACTIONS(346),
    [anon_sym_default] = ACTIONS(346),
    [anon_sym_do] = ACTIONS(346),
    [anon_sym_class] = ACTIONS(346),
    [anon_sym_instance] = ACTIONS(346),
    [anon_sym_infixl] = ACTIONS(346),
    [anon_sym_infixr] = ACTIONS(346),
    [anon_sym_infix] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_data] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_newtype] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [sym_variable_identifier] = ACTIONS(346),
    [sym_constructor_identifier] = ACTIONS(346),
    [sym_module_identifier] = ACTIONS(346),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_1] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_BSLASH] = ACTIONS(346),
    [sym__integer_literal] = ACTIONS(346),
    [sym__octal_literal] = ACTIONS(346),
    [sym__hexidecimal_literal] = ACTIONS(346),
  },
  [85] = {
    [sym__identifier] = STATE(165),
    [aux_sym_function_binding_repeat1] = STATE(166),
    [sym__layout_semicolon] = ACTIONS(348),
    [anon_sym_SEMI] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(52),
  },
  [86] = {
    [anon_sym_EQ] = ACTIONS(356),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(52),
  },
  [87] = {
    [sym__identifier] = STATE(168),
    [anon_sym_EQ] = ACTIONS(360),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [88] = {
    [sym__type] = STATE(171),
    [sym_function_type] = STATE(172),
    [sym_context] = STATE(173),
    [sym_class] = STATE(46),
    [sym_simple_type] = STATE(174),
    [aux_sym_function_type_repeat1] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(52),
  },
  [89] = {
    [sym__layout_semicolon] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(368),
    [sym_comment] = ACTIONS(52),
  },
  [90] = {
    [anon_sym_EQ] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(178),
    [sym_module_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(52),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [sym_variable_identifier] = ACTIONS(372),
    [sym_constructor_identifier] = ACTIONS(372),
    [sym_module_identifier] = ACTIONS(372),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_1] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
    [anon_sym_BSLASH] = ACTIONS(372),
  },
  [92] = {
    [sym_declarations] = STATE(179),
    [sym__layout_open_brace] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(376),
    [sym_comment] = ACTIONS(52),
  },
  [93] = {
    [sym_export] = STATE(182),
    [sym__identifier] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [94] = {
    [anon_sym_where] = ACTIONS(384),
    [sym_comment] = ACTIONS(52),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(386),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_constructor_identifier] = ACTIONS(388),
    [sym_module_identifier] = ACTIONS(388),
    [sym_comment] = ACTIONS(52),
  },
  [96] = {
    [sym_import_specification] = STATE(186),
    [sym__layout_semicolon] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_as] = ACTIONS(394),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [97] = {
    [sym__identifier] = STATE(188),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [98] = {
    [sym__identifier] = STATE(189),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(52),
  },
  [100] = {
    [sym__layout_semicolon] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(52),
  },
  [101] = {
    [anon_sym_unsafe] = ACTIONS(400),
    [anon_sym_safe] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(402),
    [sym_constructor_identifier] = ACTIONS(402),
    [sym_module_identifier] = ACTIONS(402),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(400),
  },
  [102] = {
    [sym_safety] = STATE(193),
    [sym_type_signature] = STATE(194),
    [sym__identifier] = STATE(28),
    [sym_string] = STATE(195),
    [anon_sym_unsafe] = ACTIONS(404),
    [anon_sym_safe] = ACTIONS(404),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(406),
  },
  [103] = {
    [sym__layout_semicolon] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_comment] = ACTIONS(52),
  },
  [104] = {
    [aux_sym_export_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(52),
  },
  [105] = {
    [sym__layout_semicolon] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(418),
    [sym_comment] = ACTIONS(52),
  },
  [106] = {
    [sym__layout_semicolon] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(52),
  },
  [107] = {
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
  [108] = {
    [sym__expression] = STATE(106),
    [sym_do_expression] = STATE(26),
    [sym__statement] = STATE(201),
    [sym__literal] = STATE(26),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__layout_close_brace] = ACTIONS(430),
    [anon_sym_do] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [109] = {
    [sym__layout_semicolon] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [sym_comment] = ACTIONS(52),
  },
  [110] = {
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
  [111] = {
    [sym__expression] = STATE(109),
    [sym_do_expression] = STATE(26),
    [sym__statement] = STATE(203),
    [sym__literal] = STATE(26),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_RBRACE] = ACTIONS(436),
    [anon_sym_do] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(52),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(52),
  },
  [114] = {
    [sym_general_declarations] = STATE(210),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [115] = {
    [aux_sym_type_class_repeat1] = STATE(211),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(52),
  },
  [116] = {
    [anon_sym_where] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [117] = {
    [anon_sym_where] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [118] = {
    [aux_sym_type_class_repeat1] = STATE(215),
    [anon_sym_where] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [119] = {
    [sym_variable_identifier] = ACTIONS(460),
    [sym_constructor_identifier] = ACTIONS(462),
    [sym_comment] = ACTIONS(52),
  },
  [120] = {
    [sym_general_declarations] = STATE(216),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [121] = {
    [anon_sym_where] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [122] = {
    [aux_sym_type_class_repeat1] = STATE(218),
    [anon_sym_where] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(458),
    [sym_comment] = ACTIONS(52),
  },
  [123] = {
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(220),
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
  [124] = {
    [sym__symbol] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(178),
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
  [125] = {
    [anon_sym_BQUOTE] = ACTIONS(476),
    [sym_comment] = ACTIONS(52),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(478),
    [anon_sym_COMMA] = ACTIONS(478),
    [sym_comment] = ACTIONS(52),
  },
  [127] = {
    [sym__symbol] = STATE(132),
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
  [128] = {
    [sym__op] = STATE(223),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
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
  [129] = {
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [130] = {
    [aux_sym_fixity_repeat1] = STATE(225),
    [sym__layout_semicolon] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(250),
    [sym_comment] = ACTIONS(52),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(52),
  },
  [132] = {
    [sym__layout_semicolon] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_1] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
    [anon_sym_BSLASH] = ACTIONS(372),
  },
  [133] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [134] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_EQ] = ACTIONS(492),
    [anon_sym_deriving] = ACTIONS(492),
    [sym_variable_identifier] = ACTIONS(494),
    [sym_constructor_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(52),
  },
  [135] = {
    [aux_sym_type_class_repeat1] = STATE(134),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_deriving] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(498),
    [sym_constructor_identifier] = ACTIONS(268),
    [sym_comment] = ACTIONS(52),
  },
  [136] = {
    [sym_constructors] = STATE(229),
    [sym_constructor] = STATE(141),
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_EQ] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [137] = {
    [sym_constructors] = STATE(229),
    [sym_constructor] = STATE(141),
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [138] = {
    [sym__identifier] = STATE(232),
    [anon_sym_LPAREN] = ACTIONS(506),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [139] = {
    [sym_strict] = STATE(236),
    [sym__identifier] = STATE(236),
    [sym_fields] = STATE(237),
    [aux_sym_constructor_repeat1] = STATE(238),
    [sym__layout_semicolon] = ACTIONS(508),
    [anon_sym_SEMI] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_deriving] = ACTIONS(510),
    [anon_sym_BANG] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(516),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(52),
  },
  [140] = {
    [sym_deriving] = STATE(230),
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(52),
  },
  [141] = {
    [aux_sym_constructors_repeat1] = STATE(240),
    [sym__layout_semicolon] = ACTIONS(518),
    [anon_sym_SEMI] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_deriving] = ACTIONS(520),
    [sym_comment] = ACTIONS(52),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(502),
    [sym_comment] = ACTIONS(52),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(492),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(52),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(526),
    [sym_comment] = ACTIONS(52),
  },
  [146] = {
    [sym_new_constructor] = STATE(244),
    [sym_constructor_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(52),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [148] = {
    [sym__type] = STATE(246),
    [sym_function_type] = STATE(172),
    [sym_simple_type] = STATE(174),
    [aux_sym_function_type_repeat1] = STATE(175),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [149] = {
    [sym__layout_semicolon] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(534),
    [sym_comment] = ACTIONS(52),
  },
  [150] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(536),
  },
  [151] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(538),
  },
  [152] = {
    [sym__cntrl] = STATE(248),
    [anon_sym_AT] = ACTIONS(540),
    [anon_sym__] = ACTIONS(540),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(540),
    [anon_sym_CARET] = ACTIONS(540),
    [anon_sym_BSLASH] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(540),
    [anon_sym_RBRACK] = ACTIONS(540),
  },
  [153] = {
    [aux_sym__escape_repeat1] = STATE(250),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(542),
  },
  [154] = {
    [aux_sym__escape_repeat2] = STATE(252),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(544),
  },
  [155] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(546),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(548),
    [anon_sym_LPAREN] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_EQ] = ACTIONS(548),
    [anon_sym_AT] = ACTIONS(548),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym__] = ACTIONS(548),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(548),
    [anon_sym_BANG] = ACTIONS(548),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(548),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(548),
    [sym__ascii_large] = ACTIONS(548),
    [anon_sym_POUND] = ACTIONS(548),
    [anon_sym_DOLLAR] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(548),
    [anon_sym_AMP] = ACTIONS(548),
    [anon_sym_1] = ACTIONS(548),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_LT] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(548),
    [anon_sym_QMARK] = ACTIONS(548),
    [anon_sym_CARET] = ACTIONS(548),
    [anon_sym_TILDE] = ACTIONS(548),
    [anon_sym_BSLASH] = ACTIONS(548),
    [anon_sym_LBRACK] = ACTIONS(548),
    [anon_sym_RBRACK] = ACTIONS(548),
    [sym__space] = ACTIONS(548),
    [sym__newline] = ACTIONS(548),
    [sym__tab] = ACTIONS(548),
    [sym__vertical_tab] = ACTIONS(548),
  },
  [157] = {
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
  [158] = {
    [sym__cntrl] = STATE(254),
    [anon_sym_AT] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [sym_comment] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(552),
    [anon_sym_CARET] = ACTIONS(552),
    [anon_sym_BSLASH] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
  },
  [159] = {
    [aux_sym__escape_repeat1] = STATE(256),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(554),
  },
  [160] = {
    [aux_sym__escape_repeat2] = STATE(258),
    [sym_comment] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(556),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_RBRACE] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_RPAREN] = ACTIONS(558),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_AT] = ACTIONS(558),
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
  [162] = {
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
  [163] = {
    [sym__layout_semicolon] = ACTIONS(562),
    [anon_sym_SEMI] = ACTIONS(564),
    [sym_comment] = ACTIONS(52),
  },
  [164] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(52),
  },
  [165] = {
    [sym__layout_semicolon] = ACTIONS(566),
    [anon_sym_SEMI] = ACTIONS(356),
    [sym_variable_identifier] = ACTIONS(356),
    [sym_constructor_identifier] = ACTIONS(358),
    [sym_module_identifier] = ACTIONS(358),
    [sym_comment] = ACTIONS(52),
  },
  [166] = {
    [sym__identifier] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(52),
  },
  [167] = {
    [sym__identifier] = STATE(165),
    [aux_sym_function_binding_repeat1] = STATE(260),
    [sym__layout_semicolon] = ACTIONS(568),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(52),
  },
  [168] = {
    [anon_sym_EQ] = ACTIONS(572),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_constructor_identifier] = ACTIONS(574),
    [sym_module_identifier] = ACTIONS(574),
    [sym_comment] = ACTIONS(52),
  },
  [169] = {
    [anon_sym_DASH_GT] = ACTIONS(576),
    [sym_variable_identifier] = ACTIONS(576),
    [sym_comment] = ACTIONS(52),
  },
  [170] = {
    [aux_sym_type_class_repeat1] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(578),
    [sym_comment] = ACTIONS(52),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(582),
    [sym_comment] = ACTIONS(52),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_comment] = ACTIONS(52),
  },
  [173] = {
    [sym__type] = STATE(263),
    [sym_function_type] = STATE(172),
    [sym_simple_type] = STATE(174),
    [aux_sym_function_type_repeat1] = STATE(175),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [174] = {
    [sym__layout_semicolon] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(586),
    [anon_sym_DASH_GT] = ACTIONS(588),
    [sym_comment] = ACTIONS(52),
  },
  [175] = {
    [anon_sym_DASH_GT] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_comment] = ACTIONS(52),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_import] = ACTIONS(592),
    [anon_sym_EQ] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
    [anon_sym_DASH] = ACTIONS(592),
    [anon_sym_foreign] = ACTIONS(592),
    [anon_sym_default] = ACTIONS(592),
    [anon_sym_do] = ACTIONS(592),
    [anon_sym_class] = ACTIONS(592),
    [anon_sym_instance] = ACTIONS(592),
    [anon_sym_infixl] = ACTIONS(592),
    [anon_sym_infixr] = ACTIONS(592),
    [anon_sym_infix] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [anon_sym_data] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(592),
    [anon_sym_newtype] = ACTIONS(592),
    [anon_sym_BANG] = ACTIONS(592),
    [anon_sym_type] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(592),
    [sym_constructor_identifier] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(592),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_DOLLAR] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(592),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_1] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_SLASH] = ACTIONS(592),
    [anon_sym_LT] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(592),
    [sym__octal_literal] = ACTIONS(592),
    [sym__hexidecimal_literal] = ACTIONS(592),
  },
  [177] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(267),
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_module_repeat1] = STATE(268),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(594),
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
  [178] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(23),
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_module_repeat1] = STATE(269),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(596),
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
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [sym_comment] = ACTIONS(52),
  },
  [180] = {
    [anon_sym_where] = ACTIONS(600),
    [sym_comment] = ACTIONS(52),
  },
  [181] = {
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_comment] = ACTIONS(52),
  },
  [182] = {
    [aux_sym_module_exports_repeat1] = STATE(272),
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym_comment] = ACTIONS(52),
  },
  [183] = {
    [anon_sym_LPAREN] = ACTIONS(606),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym_comment] = ACTIONS(52),
  },
  [184] = {
    [sym_declarations] = STATE(274),
    [sym__layout_open_brace] = ACTIONS(374),
    [anon_sym_LBRACE] = ACTIONS(376),
    [sym_comment] = ACTIONS(52),
  },
  [185] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [186] = {
    [sym__layout_semicolon] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(612),
    [sym_comment] = ACTIONS(52),
  },
  [187] = {
    [sym__layout_semicolon] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(616),
    [sym_comment] = ACTIONS(52),
  },
  [188] = {
    [aux_sym_import_specification_repeat1] = STATE(279),
    [anon_sym_LPAREN] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_comment] = ACTIONS(52),
  },
  [189] = {
    [sym_import_specification] = STATE(280),
    [sym__layout_semicolon] = ACTIONS(610),
    [anon_sym_SEMI] = ACTIONS(612),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [190] = {
    [sym__identifier] = STATE(281),
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [191] = {
    [sym_variable_identifier] = ACTIONS(624),
    [sym_constructor_identifier] = ACTIONS(626),
    [sym_module_identifier] = ACTIONS(626),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(624),
  },
  [192] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(77),
    [aux_sym_string_repeat1] = STATE(283),
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
    [anon_sym_DQUOTE] = ACTIONS(628),
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
  [193] = {
    [sym_type_signature] = STATE(284),
    [sym__identifier] = STATE(28),
    [sym_string] = STATE(285),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(406),
  },
  [194] = {
    [sym__layout_semicolon] = ACTIONS(630),
    [anon_sym_SEMI] = ACTIONS(632),
    [sym_comment] = ACTIONS(52),
  },
  [195] = {
    [sym_type_signature] = STATE(284),
    [sym__identifier] = STATE(28),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [196] = {
    [sym__identifier] = STATE(286),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(634),
    [anon_sym_SEMI] = ACTIONS(636),
    [sym_comment] = ACTIONS(52),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(640),
    [sym_comment] = ACTIONS(52),
  },
  [199] = {
    [sym__layout_close_brace] = ACTIONS(642),
    [anon_sym_do] = ACTIONS(644),
    [sym_variable_identifier] = ACTIONS(646),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [sym__integer_literal] = ACTIONS(644),
    [sym__octal_literal] = ACTIONS(644),
    [sym__hexidecimal_literal] = ACTIONS(644),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(648),
    [anon_sym_SEMI] = ACTIONS(650),
    [sym_comment] = ACTIONS(52),
  },
  [201] = {
    [sym__layout_close_brace] = ACTIONS(652),
    [anon_sym_do] = ACTIONS(654),
    [sym_variable_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(656),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [sym__integer_literal] = ACTIONS(654),
    [sym__octal_literal] = ACTIONS(654),
    [sym__hexidecimal_literal] = ACTIONS(654),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(644),
    [anon_sym_do] = ACTIONS(644),
    [sym_variable_identifier] = ACTIONS(646),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(644),
    [sym__integer_literal] = ACTIONS(644),
    [sym__octal_literal] = ACTIONS(644),
    [sym__hexidecimal_literal] = ACTIONS(644),
  },
  [203] = {
    [anon_sym_RBRACE] = ACTIONS(654),
    [anon_sym_do] = ACTIONS(654),
    [sym_variable_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(52),
    [sym_float] = ACTIONS(656),
    [anon_sym_SQUOTE] = ACTIONS(654),
    [anon_sym_DQUOTE] = ACTIONS(654),
    [sym__integer_literal] = ACTIONS(654),
    [sym__octal_literal] = ACTIONS(654),
    [sym__hexidecimal_literal] = ACTIONS(654),
  },
  [204] = {
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(52),
  },
  [205] = {
    [sym_class] = STATE(289),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
  },
  [206] = {
    [anon_sym_EQ_GT] = ACTIONS(658),
    [sym_comment] = ACTIONS(52),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(52),
  },
  [208] = {
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__general_declaration] = STATE(295),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(28),
    [sym__symbol] = STATE(29),
    [aux_sym_general_declarations_repeat1] = STATE(296),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(664),
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
    [sym_variable_identifier] = ACTIONS(666),
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
  [209] = {
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__general_declaration] = STATE(297),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(28),
    [sym__symbol] = STATE(29),
    [aux_sym_general_declarations_repeat1] = STATE(298),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(668),
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
    [sym_variable_identifier] = ACTIONS(666),
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
  [210] = {
    [sym__layout_semicolon] = ACTIONS(670),
    [anon_sym_SEMI] = ACTIONS(672),
    [sym_comment] = ACTIONS(52),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_variable_identifier] = ACTIONS(524),
    [sym_comment] = ACTIONS(52),
  },
  [212] = {
    [sym_general_declarations] = STATE(300),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [213] = {
    [anon_sym_where] = ACTIONS(676),
    [sym_variable_identifier] = ACTIONS(678),
    [sym_comment] = ACTIONS(52),
  },
  [214] = {
    [anon_sym_where] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [215] = {
    [anon_sym_where] = ACTIONS(680),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [216] = {
    [sym__layout_semicolon] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(684),
    [sym_comment] = ACTIONS(52),
  },
  [217] = {
    [sym_general_declarations] = STATE(302),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [218] = {
    [anon_sym_where] = ACTIONS(686),
    [sym_variable_identifier] = ACTIONS(456),
    [sym_comment] = ACTIONS(52),
  },
  [219] = {
    [sym__layout_semicolon] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
    [sym_comment] = ACTIONS(52),
  },
  [220] = {
    [sym__symbol] = STATE(132),
    [sym__layout_semicolon] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(692),
    [anon_sym_COMMA] = ACTIONS(692),
    [anon_sym_RPAREN] = ACTIONS(694),
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
  [221] = {
    [sym__layout_semicolon] = ACTIONS(696),
    [anon_sym_SEMI] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_comment] = ACTIONS(52),
  },
  [222] = {
    [sym__layout_semicolon] = ACTIONS(698),
    [anon_sym_SEMI] = ACTIONS(700),
    [anon_sym_COMMA] = ACTIONS(700),
    [sym_comment] = ACTIONS(52),
  },
  [223] = {
    [sym__layout_semicolon] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_COMMA] = ACTIONS(704),
    [sym_comment] = ACTIONS(52),
  },
  [224] = {
    [sym__op] = STATE(305),
    [sym_variable_symbol] = STATE(55),
    [sym_constructor_symbol] = STATE(55),
    [sym__symbol] = STATE(57),
    [aux_sym_variable_symbol_repeat1] = STATE(58),
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
  [225] = {
    [sym__layout_semicolon] = ACTIONS(706),
    [anon_sym_SEMI] = ACTIONS(708),
    [anon_sym_COMMA] = ACTIONS(484),
    [sym_comment] = ACTIONS(52),
  },
  [226] = {
    [sym__layout_semicolon] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(676),
    [anon_sym_deriving] = ACTIONS(676),
    [sym_variable_identifier] = ACTIONS(678),
    [sym_constructor_identifier] = ACTIONS(678),
    [sym_comment] = ACTIONS(52),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_EQ] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(52),
  },
  [228] = {
    [sym_constructors] = STATE(306),
    [sym_constructor] = STATE(141),
    [sym_deriving] = STATE(307),
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [229] = {
    [sym_deriving] = STATE(307),
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(52),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [sym_comment] = ACTIONS(52),
  },
  [231] = {
    [sym__identifier] = STATE(308),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [232] = {
    [sym__layout_semicolon] = ACTIONS(716),
    [anon_sym_SEMI] = ACTIONS(718),
    [sym_comment] = ACTIONS(52),
  },
  [233] = {
    [sym_field] = STATE(310),
    [sym_variable_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(52),
  },
  [234] = {
    [sym__identifier] = STATE(311),
    [sym_variable_identifier] = ACTIONS(722),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(52),
  },
  [235] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_deriving] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(102),
    [sym_constructor_identifier] = ACTIONS(102),
    [sym_module_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(52),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(724),
    [anon_sym_SEMI] = ACTIONS(726),
    [anon_sym_PIPE] = ACTIONS(726),
    [anon_sym_deriving] = ACTIONS(726),
    [anon_sym_BANG] = ACTIONS(726),
    [sym_variable_identifier] = ACTIONS(728),
    [sym_constructor_identifier] = ACTIONS(728),
    [sym_module_identifier] = ACTIONS(728),
    [sym_comment] = ACTIONS(52),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(730),
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_PIPE] = ACTIONS(732),
    [anon_sym_deriving] = ACTIONS(732),
    [sym_comment] = ACTIONS(52),
  },
  [238] = {
    [sym_strict] = STATE(312),
    [sym__identifier] = STATE(312),
    [sym__layout_semicolon] = ACTIONS(730),
    [anon_sym_SEMI] = ACTIONS(732),
    [anon_sym_PIPE] = ACTIONS(732),
    [anon_sym_deriving] = ACTIONS(732),
    [anon_sym_BANG] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(516),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [sym_comment] = ACTIONS(52),
  },
  [239] = {
    [sym_constructor] = STATE(313),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_PIPE] = ACTIONS(738),
    [anon_sym_deriving] = ACTIONS(736),
    [sym_comment] = ACTIONS(52),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(676),
    [anon_sym_EQ] = ACTIONS(676),
    [sym_variable_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(52),
  },
  [242] = {
    [sym_new_constructor] = STATE(315),
    [sym_constructor_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(52),
  },
  [243] = {
    [sym__identifier] = STATE(316),
    [sym_fields] = STATE(316),
    [anon_sym_LBRACE] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(52),
  },
  [244] = {
    [sym_deriving] = STATE(317),
    [sym__layout_semicolon] = ACTIONS(740),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(52),
  },
  [245] = {
    [aux_sym_type_class_repeat1] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [sym_variable_identifier] = ACTIONS(744),
    [sym_comment] = ACTIONS(52),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(746),
    [anon_sym_SEMI] = ACTIONS(748),
    [sym_comment] = ACTIONS(52),
  },
  [247] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(750),
  },
  [248] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(752),
  },
  [249] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(754),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(754),
  },
  [250] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(758),
  },
  [251] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(760),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(760),
  },
  [252] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(756),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(762),
  },
  [253] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_LBRACE] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(764),
    [anon_sym_LPAREN] = ACTIONS(764),
    [anon_sym_RPAREN] = ACTIONS(764),
    [anon_sym_EQ] = ACTIONS(764),
    [anon_sym_AT] = ACTIONS(764),
    [anon_sym_BQUOTE] = ACTIONS(764),
    [anon_sym_DASH] = ACTIONS(764),
    [anon_sym__] = ACTIONS(764),
    [anon_sym_COLON] = ACTIONS(764),
    [anon_sym_PIPE] = ACTIONS(764),
    [anon_sym_BANG] = ACTIONS(764),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(764),
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
    [anon_sym_CARET] = ACTIONS(764),
    [anon_sym_TILDE] = ACTIONS(764),
    [anon_sym_BSLASH] = ACTIONS(764),
    [anon_sym_LBRACK] = ACTIONS(764),
    [anon_sym_RBRACK] = ACTIONS(764),
    [sym__space] = ACTIONS(764),
    [sym__newline] = ACTIONS(764),
    [sym__tab] = ACTIONS(764),
    [sym__vertical_tab] = ACTIONS(764),
  },
  [254] = {
    [anon_sym_SEMI] = ACTIONS(766),
    [anon_sym_LBRACE] = ACTIONS(766),
    [anon_sym_RBRACE] = ACTIONS(766),
    [anon_sym_LPAREN] = ACTIONS(766),
    [anon_sym_RPAREN] = ACTIONS(766),
    [anon_sym_EQ] = ACTIONS(766),
    [anon_sym_AT] = ACTIONS(766),
    [anon_sym_BQUOTE] = ACTIONS(766),
    [anon_sym_DASH] = ACTIONS(766),
    [anon_sym__] = ACTIONS(766),
    [anon_sym_COLON] = ACTIONS(766),
    [anon_sym_PIPE] = ACTIONS(766),
    [anon_sym_BANG] = ACTIONS(766),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(766),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(766),
    [sym__ascii_large] = ACTIONS(766),
    [anon_sym_POUND] = ACTIONS(766),
    [anon_sym_DOLLAR] = ACTIONS(766),
    [anon_sym_PERCENT] = ACTIONS(766),
    [anon_sym_AMP] = ACTIONS(766),
    [anon_sym_1] = ACTIONS(766),
    [anon_sym_PLUS] = ACTIONS(766),
    [anon_sym_DOT] = ACTIONS(766),
    [anon_sym_SLASH] = ACTIONS(766),
    [anon_sym_LT] = ACTIONS(766),
    [anon_sym_GT] = ACTIONS(766),
    [anon_sym_QMARK] = ACTIONS(766),
    [anon_sym_CARET] = ACTIONS(766),
    [anon_sym_TILDE] = ACTIONS(766),
    [anon_sym_BSLASH] = ACTIONS(766),
    [anon_sym_LBRACK] = ACTIONS(766),
    [anon_sym_RBRACK] = ACTIONS(766),
    [sym__space] = ACTIONS(766),
    [sym__newline] = ACTIONS(766),
    [sym__tab] = ACTIONS(766),
    [sym__vertical_tab] = ACTIONS(766),
  },
  [255] = {
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_LBRACE] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [anon_sym_EQ] = ACTIONS(768),
    [anon_sym_AT] = ACTIONS(768),
    [anon_sym_BQUOTE] = ACTIONS(768),
    [anon_sym_DASH] = ACTIONS(768),
    [anon_sym__] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(768),
    [anon_sym_PIPE] = ACTIONS(768),
    [anon_sym_BANG] = ACTIONS(768),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(768),
    [sym__ascii_large] = ACTIONS(768),
    [anon_sym_POUND] = ACTIONS(768),
    [anon_sym_DOLLAR] = ACTIONS(768),
    [anon_sym_PERCENT] = ACTIONS(768),
    [anon_sym_AMP] = ACTIONS(768),
    [anon_sym_1] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(768),
    [anon_sym_DOT] = ACTIONS(768),
    [anon_sym_SLASH] = ACTIONS(768),
    [anon_sym_LT] = ACTIONS(768),
    [anon_sym_GT] = ACTIONS(768),
    [anon_sym_QMARK] = ACTIONS(768),
    [anon_sym_CARET] = ACTIONS(768),
    [anon_sym_TILDE] = ACTIONS(768),
    [anon_sym_BSLASH] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym__space] = ACTIONS(768),
    [sym__newline] = ACTIONS(768),
    [sym__tab] = ACTIONS(768),
    [sym__vertical_tab] = ACTIONS(768),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(768),
  },
  [256] = {
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(772),
  },
  [257] = {
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(774),
  },
  [258] = {
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(776),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(778),
    [anon_sym_SEMI] = ACTIONS(572),
    [sym_variable_identifier] = ACTIONS(572),
    [sym_constructor_identifier] = ACTIONS(574),
    [sym_module_identifier] = ACTIONS(574),
    [sym_comment] = ACTIONS(52),
  },
  [260] = {
    [sym__identifier] = STATE(259),
    [sym__layout_semicolon] = ACTIONS(780),
    [anon_sym_SEMI] = ACTIONS(782),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(354),
    [sym_module_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(52),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_DASH_GT] = ACTIONS(492),
    [sym_variable_identifier] = ACTIONS(784),
    [sym_comment] = ACTIONS(52),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(788),
    [sym_comment] = ACTIONS(52),
  },
  [264] = {
    [sym__type] = STATE(325),
    [sym_function_type] = STATE(172),
    [sym_simple_type] = STATE(174),
    [aux_sym_function_type_repeat1] = STATE(326),
    [sym_variable_identifier] = ACTIONS(790),
    [sym_constructor_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(52),
  },
  [265] = {
    [anon_sym_DASH_GT] = ACTIONS(792),
    [sym_variable_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(52),
  },
  [266] = {
    [ts_builtin_sym_end] = ACTIONS(794),
    [sym_comment] = ACTIONS(52),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(796),
    [anon_sym_SEMI] = ACTIONS(798),
    [sym_comment] = ACTIONS(52),
  },
  [268] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(329),
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(800),
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
  [269] = {
    [sym_import] = STATE(22),
    [sym__declaration] = STATE(89),
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__expression] = STATE(22),
    [sym_foreign] = STATE(22),
    [sym_default] = STATE(22),
    [sym_do_expression] = STATE(26),
    [sym_type_class] = STATE(22),
    [sym_type_class_instance] = STATE(22),
    [sym__general_declaration] = STATE(22),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(22),
    [sym_newtype] = STATE(22),
    [sym_type_synonym] = STATE(22),
    [sym__literal] = STATE(26),
    [sym__identifier] = STATE(28),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_string] = STATE(17),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(802),
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
  [270] = {
    [sym_export] = STATE(330),
    [sym__identifier] = STATE(183),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [271] = {
    [anon_sym_where] = ACTIONS(804),
    [sym_comment] = ACTIONS(52),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(806),
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(52),
  },
  [273] = {
    [sym__identifier] = STATE(334),
    [anon_sym_DOT_DOT] = ACTIONS(810),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(812),
    [sym_comment] = ACTIONS(52),
  },
  [275] = {
    [sym_import_specification] = STATE(335),
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_hiding] = ACTIONS(192),
    [sym_comment] = ACTIONS(52),
  },
  [276] = {
    [sym__identifier] = STATE(337),
    [anon_sym_DOT_DOT] = ACTIONS(818),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [277] = {
    [sym__identifier] = STATE(338),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(820),
    [anon_sym_SEMI] = ACTIONS(822),
    [sym_comment] = ACTIONS(52),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(52),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(814),
    [anon_sym_SEMI] = ACTIONS(816),
    [sym_comment] = ACTIONS(52),
  },
  [281] = {
    [aux_sym_import_specification_repeat1] = STATE(342),
    [anon_sym_LPAREN] = ACTIONS(828),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym_comment] = ACTIONS(52),
  },
  [282] = {
    [sym_variable_identifier] = ACTIONS(322),
    [sym_constructor_identifier] = ACTIONS(830),
    [sym_module_identifier] = ACTIONS(830),
    [sym_comment] = ACTIONS(52),
  },
  [283] = {
    [sym__gap] = STATE(162),
    [sym__graphic] = STATE(162),
    [sym__small] = STATE(79),
    [sym__large] = STATE(79),
    [sym__symbol] = STATE(79),
    [sym__special] = STATE(79),
    [sym__escape] = STATE(162),
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
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(832),
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
  [284] = {
    [sym__layout_semicolon] = ACTIONS(834),
    [anon_sym_SEMI] = ACTIONS(836),
    [sym_comment] = ACTIONS(52),
  },
  [285] = {
    [sym_type_signature] = STATE(344),
    [sym__identifier] = STATE(28),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [286] = {
    [anon_sym_COMMA] = ACTIONS(838),
    [anon_sym_RPAREN] = ACTIONS(838),
    [sym_comment] = ACTIONS(52),
  },
  [287] = {
    [sym__identifier] = STATE(345),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(840),
    [anon_sym_SEMI] = ACTIONS(842),
    [sym_comment] = ACTIONS(52),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(844),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(52),
  },
  [290] = {
    [sym_variable_identifier] = ACTIONS(846),
    [sym_constructor_identifier] = ACTIONS(848),
    [sym_comment] = ACTIONS(52),
  },
  [291] = {
    [sym_class] = STATE(346),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_comment] = ACTIONS(52),
  },
  [292] = {
    [anon_sym_EQ_GT] = ACTIONS(850),
    [sym_comment] = ACTIONS(52),
  },
  [293] = {
    [sym__layout_semicolon] = ACTIONS(852),
    [anon_sym_SEMI] = ACTIONS(854),
    [sym_comment] = ACTIONS(52),
  },
  [294] = {
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COLON_COLON] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(100),
    [sym_module_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(52),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(856),
    [anon_sym_SEMI] = ACTIONS(858),
    [sym_comment] = ACTIONS(52),
  },
  [296] = {
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__general_declaration] = STATE(350),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(28),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [sym__layout_close_brace] = ACTIONS(860),
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
    [sym_variable_identifier] = ACTIONS(666),
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
  [297] = {
    [sym__layout_semicolon] = ACTIONS(862),
    [anon_sym_SEMI] = ACTIONS(864),
    [sym_comment] = ACTIONS(52),
  },
  [298] = {
    [sym_function_binding] = STATE(24),
    [sym__var] = STATE(25),
    [sym__general_declaration] = STATE(352),
    [sym_fixity] = STATE(24),
    [sym_variable_symbol] = STATE(27),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(28),
    [sym__symbol] = STATE(29),
    [aux_sym_variable_symbol_repeat1] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(866),
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
    [sym_variable_identifier] = ACTIONS(666),
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
  [299] = {
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_EQ_GT] = ACTIONS(868),
    [sym_comment] = ACTIONS(52),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(870),
    [anon_sym_SEMI] = ACTIONS(872),
    [sym_comment] = ACTIONS(52),
  },
  [301] = {
    [sym_general_declarations] = STATE(353),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [302] = {
    [sym__layout_semicolon] = ACTIONS(874),
    [anon_sym_SEMI] = ACTIONS(876),
    [sym_comment] = ACTIONS(52),
  },
  [303] = {
    [sym_general_declarations] = STATE(354),
    [sym__layout_open_brace] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(52),
  },
  [304] = {
    [sym__layout_semicolon] = ACTIONS(878),
    [anon_sym_SEMI] = ACTIONS(880),
    [anon_sym_COMMA] = ACTIONS(880),
    [sym_comment] = ACTIONS(52),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(882),
    [anon_sym_SEMI] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(884),
    [sym_comment] = ACTIONS(52),
  },
  [306] = {
    [sym_deriving] = STATE(355),
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(888),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(52),
  },
  [307] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(888),
    [sym_comment] = ACTIONS(52),
  },
  [308] = {
    [aux_sym_export_repeat1] = STATE(357),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(890),
    [sym_comment] = ACTIONS(52),
  },
  [309] = {
    [aux_sym_field_repeat1] = STATE(360),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(894),
    [sym_comment] = ACTIONS(52),
  },
  [310] = {
    [aux_sym_fields_repeat1] = STATE(363),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(898),
    [sym_comment] = ACTIONS(52),
  },
  [311] = {
    [sym__layout_semicolon] = ACTIONS(900),
    [anon_sym_SEMI] = ACTIONS(902),
    [anon_sym_PIPE] = ACTIONS(902),
    [anon_sym_deriving] = ACTIONS(902),
    [anon_sym_BANG] = ACTIONS(902),
    [sym_variable_identifier] = ACTIONS(904),
    [sym_constructor_identifier] = ACTIONS(904),
    [sym_module_identifier] = ACTIONS(904),
    [sym_comment] = ACTIONS(52),
  },
  [312] = {
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
  [313] = {
    [sym__layout_semicolon] = ACTIONS(912),
    [anon_sym_SEMI] = ACTIONS(914),
    [anon_sym_PIPE] = ACTIONS(914),
    [anon_sym_deriving] = ACTIONS(914),
    [sym_comment] = ACTIONS(52),
  },
  [314] = {
    [sym_constructor] = STATE(364),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(52),
  },
  [315] = {
    [sym_deriving] = STATE(365),
    [sym__layout_semicolon] = ACTIONS(916),
    [anon_sym_SEMI] = ACTIONS(918),
    [anon_sym_deriving] = ACTIONS(278),
    [sym_comment] = ACTIONS(52),
  },
  [316] = {
    [sym__layout_semicolon] = ACTIONS(920),
    [anon_sym_SEMI] = ACTIONS(922),
    [anon_sym_deriving] = ACTIONS(922),
    [sym_comment] = ACTIONS(52),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(916),
    [anon_sym_SEMI] = ACTIONS(918),
    [sym_comment] = ACTIONS(52),
  },
  [318] = {
    [sym__layout_semicolon] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_comment] = ACTIONS(52),
  },
  [319] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(924),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(924),
  },
  [320] = {
    [sym_comment] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(926),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(926),
  },
  [321] = {
    [anon_sym_SEMI] = ACTIONS(928),
    [anon_sym_LBRACE] = ACTIONS(928),
    [anon_sym_RBRACE] = ACTIONS(928),
    [anon_sym_LPAREN] = ACTIONS(928),
    [anon_sym_RPAREN] = ACTIONS(928),
    [anon_sym_EQ] = ACTIONS(928),
    [anon_sym_AT] = ACTIONS(928),
    [anon_sym_BQUOTE] = ACTIONS(928),
    [anon_sym_DASH] = ACTIONS(928),
    [anon_sym__] = ACTIONS(928),
    [anon_sym_COLON] = ACTIONS(928),
    [anon_sym_PIPE] = ACTIONS(928),
    [anon_sym_BANG] = ACTIONS(928),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(928),
    [anon_sym_DQUOTE] = ACTIONS(928),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(928),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(928),
    [sym__ascii_large] = ACTIONS(928),
    [anon_sym_POUND] = ACTIONS(928),
    [anon_sym_DOLLAR] = ACTIONS(928),
    [anon_sym_PERCENT] = ACTIONS(928),
    [anon_sym_AMP] = ACTIONS(928),
    [anon_sym_1] = ACTIONS(928),
    [anon_sym_PLUS] = ACTIONS(928),
    [anon_sym_DOT] = ACTIONS(928),
    [anon_sym_SLASH] = ACTIONS(928),
    [anon_sym_LT] = ACTIONS(928),
    [anon_sym_GT] = ACTIONS(928),
    [anon_sym_QMARK] = ACTIONS(928),
    [anon_sym_CARET] = ACTIONS(928),
    [anon_sym_TILDE] = ACTIONS(928),
    [anon_sym_BSLASH] = ACTIONS(928),
    [anon_sym_LBRACK] = ACTIONS(928),
    [anon_sym_RBRACK] = ACTIONS(928),
    [sym__space] = ACTIONS(928),
    [sym__newline] = ACTIONS(928),
    [sym__tab] = ACTIONS(928),
    [sym__vertical_tab] = ACTIONS(928),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(928),
  },
  [322] = {
    [anon_sym_SEMI] = ACTIONS(930),
    [anon_sym_LBRACE] = ACTIONS(930),
    [anon_sym_RBRACE] = ACTIONS(930),
    [anon_sym_LPAREN] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(930),
    [anon_sym_EQ] = ACTIONS(930),
    [anon_sym_AT] = ACTIONS(930),
    [anon_sym_BQUOTE] = ACTIONS(930),
    [anon_sym_DASH] = ACTIONS(930),
    [anon_sym__] = ACTIONS(930),
    [anon_sym_COLON] = ACTIONS(930),
    [anon_sym_PIPE] = ACTIONS(930),
    [anon_sym_BANG] = ACTIONS(930),
    [sym_comment] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [anon_sym_DQUOTE] = ACTIONS(930),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(930),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(930),
    [sym__ascii_large] = ACTIONS(930),
    [anon_sym_POUND] = ACTIONS(930),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [anon_sym_PERCENT] = ACTIONS(930),
    [anon_sym_AMP] = ACTIONS(930),
    [anon_sym_1] = ACTIONS(930),
    [anon_sym_PLUS] = ACTIONS(930),
    [anon_sym_DOT] = ACTIONS(930),
    [anon_sym_SLASH] = ACTIONS(930),
    [anon_sym_LT] = ACTIONS(930),
    [anon_sym_GT] = ACTIONS(930),
    [anon_sym_QMARK] = ACTIONS(930),
    [anon_sym_CARET] = ACTIONS(930),
    [anon_sym_TILDE] = ACTIONS(930),
    [anon_sym_BSLASH] = ACTIONS(930),
    [anon_sym_LBRACK] = ACTIONS(930),
    [anon_sym_RBRACK] = ACTIONS(930),
    [sym__space] = ACTIONS(930),
    [sym__newline] = ACTIONS(930),
    [sym__tab] = ACTIONS(930),
    [sym__vertical_tab] = ACTIONS(930),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(930),
  },
  [323] = {
    [sym__layout_semicolon] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(676),
    [anon_sym_DASH_GT] = ACTIONS(676),
    [sym_variable_identifier] = ACTIONS(676),
    [sym_comment] = ACTIONS(52),
  },
  [324] = {
    [sym__layout_semicolon] = ACTIONS(932),
    [anon_sym_SEMI] = ACTIONS(576),
    [anon_sym_DASH_GT] = ACTIONS(576),
    [sym_variable_identifier] = ACTIONS(576),
    [sym_comment] = ACTIONS(52),
  },
  [325] = {
    [sym__layout_semicolon] = ACTIONS(934),
    [anon_sym_SEMI] = ACTIONS(936),
    [sym_comment] = ACTIONS(52),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(934),
    [anon_sym_SEMI] = ACTIONS(936),
    [anon_sym_DASH_GT] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(52),
  },
  [327] = {
    [sym__layout_close_brace] = ACTIONS(940),
    [anon_sym_LPAREN] = ACTIONS(346),
    [anon_sym_import] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(346),
    [anon_sym_AT] = ACTIONS(346),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_foreign] = ACTIONS(346),
    [anon_sym_default] = ACTIONS(346),
    [anon_sym_do] = ACTIONS(346),
    [anon_sym_class] = ACTIONS(346),
    [anon_sym_instance] = ACTIONS(346),
    [anon_sym_infixl] = ACTIONS(346),
    [anon_sym_infixr] = ACTIONS(346),
    [anon_sym_infix] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(346),
    [anon_sym_data] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_newtype] = ACTIONS(346),
    [anon_sym_BANG] = ACTIONS(346),
    [anon_sym_type] = ACTIONS(346),
    [sym_variable_identifier] = ACTIONS(346),
    [sym_constructor_identifier] = ACTIONS(346),
    [sym_module_identifier] = ACTIONS(346),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_DOLLAR] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_1] = ACTIONS(346),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_QMARK] = ACTIONS(346),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_TILDE] = ACTIONS(346),
    [anon_sym_BSLASH] = ACTIONS(346),
    [sym__integer_literal] = ACTIONS(346),
    [sym__octal_literal] = ACTIONS(346),
    [sym__hexidecimal_literal] = ACTIONS(346),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(942),
    [sym_comment] = ACTIONS(52),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(944),
    [anon_sym_SEMI] = ACTIONS(946),
    [sym_comment] = ACTIONS(52),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(52),
  },
  [331] = {
    [sym_export] = STATE(368),
    [sym__identifier] = STATE(183),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [332] = {
    [anon_sym_where] = ACTIONS(950),
    [sym_comment] = ACTIONS(52),
  },
  [333] = {
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(52),
  },
  [334] = {
    [aux_sym_export_repeat1] = STATE(370),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(952),
    [sym_comment] = ACTIONS(52),
  },
  [335] = {
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [sym_comment] = ACTIONS(52),
  },
  [336] = {
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [337] = {
    [aux_sym_export_repeat1] = STATE(372),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(958),
    [sym_comment] = ACTIONS(52),
  },
  [338] = {
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_COMMA] = ACTIONS(962),
    [anon_sym_RPAREN] = ACTIONS(962),
    [sym_comment] = ACTIONS(52),
  },
  [339] = {
    [sym__identifier] = STATE(374),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_constructor_identifier] = ACTIONS(382),
    [sym_module_identifier] = ACTIONS(382),
    [sym_comment] = ACTIONS(52),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(964),
    [anon_sym_SEMI] = ACTIONS(966),
    [sym_comment] = ACTIONS(52),
  },
  [341] = {
    [sym__identifier] = STATE(376),
    [anon_sym_DOT_DOT] = ACTIONS(968),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(970),
    [sym_comment] = ACTIONS(52),
  },
  [343] = {
    [sym_variable_identifier] = ACTIONS(564),
    [sym_constructor_identifier] = ACTIONS(972),
    [sym_module_identifier] = ACTIONS(972),
    [sym_comment] = ACTIONS(52),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(974),
    [anon_sym_SEMI] = ACTIONS(976),
    [sym_comment] = ACTIONS(52),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(978),
    [anon_sym_RPAREN] = ACTIONS(978),
    [sym_comment] = ACTIONS(52),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(980),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym_comment] = ACTIONS(52),
  },
  [347] = {
    [sym_variable_identifier] = ACTIONS(982),
    [sym_constructor_identifier] = ACTIONS(984),
    [sym_comment] = ACTIONS(52),
  },
  [348] = {
    [sym__layout_close_brace] = ACTIONS(986),
    [anon_sym_LPAREN] = ACTIONS(988),
    [anon_sym_EQ] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
    [anon_sym_DASH] = ACTIONS(988),
    [anon_sym_infixl] = ACTIONS(988),
    [anon_sym_infixr] = ACTIONS(988),
    [anon_sym_infix] = ACTIONS(988),
    [anon_sym_COLON] = ACTIONS(988),
    [anon_sym_PIPE] = ACTIONS(988),
    [anon_sym_BANG] = ACTIONS(988),
    [sym_variable_identifier] = ACTIONS(988),
    [sym_constructor_identifier] = ACTIONS(988),
    [sym_module_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(988),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_AMP] = ACTIONS(988),
    [anon_sym_1] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(988),
    [anon_sym_DOT] = ACTIONS(988),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_LT] = ACTIONS(988),
    [anon_sym_GT] = ACTIONS(988),
    [anon_sym_QMARK] = ACTIONS(988),
    [anon_sym_CARET] = ACTIONS(988),
    [anon_sym_TILDE] = ACTIONS(988),
    [anon_sym_BSLASH] = ACTIONS(988),
  },
  [349] = {
    [sym__layout_semicolon] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(992),
    [sym_comment] = ACTIONS(52),
  },
  [350] = {
    [sym__layout_semicolon] = ACTIONS(994),
    [anon_sym_SEMI] = ACTIONS(996),
    [sym_comment] = ACTIONS(52),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(988),
    [anon_sym_LPAREN] = ACTIONS(988),
    [anon_sym_EQ] = ACTIONS(988),
    [anon_sym_AT] = ACTIONS(988),
    [anon_sym_DASH] = ACTIONS(988),
    [anon_sym_infixl] = ACTIONS(988),
    [anon_sym_infixr] = ACTIONS(988),
    [anon_sym_infix] = ACTIONS(988),
    [anon_sym_COLON] = ACTIONS(988),
    [anon_sym_PIPE] = ACTIONS(988),
    [anon_sym_BANG] = ACTIONS(988),
    [sym_variable_identifier] = ACTIONS(988),
    [sym_constructor_identifier] = ACTIONS(988),
    [sym_module_identifier] = ACTIONS(988),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(988),
    [anon_sym_PERCENT] = ACTIONS(988),
    [anon_sym_AMP] = ACTIONS(988),
    [anon_sym_1] = ACTIONS(988),
    [anon_sym_PLUS] = ACTIONS(988),
    [anon_sym_DOT] = ACTIONS(988),
    [anon_sym_SLASH] = ACTIONS(988),
    [anon_sym_LT] = ACTIONS(988),
    [anon_sym_GT] = ACTIONS(988),
    [anon_sym_QMARK] = ACTIONS(988),
    [anon_sym_CARET] = ACTIONS(988),
    [anon_sym_TILDE] = ACTIONS(988),
    [anon_sym_BSLASH] = ACTIONS(988),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(998),
    [anon_sym_SEMI] = ACTIONS(1000),
    [sym_comment] = ACTIONS(52),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(1002),
    [anon_sym_SEMI] = ACTIONS(1004),
    [sym_comment] = ACTIONS(52),
  },
  [354] = {
    [sym__layout_semicolon] = ACTIONS(1006),
    [anon_sym_SEMI] = ACTIONS(1008),
    [sym_comment] = ACTIONS(52),
  },
  [355] = {
    [sym__layout_semicolon] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1012),
    [sym_comment] = ACTIONS(52),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(1014),
    [anon_sym_SEMI] = ACTIONS(1016),
    [sym_comment] = ACTIONS(52),
  },
  [357] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [sym_comment] = ACTIONS(52),
  },
  [358] = {
    [sym_variable_identifier] = ACTIONS(1020),
    [sym_comment] = ACTIONS(52),
  },
  [359] = {
    [sym_strict] = STATE(383),
    [sym__identifier] = STATE(383),
    [anon_sym_BANG] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [360] = {
    [anon_sym_COMMA] = ACTIONS(1024),
    [anon_sym_COLON_COLON] = ACTIONS(1026),
    [sym_comment] = ACTIONS(52),
  },
  [361] = {
    [sym__layout_semicolon] = ACTIONS(1028),
    [anon_sym_SEMI] = ACTIONS(1030),
    [anon_sym_PIPE] = ACTIONS(1030),
    [anon_sym_deriving] = ACTIONS(1030),
    [sym_comment] = ACTIONS(52),
  },
  [362] = {
    [sym_field] = STATE(386),
    [sym_variable_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(52),
  },
  [363] = {
    [anon_sym_RBRACE] = ACTIONS(1032),
    [anon_sym_COMMA] = ACTIONS(1034),
    [sym_comment] = ACTIONS(52),
  },
  [364] = {
    [sym__layout_semicolon] = ACTIONS(1036),
    [anon_sym_SEMI] = ACTIONS(1038),
    [anon_sym_PIPE] = ACTIONS(1038),
    [anon_sym_deriving] = ACTIONS(1038),
    [sym_comment] = ACTIONS(52),
  },
  [365] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [sym_comment] = ACTIONS(52),
  },
  [366] = {
    [sym__layout_semicolon] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(792),
    [anon_sym_DASH_GT] = ACTIONS(792),
    [sym_variable_identifier] = ACTIONS(792),
    [sym_comment] = ACTIONS(52),
  },
  [367] = {
    [sym__layout_close_brace] = ACTIONS(1046),
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_import] = ACTIONS(592),
    [anon_sym_EQ] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(592),
    [anon_sym_DASH] = ACTIONS(592),
    [anon_sym_foreign] = ACTIONS(592),
    [anon_sym_default] = ACTIONS(592),
    [anon_sym_do] = ACTIONS(592),
    [anon_sym_class] = ACTIONS(592),
    [anon_sym_instance] = ACTIONS(592),
    [anon_sym_infixl] = ACTIONS(592),
    [anon_sym_infixr] = ACTIONS(592),
    [anon_sym_infix] = ACTIONS(592),
    [anon_sym_COLON] = ACTIONS(592),
    [anon_sym_data] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(592),
    [anon_sym_newtype] = ACTIONS(592),
    [anon_sym_BANG] = ACTIONS(592),
    [anon_sym_type] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(592),
    [sym_constructor_identifier] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(592),
    [sym_comment] = ACTIONS(40),
    [sym_float] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_POUND] = ACTIONS(592),
    [anon_sym_DOLLAR] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(592),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_1] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_SLASH] = ACTIONS(592),
    [anon_sym_LT] = ACTIONS(592),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_QMARK] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(592),
    [anon_sym_TILDE] = ACTIONS(592),
    [anon_sym_BSLASH] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(592),
    [sym__octal_literal] = ACTIONS(592),
    [sym__hexidecimal_literal] = ACTIONS(592),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(1048),
    [anon_sym_RPAREN] = ACTIONS(1048),
    [sym_comment] = ACTIONS(52),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(1050),
    [anon_sym_RPAREN] = ACTIONS(1050),
    [sym_comment] = ACTIONS(52),
  },
  [370] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1052),
    [sym_comment] = ACTIONS(52),
  },
  [371] = {
    [aux_sym_import_specification_repeat1] = STATE(391),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(1054),
    [sym_comment] = ACTIONS(52),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1056),
    [sym_comment] = ACTIONS(52),
  },
  [373] = {
    [sym__identifier] = STATE(394),
    [anon_sym_DOT_DOT] = ACTIONS(1058),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [374] = {
    [anon_sym_LPAREN] = ACTIONS(1060),
    [anon_sym_COMMA] = ACTIONS(1062),
    [anon_sym_RPAREN] = ACTIONS(1062),
    [sym_comment] = ACTIONS(52),
  },
  [375] = {
    [anon_sym_RPAREN] = ACTIONS(1056),
    [sym_comment] = ACTIONS(52),
  },
  [376] = {
    [aux_sym_export_repeat1] = STATE(396),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1056),
    [sym_comment] = ACTIONS(52),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(1064),
    [anon_sym_SEMI] = ACTIONS(1066),
    [sym_comment] = ACTIONS(52),
  },
  [378] = {
    [sym__layout_close_brace] = ACTIONS(1068),
    [anon_sym_LPAREN] = ACTIONS(1070),
    [anon_sym_EQ] = ACTIONS(1070),
    [anon_sym_AT] = ACTIONS(1070),
    [anon_sym_DASH] = ACTIONS(1070),
    [anon_sym_infixl] = ACTIONS(1070),
    [anon_sym_infixr] = ACTIONS(1070),
    [anon_sym_infix] = ACTIONS(1070),
    [anon_sym_COLON] = ACTIONS(1070),
    [anon_sym_PIPE] = ACTIONS(1070),
    [anon_sym_BANG] = ACTIONS(1070),
    [sym_variable_identifier] = ACTIONS(1070),
    [sym_constructor_identifier] = ACTIONS(1070),
    [sym_module_identifier] = ACTIONS(1070),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1070),
    [anon_sym_DOLLAR] = ACTIONS(1070),
    [anon_sym_PERCENT] = ACTIONS(1070),
    [anon_sym_AMP] = ACTIONS(1070),
    [anon_sym_1] = ACTIONS(1070),
    [anon_sym_PLUS] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1070),
    [anon_sym_SLASH] = ACTIONS(1070),
    [anon_sym_LT] = ACTIONS(1070),
    [anon_sym_GT] = ACTIONS(1070),
    [anon_sym_QMARK] = ACTIONS(1070),
    [anon_sym_CARET] = ACTIONS(1070),
    [anon_sym_TILDE] = ACTIONS(1070),
    [anon_sym_BSLASH] = ACTIONS(1070),
  },
  [379] = {
    [anon_sym_RBRACE] = ACTIONS(1070),
    [anon_sym_LPAREN] = ACTIONS(1070),
    [anon_sym_EQ] = ACTIONS(1070),
    [anon_sym_AT] = ACTIONS(1070),
    [anon_sym_DASH] = ACTIONS(1070),
    [anon_sym_infixl] = ACTIONS(1070),
    [anon_sym_infixr] = ACTIONS(1070),
    [anon_sym_infix] = ACTIONS(1070),
    [anon_sym_COLON] = ACTIONS(1070),
    [anon_sym_PIPE] = ACTIONS(1070),
    [anon_sym_BANG] = ACTIONS(1070),
    [sym_variable_identifier] = ACTIONS(1070),
    [sym_constructor_identifier] = ACTIONS(1070),
    [sym_module_identifier] = ACTIONS(1070),
    [sym_comment] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(1070),
    [anon_sym_DOLLAR] = ACTIONS(1070),
    [anon_sym_PERCENT] = ACTIONS(1070),
    [anon_sym_AMP] = ACTIONS(1070),
    [anon_sym_1] = ACTIONS(1070),
    [anon_sym_PLUS] = ACTIONS(1070),
    [anon_sym_DOT] = ACTIONS(1070),
    [anon_sym_SLASH] = ACTIONS(1070),
    [anon_sym_LT] = ACTIONS(1070),
    [anon_sym_GT] = ACTIONS(1070),
    [anon_sym_QMARK] = ACTIONS(1070),
    [anon_sym_CARET] = ACTIONS(1070),
    [anon_sym_TILDE] = ACTIONS(1070),
    [anon_sym_BSLASH] = ACTIONS(1070),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(1072),
    [anon_sym_SEMI] = ACTIONS(1074),
    [sym_comment] = ACTIONS(52),
  },
  [381] = {
    [anon_sym_COMMA] = ACTIONS(1076),
    [anon_sym_COLON_COLON] = ACTIONS(1076),
    [sym_comment] = ACTIONS(52),
  },
  [382] = {
    [sym__identifier] = STATE(397),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [383] = {
    [anon_sym_RBRACE] = ACTIONS(1078),
    [anon_sym_COMMA] = ACTIONS(1078),
    [sym_comment] = ACTIONS(52),
  },
  [384] = {
    [sym_variable_identifier] = ACTIONS(1080),
    [sym_comment] = ACTIONS(52),
  },
  [385] = {
    [sym_strict] = STATE(399),
    [sym__identifier] = STATE(399),
    [anon_sym_BANG] = ACTIONS(1022),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [386] = {
    [anon_sym_RBRACE] = ACTIONS(1082),
    [anon_sym_COMMA] = ACTIONS(1082),
    [sym_comment] = ACTIONS(52),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1084),
    [anon_sym_SEMI] = ACTIONS(1086),
    [anon_sym_PIPE] = ACTIONS(1086),
    [anon_sym_deriving] = ACTIONS(1086),
    [sym_comment] = ACTIONS(52),
  },
  [388] = {
    [sym_field] = STATE(400),
    [sym_variable_identifier] = ACTIONS(720),
    [sym_comment] = ACTIONS(52),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(1088),
    [anon_sym_RPAREN] = ACTIONS(1088),
    [sym_comment] = ACTIONS(52),
  },
  [390] = {
    [sym__layout_semicolon] = ACTIONS(1090),
    [anon_sym_SEMI] = ACTIONS(1092),
    [sym_comment] = ACTIONS(52),
  },
  [391] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [sym_comment] = ACTIONS(52),
  },
  [392] = {
    [aux_sym_import_specification_repeat1] = STATE(402),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [sym_comment] = ACTIONS(52),
  },
  [393] = {
    [anon_sym_RPAREN] = ACTIONS(1096),
    [sym_comment] = ACTIONS(52),
  },
  [394] = {
    [aux_sym_export_repeat1] = STATE(404),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [sym_comment] = ACTIONS(52),
  },
  [395] = {
    [sym__identifier] = STATE(406),
    [anon_sym_DOT_DOT] = ACTIONS(1098),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(52),
  },
  [396] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [sym_comment] = ACTIONS(52),
  },
  [397] = {
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(902),
    [sym_comment] = ACTIONS(52),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(1102),
    [anon_sym_COLON_COLON] = ACTIONS(1102),
    [sym_comment] = ACTIONS(52),
  },
  [399] = {
    [anon_sym_RBRACE] = ACTIONS(1104),
    [anon_sym_COMMA] = ACTIONS(1104),
    [sym_comment] = ACTIONS(52),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_COMMA] = ACTIONS(1106),
    [sym_comment] = ACTIONS(52),
  },
  [401] = {
    [sym__layout_semicolon] = ACTIONS(1108),
    [anon_sym_SEMI] = ACTIONS(1110),
    [sym_comment] = ACTIONS(52),
  },
  [402] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [403] = {
    [anon_sym_COMMA] = ACTIONS(1114),
    [anon_sym_RPAREN] = ACTIONS(1114),
    [sym_comment] = ACTIONS(52),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [405] = {
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [406] = {
    [aux_sym_export_repeat1] = STATE(410),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(1116),
    [sym_comment] = ACTIONS(52),
  },
  [407] = {
    [aux_sym_import_specification_repeat1] = STATE(411),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(1112),
    [sym_comment] = ACTIONS(52),
  },
  [408] = {
    [sym__layout_semicolon] = ACTIONS(1118),
    [anon_sym_SEMI] = ACTIONS(1120),
    [sym_comment] = ACTIONS(52),
  },
  [409] = {
    [anon_sym_COMMA] = ACTIONS(1122),
    [anon_sym_RPAREN] = ACTIONS(1122),
    [sym_comment] = ACTIONS(52),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(1124),
    [sym_comment] = ACTIONS(52),
  },
  [411] = {
    [anon_sym_COMMA] = ACTIONS(824),
    [anon_sym_RPAREN] = ACTIONS(1126),
    [sym_comment] = ACTIONS(52),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(1128),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [sym_comment] = ACTIONS(52),
  },
  [413] = {
    [sym__layout_semicolon] = ACTIONS(1130),
    [anon_sym_SEMI] = ACTIONS(1132),
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
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__var, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__var, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1, .fragile = true),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1, .fragile = true),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_binding_repeat1, 1),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_binding_repeat1, 1),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 3),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [458] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [470] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(226),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [498] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(235),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(243),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(245),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(247),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [552] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [558] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_binding_repeat1, 1),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 3),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 3),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_binding_repeat1, 2),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_binding_repeat1, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type, 1),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [628] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [648] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [666] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(293),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [678] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 3),
  [692] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 3),
  [694] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 3),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [728] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [738] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [742] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [744] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [746] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [748] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [756] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [758] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [760] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [762] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [764] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [766] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [768] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [770] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [772] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [776] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(322),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_binding_repeat1, 2),
  [780] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_binding, 4),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_binding, 4),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [788] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [792] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [794] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [802] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [804] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [814] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [822] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [824] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [826] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [828] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [830] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [832] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(343),
  [834] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [836] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [838] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [842] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [844] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [846] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [848] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [850] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [852] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [854] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [862] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [864] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [866] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 4),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 4),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [910] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [930] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 1, .alias_sequence_id = 3),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_type, 3),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_type, 3),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [972] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [984] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [988] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(387),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_type_repeat1, 2, .alias_sequence_id = 4),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1070] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
